#include "imx6ull.h"
#include "beep.h"

struct GPIO_TYPE * BEEP = (struct GPIO_TYPE *)GPIO1_BASE;

void beep_init()
{
    /*beep iomux mode*/
    *IOMUXC_SW_MUX_CTL_PAD_UART1_RTS_B = IOMUXC_SW_MUX_CTL_PAD_UART1_RTS_B_GPIO1_IO19;

    /*beep iomux pad*/
    *IOMUXC_SW_PAD_CTL_PAD_UART1_RTS_B = IOMUXC_SW_PAD_CTL_PAD_UART1_RTS_B_GPIO1_IO19;

    /*beep gpio direction setting*/
    BEEP->GDIR |= (1<<BEEP_GPIO1_IO19);

    /*turn off beep*/
    BEEP->DR &= ~(1<<BEEP_GPIO1_IO19);
}

void beep_on()
{
    BEEP->DR |= (1<<BEEP_GPIO1_IO19);
}

void beep_off()
{
    BEEP->DR &= ~(1<<BEEP_GPIO1_IO19);
}
