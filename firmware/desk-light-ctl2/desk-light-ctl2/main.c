#include <atmel_start.h>
#include <i2c_simple_master.h>
#include <util/delay.h>

// [] | O | O | O | O | O | O | []	// panel

//  0 | 1 | 2 | 3 | 4 | 5 | 6 | 7	// button
//  1 | 2 | 3 | 4 | 5 | 6 | 7 | 8	// button io
//  - | 0 | 1 | 4 | - | 2 | 3 | -	// relay

typedef enum {INIT, IDLE, POWER_UP, POWER_DOWN_WAIT, POWER_DOWN} system_mode_t;
const char *system_mode_names[] = { "INIT", "IDLE", "POWER_UP", "POWER_DOWN_WAIT", "POWER_DOWN"};
const uint8_t order_power_up[] = {0, 1, 2, 3};
const uint8_t order_power_down[] = {3, 2, 4, 1, 0};

system_mode_t system_mode = INIT;
uint8_t system_mode_count;
volatile bool system_blink;

bool (*fp_btn[8])() = {SW_01_BTN_get_level, SW_02_BTN_get_level, SW_03_BTN_get_level, SW_04_BTN_get_level, SW_05_BTN_get_level, SW_06_BTN_get_level, SW_07_BTN_get_level, SW_08_BTN_get_level};
volatile uint8_t btn_timeout[8];
volatile bool btn_state[8];

bool relay_state[5];

bool i2c_send = true;

const uint8_t PGM_STATE_MAX = 0x02;
uint8_t pgm_state = 0x00;
uint8_t pgm_flash = 0;

const uint8_t I2C_SLAVE = 0x42;

// ------------------------------------------------------------------------------------

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte) (byte & 0x80 ? '1' : '0'), (byte & 0x40 ? '1' : '0'), (byte & 0x20 ? '1' : '0'), (byte & 0x10 ? '1' : '0'), (byte & 0x08 ? '1' : '0'), (byte & 0x04 ? '1' : '0'), (byte & 0x02 ? '1' : '0'), (byte & 0x01 ? '1' : '0')

bool power_up_ready() {
	return !(relay_state[0] & relay_state [1] & relay_state [2] & relay_state [3]);
}

bool power_down_ready() {
	return (relay_state[0] | relay_state [1] | relay_state [2] | relay_state [3] | relay_state[4]);
}

// ------------------------------------------------------------------------------------

volatile uint8_t pwm = 0;
volatile uint16_t led = 0x00;

void setLED(uint8_t n, uint8_t val) {
	if (val) {
		led = led | (1 << n);
		} else {
		led = led & ~(1<< n);
	}
}

void test() {
	pwm++;
	if (pwm == 100) {
		pwm = 0;
	}
	if (pwm == 0) {
		if (led & 0x01 << 0) {
			SW_01_L01_set_level(true);
		}
		if (led & 0x01 << 1) {
			SW_02_L01_set_level(true);
		}
		if (led & 0x01 << 2) {
			SW_02_L02_set_level(true);
		}
		if (led & 0x01 << 3) {
			SW_03_L01_set_level(true);
		}
		if (led & 0x01 << 4) {
			SW_03_L02_set_level(true);
		}
		if (led & 0x01 << 5) {
			SW_04_L01_set_level(true);
		}
		if (led & 0x01 << 6) {
			SW_04_L02_set_level(true);
		}
		if (led & 0x01 << 7) {
			SW_05_L01_set_level(true);
		}
		if (led & 0x01 << 8) {
			SW_05_L02_set_level(true);
		}
		if (led & 0x01 << 9) {
			SW_06_L01_set_level(true);
		}
		if (led & 0x01 << 10) {
			SW_06_L02_set_level(true);
		}
		if (led & 0x01 << 11) {
			SW_07_L01_set_level(true);
		}
		if (led & 0x01 << 12) {
			SW_07_L02_set_level(true);
		}
		if (led & 0x01 << 13) {
			SW_08_L01_set_level(true);
		}
	}
	if (pwm == 14) {
		SW_01_L01_set_level(false);
		
		SW_02_L01_set_level(false);
		SW_02_L02_set_level(false);

		SW_03_L01_set_level(false);
		SW_03_L02_set_level(false);

		SW_04_L01_set_level(false);
		SW_04_L02_set_level(false);

		SW_05_L01_set_level(false);
		SW_05_L02_set_level(false);

		SW_06_L01_set_level(false);
		SW_06_L02_set_level(false);

		SW_07_L01_set_level(false);
		SW_07_L02_set_level(false);
		
		SW_08_L01_set_level(false);
	}
}


void relay_set(uint8_t rly, bool on) {
	printf("Relay %d set to %d \n", rly, on);
	
	if (relay_state[rly] != on) {
		i2c_send = true;
	}
	relay_state[rly] = on;
	
	if (system_mode == IDLE) {
		//SW_01_L01_set_level(power_up_ready());
		//SW_08_L01_set_level(power_down_ready());
		setLED(0, power_up_ready());
		setLED(13, power_down_ready());
	}
	
	bool L01 = on ? false : true;
	bool L02 = on ? true : false;
	
	switch (rly) {
		case 0:
		//		SW_02_L01_set_level(L01);
		//		SW_02_L02_set_level(L02);
		setLED(1, L01);
		setLED(2, L02);
		break;

		case 1:
		//		SW_03_L01_set_level(L01);
		//		SW_03_L02_set_level(L02);
		setLED(3, L01);
		setLED(4, L02);
		break;

		case 2:
		//		SW_06_L01_set_level(L01);
		//		SW_06_L02_set_level(L02);
		setLED(9, L01);
		setLED(10, L02);
		break;

		case 3:
		//		SW_07_L01_set_level(L01);
		//		SW_07_L02_set_level(L02);
		setLED(11, L01);
		setLED(12, L02);
		break;

		case 4:
		//		SW_04_L01_set_level(L01);
		//		SW_04_L02_set_level(L02);
		setLED(5, L01);
		setLED(6, L02);

		//		SW_05_L01_set_level(L01);
		//		SW_05_L02_set_level(L02);
		setLED(7, L01);
		setLED(8, L02);
		break;
	}
}

void relay_toggle(uint8_t rly) {
	relay_set(rly, !relay_state[rly]);
}

// ------------------------------------------------------------------------------------

void system_mode_change(system_mode_t mode) {
	printf("System mode change from %s to %s\n", system_mode_names[system_mode], system_mode_names[mode]);
	
	system_mode_count = 0;
	
	if (mode == IDLE) {
		//		SW_01_L01_set_level(power_up_ready());
		//		SW_08_L01_set_level(power_down_ready());
		setLED(0, power_up_ready());
		setLED(13, power_down_ready());

		system_mode = mode;
	}
	if (mode == POWER_UP) {
		//	SW_01_L01_set_level(system_blink);
		//		SW_08_L01_set_level(true);
		setLED(0, system_blink);
		setLED(13, true);
		system_mode = mode;
	}
	if (mode == POWER_DOWN_WAIT) {
		//		SW_01_L01_set_level(true);
		//		SW_08_L01_set_level(system_blink);
		setLED(0, true);
		setLED(13, system_blink);
		system_mode = mode;
	}
	if (mode == POWER_DOWN) {
		//SW_01_L01_set_level(true);
		//SW_08_L01_set_level(system_blink);
		setLED(0, true);
		setLED(13, system_blink);
		system_mode = mode;
	}
}

void system_mode_tick() {
	system_mode_count++;

	if (system_mode == POWER_UP) {
		//SW_01_L01_set_level(system_blink);
		setLED(0, system_blink);
		if (system_mode_count % 2 == 0) {
			for (uint8_t i = 0; i < sizeof(order_power_up) / sizeof(order_power_up[0]); i++) {
				if (!relay_state[order_power_up[i]]) {
					relay_set(order_power_up[i], true);
					return;
				}
			}
			system_mode_change(IDLE);
		}
		return;
	}
	
	if (system_mode == POWER_DOWN_WAIT) {
		//SW_08_L01_set_level(system_blink);
		setLED(13, system_blink);
		if (system_mode_count >= 120) {
			system_mode_change(POWER_DOWN);
		}
		return;
	}
	
	if (system_mode == POWER_DOWN) {
		//SW_08_L01_set_level(system_blink);
		setLED(13, system_blink);
		if (system_mode_count % 2 == 0) {
			for (uint8_t i = 0; i < sizeof(order_power_down) / sizeof(order_power_down[0]); i++) {
				if (relay_state[order_power_down[i]]) {
					relay_set(order_power_down[i], false);
					return;
				}
			}
			system_mode_change(IDLE);
		}
		return;
	}
}

// ------------------------------------------------------------------------------------

void button_action(uint8_t btn) {
	printf("Button action %d\n", btn);

	if (btn == 0) {
		if (system_mode == IDLE && power_up_ready()) {
			system_mode_change(POWER_UP);
			return;
		}
		if (system_mode == POWER_DOWN_WAIT) {
			system_mode_change(IDLE);
			return;
		}
		if (system_mode == POWER_DOWN) {
			system_mode_change(IDLE);
			return;
		}
		return;
	}

	if (btn == 1) {
		relay_toggle(0);
		return;
	}

	if (btn == 2) {
		relay_toggle(1);
		return;
	}

	if (btn == 3) {
		pgm_state = 0x00;
		relay_toggle(4);
		return;
	}

	if (btn == 4) {
		if (!relay_state[4]) {
			pgm_state = 0x00;
			relay_set(4, true);
			return;
		}

		//		SW_05_L01_set_level(true);
		setLED(7, true);
		
		pgm_state++;
		if (pgm_state > PGM_STATE_MAX) {
			pgm_state = 0;
		}
		i2c_send = true;
		pgm_flash = 10;
		return;
	}

	if (btn == 5) {
		relay_toggle(2);
		return;
	}

	if (btn == 6) {
		relay_toggle(3);
		return;
	}
	
	if (btn == 7) {
		if (system_mode == IDLE && power_down_ready()) {
			system_mode_change(POWER_DOWN_WAIT);
			return;
		}
		if (system_mode == POWER_UP) {
			system_mode_change(IDLE);
			return;
		}
		if (system_mode == POWER_DOWN_WAIT) {
			system_mode_change(POWER_DOWN);
			return;
		}
		return;
	}
}

// ------------------------------------------------------------------------------------

ISR (TIMER0_OVF_vect) {
	for (uint8_t i = 0; i < 8; i++) {
		if (btn_timeout[i] > 0) {
			btn_timeout[i]--;
			} else {
			if (!(*fp_btn[i])()) {
				btn_timeout[i] = i == 4 ? 10 : 30;
				btn_state[i] = true;
			}
		}
	}
}

ISR(TIMER1_COMPA_vect) {
	system_blink = !system_blink;
	system_mode_tick();
}

ISR(TIMER3_COMPA_vect) {
	test();
}
// ------------------------------------------------------------------------------------

int main(void) {
	
	atmel_start_init();
	
	_delay_ms(500);
	
	printf("\nlight-desk-ctl v0.1 by kiu\n");
	
	SW_01_L01_set_level(true);
	_delay_ms(300);
	SW_02_L01_set_level(true);
	_delay_ms(300);
	SW_03_L01_set_level(true);
	_delay_ms(300);
	SW_04_L01_set_level(true);
	_delay_ms(300);
	SW_05_L01_set_level(true);
	_delay_ms(300);
	SW_06_L01_set_level(true);
	_delay_ms(300);
	SW_07_L01_set_level(true);
	_delay_ms(300);
	
	system_mode_change(IDLE);

	setLED(1, true);
	setLED(3, true);
	setLED(5, true);
	setLED(7, true);
	setLED(9, true);
	setLED(11, true);

	sei();
	
	uint8_t i2c_payload = 0x00;
	
	while(1) {

		for (uint8_t i = 0; i < 8; i++) {
			if (btn_state[i]) {
				btn_state[i] = false;
				button_action(i);
			}
		}

		if (pgm_flash > 0) {
			if (pgm_flash == 1) {
				//SW_05_L01_set_level(!relay_state[4]);
				setLED(7, !relay_state[4]);
			}
			pgm_flash--;
		}
		
		if (i2c_send) {
			i2c_send = false;
			i2c_payload = 0x00;
			i2c_payload |= (relay_state[0] << 0);
			i2c_payload |= (relay_state[1] << 1);
			i2c_payload |= (relay_state[2] << 2);
			i2c_payload |= (relay_state[3] << 3);
			i2c_payload |= (relay_state[4] << 4);
			i2c_payload |= (pgm_state << 5);
			printf("I2C sending payload 0x%02hhX ("BYTE_TO_BINARY_PATTERN") to slave 0x%02hhX\n", i2c_payload, BYTE_TO_BINARY(i2c_payload), I2C_SLAVE);

			i2c_error_t ee;
			while ((ee = I2C_0_write1ByteRegister(0x42, 0x01, i2c_payload)) != I2C_NOERR) {
				if (ee == I2C_BUSY) printf("TWI: BUSY\n");
				if (ee == I2C_FAIL) printf("TWI: FAIL\n");
				_delay_ms(500);
			}
			printf("TWI: OK\n");
		}

		_delay_ms(50);
	}
}