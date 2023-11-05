#include "gpio.h"
#include "iomux.h"
#include "gic.h"
#include "key_interrupt.h"
#include "delay.h"

static GPIO_Type *KEY = GPIO5;
static gpio_pin_config_t key_cfg = {kGPIO_DigitalInput, 1, kGPIO_IntRisingEdge};
key_state_mode key_state = KEY_OFF_STATE;

void key_init_interrupt()
{
    /*key iomux mode*/
    IOMUXC_SetPinMux(IOMUXC_SNVS_SNVS_TAMPER1_GPIO5_IO01, 0);

    /*key pad setting*/
    IOMUXC_SetPinConfig(IOMUXC_SNVS_SNVS_TAMPER1_GPIO5_IO01, 0x1f080);

    /*key gpio initializaion*/
    GPIO_PinInit(KEY, KEY_PIN, &key_cfg);

    //enable gic interript, register handler, enable key(gpio) interrupt
    GIC_EnableIRQ(GPIO5_Combined_0_15_IRQn);
    system_register_irqhandler(GPIO5_Combined_0_15_IRQn, key_interrupt_handler, NULL);
    GPIO_EnableInterrupts(KEY, KEY_PIN);
}

void key_interrupt_handler(unsigned int giccIar, void *param)
{
    delay(10);
    if(GPIO_ReadPadStatus(KEY, KEY_PIN) == KEY_ON)
    {
        key_state = KEY_ON_STATE;
    }
    GPIO_ClearPinsInterruptFlags(KEY, KEY_PIN);
}

uint32_t key_check_interrupt()
{
    uint32_t key_value = (key_state == KEY_ON_STATE) ? KEY_ON : KEY_OFF;
    key_state = KEY_OFF_STATE;
    return key_value;
}