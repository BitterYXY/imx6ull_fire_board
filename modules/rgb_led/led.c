#include "gpio.h"
#include "iomux.h"
#include "led.h"

static GPIO_Type * R_LED = GPIO1;
static GPIO_Type * G_LED = GPIO4;
static GPIO_Type * B_LED = GPIO4;

static gpio_pin_config_t r_led_cfg = {kGPIO_DigitalOutput, 1, kGPIO_NoIntmode};
static gpio_pin_config_t g_led_cfg = {kGPIO_DigitalOutput, 1, kGPIO_NoIntmode};
static gpio_pin_config_t b_led_cfg = {kGPIO_DigitalOutput, 1, kGPIO_NoIntmode};

void led_init()
{
    /*led iomux mode*/
    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO04_GPIO1_IO04, 0);  //R_LED
    IOMUXC_SetPinMux(IOMUXC_CSI_HSYNC_GPIO4_IO20,  0);  //G_LED
    IOMUXC_SetPinMux(IOMUXC_CSI_VSYNC_GPIO4_IO19,  0);  //B_LED

    /*led iomux pad*/
    IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO04_GPIO1_IO04, 0x1f838);
    IOMUXC_SetPinConfig(IOMUXC_CSI_HSYNC_GPIO4_IO20,  0x1f838);
    IOMUXC_SetPinConfig(IOMUXC_CSI_VSYNC_GPIO4_IO19,  0x1f838);

    /*led gpio direction setting*/
    GPIO_PinInit(R_LED, R_LED_PIN, &r_led_cfg);
    GPIO_PinInit(G_LED, G_LED_PIN, &g_led_cfg);
    GPIO_PinInit(B_LED, B_LED_PIN, &b_led_cfg);


    /*trun off leds*/
    GPIO_WritePinOutput(R_LED, R_LED_PIN, LED_OFF);
    GPIO_WritePinOutput(G_LED, G_LED_PIN, LED_OFF);
    GPIO_WritePinOutput(B_LED, B_LED_PIN, LED_OFF);
}

void led_red_on()
{
    GPIO_WritePinOutput(R_LED, R_LED_PIN, LED_ON);
}

void led_red_off()
{
    GPIO_WritePinOutput(R_LED, R_LED_PIN, LED_OFF);
}

void led_green_on()
{
    GPIO_WritePinOutput(G_LED, G_LED_PIN, LED_ON);
}

void led_green_off()
{
    GPIO_WritePinOutput(G_LED, G_LED_PIN, LED_OFF);
}

void led_blue_on()
{
    GPIO_WritePinOutput(B_LED, B_LED_PIN, LED_ON);
}

void led_blue_off()
{
    GPIO_WritePinOutput(B_LED, B_LED_PIN, LED_OFF);
}

void led_rgb_on()
{
    GPIO_WritePinOutput(R_LED, R_LED_PIN, LED_ON);
    GPIO_WritePinOutput(G_LED, G_LED_PIN, LED_ON);
    GPIO_WritePinOutput(B_LED, B_LED_PIN, LED_ON);
}

void led_rgb_off()
{
    GPIO_WritePinOutput(R_LED, R_LED_PIN, LED_OFF);
    GPIO_WritePinOutput(G_LED, G_LED_PIN, LED_OFF);
    GPIO_WritePinOutput(B_LED, B_LED_PIN, LED_OFF);
}