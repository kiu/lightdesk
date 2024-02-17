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
 * \brief Set PB3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PB3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB3_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(3, dir);
}

/**
 * \brief Set PB3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB3_set_level(const bool level)
{
	PORTB_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PB3
 *
 * Toggle the pin level
 */
static inline void PB3_toggle_level()
{
	PORTB_toggle_pin_level(3);
}

/**
 * \brief Get level on PB3
 *
 * Reads the level on a pin
 */
static inline bool PB3_get_level()
{
	return PORTB_get_pin_level(3);
}

/**
 * \brief Set PB4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PB4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB4_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(4, dir);
}

/**
 * \brief Set PB4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB4_set_level(const bool level)
{
	PORTB_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PB4
 *
 * Toggle the pin level
 */
static inline void PB4_toggle_level()
{
	PORTB_toggle_pin_level(4);
}

/**
 * \brief Get level on PB4
 *
 * Reads the level on a pin
 */
static inline bool PB4_get_level()
{
	return PORTB_get_pin_level(4);
}

/**
 * \brief Set PB5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PB5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB5_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(5, dir);
}

/**
 * \brief Set PB5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB5_set_level(const bool level)
{
	PORTB_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PB5
 *
 * Toggle the pin level
 */
static inline void PB5_toggle_level()
{
	PORTB_toggle_pin_level(5);
}

/**
 * \brief Get level on PB5
 *
 * Reads the level on a pin
 */
static inline bool PB5_get_level()
{
	return PORTB_get_pin_level(5);
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
 * \brief Set RL05_TRIG pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void RL05_TRIG_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set RL05_TRIG data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void RL05_TRIG_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(3, dir);
}

/**
 * \brief Set RL05_TRIG level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void RL05_TRIG_set_level(const bool level)
{
	PORTD_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on RL05_TRIG
 *
 * Toggle the pin level
 */
static inline void RL05_TRIG_toggle_level()
{
	PORTD_toggle_pin_level(3);
}

/**
 * \brief Get level on RL05_TRIG
 *
 * Reads the level on a pin
 */
static inline bool RL05_TRIG_get_level()
{
	return PORTD_get_pin_level(3);
}

/**
 * \brief Set RL04_TRIG pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void RL04_TRIG_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set RL04_TRIG data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void RL04_TRIG_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(4, dir);
}

/**
 * \brief Set RL04_TRIG level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void RL04_TRIG_set_level(const bool level)
{
	PORTD_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on RL04_TRIG
 *
 * Toggle the pin level
 */
static inline void RL04_TRIG_toggle_level()
{
	PORTD_toggle_pin_level(4);
}

/**
 * \brief Get level on RL04_TRIG
 *
 * Reads the level on a pin
 */
static inline bool RL04_TRIG_get_level()
{
	return PORTD_get_pin_level(4);
}

/**
 * \brief Set RL03_TRIG pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void RL03_TRIG_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set RL03_TRIG data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void RL03_TRIG_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(5, dir);
}

/**
 * \brief Set RL03_TRIG level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void RL03_TRIG_set_level(const bool level)
{
	PORTD_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on RL03_TRIG
 *
 * Toggle the pin level
 */
static inline void RL03_TRIG_toggle_level()
{
	PORTD_toggle_pin_level(5);
}

/**
 * \brief Get level on RL03_TRIG
 *
 * Reads the level on a pin
 */
static inline bool RL03_TRIG_get_level()
{
	return PORTD_get_pin_level(5);
}

/**
 * \brief Set RL02_TRIG pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void RL02_TRIG_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set RL02_TRIG data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void RL02_TRIG_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(6, dir);
}

/**
 * \brief Set RL02_TRIG level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void RL02_TRIG_set_level(const bool level)
{
	PORTD_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on RL02_TRIG
 *
 * Toggle the pin level
 */
static inline void RL02_TRIG_toggle_level()
{
	PORTD_toggle_pin_level(6);
}

/**
 * \brief Get level on RL02_TRIG
 *
 * Reads the level on a pin
 */
static inline bool RL02_TRIG_get_level()
{
	return PORTD_get_pin_level(6);
}

/**
 * \brief Set RL01_TRIG pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void RL01_TRIG_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set RL01_TRIG data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void RL01_TRIG_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(7, dir);
}

/**
 * \brief Set RL01_TRIG level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void RL01_TRIG_set_level(const bool level)
{
	PORTD_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on RL01_TRIG
 *
 * Toggle the pin level
 */
static inline void RL01_TRIG_toggle_level()
{
	PORTD_toggle_pin_level(7);
}

/**
 * \brief Get level on RL01_TRIG
 *
 * Reads the level on a pin
 */
static inline bool RL01_TRIG_get_level()
{
	return PORTD_get_pin_level(7);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
