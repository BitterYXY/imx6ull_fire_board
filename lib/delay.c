#include "delay.h"
#include "common.h"


/*
 *@description: short delay function
*/
void delay_short(volatile uint32_t n)
{
    while (n--){} 
}


/*
 *@description: delay function, about 1ms on 396MHz
*/
void delay(volatile uint32_t n)
{
    while (n--)
    {
        delay_short(0x7ff);
    }
}