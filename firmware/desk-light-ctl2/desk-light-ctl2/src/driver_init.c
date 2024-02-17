/**
 * \file
 *
 * \brief Driver initialization.
 *
 (c) 2020 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms,you may use this software and
    any derivatives exclusively with Microchip products.It is your responsibility
    to comply with third party license terms applicable to your use of third party
    software (including open source software) that may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/*
 * Code generated by START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <system.h>

/* configure pins and initialize registers */
void I2C_0_initialization(void)
{

	PC5_set_dir(
	    // <y> Pin direction
	    // <id> pad_dir
	    // <PORT_DIR_OFF"> Off
	    // <PORT_DIR_IN"> In
	    // <PORT_DIR_OUT"> Out
	    PORT_DIR_OUT);

	PC5_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	PC5_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	PC4_set_dir(
	    // <y> Pin direction
	    // <id> pad_dir
	    // <PORT_DIR_OFF"> Off
	    // <PORT_DIR_IN"> In
	    // <PORT_DIR_OUT"> Out
	    PORT_DIR_OUT);

	PC4_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	PC4_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	I2C_0_init();
}

void TIMER_0_initialization(void)
{

	TIMER_0_init();
}

void TIMER_1_initialization(void)
{

	TIMER_1_init();
}

void TIMER_2_initialization(void)
{

	TIMER_2_init();
}

/* configure pins and initialize registers */
void USART_0_initialization(void)
{

	// Set pin direction to input
	PD0_set_dir(PORT_DIR_IN);

	PD0_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	// Set pin direction to output
	PD1_set_dir(PORT_DIR_OUT);

	PD1_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	USART_0_init();
}

/**
 * \brief System initialization
 */
void system_init()
{
	mcu_init();

	/* PORT setting on PB0 */

	// Set pin direction to input
	SW_05_BTN_set_dir(PORT_DIR_IN);

	SW_05_BTN_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_UP);

	/* PORT setting on PB1 */

	// Set pin direction to output
	SW_04_L02_set_dir(PORT_DIR_OUT);

	SW_04_L02_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB2 */

	// Set pin direction to output
	SW_04_L01_set_dir(PORT_DIR_OUT);

	SW_04_L01_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB3 */

	// Set pin direction to input
	SW_04_BTN_set_dir(PORT_DIR_IN);

	SW_04_BTN_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_UP);

	/* PORT setting on PB4 */

	// Set pin direction to output
	SW_03_L02_set_dir(PORT_DIR_OUT);

	SW_03_L02_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB5 */

	// Set pin direction to output
	SW_03_L01_set_dir(PORT_DIR_OUT);

	SW_03_L01_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB6 */

	// Set pin direction to output
	SW_06_L02_set_dir(PORT_DIR_OUT);

	SW_06_L02_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PB7 */

	// Set pin direction to output
	SW_06_L01_set_dir(PORT_DIR_OUT);

	SW_06_L01_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PC0 */

	// Set pin direction to output
	SW_02_L01_set_dir(PORT_DIR_OUT);

	SW_02_L01_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PC1 */

	// Set pin direction to input
	SW_02_BTN_set_dir(PORT_DIR_IN);

	SW_02_BTN_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_UP);

	/* PORT setting on PC2 */

	// Set pin direction to input
	SW_01_BTN_set_dir(PORT_DIR_IN);

	SW_01_BTN_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_UP);

	/* PORT setting on PC3 */

	// Set pin direction to output
	SW_01_L01_set_dir(PORT_DIR_OUT);

	SW_01_L01_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PD2 */

	// Set pin direction to input
	SW_08_BTN_set_dir(PORT_DIR_IN);

	SW_08_BTN_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_UP);

	/* PORT setting on PD3 */

	// Set pin direction to output
	SW_08_L01_set_dir(PORT_DIR_OUT);

	SW_08_L01_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PD4 */

	// Set pin direction to output
	SW_07_L02_set_dir(PORT_DIR_OUT);

	SW_07_L02_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PD5 */

	// Set pin direction to input
	SW_06_BTN_set_dir(PORT_DIR_IN);

	SW_06_BTN_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_UP);

	/* PORT setting on PD6 */

	// Set pin direction to output
	SW_05_L02_set_dir(PORT_DIR_OUT);

	SW_05_L02_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PD7 */

	// Set pin direction to output
	SW_05_L01_set_dir(PORT_DIR_OUT);

	SW_05_L01_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PE0 */

	// Set pin direction to output
	SW_07_L01_set_dir(PORT_DIR_OUT);

	SW_07_L01_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* PORT setting on PE1 */

	// Set pin direction to input
	SW_07_BTN_set_dir(PORT_DIR_IN);

	SW_07_BTN_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_UP);

	/* PORT setting on PE2 */

	// Set pin direction to input
	SW_03_BTN_set_dir(PORT_DIR_IN);

	SW_03_BTN_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_UP);

	/* PORT setting on PE3 */

	// Set pin direction to output
	SW_02_L02_set_dir(PORT_DIR_OUT);

	SW_02_L02_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	sysctrl_init();

	I2C_0_initialization();

	TIMER_0_initialization();

	TIMER_1_initialization();

	TIMER_2_initialization();

	USART_0_initialization();
}