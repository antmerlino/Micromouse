/*
 * led.h
 *
 *  Created on: Mar 26, 2014
 *      Author: Anthony
 */

#ifndef LED_H_
#define LED_H_

#include "system.h"

void led_init();
void led_on(micromouse_gpio_name_t color);
void led_off(micromouse_gpio_name_t color);
void led_toggle(micromouse_gpio_name_t color);


#endif /* LED_H_ */
