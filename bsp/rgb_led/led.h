#ifndef __LED_H__
#define __LED_H__

/* RGB_LED module*/
#define     R_LED_GPIO1_IO04    4
#define     G_LED_GPIO4_IO20    20
#define     B_LED_GPIO4_IO19    19


void led_init();
void led_red_on();
void led_red_off();
void led_green_on();
void led_green_off();
void led_blue_on();
void led_blue_off();
void led_rgb_on();
void led_rgb_off();

#endif