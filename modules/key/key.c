#include "imx6ull.h"
#include "common.h"
#include "delay.h"
#include "key.h"

struct GPIO_TYPE *KEY = (struct GPIO_TYPE *)GPIO5_BASE;

void key_init()
{
    /*key iomux mode*/
    *IOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER1 = IOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER1_GPIO5_IO01;

    /*key iomux pad*/
    *IOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER1 = IOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER1_GPIO5_IO01;

    /*key gpio direction setting*/
    KEY->GDIR   &= ~(1<<KEY_GPIO5_IO01);
}

uint32_t key_check()
{
    int ret = 0;

    if((KEY->PSR & (1<<KEY_GPIO5_IO01)) == (1<<KEY_GPIO5_IO01)){
        delay(10);
        if((KEY->PSR & (1<<KEY_GPIO5_IO01)) == (1<<KEY_GPIO5_IO01))
        {
            ret = KEY_ON;
        }
    }
    else if((KEY->PSR & (1<<KEY_GPIO5_IO01)) == 0)
    {
        ret = KEY_OFF;
    }

    return  ret;
}
