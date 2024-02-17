#include <atmel_start.h>
#include <stdio.h>
#include <compat/twi.h>
#include <util/delay.h>
#include "rgb.h"

#define TWI_DEBUG 0

void (*fp_level[5])(const bool) = {RL01_TRIG_set_level, RL02_TRIG_set_level, RL03_TRIG_set_level, RL04_TRIG_set_level, RL05_TRIG_set_level};

uint8_t state_current = 0x00;
uint8_t state_target  = 0x00;

uint8_t relay_timeout_init = 0xFF;
uint8_t relay_timeout[5];

uint8_t val_current;
uint8_t val_target;
uint8_t i;
uint8_t t;

uint8_t twi_buf[2];
uint8_t twi_idx = 0;
bool twi_success = false;

ISR (TIMER0_OVF_vect) {
	for (t = 0; t < 5; t++) {
		if (relay_timeout[t] > 0) {
			relay_timeout[t]--;
		}
	}
}

void update_relay() {
	if ((state_current & 0b00011111) == (state_target & 0b00011111)) {
		return;
	}

	for (i = 0; i < 5; i++) {
		if (relay_timeout[i] > 0) {
			continue;
		}
		
		val_current = (state_current >> i) & 0x01;
		val_target = (state_target >> i) & 0x01;
		if (val_current == val_target) {
			continue;
		}
		
		printf("Relay 0x%02hhX set to 0x%02hhX\n", i, val_target);

		relay_timeout[i] = relay_timeout_init;
		(*fp_level[i])(val_target);
		
		if (i == 4) {
			rgb_enable(val_target);
		}
		state_current = (state_current & ~(0x01 << i)) | (val_target << i);
	}
}

void update_program() {
	if ((state_current & 0b11100000) == (state_target & 0b11100000)) {
		return;
	}

	val_target = state_target >> 5;
	
	printf("Program set to 0x%02hhX\n", val_target);
	
	rgb_pgm_change(val_target);
	
	state_current = (state_current & 0b00011111) | (state_target & 0b11100000);
}

ISR(TWI0_vect) {
	
	switch(TWSR0 & 0xF8) {
		
		// Slave Receiver
		case TW_SR_SLA_ACK:   // addressed, returned ack
		case TW_SR_GCALL_ACK: // addressed generally, returned ack
		case TW_SR_ARB_LOST_SLA_ACK:   // lost arbitration, returned ack
		case TW_SR_ARB_LOST_GCALL_ACK: // lost arbitration, returned ack
		#if TWI_DEBUG
		printf("TWI: TW_SR_SLA_ACK\n");
		#endif
		twi_idx = 0;
		twi_success = true;
		TWCR0 |= (1 << TWINT) | (1 << TWEA); // ACK
		break;
		
		case TW_SR_DATA_ACK:       // data received, returned ack
		case TW_SR_GCALL_DATA_ACK: // data received generally, returned ack
		#if TWI_DEBUG
		printf("TWI: TW_SR_DATA_ACK\n");
		#endif
		if (twi_idx < (sizeof(twi_buf) / sizeof(twi_buf[0]))) {
			#if TWI_DEBUG
			printf("TWI: Send ACK\n");
			#endif
			twi_buf[twi_idx++] = TWDR0;
			TWCR0 |= (1 << TWINT) | (1 << TWEA); // ACK
			} else {
			#if TWI_DEBUG
			printf("TWI: Send NACK\n");
			#endif
			twi_success = false;
			TWCR0 |= (1 << TWINT); // NACK
		}
		break;

		case TW_SR_STOP: // stop or repeated start condition received
		#if TWI_DEBUG
		printf("TWI: TW_SR_STOP\n");
		#endif
		TWCR0 |= (1 << TWINT) | (1 << TWEA); // ACK
		if (twi_success) {
			#if TWI_DEBUG
			printf("TWI: DATA");
			for (uint8_t d = 0; d < twi_idx; d++) {
				printf(" 0x%02hhX", twi_buf[d]);
			}
			printf("\n");
			#endif
			state_target = twi_buf[1];
		}
		break;

		case TW_SR_DATA_NACK:       // data received, returned nack
		case TW_SR_GCALL_DATA_NACK: // data received generally, returned nack
		#if TWI_DEBUG
		printf("TWI: TW_SR_DATA_NACK\n");
		#endif
		TWCR0 |= (1 << TWINT); // NACK
		break;
		
		// All
		case TW_NO_INFO:   // no state information
		break;

		case TW_BUS_ERROR: // bus error, illegal stop/start
		TWCR0 = 0x00;
		_delay_ms(1);
		TWCR0 |= (1 << TWEN) | (1 << TWIE) | (1 << TWEA);
		break;
	}

}

int main(void) {
	
	atmel_start_init();

	_delay_ms(500);

	printf("\nlight-desk-box v0.1 by kiu\n");
	
	TWCR0 |= (1 << TWEN) | (1 << TWIE) | (1 << TWEA);
	
	sei();
	
	while (1) {		
		if (state_current != state_target) {
			update_relay();
			update_program();
		}

		rgb_tick();
		
		_delay_ms(10);
	}
}
