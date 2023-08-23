#include "imx6ull.h"
#include "led.h"

struct GPIO_TYPE* R_LED = (struct GPIO_TYPE*)GPIO1_BASE;
struct GPIO_TYPE* G_LED = (struct GPIO_TYPE*)GPIO4_BASE;
struct GPIO_TYPE* B_LED = (struct GPIO_TYPE*)GPIO4_BASE;

void led_init()
{
    /*led iomux mode*/
    *IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO04   = IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO04_GPIO1_IO04;
    *IOMUXC_SW_MUX_CTL_PAD_CSI_HSYNC    = IOMUXC_SW_MUX_CTL_PAD_CSI_HSYNC_GPIO4_IO20;
    *IOMUXC_SW_MUX_CTL_PAD_CSI_VSYNC    = IOMUXC_SW_MUX_CTL_PAD_CSI_VSYNC_GPIO4_IO19;

    /*led iomux pad*/
    *IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO04   = IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO04_GPIO1_IO04;
    *IOMUXC_SW_PAD_CTL_PAD_CSI_HSYNC    = IOMUXC_SW_PAD_CTL_PAD_CSI_HSYNC_GPIO4_IO20;
    *IOMUXC_SW_PAD_CTL_PAD_CSI_VSYNC    = IOMUXC_SW_PAD_CTL_PAD_CSI_VSYNC_GPIO1_IO19;

    /*led gpio direction setting*/
    R_LED->GDIR |=  (1<<R_LED_GPIO1_IO04);
    G_LED->GDIR |=  (1<<G_LED_GPIO4_IO20);
    B_LED->GDIR |=  (1<<B_LED_GPIO4_IO19);

    /*trun off leds*/
    R_LED->DR |= (1<<R_LED_GPIO1_IO04);
    G_LED->DR |= (1<<G_LED_GPIO4_IO20);
    B_LED->DR |= (1<<B_LED_GPIO4_IO19);
}

void led_red_on()
{
    R_LED->DR &= ~(1<<R_LED_GPIO1_IO04);
}

void led_red_off()
{
    R_LED->DR |= (1<<R_LED_GPIO1_IO04);
}

void led_green_on()
{
    G_LED->DR &= ~(1<<G_LED_GPIO4_IO20);
}

void led_green_off()
{
    G_LED->DR |= (1<<G_LED_GPIO4_IO20);
}

void led_blue_on()
{
    B_LED->DR &= ~(1<<B_LED_GPIO4_IO19);
}

void led_blue_off()
{
    B_LED->DR |= (1<<B_LED_GPIO4_IO19);
}

void led_rgb_on()
{
    R_LED->DR &= ~(1<<R_LED_GPIO1_IO04);
    G_LED->DR &= ~(1<<G_LED_GPIO4_IO20);
    B_LED->DR &= ~(1<<B_LED_GPIO4_IO19);
}

void led_rgb_off()
{
    R_LED->DR |= (1<<R_LED_GPIO1_IO04);
    G_LED->DR |= (1<<G_LED_GPIO4_IO20);
    B_LED->DR |= (1<<B_LED_GPIO4_IO19);
}