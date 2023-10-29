#include "gpio.h"

void GPIO_PinInit(GPIO_Type* base, uint32_t pin, const gpio_pin_config_t* Config)
{
    if(pin >= 32)
    {
        return ;                   /* Nothing.*/
    }

    /* Register reset to default value */
    base->IMR &= ~(1U << pin);

    /* Configure GPIO pin direction */
    if (Config->direction == kGPIO_DigitalInput)
    {
        base->GDIR &= ~(1U << pin);
    }
    else
    {
        GPIO_WritePinOutput(base, pin, Config->outputLogic);
        base->GDIR |= (1U << pin);
    }

    /* Configure GPIO pin interrupt mode */
    GPIO_SetPinInterruptConfig(base, pin, Config->interruptMode);
}

void GPIO_WritePinOutput(GPIO_Type* base, uint32_t pin, uint8_t output)
{
    if(pin >= 32)
    {
        return ;                   /* Nothing.*/
    }

    if (output == 0U)
    {
        base->DR &= ~(1U << pin);  /* Set pin output to low level.*/
    }
    else
    {
        base->DR |= (1U << pin);  /* Set pin output to high level.*/
    }
}


static inline uint32_t GPIO_ReadPinInput(GPIO_Type* base, uint32_t pin)
{
    if(pin >= 32)
    {
        return ;                   /* Nothing.*/
    }

    return (((base->DR) >> pin) & 0x1U);
}


static inline uint32_t GPIO_ReadPadStatus(GPIO_Type* base, uint32_t pin)
{
    if(pin >= 32)
    {
        return ;                   /* Nothing.*/
    }

    return (((base->PSR) >> pin) & 0x1U);
}


void GPIO_SetPinInterruptConfig(GPIO_Type* base, uint32_t pin, gpio_interrupt_mode_t pinInterruptMode)
{
    volatile uint32_t *icr;
    uint32_t icrShift;

    icrShift = pin;

    /* Register reset to default value */
    base->EDGE_SEL &= ~(1U << pin);

    if(pin < 16)
    {
        icr = &(base->ICR1);
    }
    else
    {
        icr = &(base->ICR2);
        icrShift -= 16;
    }
    switch(pinInterruptMode)
    {
        case(kGPIO_IntLowLevel):
            *icr &= ~(3U << (2 * icrShift));
            break;
        case(kGPIO_IntHighLevel):
            *icr = (*icr & (~(3U << (2 * icrShift)))) | (1U << (2 * icrShift));
            break;
        case(kGPIO_IntRisingEdge):
            *icr = (*icr & (~(3U << (2 * icrShift)))) | (2U << (2 * icrShift));
            break;
        case(kGPIO_IntFallingEdge):
            *icr |= (3U << (2 * icrShift));
            break;
        case(kGPIO_IntRisingOrFallingEdge):
            base->EDGE_SEL |= (1U << pin);
            break;
        default:
            break;
    }
}