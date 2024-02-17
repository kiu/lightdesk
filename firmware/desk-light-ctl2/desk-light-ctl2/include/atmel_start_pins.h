/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set SW_05_BTN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_05_BTN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set SW_05_BTN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_05_BTN_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(0, dir);
}

/**
 * \brief Set SW_05_BTN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_05_BTN_set_level(const bool level)
{
	PORTB_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on SW_05_BTN
 *
 * Toggle the pin level
 */
static inline void SW_05_BTN_toggle_level()
{
	PORTB_toggle_pin_level(0);
}

/**
 * \brief Get level on SW_05_BTN
 *
 * Reads the level on a pin
 */
static inline bool SW_05_BTN_get_level()
{
	return PORTB_get_pin_level(0);
}

/**
 * \brief Set SW_04_L02 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_04_L02_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set SW_04_L02 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_04_L02_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(1, dir);
}

/**
 * \brief Set SW_04_L02 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_04_L02_set_level(const bool level)
{
	PORTB_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on SW_04_L02
 *
 * Toggle the pin level
 */
static inline void SW_04_L02_toggle_level()
{
	PORTB_toggle_pin_level(1);
}

/**
 * \brief Get level on SW_04_L02
 *
 * Reads the level on a pin
 */
static inline bool SW_04_L02_get_level()
{
	return PORTB_get_pin_level(1);
}

/**
 * \brief Set SW_04_L01 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_04_L01_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set SW_04_L01 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_04_L01_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(2, dir);
}

/**
 * \brief Set SW_04_L01 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_04_L01_set_level(const bool level)
{
	PORTB_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on SW_04_L01
 *
 * Toggle the pin level
 */
static inline void SW_04_L01_toggle_level()
{
	PORTB_toggle_pin_level(2);
}

/**
 * \brief Get level on SW_04_L01
 *
 * Reads the level on a pin
 */
static inline bool SW_04_L01_get_level()
{
	return PORTB_get_pin_level(2);
}

/**
 * \brief Set SW_04_BTN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_04_BTN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set SW_04_BTN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_04_BTN_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(3, dir);
}

/**
 * \brief Set SW_04_BTN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_04_BTN_set_level(const bool level)
{
	PORTB_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on SW_04_BTN
 *
 * Toggle the pin level
 */
static inline void SW_04_BTN_toggle_level()
{
	PORTB_toggle_pin_level(3);
}

/**
 * \brief Get level on SW_04_BTN
 *
 * Reads the level on a pin
 */
static inline bool SW_04_BTN_get_level()
{
	return PORTB_get_pin_level(3);
}

/**
 * \brief Set SW_03_L02 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_03_L02_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set SW_03_L02 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_03_L02_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(4, dir);
}

/**
 * \brief Set SW_03_L02 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_03_L02_set_level(const bool level)
{
	PORTB_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on SW_03_L02
 *
 * Toggle the pin level
 */
static inline void SW_03_L02_toggle_level()
{
	PORTB_toggle_pin_level(4);
}

/**
 * \brief Get level on SW_03_L02
 *
 * Reads the level on a pin
 */
static inline bool SW_03_L02_get_level()
{
	return PORTB_get_pin_level(4);
}

/**
 * \brief Set SW_03_L01 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_03_L01_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set SW_03_L01 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_03_L01_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(5, dir);
}

/**
 * \brief Set SW_03_L01 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_03_L01_set_level(const bool level)
{
	PORTB_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on SW_03_L01
 *
 * Toggle the pin level
 */
static inline void SW_03_L01_toggle_level()
{
	PORTB_toggle_pin_level(5);
}

/**
 * \brief Get level on SW_03_L01
 *
 * Reads the level on a pin
 */
static inline bool SW_03_L01_get_level()
{
	return PORTB_get_pin_level(5);
}

/**
 * \brief Set SW_06_L02 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_06_L02_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set SW_06_L02 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_06_L02_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(6, dir);
}

/**
 * \brief Set SW_06_L02 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_06_L02_set_level(const bool level)
{
	PORTB_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on SW_06_L02
 *
 * Toggle the pin level
 */
static inline void SW_06_L02_toggle_level()
{
	PORTB_toggle_pin_level(6);
}

/**
 * \brief Get level on SW_06_L02
 *
 * Reads the level on a pin
 */
static inline bool SW_06_L02_get_level()
{
	return PORTB_get_pin_level(6);
}

/**
 * \brief Set SW_06_L01 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_06_L01_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set SW_06_L01 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_06_L01_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(7, dir);
}

/**
 * \brief Set SW_06_L01 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_06_L01_set_level(const bool level)
{
	PORTB_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on SW_06_L01
 *
 * Toggle the pin level
 */
static inline void SW_06_L01_toggle_level()
{
	PORTB_toggle_pin_level(7);
}

/**
 * \brief Get level on SW_06_L01
 *
 * Reads the level on a pin
 */
static inline bool SW_06_L01_get_level()
{
	return PORTB_get_pin_level(7);
}

/**
 * \brief Set SW_02_L01 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_02_L01_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set SW_02_L01 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_02_L01_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(0, dir);
}

/**
 * \brief Set SW_02_L01 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_02_L01_set_level(const bool level)
{
	PORTC_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on SW_02_L01
 *
 * Toggle the pin level
 */
static inline void SW_02_L01_toggle_level()
{
	PORTC_toggle_pin_level(0);
}

/**
 * \brief Get level on SW_02_L01
 *
 * Reads the level on a pin
 */
static inline bool SW_02_L01_get_level()
{
	return PORTC_get_pin_level(0);
}

/**
 * \brief Set SW_02_BTN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_02_BTN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set SW_02_BTN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_02_BTN_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(1, dir);
}

/**
 * \brief Set SW_02_BTN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_02_BTN_set_level(const bool level)
{
	PORTC_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on SW_02_BTN
 *
 * Toggle the pin level
 */
static inline void SW_02_BTN_toggle_level()
{
	PORTC_toggle_pin_level(1);
}

/**
 * \brief Get level on SW_02_BTN
 *
 * Reads the level on a pin
 */
static inline bool SW_02_BTN_get_level()
{
	return PORTC_get_pin_level(1);
}

/**
 * \brief Set SW_01_BTN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_01_BTN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set SW_01_BTN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_01_BTN_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(2, dir);
}

/**
 * \brief Set SW_01_BTN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_01_BTN_set_level(const bool level)
{
	PORTC_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on SW_01_BTN
 *
 * Toggle the pin level
 */
static inline void SW_01_BTN_toggle_level()
{
	PORTC_toggle_pin_level(2);
}

/**
 * \brief Get level on SW_01_BTN
 *
 * Reads the level on a pin
 */
static inline bool SW_01_BTN_get_level()
{
	return PORTC_get_pin_level(2);
}

/**
 * \brief Set SW_01_L01 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_01_L01_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set SW_01_L01 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_01_L01_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(3, dir);
}

/**
 * \brief Set SW_01_L01 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_01_L01_set_level(const bool level)
{
	PORTC_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on SW_01_L01
 *
 * Toggle the pin level
 */
static inline void SW_01_L01_toggle_level()
{
	PORTC_toggle_pin_level(3);
}

/**
 * \brief Get level on SW_01_L01
 *
 * Reads the level on a pin
 */
static inline bool SW_01_L01_get_level()
{
	return PORTC_get_pin_level(3);
}

/**
 * \brief Set PC4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PC4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC4_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(4, dir);
}

/**
 * \brief Set PC4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC4_set_level(const bool level)
{
	PORTC_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PC4
 *
 * Toggle the pin level
 */
static inline void PC4_toggle_level()
{
	PORTC_toggle_pin_level(4);
}

/**
 * \brief Get level on PC4
 *
 * Reads the level on a pin
 */
static inline bool PC4_get_level()
{
	return PORTC_get_pin_level(4);
}

/**
 * \brief Set PC5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PC5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC5_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(5, dir);
}

/**
 * \brief Set PC5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC5_set_level(const bool level)
{
	PORTC_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PC5
 *
 * Toggle the pin level
 */
static inline void PC5_toggle_level()
{
	PORTC_toggle_pin_level(5);
}

/**
 * \brief Get level on PC5
 *
 * Reads the level on a pin
 */
static inline bool PC5_get_level()
{
	return PORTC_get_pin_level(5);
}

/**
 * \brief Set PD0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PD0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PD0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PD0_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(0, dir);
}

/**
 * \brief Set PD0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PD0_set_level(const bool level)
{
	PORTD_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PD0
 *
 * Toggle the pin level
 */
static inline void PD0_toggle_level()
{
	PORTD_toggle_pin_level(0);
}

/**
 * \brief Get level on PD0
 *
 * Reads the level on a pin
 */
static inline bool PD0_get_level()
{
	return PORTD_get_pin_level(0);
}

/**
 * \brief Set PD1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PD1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PD1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PD1_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(1, dir);
}

/**
 * \brief Set PD1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PD1_set_level(const bool level)
{
	PORTD_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PD1
 *
 * Toggle the pin level
 */
static inline void PD1_toggle_level()
{
	PORTD_toggle_pin_level(1);
}

/**
 * \brief Get level on PD1
 *
 * Reads the level on a pin
 */
static inline bool PD1_get_level()
{
	return PORTD_get_pin_level(1);
}

/**
 * \brief Set SW_08_BTN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_08_BTN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set SW_08_BTN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_08_BTN_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(2, dir);
}

/**
 * \brief Set SW_08_BTN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_08_BTN_set_level(const bool level)
{
	PORTD_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on SW_08_BTN
 *
 * Toggle the pin level
 */
static inline void SW_08_BTN_toggle_level()
{
	PORTD_toggle_pin_level(2);
}

/**
 * \brief Get level on SW_08_BTN
 *
 * Reads the level on a pin
 */
static inline bool SW_08_BTN_get_level()
{
	return PORTD_get_pin_level(2);
}

/**
 * \brief Set SW_08_L01 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_08_L01_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set SW_08_L01 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_08_L01_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(3, dir);
}

/**
 * \brief Set SW_08_L01 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_08_L01_set_level(const bool level)
{
	PORTD_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on SW_08_L01
 *
 * Toggle the pin level
 */
static inline void SW_08_L01_toggle_level()
{
	PORTD_toggle_pin_level(3);
}

/**
 * \brief Get level on SW_08_L01
 *
 * Reads the level on a pin
 */
static inline bool SW_08_L01_get_level()
{
	return PORTD_get_pin_level(3);
}

/**
 * \brief Set SW_07_L02 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_07_L02_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set SW_07_L02 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_07_L02_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(4, dir);
}

/**
 * \brief Set SW_07_L02 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_07_L02_set_level(const bool level)
{
	PORTD_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on SW_07_L02
 *
 * Toggle the pin level
 */
static inline void SW_07_L02_toggle_level()
{
	PORTD_toggle_pin_level(4);
}

/**
 * \brief Get level on SW_07_L02
 *
 * Reads the level on a pin
 */
static inline bool SW_07_L02_get_level()
{
	return PORTD_get_pin_level(4);
}

/**
 * \brief Set SW_06_BTN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_06_BTN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set SW_06_BTN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_06_BTN_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(5, dir);
}

/**
 * \brief Set SW_06_BTN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_06_BTN_set_level(const bool level)
{
	PORTD_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on SW_06_BTN
 *
 * Toggle the pin level
 */
static inline void SW_06_BTN_toggle_level()
{
	PORTD_toggle_pin_level(5);
}

/**
 * \brief Get level on SW_06_BTN
 *
 * Reads the level on a pin
 */
static inline bool SW_06_BTN_get_level()
{
	return PORTD_get_pin_level(5);
}

/**
 * \brief Set SW_05_L02 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_05_L02_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set SW_05_L02 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_05_L02_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(6, dir);
}

/**
 * \brief Set SW_05_L02 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_05_L02_set_level(const bool level)
{
	PORTD_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on SW_05_L02
 *
 * Toggle the pin level
 */
static inline void SW_05_L02_toggle_level()
{
	PORTD_toggle_pin_level(6);
}

/**
 * \brief Get level on SW_05_L02
 *
 * Reads the level on a pin
 */
static inline bool SW_05_L02_get_level()
{
	return PORTD_get_pin_level(6);
}

/**
 * \brief Set SW_05_L01 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_05_L01_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set SW_05_L01 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_05_L01_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(7, dir);
}

/**
 * \brief Set SW_05_L01 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_05_L01_set_level(const bool level)
{
	PORTD_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on SW_05_L01
 *
 * Toggle the pin level
 */
static inline void SW_05_L01_toggle_level()
{
	PORTD_toggle_pin_level(7);
}

/**
 * \brief Get level on SW_05_L01
 *
 * Reads the level on a pin
 */
static inline bool SW_05_L01_get_level()
{
	return PORTD_get_pin_level(7);
}

/**
 * \brief Set SW_07_L01 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_07_L01_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set SW_07_L01 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_07_L01_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(0, dir);
}

/**
 * \brief Set SW_07_L01 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_07_L01_set_level(const bool level)
{
	PORTE_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on SW_07_L01
 *
 * Toggle the pin level
 */
static inline void SW_07_L01_toggle_level()
{
	PORTE_toggle_pin_level(0);
}

/**
 * \brief Get level on SW_07_L01
 *
 * Reads the level on a pin
 */
static inline bool SW_07_L01_get_level()
{
	return PORTE_get_pin_level(0);
}

/**
 * \brief Set SW_07_BTN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_07_BTN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set SW_07_BTN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_07_BTN_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(1, dir);
}

/**
 * \brief Set SW_07_BTN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_07_BTN_set_level(const bool level)
{
	PORTE_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on SW_07_BTN
 *
 * Toggle the pin level
 */
static inline void SW_07_BTN_toggle_level()
{
	PORTE_toggle_pin_level(1);
}

/**
 * \brief Get level on SW_07_BTN
 *
 * Reads the level on a pin
 */
static inline bool SW_07_BTN_get_level()
{
	return PORTE_get_pin_level(1);
}

/**
 * \brief Set SW_03_BTN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_03_BTN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set SW_03_BTN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_03_BTN_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(2, dir);
}

/**
 * \brief Set SW_03_BTN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_03_BTN_set_level(const bool level)
{
	PORTE_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on SW_03_BTN
 *
 * Toggle the pin level
 */
static inline void SW_03_BTN_toggle_level()
{
	PORTE_toggle_pin_level(2);
}

/**
 * \brief Get level on SW_03_BTN
 *
 * Reads the level on a pin
 */
static inline bool SW_03_BTN_get_level()
{
	return PORTE_get_pin_level(2);
}

/**
 * \brief Set SW_02_L02 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void SW_02_L02_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set SW_02_L02 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void SW_02_L02_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(3, dir);
}

/**
 * \brief Set SW_02_L02 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void SW_02_L02_set_level(const bool level)
{
	PORTE_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on SW_02_L02
 *
 * Toggle the pin level
 */
static inline void SW_02_L02_toggle_level()
{
	PORTE_toggle_pin_level(3);
}

/**
 * \brief Get level on SW_02_L02
 *
 * Reads the level on a pin
 */
static inline bool SW_02_L02_get_level()
{
	return PORTE_get_pin_level(3);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
