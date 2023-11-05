#include "gpio.h"
#include "iomux.h"
#include "beep.h"

static GPIO_Type *BEEP = GPIO1;
static gpio_pin_config_t beep_cfg = {kGPIO_DigitalOutput, 1, kGPIO_NoIntmode};

void beep_init()
{
    /*beep iomux mode*/
    IOMUXC_SetPinMux(IOMUXC_UART1_RTS_B_GPIO1_IO19, 0);

    /*beep iomux pad*/
    IOMUXC_SetPinConfig(IOMUXC_UART1_RTS_B_GPIO1_IO19, 0x1f838);

    /*beep gpio direction setting*/
    GPIO_PinInit(BEEP, BEEP_PIN, &beep_cfg);

    /*turn off beep*/
    GPIO_WritePinOutput(BEEP, BEEP_PIN, BEEP_OFF);
}

void beep_on()
{
    GPIO_WritePinOutput(BEEP, BEEP_PIN, BEEP_ON);
}

void beep_off()
{
    GPIO_WritePinOutput(BEEP, BEEP_PIN, BEEP_OFF);
}
