/*
* rgb.h
*
* Created: 21.11.2020 02:41:56
*  Author: kiu
*/


#ifndef RGB_H_
#define RGB_H_

typedef enum {ENABLE, INIT_UP, UP, RUNNING, INIT_DOWN, DOWN, DISABLE, OFF} rgb_state_t;

void spi_frame_send();

bool pgm_white_init();
bool pgm_white_tick();

bool pgm_sliding_fade_init();
bool pgm_sliding_fade_tick();

bool pgm_sliding_full_fade_init();
bool pgm_sliding_full_fade_tick();

void rgb_set_all(bool live, uint8_t r, uint8_t g, uint8_t b);
bool rgb_fade_tick();

void rgb_state_change(rgb_state_t state);
void rgb_tick();

void rgb_pgm_change(uint8_t next);
void rgb_enable(bool en);

void hsi_to_rgb(float H, float S, float I, uint8_t rgb[]);
void hsi_to_rgb_set(uint16_t i, bool live, float H, float S, float I);

#endif /* RGB_H_ */

