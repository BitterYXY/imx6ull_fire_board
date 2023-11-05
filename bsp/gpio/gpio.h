#ifndef     __GPIO_H__
#define     __GPIO_H__

#include "common.h"
#include "gic.h"

/* ----------------------------------------------------------------------------
   -- GPIO Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Peripheral_Access_Layer GPIO Peripheral Access Layer
 * @{
 */

/** GPIO - Register Layout Typedef */
typedef struct {
  __IO uint32_t DR;                                /**< GPIO data register, offset: 0x0 */
  __IO uint32_t GDIR;                              /**< GPIO direction register, offset: 0x4 */
  __I  uint32_t PSR;                               /**< GPIO pad status register, offset: 0x8 */
  __IO uint32_t ICR1;                              /**< GPIO interrupt configuration register1, offset: 0xC */
  __IO uint32_t ICR2;                              /**< GPIO interrupt configuration register2, offset: 0x10 */
  __IO uint32_t IMR;                               /**< GPIO interrupt mask register, offset: 0x14 */
  __IO uint32_t ISR;                               /**< GPIO interrupt status register, offset: 0x18 */
  __IO uint32_t EDGE_SEL;                          /**< GPIO edge select register, offset: 0x1C */
} GPIO_Type;


/* ----------------------------------------------------------------------------
   -- GPIO Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPIO_Register_Masks GPIO Register Masks
 * @{
 */

/*! @name DR - GPIO data register */
#define GPIO_DR_DR_MASK                          (0xFFFFFFFFU)
#define GPIO_DR_DR_SHIFT                         (0U)
#define GPIO_DR_DR(x)                            (((uint32_t)(((uint32_t)(x)) << GPIO_DR_DR_SHIFT)) & GPIO_DR_DR_MASK)

/*! @name GDIR - GPIO direction register */
#define GPIO_GDIR_GDIR_MASK                      (0xFFFFFFFFU)
#define GPIO_GDIR_GDIR_SHIFT                     (0U)
#define GPIO_GDIR_GDIR(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_GDIR_GDIR_SHIFT)) & GPIO_GDIR_GDIR_MASK)

/*! @name PSR - GPIO pad status register */
#define GPIO_PSR_PSR_MASK                        (0xFFFFFFFFU)
#define GPIO_PSR_PSR_SHIFT                       (0U)
#define GPIO_PSR_PSR(x)                          (((uint32_t)(((uint32_t)(x)) << GPIO_PSR_PSR_SHIFT)) & GPIO_PSR_PSR_MASK)

/*! @name ICR1 - GPIO interrupt configuration register1 */
#define GPIO_ICR1_ICR0_MASK                      (0x3U)
#define GPIO_ICR1_ICR0_SHIFT                     (0U)
#define GPIO_ICR1_ICR0(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR0_SHIFT)) & GPIO_ICR1_ICR0_MASK)
#define GPIO_ICR1_ICR1_MASK                      (0xCU)
#define GPIO_ICR1_ICR1_SHIFT                     (2U)
#define GPIO_ICR1_ICR1(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR1_SHIFT)) & GPIO_ICR1_ICR1_MASK)
#define GPIO_ICR1_ICR2_MASK                      (0x30U)
#define GPIO_ICR1_ICR2_SHIFT                     (4U)
#define GPIO_ICR1_ICR2(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR2_SHIFT)) & GPIO_ICR1_ICR2_MASK)
#define GPIO_ICR1_ICR3_MASK                      (0xC0U)
#define GPIO_ICR1_ICR3_SHIFT                     (6U)
#define GPIO_ICR1_ICR3(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR3_SHIFT)) & GPIO_ICR1_ICR3_MASK)
#define GPIO_ICR1_ICR4_MASK                      (0x300U)
#define GPIO_ICR1_ICR4_SHIFT                     (8U)
#define GPIO_ICR1_ICR4(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR4_SHIFT)) & GPIO_ICR1_ICR4_MASK)
#define GPIO_ICR1_ICR5_MASK                      (0xC00U)
#define GPIO_ICR1_ICR5_SHIFT                     (10U)
#define GPIO_ICR1_ICR5(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR5_SHIFT)) & GPIO_ICR1_ICR5_MASK)
#define GPIO_ICR1_ICR6_MASK                      (0x3000U)
#define GPIO_ICR1_ICR6_SHIFT                     (12U)
#define GPIO_ICR1_ICR6(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR6_SHIFT)) & GPIO_ICR1_ICR6_MASK)
#define GPIO_ICR1_ICR7_MASK                      (0xC000U)
#define GPIO_ICR1_ICR7_SHIFT                     (14U)
#define GPIO_ICR1_ICR7(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR7_SHIFT)) & GPIO_ICR1_ICR7_MASK)
#define GPIO_ICR1_ICR8_MASK                      (0x30000U)
#define GPIO_ICR1_ICR8_SHIFT                     (16U)
#define GPIO_ICR1_ICR8(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR8_SHIFT)) & GPIO_ICR1_ICR8_MASK)
#define GPIO_ICR1_ICR9_MASK                      (0xC0000U)
#define GPIO_ICR1_ICR9_SHIFT                     (18U)
#define GPIO_ICR1_ICR9(x)                        (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR9_SHIFT)) & GPIO_ICR1_ICR9_MASK)
#define GPIO_ICR1_ICR10_MASK                     (0x300000U)
#define GPIO_ICR1_ICR10_SHIFT                    (20U)
#define GPIO_ICR1_ICR10(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR10_SHIFT)) & GPIO_ICR1_ICR10_MASK)
#define GPIO_ICR1_ICR11_MASK                     (0xC00000U)
#define GPIO_ICR1_ICR11_SHIFT                    (22U)
#define GPIO_ICR1_ICR11(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR11_SHIFT)) & GPIO_ICR1_ICR11_MASK)
#define GPIO_ICR1_ICR12_MASK                     (0x3000000U)
#define GPIO_ICR1_ICR12_SHIFT                    (24U)
#define GPIO_ICR1_ICR12(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR12_SHIFT)) & GPIO_ICR1_ICR12_MASK)
#define GPIO_ICR1_ICR13_MASK                     (0xC000000U)
#define GPIO_ICR1_ICR13_SHIFT                    (26U)
#define GPIO_ICR1_ICR13(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR13_SHIFT)) & GPIO_ICR1_ICR13_MASK)
#define GPIO_ICR1_ICR14_MASK                     (0x30000000U)
#define GPIO_ICR1_ICR14_SHIFT                    (28U)
#define GPIO_ICR1_ICR14(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR14_SHIFT)) & GPIO_ICR1_ICR14_MASK)
#define GPIO_ICR1_ICR15_MASK                     (0xC0000000U)
#define GPIO_ICR1_ICR15_SHIFT                    (30U)
#define GPIO_ICR1_ICR15(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR1_ICR15_SHIFT)) & GPIO_ICR1_ICR15_MASK)

/*! @name ICR2 - GPIO interrupt configuration register2 */
#define GPIO_ICR2_ICR16_MASK                     (0x3U)
#define GPIO_ICR2_ICR16_SHIFT                    (0U)
#define GPIO_ICR2_ICR16(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR16_SHIFT)) & GPIO_ICR2_ICR16_MASK)
#define GPIO_ICR2_ICR17_MASK                     (0xCU)
#define GPIO_ICR2_ICR17_SHIFT                    (2U)
#define GPIO_ICR2_ICR17(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR17_SHIFT)) & GPIO_ICR2_ICR17_MASK)
#define GPIO_ICR2_ICR18_MASK                     (0x30U)
#define GPIO_ICR2_ICR18_SHIFT                    (4U)
#define GPIO_ICR2_ICR18(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR18_SHIFT)) & GPIO_ICR2_ICR18_MASK)
#define GPIO_ICR2_ICR19_MASK                     (0xC0U)
#define GPIO_ICR2_ICR19_SHIFT                    (6U)
#define GPIO_ICR2_ICR19(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR19_SHIFT)) & GPIO_ICR2_ICR19_MASK)
#define GPIO_ICR2_ICR20_MASK                     (0x300U)
#define GPIO_ICR2_ICR20_SHIFT                    (8U)
#define GPIO_ICR2_ICR20(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR20_SHIFT)) & GPIO_ICR2_ICR20_MASK)
#define GPIO_ICR2_ICR21_MASK                     (0xC00U)
#define GPIO_ICR2_ICR21_SHIFT                    (10U)
#define GPIO_ICR2_ICR21(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR21_SHIFT)) & GPIO_ICR2_ICR21_MASK)
#define GPIO_ICR2_ICR22_MASK                     (0x3000U)
#define GPIO_ICR2_ICR22_SHIFT                    (12U)
#define GPIO_ICR2_ICR22(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR22_SHIFT)) & GPIO_ICR2_ICR22_MASK)
#define GPIO_ICR2_ICR23_MASK                     (0xC000U)
#define GPIO_ICR2_ICR23_SHIFT                    (14U)
#define GPIO_ICR2_ICR23(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR23_SHIFT)) & GPIO_ICR2_ICR23_MASK)
#define GPIO_ICR2_ICR24_MASK                     (0x30000U)
#define GPIO_ICR2_ICR24_SHIFT                    (16U)
#define GPIO_ICR2_ICR24(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR24_SHIFT)) & GPIO_ICR2_ICR24_MASK)
#define GPIO_ICR2_ICR25_MASK                     (0xC0000U)
#define GPIO_ICR2_ICR25_SHIFT                    (18U)
#define GPIO_ICR2_ICR25(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR25_SHIFT)) & GPIO_ICR2_ICR25_MASK)
#define GPIO_ICR2_ICR26_MASK                     (0x300000U)
#define GPIO_ICR2_ICR26_SHIFT                    (20U)
#define GPIO_ICR2_ICR26(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR26_SHIFT)) & GPIO_ICR2_ICR26_MASK)
#define GPIO_ICR2_ICR27_MASK                     (0xC00000U)
#define GPIO_ICR2_ICR27_SHIFT                    (22U)
#define GPIO_ICR2_ICR27(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR27_SHIFT)) & GPIO_ICR2_ICR27_MASK)
#define GPIO_ICR2_ICR28_MASK                     (0x3000000U)
#define GPIO_ICR2_ICR28_SHIFT                    (24U)
#define GPIO_ICR2_ICR28(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR28_SHIFT)) & GPIO_ICR2_ICR28_MASK)
#define GPIO_ICR2_ICR29_MASK                     (0xC000000U)
#define GPIO_ICR2_ICR29_SHIFT                    (26U)
#define GPIO_ICR2_ICR29(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR29_SHIFT)) & GPIO_ICR2_ICR29_MASK)
#define GPIO_ICR2_ICR30_MASK                     (0x30000000U)
#define GPIO_ICR2_ICR30_SHIFT                    (28U)
#define GPIO_ICR2_ICR30(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR30_SHIFT)) & GPIO_ICR2_ICR30_MASK)
#define GPIO_ICR2_ICR31_MASK                     (0xC0000000U)
#define GPIO_ICR2_ICR31_SHIFT                    (30U)
#define GPIO_ICR2_ICR31(x)                       (((uint32_t)(((uint32_t)(x)) << GPIO_ICR2_ICR31_SHIFT)) & GPIO_ICR2_ICR31_MASK)

/*! @name IMR - GPIO interrupt mask register */
#define GPIO_IMR_IMR_MASK                        (0xFFFFFFFFU)
#define GPIO_IMR_IMR_SHIFT                       (0U)
#define GPIO_IMR_IMR(x)                          (((uint32_t)(((uint32_t)(x)) << GPIO_IMR_IMR_SHIFT)) & GPIO_IMR_IMR_MASK)

/*! @name ISR - GPIO interrupt status register */
#define GPIO_ISR_ISR_MASK                        (0xFFFFFFFFU)
#define GPIO_ISR_ISR_SHIFT                       (0U)
#define GPIO_ISR_ISR(x)                          (((uint32_t)(((uint32_t)(x)) << GPIO_ISR_ISR_SHIFT)) & GPIO_ISR_ISR_MASK)

/*! @name EDGE_SEL - GPIO edge select register */
#define GPIO_EDGE_SEL_GPIO_EDGE_SEL_MASK         (0xFFFFFFFFU)
#define GPIO_EDGE_SEL_GPIO_EDGE_SEL_SHIFT        (0U)
#define GPIO_EDGE_SEL_GPIO_EDGE_SEL(x)           (((uint32_t)(((uint32_t)(x)) << GPIO_EDGE_SEL_GPIO_EDGE_SEL_SHIFT)) & GPIO_EDGE_SEL_GPIO_EDGE_SEL_MASK)


/*!
 * @}
 */ /* end of group GPIO_Register_Masks */


/* GPIO - Peripheral instance base addresses */
/** Peripheral GPIO1 base address */
#define GPIO1_BASE                               (0x209C000u)
/** Peripheral GPIO1 base pointer */
#define GPIO1                                    ((GPIO_Type *)GPIO1_BASE)
/** Peripheral GPIO2 base address */
#define GPIO2_BASE                               (0x20A0000u)
/** Peripheral GPIO2 base pointer */
#define GPIO2                                    ((GPIO_Type *)GPIO2_BASE)
/** Peripheral GPIO3 base address */
#define GPIO3_BASE                               (0x20A4000u)
/** Peripheral GPIO3 base pointer */
#define GPIO3                                    ((GPIO_Type *)GPIO3_BASE)
/** Peripheral GPIO4 base address */
#define GPIO4_BASE                               (0x20A8000u)
/** Peripheral GPIO4 base pointer */
#define GPIO4                                    ((GPIO_Type *)GPIO4_BASE)
/** Peripheral GPIO5 base address */
#define GPIO5_BASE                               (0x20AC000u)
/** Peripheral GPIO5 base pointer */
#define GPIO5                                    ((GPIO_Type *)GPIO5_BASE)
/** Array initializer of GPIO peripheral base addresses */
#define GPIO_BASE_ADDRS                          { 0u, GPIO1_BASE, GPIO2_BASE, GPIO3_BASE, GPIO4_BASE, GPIO5_BASE }
/** Array initializer of GPIO peripheral base pointers */
#define GPIO_BASE_PTRS                           { (GPIO_Type *)0u, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5 }
/** Interrupt vectors for the GPIO peripheral type */
#define GPIO_IRQS                                { NotAvail_IRQn, GPIO1_INT0_IRQn, GPIO1_INT1_IRQn, GPIO1_INT2_IRQn, GPIO1_INT3_IRQn, GPIO1_INT4_IRQn, GPIO1_INT5_IRQn, GPIO1_INT6_IRQn, GPIO1_INT7_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn }
#define GPIO_COMBINED_IRQS                       { NotAvail_IRQn, GPIO1_Combined_0_15_IRQn, GPIO1_Combined_16_31_IRQn, GPIO2_Combined_0_15_IRQn, GPIO2_Combined_16_31_IRQn, GPIO3_Combined_0_15_IRQn, GPIO3_Combined_16_31_IRQn, GPIO4_Combined_0_15_IRQn, GPIO4_Combined_16_31_IRQn, GPIO5_Combined_0_15_IRQn, GPIO5_Combined_16_31_IRQn }


/*! @brief GPIO direction definition. */
typedef enum _gpio_pin_direction
{
    kGPIO_DigitalInput  = 0U, /*!< Set current pin as digital input.*/
    kGPIO_DigitalOutput = 1U, /*!< Set current pin as digital output.*/
} gpio_pin_direction_t;

/*! @brief GPIO interrupt mode definition. */
typedef enum _gpio_interrupt_mode
{
    kGPIO_NoIntmode = 0U, /*!< Set current pin general IO functionality.*/
    kGPIO_IntLowLevel = 1U, /*!< Set current pin interrupt is low-level sensitive.*/
    kGPIO_IntHighLevel = 2U, /*!< Set current pin interrupt is high-level sensitive.*/
    kGPIO_IntRisingEdge = 3U, /*!< Set current pin interrupt is rising-edge sensitive.*/
    kGPIO_IntFallingEdge = 4U, /*!< Set current pin interrupt is falling-edge sensitive.*/
    kGPIO_IntRisingOrFallingEdge = 5U, /*!< Enable the edge select bit to override the ICR register's configuration.*/
} gpio_interrupt_mode_t;

/*! @brief GPIO Init structure definition. */
typedef struct _gpio_pin_config
{
    gpio_pin_direction_t  direction;     /*!< Specifies the pin direction. */
    uint8_t outputLogic; /*!< Set a default output logic, which has no use in input */
    gpio_interrupt_mode_t interruptMode; /*!< Specifies the pin interrupt mode, a value of @ref gpio_interrupt_mode_t. */
} gpio_pin_config_t;


/*******************************************************************************
 * API
 ******************************************************************************/

/*!
 * @brief Initializes the GPIO peripheral according to the specified
 *        parameters in the initConfig.
 *
 * @param base GPIO base pointer.
 * @param pin Specifies the pin number
 * @param initConfig pointer to a @ref gpio_pin_config_t structure that
 *        contains the configuration information.
 */
void GPIO_PinInit(GPIO_Type* base, uint32_t pin, const gpio_pin_config_t* Config);

/*!
 * @brief Sets the output level of the individual GPIO pin to logic 1 or 0.
 *
 * @param base GPIO base pointer.
 * @param pin GPIO port pin number.
 * @param output GPIOpin output logic level.
 *        - 0: corresponding pin output low-logic level.
 *        - 1: corresponding pin output high-logic level. */
void GPIO_WritePinOutput(GPIO_Type* base, uint32_t pin, uint8_t output);

/*!
 * @brief Reads the current input value of the GPIO port.
 *
 * @param base GPIO base pointer.
 * @param pin GPIO port pin number.
 * @retval GPIO port input value.
 */
uint32_t GPIO_ReadPinInput(GPIO_Type* base, uint32_t pin);

/*!
 * @brief Reads the current GPIO pin pad status.
 *
 * @param base GPIO base pointer.
 * @param pin GPIO port pin number.
 * @retval GPIO pin pad status value.
 */
uint32_t GPIO_ReadPadStatus(GPIO_Type* base, uint32_t pin);

/*!
 * @brief Sets the output level of the multiple GPIO pins to the logic 1.
 *
 * @param base GPIO peripheral base pointer (GPIO1, GPIO2, GPIO3, and so on.)
 * @param pin  GPIO port pin number
 */
static inline void GPIO_SetPinsOutput(GPIO_Type* base, uint32_t pin)
{
    base->DR |= (1U << pin);
}

/*!
 * @brief Sets the output level of the multiple GPIO pins to the logic 0.
 *
 * @param base GPIO peripheral base pointer (GPIO1, GPIO2, GPIO3, and so on.)
 * @param pin  GPIO port pin number
 */
static inline void GPIO_ClearPinsOutput(GPIO_Type* base, uint32_t pin)
{
    base->DR &= ~(1U << pin);
}

/*!
 * @brief Sets the current pin interrupt mode.
 *
 * @param base GPIO base pointer.
 * @param pin GPIO port pin number.
 * @param pininterruptMode pointer to a @ref gpio_interrupt_mode_t structure
 *        that contains the interrupt mode information. 
 */
void GPIO_SetPinInterruptConfig(GPIO_Type* base, uint32_t pin, gpio_interrupt_mode_t pinInterruptMode);

/*!
 * @brief Enables the specific pin interrupt.
 *
 * @param base GPIO base pointer.
 * @param pin  GPIO port pin number.
 */ 
static inline void GPIO_EnableInterrupts(GPIO_Type* base, uint32_t pin)
{ 
    base->IMR |= (1U << pin);
}

/*!
 * @brief Disables the specific pin interrupt.
 *
 * @param base GPIO base pointer.
 * @param pin  GPIO port pin number.
 */ 
static inline void GPIO_DisableInterrupts(GPIO_Type* base, uint32_t pin)
{ 
    base->IMR &= ~(1U << pin);
}

/*!
 * @brief Reads individual pin interrupt status.
 *
 * @param base GPIO base pointer.
 * @param pin  GPIO port pin number.
 * @retval current pin interrupt status flag.
 */
static inline uint32_t GPIO_GetPinsInterruptFlags(GPIO_Type* base, uint32_t pin)
{
    return (((base->ISR) >> pin) & 0x1U);
}

/*!
 * @brief Clears pin interrupt flag. Status flags are cleared by
 *        writing a 1 to the corresponding bit position.
 *
 * @param base GPIO base pointer.
 * @param pin  GPIO port pin number.
 */
static inline void GPIO_ClearPinsInterruptFlags(GPIO_Type* base, uint32_t pin)
{
    base->ISR |= (1 << pin);
}



#endif