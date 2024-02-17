/*
* rgb.c
*
* Created: 21.11.2020 02:41:49
*  Author: kiu
*/

#include <atmel_start.h>
#include <stdio.h>
#include <math.h>
#include "rgb.h"

// 0 000 = Sliding fade Random
// 1 001 = White
// 2 010 = Full Fade
// 3 011 = x
// 4 100 = x
// 5 101 = x
// 6 110 = x
// 7 111 = x

#define USE_GAMMA 0
#define LED_BRIGHTNESS 0x1F // 0x00 - 0x1F

#define LED_COUNT 104
#define LED_SIZE (uint16_t)(LED_COUNT * 3)
uint8_t leds[LED_SIZE];
uint8_t leds_fade[LED_SIZE];

const char *rgb_state_names[] = { "ENABLE", "INIT_UP", "UP", "RUNNING", "INIT_DOWN", "DOWN", "DISABLE", "OFF"};
rgb_state_t rgb_state = OFF;

uint16_t fsi;
uint8_t rgb[3];

// ------------------------------------------------------------------------------

#define PGM_MAX 3
bool (*fp_pgms[6])() = {pgm_sliding_fade_init, pgm_sliding_fade_tick, pgm_white_init, pgm_white_tick, pgm_sliding_full_fade_init, pgm_sliding_full_fade_tick};

uint8_t rgb_pgm = 0x00;

uint16_t pgmi;

float rgb_sliding_fade_width;
float rgb_sliding_fade_speed;
float rgb_sliding_fade_angle;
uint8_t rgb_sliding_fade_loops;
const uint8_t rgb_sliding_fade_loops_max = 10;

float rgb_sliding_full_fade_speed;
float rgb_sliding_full_fade_angle;
uint8_t rgb_sliding_full_fade_loops;
const uint8_t rgb_sliding_full_fade_loops_max = 10;

// ------------------------------------------------------------------------------

const uint8_t gamma8[] = {
	0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
	0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,
	1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,
	2,  3,  3,  3,  3,  3,  3,  3,  4,  4,  4,  4,  4,  5,  5,  5,
	5,  6,  6,  6,  6,  7,  7,  7,  7,  8,  8,  8,  9,  9,  9, 10,
	10, 10, 11, 11, 11, 12, 12, 13, 13, 13, 14, 14, 15, 15, 16, 16,
	17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 24, 24, 25,
	25, 26, 27, 27, 28, 29, 29, 30, 31, 32, 32, 33, 34, 35, 35, 36,
	37, 38, 39, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 50,
	51, 52, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 66, 67, 68,
	69, 70, 72, 73, 74, 75, 77, 78, 79, 81, 82, 83, 85, 86, 87, 89,
	90, 92, 93, 95, 96, 98, 99, 101, 102, 104, 105, 107, 109, 110, 112, 114,
	115, 117, 119, 120, 122, 124, 126, 127, 129, 131, 133, 135, 137, 138, 140, 142,
	144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164, 167, 169, 171, 173, 175,
	177, 180, 182, 184, 186, 189, 191, 193, 196, 198, 200, 203, 205, 208, 210, 213,
	215, 218, 220, 223, 225, 228, 231, 233, 236, 239, 241, 244, 247, 249, 252, 255
};

// ------------------------------------------------------------------------------

void spi_send(uint8_t b) {
	SPDR0 = b;
	while (!(SPSR0 & (1 << SPIF)))
	;
}

void spi_frame_send() {
	
	// Start Frame: 32 zero bits
	spi_send(0x00);
	spi_send(0x00);
	spi_send(0x00);
	spi_send(0x00);

	// LED Frames: Brightness, BGR
	for (fsi = 0; fsi < LED_SIZE; fsi += 3) {
		spi_send(0xE0 | LED_BRIGHTNESS);
		if (USE_GAMMA) {
			spi_send(gamma8[leds[fsi + 2]]);
			spi_send(gamma8[leds[fsi + 1]]);
			spi_send(gamma8[leds[fsi + 0]]);
			} else {
			spi_send(leds[fsi + 2]);
			spi_send(leds[fsi + 1]);
			spi_send(leds[fsi + 0]);
		}
	}

	// End Frame: #LEDs / 2 bits of 1s
	for (fsi = 0; fsi < (LED_COUNT / 8) + 1; fsi++) {
		spi_send(0xFF);
	}
}

// ------------------------------------------------------------------------------

bool pgm_white_init() {
	rgb_set_all(false, 0xFF, 0xFF, 0xE0);
	return true;
}

bool pgm_white_tick() {
	return false;
}


bool pgm_sliding_fade_init() {
	rgb_sliding_fade_width = ((float)rand()/(float)(RAND_MAX)) * 5.0 + 0.5;
	rgb_sliding_fade_speed = ((float)rand()/(float)(RAND_MAX)) * 2.0 + 0.5;
	rgb_sliding_fade_angle = 0.0;
	rgb_sliding_fade_loops = 0;
	
	for (pgmi = 0; pgmi < LED_SIZE; pgmi += 3) {
		hsi_to_rgb_set(pgmi, false, rgb_sliding_fade_angle + ((pgmi / 3) * rgb_sliding_fade_width), 1.0, 1.0);
	}
	return true;
}

bool pgm_sliding_fade_tick() {
	for (pgmi = 0; pgmi < LED_SIZE; pgmi += 3) {
		hsi_to_rgb_set(pgmi, true, rgb_sliding_fade_angle + ((pgmi / 3) * rgb_sliding_fade_width), 1.0, 1.0);
	}
	rgb_sliding_fade_angle = rgb_sliding_fade_angle + rgb_sliding_fade_speed;
	if (rgb_sliding_fade_angle > 360.0) {
		rgb_sliding_fade_angle = rgb_sliding_fade_angle - 360.0;
		rgb_sliding_fade_loops++;
		if (rgb_sliding_fade_loops > rgb_sliding_fade_loops_max) {
			rgb_state_change(INIT_UP);
		}
	}
	return true;
}


bool pgm_sliding_full_fade_init() {
	rgb_sliding_full_fade_speed = (((float)rand()/(float)(RAND_MAX)) / 10.0 + 0.01);
	rgb_sliding_full_fade_angle = 0.0;
	rgb_sliding_full_fade_loops = 0;

	hsi_to_rgb(rgb_sliding_full_fade_angle, 1.0, 1.0, rgb);
	rgb_set_all(false, rgb[0], rgb[1], rgb[2]);
	return true;
}

bool pgm_sliding_full_fade_tick() {
	hsi_to_rgb(rgb_sliding_full_fade_angle, 1.0, 1.0, rgb);
	rgb_set_all(true, rgb[0], rgb[1], rgb[2]);

	rgb_sliding_full_fade_angle = rgb_sliding_full_fade_angle + rgb_sliding_full_fade_speed;
	if (rgb_sliding_full_fade_angle > 360.0) {
		rgb_sliding_full_fade_angle = rgb_sliding_full_fade_angle - 360.0;
		rgb_sliding_full_fade_loops++;
		if (rgb_sliding_full_fade_loops > rgb_sliding_full_fade_loops_max) {
			rgb_state_change(INIT_UP);
		}
	}
	return true;
}

// ------------------------------------------------------------------------------

void rgb_set_all(bool live, uint8_t r, uint8_t g, uint8_t b) {
	for (uint16_t i = 0; i < LED_SIZE; i += 3) {
		if (live) {
			leds[i + 0] = r;
			leds[i + 1] = g;
			leds[i + 2] = b;
			} else {
			leds_fade[i + 0] = r;
			leds_fade[i + 1] = g;
			leds_fade[i + 2] = b;
		}
	}
}

bool rgb_fade_tick() {
	bool modified = false;
	for (uint16_t i = 0; i < LED_SIZE; i++) {
		if (leds[i] > leds_fade[i]) {
			leds[i]--;
			modified = true;
		}
		if (leds[i] < leds_fade[i]) {
			leds[i]++;
			modified = true;
		}
	}
	return modified;
}

// ------------------------------------------------------------------------------

void rgb_state_change(rgb_state_t state) {
	printf("RGB state change from %s to %s\n", rgb_state_names[rgb_state], rgb_state_names[state]);
	rgb_state = state;
}

void rgb_tick() {
	if (rgb_state == ENABLE) {
		rgb_state_change(INIT_UP);
		return;
	}
	
	if (rgb_state == INIT_UP) {
		(*fp_pgms[(rgb_pgm * 2) + 0])();
		rgb_state_change(UP);
		SPI_0_enable();
		return;
	}

	if (rgb_state == UP) {
		if (!rgb_fade_tick()) {
			rgb_state_change(RUNNING);
		}
		spi_frame_send();
		return;
	}

	if (rgb_state == RUNNING) {
		if ((*fp_pgms[(rgb_pgm * 2) + 1])()) {
			spi_frame_send();
		}
		return;
	}
	
	if (rgb_state == INIT_DOWN) {
		rgb_state_change(DOWN);
		rgb_set_all(false, 0x00, 0x00, 0x00);
		return;
	}

	if (rgb_state == DOWN) {
		if (!rgb_fade_tick()) {
			rgb_state_change(DISABLE);
		}
		spi_frame_send();
		return;
	}

	if (rgb_state == DISABLE) {
		rgb_state_change(OFF);
		SPI_0_disable();
		return;
	}
}

// ------------------------------------------------------------------------------

void rgb_enable(bool en) {
	if (en) {
		rgb_state_change(ENABLE);
		} else {
		rgb_state_change(INIT_DOWN);
	}
}

void rgb_pgm_change(uint8_t next) {
	if (next > PGM_MAX - 1) {
		printf("Ignoring pgm change to 0x%02hhX\n", next);
		return;
	}
	rgb_pgm = next;

	if (rgb_state == OFF) {
		rgb_state_change(ENABLE);
		} else {
		rgb_state_change(INIT_UP);
	}
}

// ------------------------------------------------------------------------------

void hsi_to_rgb_set(uint16_t i, bool live, float H, float S, float I) {
	hsi_to_rgb(H, S, I, rgb);
	
	if (live) {
		leds[i + 0] = rgb[0];
		leds[i + 1] = rgb[1];
		leds[i + 2] = rgb[2];
		} else {
		leds_fade[i + 0] = rgb[0];
		leds_fade[i + 1] = rgb[1];
		leds_fade[i + 2] = rgb[2];
	}
}

void hsi_to_rgb(float H, float S, float I, uint8_t rgb[]) {
	rgb[0] = 0;
	rgb[1] = 0;
	rgb[2] = 0;
	
	if (H > 360) {
		H = H - 360;
	}

	H = fmod(H, 360); // cycle H around to 0-360 degrees
	H = 3.14159 * H / (float)180; // Convert to radians.
	S = S > 0 ? (S < 1 ? S : 1) : 0; // clamp S and I to interval [0,1]
	I = I > 0 ? (I < 1 ? I : 1) : 0;
	if (H < 2.09439) {
		rgb[0] = 255 * I / 3 * (1 + S * cos(H) / cos(1.047196667 - H));
		rgb[1] = 255 * I / 3 * (1 + S * (1 - cos(H) / cos(1.047196667 - H)));
		rgb[2] = 255 * I / 3 * (1 - S);
		} else if (H < 4.188787) {
		H = H - 2.09439;
		rgb[1] = 255 * I / 3 * (1 + S * cos(H) / cos(1.047196667 - H));
		rgb[2] = 255 * I / 3 * (1 + S * (1 - cos(H) / cos(1.047196667 - H)));
		rgb[0] = 255 * I / 3 * (1 - S);
		} else {
		H = H - 4.188787;
		rgb[2] = 255 * I / 3 * (1 + S * cos(H) / cos(1.047196667 - H));
		rgb[0] = 255 * I / 3 * (1 + S * (1 - cos(H) / cos(1.047196667 - H)));
		rgb[1] = 255 * I / 3 * (1 - S);
	}
}