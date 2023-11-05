#include "gpio.h"
#include "iomux.h"
#include "key.h"
#include "delay.h"

static GPIO_Type *KEY = GPIO5;
static gpio_pin_config_t key_cfg = {kGPIO_DigitalInput, 0, kGPIO_NoIntmode};

void key_init()
{
    /*key iomux mode*/
    IOMUXC_SetPinMux(IOMUXC_SNVS_SNVS_TAMPER1_GPIO5_IO01, 0);

    /*key iomux pad*/
    IOMUXC_SetPinConfig(IOMUXC_SNVS_SNVS_TAMPER1_GPIO5_IO01, 0x1f080);

    /*key gpio direction setting*/
    GPIO_PinInit(KEY, KEY_PIN, &key_cfg);
}

uint32_t key_check()
{
    int ret = 0;

    if(GPIO_ReadPadStatus(KEY, KEY_PIN) == KEY_ON){
        delay(10);
        if(GPIO_ReadPadStatus(KEY, KEY_PIN) == KEY_ON)
        {
            ret = KEY_ON;
        }
    }
    else if(GPIO_ReadPadStatus(KEY, KEY_PIN) == KEY_OFF)
    {
        ret = KEY_OFF;
    }

    return  ret;
}
