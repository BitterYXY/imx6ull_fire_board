#include "clock_tree.h"
#include "led.h"
#include "serial.h"
#include "common.h"

int main(void)
{
    int i = 1;
    uchar_t a = 0;

    clock_tree_init();
    clock_tree_enable();
    led_init();
    serial_init();

    while(1)
    {
        puts("Please enter a character: ");
        a = getc();
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