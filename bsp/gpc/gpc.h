#ifndef __GPC_H__
#define __GPC_H__

#include "common.h"
#include "gic.h"

/* ----------------------------------------------------------------------------
   -- GPC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPC_Peripheral_Access_Layer GPC Peripheral Access Layer
 * @{
 */

/** GPC - Register Layout Typedef */
typedef struct {
  __IO uint32_t CNTR;                              /**< GPC Interface control register, offset: 0x0 */
  __IO uint32_t PGR;                               /**< GPC Power Gating Register, offset: 0x4 */
  __IO uint32_t IMR[4];                            /**< IRQ masking register 1..IRQ masking register 4, array offset: 0x8, array step: 0x4 */
  __I  uint32_t ISR[4];                            /**< IRQ status resister 1..IRQ status resister 4, array offset: 0x18, array step: 0x4 */
} GPC_Type;

/* ----------------------------------------------------------------------------
   -- GPC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup GPC_Register_Masks GPC Register Masks
 * @{
 */

/*! @name CNTR - GPC Interface control register */
#define GPC_CNTR_MEGA_PDN_REQ_MASK               (0x4U)
#define GPC_CNTR_MEGA_PDN_REQ_SHIFT              (2U)
#define GPC_CNTR_MEGA_PDN_REQ(x)                 (((uint32_t)(((uint32_t)(x)) << GPC_CNTR_MEGA_PDN_REQ_SHIFT)) & GPC_CNTR_MEGA_PDN_REQ_MASK)
#define GPC_CNTR_MEGA_PUP_REQ_MASK               (0x8U)
#define GPC_CNTR_MEGA_PUP_REQ_SHIFT              (3U)
#define GPC_CNTR_MEGA_PUP_REQ(x)                 (((uint32_t)(((uint32_t)(x)) << GPC_CNTR_MEGA_PUP_REQ_SHIFT)) & GPC_CNTR_MEGA_PUP_REQ_MASK)
#define GPC_CNTR_DISPLAY_PDN_REQ_MASK            (0x10U)
#define GPC_CNTR_DISPLAY_PDN_REQ_SHIFT           (4U)
#define GPC_CNTR_DISPLAY_PDN_REQ(x)              (((uint32_t)(((uint32_t)(x)) << GPC_CNTR_DISPLAY_PDN_REQ_SHIFT)) & GPC_CNTR_DISPLAY_PDN_REQ_MASK)
#define GPC_CNTR_DISPLAY_PUP_REQ_MASK            (0x20U)
#define GPC_CNTR_DISPLAY_PUP_REQ_SHIFT           (5U)
#define GPC_CNTR_DISPLAY_PUP_REQ(x)              (((uint32_t)(((uint32_t)(x)) << GPC_CNTR_DISPLAY_PUP_REQ_SHIFT)) & GPC_CNTR_DISPLAY_PUP_REQ_MASK)
#define GPC_CNTR_VADC_ANALOG_OFF_MASK            (0x20000U)
#define GPC_CNTR_VADC_ANALOG_OFF_SHIFT           (17U)
#define GPC_CNTR_VADC_ANALOG_OFF(x)              (((uint32_t)(((uint32_t)(x)) << GPC_CNTR_VADC_ANALOG_OFF_SHIFT)) & GPC_CNTR_VADC_ANALOG_OFF_MASK)
#define GPC_CNTR_VADC_EXT_PWD_N_MASK             (0x40000U)
#define GPC_CNTR_VADC_EXT_PWD_N_SHIFT            (18U)
#define GPC_CNTR_VADC_EXT_PWD_N(x)               (((uint32_t)(((uint32_t)(x)) << GPC_CNTR_VADC_EXT_PWD_N_SHIFT)) & GPC_CNTR_VADC_EXT_PWD_N_MASK)
#define GPC_CNTR_GPCIRQM_MASK                    (0x200000U)
#define GPC_CNTR_GPCIRQM_SHIFT                   (21U)
#define GPC_CNTR_GPCIRQM(x)                      (((uint32_t)(((uint32_t)(x)) << GPC_CNTR_GPCIRQM_SHIFT)) & GPC_CNTR_GPCIRQM_MASK)
#define GPC_CNTR_L2_PGE_MASK                     (0x400000U)
#define GPC_CNTR_L2_PGE_SHIFT                    (22U)
#define GPC_CNTR_L2_PGE(x)                       (((uint32_t)(((uint32_t)(x)) << GPC_CNTR_L2_PGE_SHIFT)) & GPC_CNTR_L2_PGE_MASK)

/*! @name PGR - GPC Power Gating Register */
#define GPC_PGR_DRCIC_MASK                       (0x60000000U)
#define GPC_PGR_DRCIC_SHIFT                      (29U)
#define GPC_PGR_DRCIC(x)                         (((uint32_t)(((uint32_t)(x)) << GPC_PGR_DRCIC_SHIFT)) & GPC_PGR_DRCIC_MASK)

/*! @name IMR - IRQ masking register 1..IRQ masking register 4 */
#define GPC_IMR_IMR1_MASK                        (0xFFFFFFFFU)
#define GPC_IMR_IMR1_SHIFT                       (0U)
#define GPC_IMR_IMR1(x)                          (((uint32_t)(((uint32_t)(x)) << GPC_IMR_IMR1_SHIFT)) & GPC_IMR_IMR1_MASK)
#define GPC_IMR_IMR2_MASK                        (0xFFFFFFFFU)
#define GPC_IMR_IMR2_SHIFT                       (0U)
#define GPC_IMR_IMR2(x)                          (((uint32_t)(((uint32_t)(x)) << GPC_IMR_IMR2_SHIFT)) & GPC_IMR_IMR2_MASK)
#define GPC_IMR_IMR3_MASK                        (0xFFFFFFFFU)
#define GPC_IMR_IMR3_SHIFT                       (0U)
#define GPC_IMR_IMR3(x)                          (((uint32_t)(((uint32_t)(x)) << GPC_IMR_IMR3_SHIFT)) & GPC_IMR_IMR3_MASK)
#define GPC_IMR_IMR4_MASK                        (0xFFFFFFFFU)
#define GPC_IMR_IMR4_SHIFT                       (0U)
#define GPC_IMR_IMR4(x)                          (((uint32_t)(((uint32_t)(x)) << GPC_IMR_IMR4_SHIFT)) & GPC_IMR_IMR4_MASK)

/* The count of GPC_IMR */
#define GPC_IMR_COUNT                            (4U)

/*! @name ISR - IRQ status resister 1..IRQ status resister 4 */
#define GPC_ISR_ISR1_MASK                        (0xFFFFFFFFU)
#define GPC_ISR_ISR1_SHIFT                       (0U)
#define GPC_ISR_ISR1(x)                          (((uint32_t)(((uint32_t)(x)) << GPC_ISR_ISR1_SHIFT)) & GPC_ISR_ISR1_MASK)
#define GPC_ISR_ISR2_MASK                        (0xFFFFFFFFU)
#define GPC_ISR_ISR2_SHIFT                       (0U)
#define GPC_ISR_ISR2(x)                          (((uint32_t)(((uint32_t)(x)) << GPC_ISR_ISR2_SHIFT)) & GPC_ISR_ISR2_MASK)
#define GPC_ISR_ISR3_MASK                        (0xFFFFFFFFU)
#define GPC_ISR_ISR3_SHIFT                       (0U)
#define GPC_ISR_ISR3(x)                          (((uint32_t)(((uint32_t)(x)) << GPC_ISR_ISR3_SHIFT)) & GPC_ISR_ISR3_MASK)
#define GPC_ISR_ISR4_MASK                        (0xFFFFFFFFU)
#define GPC_ISR_ISR4_SHIFT                       (0U)
#define GPC_ISR_ISR4(x)                          (((uint32_t)(((uint32_t)(x)) << GPC_ISR_ISR4_SHIFT)) & GPC_ISR_ISR4_MASK)

/* The count of GPC_ISR */
#define GPC_ISR_COUNT                            (4U)

/*!
 * @}
 */ /* end of group GPC_Register_Masks */


/* GPC - Peripheral instance base addresses */
/** Peripheral GPC base address */
#define GPC_BASE                                 (0x20DC000u)
/** Peripheral GPC base pointer */
#define GPC                                      ((GPC_Type *)GPC_BASE)
/** Array initializer of GPC peripheral base addresses */
#define GPC_BASE_ADDRS                           { GPC_BASE }
/** Array initializer of GPC peripheral base pointers */
#define GPC_BASE_PTRS                            { GPC }
/** Interrupt vectors for the GPC peripheral type */
#define GPC_IRQS                                 { GPC_IRQn }

/*!
 * @}
 */ /* end of group GPC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- PGC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PGC_Peripheral_Access_Layer PGC Peripheral Access Layer
 * @{
 */

/** PGC - Register Layout Typedef */
typedef struct {
  __IO uint32_t MEGA_CTRL;                         /**< PGC Mega Control Register, offset: 0x0 */
  __IO uint32_t MEGA_PUPSCR;                       /**< PGC Mega Power Up Sequence Control Register, offset: 0x4 */
  __IO uint32_t MEGA_PDNSCR;                       /**< PGC Mega Pull Down Sequence Control Register, offset: 0x8 */
  __IO uint32_t MEGA_SR;                           /**< PGC Mega Power Gating Controller Status Register, offset: 0xC */
       uint8_t RESERVED_0[112];
  __IO uint32_t CPU_CTRL;                          /**< PGC CPU Control Register, offset: 0x80 */
  __IO uint32_t CPU_PUPSCR;                        /**< PGC CPU Power Up Sequence Control Register, offset: 0x84 */
  __IO uint32_t CPU_PDNSCR;                        /**< PGC CPU Pull Down Sequence Control Register, offset: 0x88 */
  __IO uint32_t CPU_SR;                            /**< PGC CPU Power Gating Controller Status Register, offset: 0x8C */
} PGC_Type;

/* ----------------------------------------------------------------------------
   -- PGC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PGC_Register_Masks PGC Register Masks
 * @{
 */

/*! @name MEGA_CTRL - PGC Mega Control Register */
#define PGC_MEGA_CTRL_PCR_MASK                   (0x1U)
#define PGC_MEGA_CTRL_PCR_SHIFT                  (0U)
#define PGC_MEGA_CTRL_PCR(x)                     (((uint32_t)(((uint32_t)(x)) << PGC_MEGA_CTRL_PCR_SHIFT)) & PGC_MEGA_CTRL_PCR_MASK)

/*! @name MEGA_PUPSCR - PGC Mega Power Up Sequence Control Register */
#define PGC_MEGA_PUPSCR_SW_MASK                  (0x3FU)
#define PGC_MEGA_PUPSCR_SW_SHIFT                 (0U)
#define PGC_MEGA_PUPSCR_SW(x)                    (((uint32_t)(((uint32_t)(x)) << PGC_MEGA_PUPSCR_SW_SHIFT)) & PGC_MEGA_PUPSCR_SW_MASK)
#define PGC_MEGA_PUPSCR_SW2ISO_MASK              (0x3F00U)
#define PGC_MEGA_PUPSCR_SW2ISO_SHIFT             (8U)
#define PGC_MEGA_PUPSCR_SW2ISO(x)                (((uint32_t)(((uint32_t)(x)) << PGC_MEGA_PUPSCR_SW2ISO_SHIFT)) & PGC_MEGA_PUPSCR_SW2ISO_MASK)

/*! @name MEGA_PDNSCR - PGC Mega Pull Down Sequence Control Register */
#define PGC_MEGA_PDNSCR_ISO_MASK                 (0x3FU)
#define PGC_MEGA_PDNSCR_ISO_SHIFT                (0U)
#define PGC_MEGA_PDNSCR_ISO(x)                   (((uint32_t)(((uint32_t)(x)) << PGC_MEGA_PDNSCR_ISO_SHIFT)) & PGC_MEGA_PDNSCR_ISO_MASK)
#define PGC_MEGA_PDNSCR_ISO2SW_MASK              (0x3F00U)
#define PGC_MEGA_PDNSCR_ISO2SW_SHIFT             (8U)
#define PGC_MEGA_PDNSCR_ISO2SW(x)                (((uint32_t)(((uint32_t)(x)) << PGC_MEGA_PDNSCR_ISO2SW_SHIFT)) & PGC_MEGA_PDNSCR_ISO2SW_MASK)

/*! @name MEGA_SR - PGC Mega Power Gating Controller Status Register */
#define PGC_MEGA_SR_PSR_MASK                     (0x1U)
#define PGC_MEGA_SR_PSR_SHIFT                    (0U)
#define PGC_MEGA_SR_PSR(x)                       (((uint32_t)(((uint32_t)(x)) << PGC_MEGA_SR_PSR_SHIFT)) & PGC_MEGA_SR_PSR_MASK)

/*! @name CPU_CTRL - PGC CPU Control Register */
#define PGC_CPU_CTRL_PCR_MASK                    (0x1U)
#define PGC_CPU_CTRL_PCR_SHIFT                   (0U)
#define PGC_CPU_CTRL_PCR(x)                      (((uint32_t)(((uint32_t)(x)) << PGC_CPU_CTRL_PCR_SHIFT)) & PGC_CPU_CTRL_PCR_MASK)

/*! @name CPU_PUPSCR - PGC CPU Power Up Sequence Control Register */
#define PGC_CPU_PUPSCR_SW_MASK                   (0x3FU)
#define PGC_CPU_PUPSCR_SW_SHIFT                  (0U)
#define PGC_CPU_PUPSCR_SW(x)                     (((uint32_t)(((uint32_t)(x)) << PGC_CPU_PUPSCR_SW_SHIFT)) & PGC_CPU_PUPSCR_SW_MASK)
#define PGC_CPU_PUPSCR_SW2ISO_MASK               (0x3F00U)
#define PGC_CPU_PUPSCR_SW2ISO_SHIFT              (8U)
#define PGC_CPU_PUPSCR_SW2ISO(x)                 (((uint32_t)(((uint32_t)(x)) << PGC_CPU_PUPSCR_SW2ISO_SHIFT)) & PGC_CPU_PUPSCR_SW2ISO_MASK)

/*! @name CPU_PDNSCR - PGC CPU Pull Down Sequence Control Register */
#define PGC_CPU_PDNSCR_ISO_MASK                  (0x3FU)
#define PGC_CPU_PDNSCR_ISO_SHIFT                 (0U)
#define PGC_CPU_PDNSCR_ISO(x)                    (((uint32_t)(((uint32_t)(x)) << PGC_CPU_PDNSCR_ISO_SHIFT)) & PGC_CPU_PDNSCR_ISO_MASK)
#define PGC_CPU_PDNSCR_ISO2SW_MASK               (0x3F00U)
#define PGC_CPU_PDNSCR_ISO2SW_SHIFT              (8U)
#define PGC_CPU_PDNSCR_ISO2SW(x)                 (((uint32_t)(((uint32_t)(x)) << PGC_CPU_PDNSCR_ISO2SW_SHIFT)) & PGC_CPU_PDNSCR_ISO2SW_MASK)

/*! @name CPU_SR - PGC CPU Power Gating Controller Status Register */
#define PGC_CPU_SR_PSR_MASK                      (0x1U)
#define PGC_CPU_SR_PSR_SHIFT                     (0U)
#define PGC_CPU_SR_PSR(x)                        (((uint32_t)(((uint32_t)(x)) << PGC_CPU_SR_PSR_SHIFT)) & PGC_CPU_SR_PSR_MASK)

/*!
 * @}
 */ /* end of group PGC_Register_Masks */

/* PGC - Peripheral instance base addresses */
/** Peripheral PGC base address */
#define PGC_BASE                                 (0x20DC220u)
/** Peripheral PGC base pointer */
#define PGC                                      ((PGC_Type *)PGC_BASE)
/** Array initializer of PGC peripheral base addresses */
#define PGC_BASE_ADDRS                           { PGC_BASE }
/** Array initializer of PGC peripheral base pointers */
#define PGC_BASE_PTRS                            { PGC }

/*!
 * @}
 */ /* end of group PGC_Peripheral_Access_Layer */


/*******************************************************************************
 * API
 ******************************************************************************/
/*!
 * @brief Allow all the IRQ/Events within the charge of GPC.
 *
 * @param base GPC peripheral base address.
 */
static inline void GPC_AllowIRQs(GPC_Type *base)
{
    base->CNTR &= ~GPC_CNTR_GPCIRQM_MASK; /* Events would not be masked. */
}

/*!
 * @brief Disallow all the IRQ/Events within the charge of GPC.
 *
 * @param base GPC peripheral base address.
 */
static inline void GPC_DisallowIRQs(GPC_Type *base)
{
    base->CNTR |= GPC_CNTR_GPCIRQM_MASK; /* Mask all the events. */
}

/*!
 * @brief Enable the IRQ.
 *
 * @param base GPC peripheral base address.
 * @param irqId ID number of IRQ to be enabled, available range is 32-159.
 */
void GPC_EnableIRQ(GPC_Type *base, uint32_t irqId);

/*!
 * @brief Disable the IRQ.
 *
 * @param base GPC peripheral base address.
 * @param irqId ID number of IRQ to be disabled, available range is 32-159.
 */
void GPC_DisableIRQ(GPC_Type *base, uint32_t irqId);

/*!
 * @brief Get the IRQ/Event flag.
 *
 * @param base GPC peripheral base address.
 * @param irqId ID number of IRQ to be enabled, available range is 32-159.
 * @return Indicated IRQ/Event is asserted or not.
 */
bool GPC_GetIRQStatusFlag(GPC_Type *base, uint32_t irqId);

/*!
 * @brief L2 Cache Power Gate Enable
 *
 * This function configures the L2 cache if it will keep power when in low power mode.
 * When the L2 cache power is OFF, L2 cache will be power down once when CPU core is power down
 * and will be hardware invalidated automatically when CPU core is re-power up.
 * When the L2 cache power is ON, L2 cache will keep power on even if CPU core is power down and
 * will not be hardware invalidated.
 * When CPU core is re-power up, the default setting is OFF.
 *
 * @param base GPC peripheral base address.
 * @param enable Enable the request or not.
 */
static inline void GPC_RequestL2CachePowerDown(GPC_Type *base, bool enable)
{
    if (enable)
    {
        base->CNTR |= GPC_CNTR_L2_PGE_MASK; /* OFF. */
    }
    else
    {
        base->CNTR &= ~GPC_CNTR_L2_PGE_MASK; /* ON. */
    }
}

/*!
 * @brief VADC power down.
 *
 * This function requests the VADC power down.
 *
 * @param base GPC peripheral base address.
 * @param enable Enable the request or not.
 */
static inline void GPC_RequestVADCPowerDown(GPC_Type *base, bool enable)
{
    if (enable)
    {
        base->CNTR &= ~GPC_CNTR_VADC_EXT_PWD_N_MASK; /* VADC power down. */
    }
    else
    {
        base->CNTR |= GPC_CNTR_VADC_EXT_PWD_N_MASK; /* VADC not power down. */
    }
}

/*!
 * @brief Checks if the VADC is power off.
 *
 * @param base GPC peripheral base address.
 * @return Whether the VADC is power off or not.
 */
static inline bool GPC_GetVADCPowerDownFlag(GPC_Type *base)
{
    return (GPC_CNTR_VADC_ANALOG_OFF_MASK == (GPC_CNTR_VADC_ANALOG_OFF_MASK & base->CNTR));
}

/*!
 * @brief Requests the display power switch sequence.
 *
 * @param base GPC peripheral base address.
 * @param enable Enable the power on sequence, or the power down sequence.
 */
static inline void GPC_RequestDisplayPowerOn(GPC_Type *base, bool enable)
{
    if (enable)
    {
        base->CNTR |= GPC_CNTR_DISPLAY_PUP_REQ_MASK; /* Power on sequence. */
    }
    else
    {
        base->CNTR |= GPC_CNTR_DISPLAY_PDN_REQ_MASK; /* Power down sequence. */
    }
}

/*!
 * @brief Requests the MEGA power switch sequence.
 *
 * @param base GPC peripheral base address.
 * @param enable Enable the power on sequence, or the power down sequence.
 */
static inline void GPC_RequestMEGAPowerOn(GPC_Type *base, bool enable)
{
    if (enable)
    {
        base->CNTR |= GPC_CNTR_MEGA_PUP_REQ_MASK; /* Power on sequence. */
    }
    else
    {
        base->CNTR |= GPC_CNTR_MEGA_PDN_REQ_MASK; /* Power down sequence. */
    }
}



#endif