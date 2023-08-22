#ifndef __LED_H__
#define __LED_H__

#include "imx6ull.h"

/* RGB_LED module*/
#define     R_LED_GPIO1_IO04    4
#define     G_LED_GPIO4_IO20    20
#define     B_LED_GPIO4_IO19    19

struct GPIO_TYPE* R_LED = GPIO1_BASE;
struct GPIO_TYPE* G_LED = GPIO4_BASE;
struct GPIO_TYPE* B_LED = GPIO4_BASE;

void led_init();
void led_red_on();
void led_red_off();
void led_green_on();
void led_green_off();
void led_blue_on();
void led_blue_off();

#endif