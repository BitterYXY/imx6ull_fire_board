#include "clock_tree.h"
#include "led.h"
#include "delay.h"
#include "common.h"

int main(void)
{
    //clock init
    clock_tree_init();

    //enable the clocks 
    clock_tree_enable();

    //initialize the GPIO pins on rgb led modules
    led_init();

    while (TRUE)
    {
        led_red_on();
        delay(500);
        led_red_off();
        led_green_on();
        delay(500);
        led_green_off();
        led_blue_on();
        delay(500);
        led_blue_off();
    }
    
    return 0;
}