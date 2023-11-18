#include "clock_tree.h"
#include "key.h"
#include "led.h"
#include "beep.h"
#include "common.h"
#include "delay.h"

int main(void)
{
    int i = 1;
    //enable the clocks
    clock_tree_enable();

    //initialize key module
    key_init();

    //initialize beep module
    beep_init();

    //initialize led module
    led_init();

    while(TRUE)
    {
        if((i%3 == 1) && (key_check() == KEY_ON))
        {
            led_rgb_off();
            led_red_on();
            beep_on();
            delay(1000);
            ++i;
        }
        else if((i%3 == 2) && (key_check() == KEY_ON))
        {
            led_rgb_off();
            led_green_on();
            beep_on();
            delay(1000);
            ++i;
        }
        else if((i%3 == 0) && (key_check() == KEY_ON))
        {
            led_rgb_off();
            led_blue_on();
            beep_on();
            delay(1000);
            i=1;
        }

        beep_off();
    }

    return 0;
}