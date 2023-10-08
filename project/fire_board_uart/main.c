#include "clock.h"
#include "led.h"
#include "uart.h"
#include "common.h"

int main(void)
{
    int i = 1;
    uchar_t a = 0;

    clock_init();
    clock_all_enable();
    led_init();
    uart1_USB_init();

    while(1)
    {
        puts("Please enter a character: ");
        a = getca();
        putc(a);
        puts("\r\n");

        puts("the character you entered is: ");
        putc(a);
        puts("\r\n\r\n");

        if(i%3 == 1)
        {
            led_rgb_off();
            led_red_on();
            ++i;
        }
        else if(i%3 == 2)
        {
            led_rgb_off();
            led_green_on();
            ++i;
        }
        else if(i%3 == 0)
        {
            led_rgb_off();
            led_blue_on();
            i=1;
        }
    }

    return 0;
}