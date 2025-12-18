/*
 * gpio.c
 *
 *  Created on: Dec 18, 2025
 *      Author: HP
 */

#include "gpio.h"

void led_init(void)
{
	RCC->AHB1ENR |= BV(3);

	LED_PORT->MODER &= ~(BV(25) | BV(27) | BV(29) | BV(31));
	LED_PORT->MODER |= BV(24) | BV(26) | BV(28) | BV(30);

	LED_PORT->OSPEEDR &= ~(BV(25) | BV(27) | BV(29) | BV(31));
	GPIOD->OSPEEDR &= ~(BV(24) | BV(26) | BV(28) | BV(30));

	LED_PORT->PUPDR &= ~(BV(25) | BV(27) | BV(29) | BV(31));
	LED_PORT->PUPDR &= ~(BV(24) | BV(26) | BV(28) | BV(30));
}

void led_on(int num)
{
		GPIOD->ODR |= BV(num);
		DelayMs(1000);
}


void led_off(void)
{
		GPIOD->ODR &= ~(BV(12)|BV(15));
		DelayMs(1000);
}



