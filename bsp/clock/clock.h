#ifndef __CLOCK_H__
#define __CLOCK_H__

#include "common.h"
#include "gic.h"
#include "pmu.h"
#include "usb.h"
/* ----------------------------------------------------------------------------
   -- CCM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_Peripheral_Access_Layer CCM Peripheral Access Layer
 * @{
 */

/** CCM - Register Layout Typedef */
typedef struct {
  __IO uint32_t CCR;                               /**< CCM Control Register, offset: 0x0 */
  __IO uint32_t CCDR;                              /**< CCM Control Divider Register, offset: 0x4 */
  __I  uint32_t CSR;                               /**< CCM Status Register, offset: 0x8 */
  __IO uint32_t CCSR;                              /**< CCM Clock Switcher Register, offset: 0xC */
  __IO uint32_t CACRR;                             /**< CCM Arm Clock Root Register, offset: 0x10 */
  __IO uint32_t CBCDR;                             /**< CCM Bus Clock Divider Register, offset: 0x14 */
  __IO uint32_t CBCMR;                             /**< CCM Bus Clock Multiplexer Register, offset: 0x18 */
  __IO uint32_t CSCMR1;                            /**< CCM Serial Clock Multiplexer Register 1, offset: 0x1C */
  __IO uint32_t CSCMR2;                            /**< CCM Serial Clock Multiplexer Register 2, offset: 0x20 */
  __IO uint32_t CSCDR1;                            /**< CCM Serial Clock Divider Register 1, offset: 0x24 */
  __IO uint32_t CS1CDR;                            /**< CCM SAI1 Clock Divider Register, offset: 0x28 */
  __IO uint32_t CS2CDR;                            /**< CCM SAI2 Clock Divider Register, offset: 0x2C */
  __IO uint32_t CDCDR;                             /**< CCM D1 Clock Divider Register, offset: 0x30 */
  __IO uint32_t CHSCCDR;                           /**< CCM HSC Clock Divider Register, offset: 0x34 */
  __IO uint32_t CSCDR2;                            /**< CCM Serial Clock Divider Register 2, offset: 0x38 */
  __IO uint32_t CSCDR3;                            /**< CCM Serial Clock Divider Register 3, offset: 0x3C */
       uint8_t RESERVED_0[8];
  __I  uint32_t CDHIPR;                            /**< CCM Divider Handshake In-Process Register, offset: 0x48 */
       uint8_t RESERVED_1[8];
  __IO uint32_t CLPCR;                             /**< CCM Low Power Control Register, offset: 0x54 */
  __IO uint32_t CISR;                              /**< CCM Interrupt Status Register, offset: 0x58 */
  __IO uint32_t CIMR;                              /**< CCM Interrupt Mask Register, offset: 0x5C */
  __IO uint32_t CCOSR;                             /**< CCM Clock Output Source Register, offset: 0x60 */
  __IO uint32_t CGPR;                              /**< CCM General Purpose Register, offset: 0x64 */
  __IO uint32_t CCGR0;                             /**< CCM Clock Gating Register 0, offset: 0x68 */
  __IO uint32_t CCGR1;                             /**< CCM Clock Gating Register 1, offset: 0x6C */
  __IO uint32_t CCGR2;                             /**< CCM Clock Gating Register 2, offset: 0x70 */
  __IO uint32_t CCGR3;                             /**< CCM Clock Gating Register 3, offset: 0x74 */
  __IO uint32_t CCGR4;                             /**< CCM Clock Gating Register 4, offset: 0x78 */
  __IO uint32_t CCGR5;                             /**< CCM Clock Gating Register 5, offset: 0x7C */
  __IO uint32_t CCGR6;                             /**< CCM Clock Gating Register 6, offset: 0x80 */
       uint8_t RESERVED_2[4];
  __IO uint32_t CMEOR;                             /**< CCM Module Enable Overide Register, offset: 0x88 */
} CCM_Type;


/* ----------------------------------------------------------------------------
   -- CCM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_Register_Masks CCM Register Masks
 * @{
 */

/*! @name CCR - CCM Control Register */
#define CCM_CCR_OSCNT_MASK                       (0x7FU)
#define CCM_CCR_OSCNT_SHIFT                      (0U)
#define CCM_CCR_OSCNT(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCR_OSCNT_SHIFT)) & CCM_CCR_OSCNT_MASK)
#define CCM_CCR_COSC_EN_MASK                     (0x1000U)
#define CCM_CCR_COSC_EN_SHIFT                    (12U)
#define CCM_CCR_COSC_EN(x)                       (((uint32_t)(((uint32_t)(x)) << CCM_CCR_COSC_EN_SHIFT)) & CCM_CCR_COSC_EN_MASK)
#define CCM_CCR_REG_BYPASS_COUNT_MASK            (0x7E00000U)
#define CCM_CCR_REG_BYPASS_COUNT_SHIFT           (21U)
#define CCM_CCR_REG_BYPASS_COUNT(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CCR_REG_BYPASS_COUNT_SHIFT)) & CCM_CCR_REG_BYPASS_COUNT_MASK)
#define CCM_CCR_RBC_EN_MASK                      (0x8000000U)
#define CCM_CCR_RBC_EN_SHIFT                     (27U)
#define CCM_CCR_RBC_EN(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCR_RBC_EN_SHIFT)) & CCM_CCR_RBC_EN_MASK)

/*! @name CCDR - CCM Control Divider Register */
#define CCM_CCDR_MMDC_CH1_MASK_MASK              (0x10000U)
#define CCM_CCDR_MMDC_CH1_MASK_SHIFT             (16U)
#define CCM_CCDR_MMDC_CH1_MASK(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CCDR_MMDC_CH1_MASK_SHIFT)) & CCM_CCDR_MMDC_CH1_MASK_MASK)
#define CCM_CCDR_MMDC_CH0_MASK_MASK              (0x20000U)
#define CCM_CCDR_MMDC_CH0_MASK_SHIFT             (17U)
#define CCM_CCDR_MMDC_CH0_MASK(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CCDR_MMDC_CH0_MASK_SHIFT)) & CCM_CCDR_MMDC_CH0_MASK_MASK)

/*! @name CSR - CCM Status Register */
#define CCM_CSR_REF_EN_B_MASK                    (0x1U)
#define CCM_CSR_REF_EN_B_SHIFT                   (0U)
#define CCM_CSR_REF_EN_B(x)                      (((uint32_t)(((uint32_t)(x)) << CCM_CSR_REF_EN_B_SHIFT)) & CCM_CSR_REF_EN_B_MASK)
#define CCM_CSR_COSC_READY_MASK                  (0x20U)
#define CCM_CSR_COSC_READY_SHIFT                 (5U)
#define CCM_CSR_COSC_READY(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CSR_COSC_READY_SHIFT)) & CCM_CSR_COSC_READY_MASK)

/*! @name CCSR - CCM Clock Switcher Register */
#define CCM_CCSR_PLL3_SW_CLK_SEL_MASK            (0x1U)
#define CCM_CCSR_PLL3_SW_CLK_SEL_SHIFT           (0U)
#define CCM_CCSR_PLL3_SW_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CCSR_PLL3_SW_CLK_SEL_SHIFT)) & CCM_CCSR_PLL3_SW_CLK_SEL_MASK)
#define CCM_CCSR_PLL1_SW_CLK_SEL_MASK            (0x4U)
#define CCM_CCSR_PLL1_SW_CLK_SEL_SHIFT           (2U)
#define CCM_CCSR_PLL1_SW_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CCSR_PLL1_SW_CLK_SEL_SHIFT)) & CCM_CCSR_PLL1_SW_CLK_SEL_MASK)
#define CCM_CCSR_SECONDARY_CLK_SEL_MASK          (0x8U)
#define CCM_CCSR_SECONDARY_CLK_SEL_SHIFT         (3U)
#define CCM_CCSR_SECONDARY_CLK_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CCSR_SECONDARY_CLK_SEL_SHIFT)) & CCM_CCSR_SECONDARY_CLK_SEL_MASK)
#define CCM_CCSR_STEP_SEL_MASK                   (0x100U)
#define CCM_CCSR_STEP_SEL_SHIFT                  (8U)
#define CCM_CCSR_STEP_SEL(x)                     (((uint32_t)(((uint32_t)(x)) << CCM_CCSR_STEP_SEL_SHIFT)) & CCM_CCSR_STEP_SEL_MASK)

/*! @name CACRR - CCM Arm Clock Root Register */
#define CCM_CACRR_ARM_PODF_MASK                  (0x7U)
#define CCM_CACRR_ARM_PODF_SHIFT                 (0U)
#define CCM_CACRR_ARM_PODF(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CACRR_ARM_PODF_SHIFT)) & CCM_CACRR_ARM_PODF_MASK)

/*! @name CBCDR - CCM Bus Clock Divider Register */
#define CCM_CBCDR_PERIPH2_CLK2_PODF_MASK         (0x7U)
#define CCM_CBCDR_PERIPH2_CLK2_PODF_SHIFT        (0U)
#define CCM_CBCDR_PERIPH2_CLK2_PODF(x)           (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_PERIPH2_CLK2_PODF_SHIFT)) & CCM_CBCDR_PERIPH2_CLK2_PODF_MASK)
#define CCM_CBCDR_FABRIC_MMDC_PODF_MASK          (0x38U)
#define CCM_CBCDR_FABRIC_MMDC_PODF_SHIFT         (3U)
#define CCM_CBCDR_FABRIC_MMDC_PODF(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_FABRIC_MMDC_PODF_SHIFT)) & CCM_CBCDR_FABRIC_MMDC_PODF_MASK)
#define CCM_CBCDR_AXI_SEL_MASK                   (0x40U)
#define CCM_CBCDR_AXI_SEL_SHIFT                  (6U)
#define CCM_CBCDR_AXI_SEL(x)                     (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_AXI_SEL_SHIFT)) & CCM_CBCDR_AXI_SEL_MASK)
#define CCM_CBCDR_AXI_ALT_SEL_MASK               (0x80U)
#define CCM_CBCDR_AXI_ALT_SEL_SHIFT              (7U)
#define CCM_CBCDR_AXI_ALT_SEL(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_AXI_ALT_SEL_SHIFT)) & CCM_CBCDR_AXI_ALT_SEL_MASK)
#define CCM_CBCDR_IPG_PODF_MASK                  (0x300U)
#define CCM_CBCDR_IPG_PODF_SHIFT                 (8U)
#define CCM_CBCDR_IPG_PODF(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_IPG_PODF_SHIFT)) & CCM_CBCDR_IPG_PODF_MASK)
#define CCM_CBCDR_AHB_PODF_MASK                  (0x1C00U)
#define CCM_CBCDR_AHB_PODF_SHIFT                 (10U)
#define CCM_CBCDR_AHB_PODF(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_AHB_PODF_SHIFT)) & CCM_CBCDR_AHB_PODF_MASK)
#define CCM_CBCDR_AXI_PODF_MASK                  (0x70000U)
#define CCM_CBCDR_AXI_PODF_SHIFT                 (16U)
#define CCM_CBCDR_AXI_PODF(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_AXI_PODF_SHIFT)) & CCM_CBCDR_AXI_PODF_MASK)
#define CCM_CBCDR_PERIPH_CLK_SEL_MASK            (0x2000000U)
#define CCM_CBCDR_PERIPH_CLK_SEL_SHIFT           (25U)
#define CCM_CBCDR_PERIPH_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_PERIPH_CLK_SEL_SHIFT)) & CCM_CBCDR_PERIPH_CLK_SEL_MASK)
#define CCM_CBCDR_PERIPH2_CLK_SEL_MASK           (0x4000000U)
#define CCM_CBCDR_PERIPH2_CLK_SEL_SHIFT          (26U)
#define CCM_CBCDR_PERIPH2_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_PERIPH2_CLK_SEL_SHIFT)) & CCM_CBCDR_PERIPH2_CLK_SEL_MASK)
#define CCM_CBCDR_PERIPH_CLK2_PODF_MASK          (0x38000000U)
#define CCM_CBCDR_PERIPH_CLK2_PODF_SHIFT         (27U)
#define CCM_CBCDR_PERIPH_CLK2_PODF(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_PERIPH_CLK2_PODF_SHIFT)) & CCM_CBCDR_PERIPH_CLK2_PODF_MASK)

/*! @name CBCMR - CCM Bus Clock Multiplexer Register */
#define CCM_CBCMR_PERIPH_CLK2_SEL_MASK           (0x3000U)
#define CCM_CBCMR_PERIPH_CLK2_SEL_SHIFT          (12U)
#define CCM_CBCMR_PERIPH_CLK2_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_PERIPH_CLK2_SEL_SHIFT)) & CCM_CBCMR_PERIPH_CLK2_SEL_MASK)
#define CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK        (0xC0000U)
#define CCM_CBCMR_PRE_PERIPH_CLK_SEL_SHIFT       (18U)
#define CCM_CBCMR_PRE_PERIPH_CLK_SEL(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_PRE_PERIPH_CLK_SEL_SHIFT)) & CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK)
#define CCM_CBCMR_PERIPH2_CLK2_SEL_MASK          (0x100000U)
#define CCM_CBCMR_PERIPH2_CLK2_SEL_SHIFT         (20U)
#define CCM_CBCMR_PERIPH2_CLK2_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_PERIPH2_CLK2_SEL_SHIFT)) & CCM_CBCMR_PERIPH2_CLK2_SEL_MASK)
#define CCM_CBCMR_PRE_PERIPH2_CLK_SEL_MASK       (0x600000U)
#define CCM_CBCMR_PRE_PERIPH2_CLK_SEL_SHIFT      (21U)
#define CCM_CBCMR_PRE_PERIPH2_CLK_SEL(x)         (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_PRE_PERIPH2_CLK_SEL_SHIFT)) & CCM_CBCMR_PRE_PERIPH2_CLK_SEL_MASK)
#define CCM_CBCMR_LCDIF1_PODF_MASK               (0x3800000U)
#define CCM_CBCMR_LCDIF1_PODF_SHIFT              (23U)
#define CCM_CBCMR_LCDIF1_PODF(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_LCDIF1_PODF_SHIFT)) & CCM_CBCMR_LCDIF1_PODF_MASK)

/*! @name CSCMR1 - CCM Serial Clock Multiplexer Register 1 */
#define CCM_CSCMR1_PERCLK_PODF_MASK              (0x3FU)
#define CCM_CSCMR1_PERCLK_PODF_SHIFT             (0U)
#define CCM_CSCMR1_PERCLK_PODF(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_PERCLK_PODF_SHIFT)) & CCM_CSCMR1_PERCLK_PODF_MASK)
#define CCM_CSCMR1_PERCLK_CLK_SEL_MASK           (0x40U)
#define CCM_CSCMR1_PERCLK_CLK_SEL_SHIFT          (6U)
#define CCM_CSCMR1_PERCLK_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_PERCLK_CLK_SEL_SHIFT)) & CCM_CSCMR1_PERCLK_CLK_SEL_MASK)
#define CCM_CSCMR1_QSPI1_CLK_SEL_MASK            (0x380U)
#define CCM_CSCMR1_QSPI1_CLK_SEL_SHIFT           (7U)
#define CCM_CSCMR1_QSPI1_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_QSPI1_CLK_SEL_SHIFT)) & CCM_CSCMR1_QSPI1_CLK_SEL_MASK)
#define CCM_CSCMR1_SAI1_CLK_SEL_MASK             (0xC00U)
#define CCM_CSCMR1_SAI1_CLK_SEL_SHIFT            (10U)
#define CCM_CSCMR1_SAI1_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_SAI1_CLK_SEL_SHIFT)) & CCM_CSCMR1_SAI1_CLK_SEL_MASK)
#define CCM_CSCMR1_SAI2_CLK_SEL_MASK             (0x3000U)
#define CCM_CSCMR1_SAI2_CLK_SEL_SHIFT            (12U)
#define CCM_CSCMR1_SAI2_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_SAI2_CLK_SEL_SHIFT)) & CCM_CSCMR1_SAI2_CLK_SEL_MASK)
#define CCM_CSCMR1_SAI3_CLK_SEL_MASK             (0xC000U)
#define CCM_CSCMR1_SAI3_CLK_SEL_SHIFT            (14U)
#define CCM_CSCMR1_SAI3_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_SAI3_CLK_SEL_SHIFT)) & CCM_CSCMR1_SAI3_CLK_SEL_MASK)
#define CCM_CSCMR1_USDHC1_CLK_SEL_MASK           (0x10000U)
#define CCM_CSCMR1_USDHC1_CLK_SEL_SHIFT          (16U)
#define CCM_CSCMR1_USDHC1_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_USDHC1_CLK_SEL_SHIFT)) & CCM_CSCMR1_USDHC1_CLK_SEL_MASK)
#define CCM_CSCMR1_USDHC2_CLK_SEL_MASK           (0x20000U)
#define CCM_CSCMR1_USDHC2_CLK_SEL_SHIFT          (17U)
#define CCM_CSCMR1_USDHC2_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_USDHC2_CLK_SEL_SHIFT)) & CCM_CSCMR1_USDHC2_CLK_SEL_MASK)
#define CCM_CSCMR1_BCH_CLK_SEL_MASK              (0x40000U)
#define CCM_CSCMR1_BCH_CLK_SEL_SHIFT             (18U)
#define CCM_CSCMR1_BCH_CLK_SEL(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_BCH_CLK_SEL_SHIFT)) & CCM_CSCMR1_BCH_CLK_SEL_MASK)
#define CCM_CSCMR1_GPMI_CLK_SEL_MASK             (0x80000U)
#define CCM_CSCMR1_GPMI_CLK_SEL_SHIFT            (19U)
#define CCM_CSCMR1_GPMI_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_GPMI_CLK_SEL_SHIFT)) & CCM_CSCMR1_GPMI_CLK_SEL_MASK)
#define CCM_CSCMR1_ACLK_EIM_SLOW_PODF_MASK       (0x3800000U)
#define CCM_CSCMR1_ACLK_EIM_SLOW_PODF_SHIFT      (23U)
#define CCM_CSCMR1_ACLK_EIM_SLOW_PODF(x)         (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_ACLK_EIM_SLOW_PODF_SHIFT)) & CCM_CSCMR1_ACLK_EIM_SLOW_PODF_MASK)
#define CCM_CSCMR1_QSPI1_PODF_MASK               (0x1C000000U)
#define CCM_CSCMR1_QSPI1_PODF_SHIFT              (26U)
#define CCM_CSCMR1_QSPI1_PODF(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_QSPI1_PODF_SHIFT)) & CCM_CSCMR1_QSPI1_PODF_MASK)
#define CCM_CSCMR1_ACLK_EIM_SLOW_SEL_MASK        (0x60000000U)
#define CCM_CSCMR1_ACLK_EIM_SLOW_SEL_SHIFT       (29U)
#define CCM_CSCMR1_ACLK_EIM_SLOW_SEL(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_ACLK_EIM_SLOW_SEL_SHIFT)) & CCM_CSCMR1_ACLK_EIM_SLOW_SEL_MASK)

/*! @name CSCMR2 - CCM Serial Clock Multiplexer Register 2 */
#define CCM_CSCMR2_CAN_CLK_PODF_MASK             (0xFCU)
#define CCM_CSCMR2_CAN_CLK_PODF_SHIFT            (2U)
#define CCM_CSCMR2_CAN_CLK_PODF(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_CAN_CLK_PODF_SHIFT)) & CCM_CSCMR2_CAN_CLK_PODF_MASK)
#define CCM_CSCMR2_CAN_CLK_SEL_MASK              (0x300U)
#define CCM_CSCMR2_CAN_CLK_SEL_SHIFT             (8U)
#define CCM_CSCMR2_CAN_CLK_SEL(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_CAN_CLK_SEL_SHIFT)) & CCM_CSCMR2_CAN_CLK_SEL_MASK)
#define CCM_CSCMR2_LDB_DI0_DIV_MASK              (0x400U)
#define CCM_CSCMR2_LDB_DI0_DIV_SHIFT             (10U)
#define CCM_CSCMR2_LDB_DI0_DIV(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_LDB_DI0_DIV_SHIFT)) & CCM_CSCMR2_LDB_DI0_DIV_MASK)
#define CCM_CSCMR2_LDB_DI1_DIV_MASK              (0x800U)
#define CCM_CSCMR2_LDB_DI1_DIV_SHIFT             (11U)
#define CCM_CSCMR2_LDB_DI1_DIV(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_LDB_DI1_DIV_SHIFT)) & CCM_CSCMR2_LDB_DI1_DIV_MASK)
#define CCM_CSCMR2_ESAI_CLK_SEL_MASK             (0x180000U)
#define CCM_CSCMR2_ESAI_CLK_SEL_SHIFT            (19U)
#define CCM_CSCMR2_ESAI_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_ESAI_CLK_SEL_SHIFT)) & CCM_CSCMR2_ESAI_CLK_SEL_MASK)
#define CCM_CSCMR2_VID_CLK_SEL_MASK              (0xE00000U)
#define CCM_CSCMR2_VID_CLK_SEL_SHIFT             (21U)
#define CCM_CSCMR2_VID_CLK_SEL(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_VID_CLK_SEL_SHIFT)) & CCM_CSCMR2_VID_CLK_SEL_MASK)
#define CCM_CSCMR2_VID_CLK_PRE_PODF_MASK         (0x3000000U)
#define CCM_CSCMR2_VID_CLK_PRE_PODF_SHIFT        (24U)
#define CCM_CSCMR2_VID_CLK_PRE_PODF(x)           (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_VID_CLK_PRE_PODF_SHIFT)) & CCM_CSCMR2_VID_CLK_PRE_PODF_MASK)
#define CCM_CSCMR2_VID_CLK_PODF_MASK             (0x1C000000U)
#define CCM_CSCMR2_VID_CLK_PODF_SHIFT            (26U)
#define CCM_CSCMR2_VID_CLK_PODF(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_VID_CLK_PODF_SHIFT)) & CCM_CSCMR2_VID_CLK_PODF_MASK)

/*! @name CSCDR1 - CCM Serial Clock Divider Register 1 */
#define CCM_CSCDR1_UART_CLK_PODF_MASK            (0x3FU)
#define CCM_CSCDR1_UART_CLK_PODF_SHIFT           (0U)
#define CCM_CSCDR1_UART_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_UART_CLK_PODF_SHIFT)) & CCM_CSCDR1_UART_CLK_PODF_MASK)
#define CCM_CSCDR1_UART_CLK_SEL_MASK             (0x40U)
#define CCM_CSCDR1_UART_CLK_SEL_SHIFT            (6U)
#define CCM_CSCDR1_UART_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_UART_CLK_SEL_SHIFT)) & CCM_CSCDR1_UART_CLK_SEL_MASK)
#define CCM_CSCDR1_USDHC1_PODF_MASK              (0x3800U)
#define CCM_CSCDR1_USDHC1_PODF_SHIFT             (11U)
#define CCM_CSCDR1_USDHC1_PODF(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_USDHC1_PODF_SHIFT)) & CCM_CSCDR1_USDHC1_PODF_MASK)
#define CCM_CSCDR1_USDHC2_PODF_MASK              (0x70000U)
#define CCM_CSCDR1_USDHC2_PODF_SHIFT             (16U)
#define CCM_CSCDR1_USDHC2_PODF(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_USDHC2_PODF_SHIFT)) & CCM_CSCDR1_USDHC2_PODF_MASK)
#define CCM_CSCDR1_BCH_PODF_MASK                 (0x380000U)
#define CCM_CSCDR1_BCH_PODF_SHIFT                (19U)
#define CCM_CSCDR1_BCH_PODF(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_BCH_PODF_SHIFT)) & CCM_CSCDR1_BCH_PODF_MASK)
#define CCM_CSCDR1_GPMI_PODF_MASK                (0x1C00000U)
#define CCM_CSCDR1_GPMI_PODF_SHIFT               (22U)
#define CCM_CSCDR1_GPMI_PODF(x)                  (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_GPMI_PODF_SHIFT)) & CCM_CSCDR1_GPMI_PODF_MASK)

/*! @name CS1CDR - CCM SAI1 Clock Divider Register */
#define CCM_CS1CDR_SAI1_CLK_PODF_MASK            (0x3FU)
#define CCM_CS1CDR_SAI1_CLK_PODF_SHIFT           (0U)
#define CCM_CS1CDR_SAI1_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI1_CLK_PODF_SHIFT)) & CCM_CS1CDR_SAI1_CLK_PODF_MASK)
#define CCM_CS1CDR_SAI1_CLK_PRED_MASK            (0x1C0U)
#define CCM_CS1CDR_SAI1_CLK_PRED_SHIFT           (6U)
#define CCM_CS1CDR_SAI1_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI1_CLK_PRED_SHIFT)) & CCM_CS1CDR_SAI1_CLK_PRED_MASK)
#define CCM_CS1CDR_ESAI_CLK_PRED_MASK            (0xE00U)
#define CCM_CS1CDR_ESAI_CLK_PRED_SHIFT           (9U)
#define CCM_CS1CDR_ESAI_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_ESAI_CLK_PRED_SHIFT)) & CCM_CS1CDR_ESAI_CLK_PRED_MASK)
#define CCM_CS1CDR_SAI3_CLK_PODF_MASK            (0x3F0000U)
#define CCM_CS1CDR_SAI3_CLK_PODF_SHIFT           (16U)
#define CCM_CS1CDR_SAI3_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI3_CLK_PODF_SHIFT)) & CCM_CS1CDR_SAI3_CLK_PODF_MASK)
#define CCM_CS1CDR_SAI3_CLK_PRED_MASK            (0x1C00000U)
#define CCM_CS1CDR_SAI3_CLK_PRED_SHIFT           (22U)
#define CCM_CS1CDR_SAI3_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI3_CLK_PRED_SHIFT)) & CCM_CS1CDR_SAI3_CLK_PRED_MASK)
#define CCM_CS1CDR_ESAI_CLK_PODF_MASK            (0xE000000U)
#define CCM_CS1CDR_ESAI_CLK_PODF_SHIFT           (25U)
#define CCM_CS1CDR_ESAI_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_ESAI_CLK_PODF_SHIFT)) & CCM_CS1CDR_ESAI_CLK_PODF_MASK)

/*! @name CS2CDR - CCM SAI2 Clock Divider Register */
#define CCM_CS2CDR_SAI2_CLK_PODF_MASK            (0x3FU)
#define CCM_CS2CDR_SAI2_CLK_PODF_SHIFT           (0U)
#define CCM_CS2CDR_SAI2_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS2CDR_SAI2_CLK_PODF_SHIFT)) & CCM_CS2CDR_SAI2_CLK_PODF_MASK)
#define CCM_CS2CDR_SAI2_CLK_PRED_MASK            (0x1C0U)
#define CCM_CS2CDR_SAI2_CLK_PRED_SHIFT           (6U)
#define CCM_CS2CDR_SAI2_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS2CDR_SAI2_CLK_PRED_SHIFT)) & CCM_CS2CDR_SAI2_CLK_PRED_MASK)
#define CCM_CS2CDR_LDB_DI0_CLK_SEL_MASK          (0xE00U)
#define CCM_CS2CDR_LDB_DI0_CLK_SEL_SHIFT         (9U)
#define CCM_CS2CDR_LDB_DI0_CLK_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CS2CDR_LDB_DI0_CLK_SEL_SHIFT)) & CCM_CS2CDR_LDB_DI0_CLK_SEL_MASK)
#define CCM_CS2CDR_ENFC_CLK_SEL_MASK             (0x38000U)
#define CCM_CS2CDR_ENFC_CLK_SEL_SHIFT            (15U)
#define CCM_CS2CDR_ENFC_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CS2CDR_ENFC_CLK_SEL_SHIFT)) & CCM_CS2CDR_ENFC_CLK_SEL_MASK)
#define CCM_CS2CDR_ENFC_CLK_PRED_MASK            (0x1C0000U)
#define CCM_CS2CDR_ENFC_CLK_PRED_SHIFT           (18U)
#define CCM_CS2CDR_ENFC_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS2CDR_ENFC_CLK_PRED_SHIFT)) & CCM_CS2CDR_ENFC_CLK_PRED_MASK)
#define CCM_CS2CDR_ENFC_CLK_PODF_MASK            (0x7E00000U)
#define CCM_CS2CDR_ENFC_CLK_PODF_SHIFT           (21U)
#define CCM_CS2CDR_ENFC_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS2CDR_ENFC_CLK_PODF_SHIFT)) & CCM_CS2CDR_ENFC_CLK_PODF_MASK)

/*! @name CDCDR - CCM D1 Clock Divider Register */
#define CCM_CDCDR_SPDIF0_CLK_SEL_MASK            (0x300000U)
#define CCM_CDCDR_SPDIF0_CLK_SEL_SHIFT           (20U)
#define CCM_CDCDR_SPDIF0_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_SPDIF0_CLK_SEL_SHIFT)) & CCM_CDCDR_SPDIF0_CLK_SEL_MASK)
#define CCM_CDCDR_SPDIF0_CLK_PODF_MASK           (0x1C00000U)
#define CCM_CDCDR_SPDIF0_CLK_PODF_SHIFT          (22U)
#define CCM_CDCDR_SPDIF0_CLK_PODF(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_SPDIF0_CLK_PODF_SHIFT)) & CCM_CDCDR_SPDIF0_CLK_PODF_MASK)
#define CCM_CDCDR_SPDIF0_CLK_PRED_MASK           (0xE000000U)
#define CCM_CDCDR_SPDIF0_CLK_PRED_SHIFT          (25U)
#define CCM_CDCDR_SPDIF0_CLK_PRED(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_SPDIF0_CLK_PRED_SHIFT)) & CCM_CDCDR_SPDIF0_CLK_PRED_MASK)

/*! @name CHSCCDR - CCM HSC Clock Divider Register */
#define CCM_CHSCCDR_EPDC_CLK_SEL_MASK            (0xE00U)
#define CCM_CHSCCDR_EPDC_CLK_SEL_SHIFT           (9U)
#define CCM_CHSCCDR_EPDC_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CHSCCDR_EPDC_CLK_SEL_SHIFT)) & CCM_CHSCCDR_EPDC_CLK_SEL_MASK)
#define CCM_CHSCCDR_EPDC_PODF_MASK               (0x7000U)
#define CCM_CHSCCDR_EPDC_PODF_SHIFT              (12U)
#define CCM_CHSCCDR_EPDC_PODF(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CHSCCDR_EPDC_PODF_SHIFT)) & CCM_CHSCCDR_EPDC_PODF_MASK)
#define CCM_CHSCCDR_EPDC_PRE_CLK_SEL_MASK        (0x38000U)
#define CCM_CHSCCDR_EPDC_PRE_CLK_SEL_SHIFT       (15U)
#define CCM_CHSCCDR_EPDC_PRE_CLK_SEL(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CHSCCDR_EPDC_PRE_CLK_SEL_SHIFT)) & CCM_CHSCCDR_EPDC_PRE_CLK_SEL_MASK)

/*! @name CSCDR2 - CCM Serial Clock Divider Register 2 */
#define CCM_CSCDR2_LCDIF1_CLK_SEL_MASK           (0xE00U)
#define CCM_CSCDR2_LCDIF1_CLK_SEL_SHIFT          (9U)
#define CCM_CSCDR2_LCDIF1_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_LCDIF1_CLK_SEL_SHIFT)) & CCM_CSCDR2_LCDIF1_CLK_SEL_MASK)
#define CCM_CSCDR2_LCDIF1_PRED_MASK              (0x7000U)
#define CCM_CSCDR2_LCDIF1_PRED_SHIFT             (12U)
#define CCM_CSCDR2_LCDIF1_PRED(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_LCDIF1_PRED_SHIFT)) & CCM_CSCDR2_LCDIF1_PRED_MASK)
#define CCM_CSCDR2_LCDIF1_PRE_CLK_SEL_MASK       (0x38000U)
#define CCM_CSCDR2_LCDIF1_PRE_CLK_SEL_SHIFT      (15U)
#define CCM_CSCDR2_LCDIF1_PRE_CLK_SEL(x)         (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_LCDIF1_PRE_CLK_SEL_SHIFT)) & CCM_CSCDR2_LCDIF1_PRE_CLK_SEL_MASK)
#define CCM_CSCDR2_ECSPI_CLK_SEL_MASK            (0x40000U)
#define CCM_CSCDR2_ECSPI_CLK_SEL_SHIFT           (18U)
#define CCM_CSCDR2_ECSPI_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_ECSPI_CLK_SEL_SHIFT)) & CCM_CSCDR2_ECSPI_CLK_SEL_MASK)
#define CCM_CSCDR2_ECSPI_CLK_PODF_MASK           (0x1F80000U)
#define CCM_CSCDR2_ECSPI_CLK_PODF_SHIFT          (19U)
#define CCM_CSCDR2_ECSPI_CLK_PODF(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_ECSPI_CLK_PODF_SHIFT)) & CCM_CSCDR2_ECSPI_CLK_PODF_MASK)

/*! @name CSCDR3 - CCM Serial Clock Divider Register 3 */
#define CCM_CSCDR3_CSI_CLK_SEL_MASK              (0x600U)
#define CCM_CSCDR3_CSI_CLK_SEL_SHIFT             (9U)
#define CCM_CSCDR3_CSI_CLK_SEL(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR3_CSI_CLK_SEL_SHIFT)) & CCM_CSCDR3_CSI_CLK_SEL_MASK)
#define CCM_CSCDR3_CSI_PODF_MASK                 (0x3800U)
#define CCM_CSCDR3_CSI_PODF_SHIFT                (11U)
#define CCM_CSCDR3_CSI_PODF(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR3_CSI_PODF_SHIFT)) & CCM_CSCDR3_CSI_PODF_MASK)

/*! @name CDHIPR - CCM Divider Handshake In-Process Register */
#define CCM_CDHIPR_AXI_PODF_BUSY_MASK            (0x1U)
#define CCM_CDHIPR_AXI_PODF_BUSY_SHIFT           (0U)
#define CCM_CDHIPR_AXI_PODF_BUSY(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_AXI_PODF_BUSY_SHIFT)) & CCM_CDHIPR_AXI_PODF_BUSY_MASK)
#define CCM_CDHIPR_AHB_PODF_BUSY_MASK            (0x2U)
#define CCM_CDHIPR_AHB_PODF_BUSY_SHIFT           (1U)
#define CCM_CDHIPR_AHB_PODF_BUSY(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_AHB_PODF_BUSY_SHIFT)) & CCM_CDHIPR_AHB_PODF_BUSY_MASK)
#define CCM_CDHIPR_MMDC_PODF_BUSY_MASK           (0x4U)
#define CCM_CDHIPR_MMDC_PODF_BUSY_SHIFT          (2U)
#define CCM_CDHIPR_MMDC_PODF_BUSY(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_MMDC_PODF_BUSY_SHIFT)) & CCM_CDHIPR_MMDC_PODF_BUSY_MASK)
#define CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY_MASK     (0x8U)
#define CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY_SHIFT    (3U)
#define CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY(x)       (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY_SHIFT)) & CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY_MASK)
#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_MASK      (0x20U)
#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT     (5U)
#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY(x)        (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT)) & CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_MASK)
#define CCM_CDHIPR_ARM_PODF_BUSY_MASK            (0x10000U)
#define CCM_CDHIPR_ARM_PODF_BUSY_SHIFT           (16U)
#define CCM_CDHIPR_ARM_PODF_BUSY(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_ARM_PODF_BUSY_SHIFT)) & CCM_CDHIPR_ARM_PODF_BUSY_MASK)

/*! @name CLPCR - CCM Low Power Control Register */
#define CCM_CLPCR_LPM_MASK                       (0x3U)
#define CCM_CLPCR_LPM_SHIFT                      (0U)
#define CCM_CLPCR_LPM(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_LPM_SHIFT)) & CCM_CLPCR_LPM_MASK)
#define CCM_CLPCR_ARM_CLK_DIS_ON_LPM_MASK        (0x20U)
#define CCM_CLPCR_ARM_CLK_DIS_ON_LPM_SHIFT       (5U)
#define CCM_CLPCR_ARM_CLK_DIS_ON_LPM(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_ARM_CLK_DIS_ON_LPM_SHIFT)) & CCM_CLPCR_ARM_CLK_DIS_ON_LPM_MASK)
#define CCM_CLPCR_SBYOS_MASK                     (0x40U)
#define CCM_CLPCR_SBYOS_SHIFT                    (6U)
#define CCM_CLPCR_SBYOS(x)                       (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_SBYOS_SHIFT)) & CCM_CLPCR_SBYOS_MASK)
#define CCM_CLPCR_DIS_REF_OSC_MASK               (0x80U)
#define CCM_CLPCR_DIS_REF_OSC_SHIFT              (7U)
#define CCM_CLPCR_DIS_REF_OSC(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_DIS_REF_OSC_SHIFT)) & CCM_CLPCR_DIS_REF_OSC_MASK)
#define CCM_CLPCR_VSTBY_MASK                     (0x100U)
#define CCM_CLPCR_VSTBY_SHIFT                    (8U)
#define CCM_CLPCR_VSTBY(x)                       (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_VSTBY_SHIFT)) & CCM_CLPCR_VSTBY_MASK)
#define CCM_CLPCR_STBY_COUNT_MASK                (0x600U)
#define CCM_CLPCR_STBY_COUNT_SHIFT               (9U)
#define CCM_CLPCR_STBY_COUNT(x)                  (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_STBY_COUNT_SHIFT)) & CCM_CLPCR_STBY_COUNT_MASK)
#define CCM_CLPCR_COSC_PWRDOWN_MASK              (0x800U)
#define CCM_CLPCR_COSC_PWRDOWN_SHIFT             (11U)
#define CCM_CLPCR_COSC_PWRDOWN(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_COSC_PWRDOWN_SHIFT)) & CCM_CLPCR_COSC_PWRDOWN_MASK)
#define CCM_CLPCR_BYPASS_MMDC_CH0_LPM_HS_MASK    (0x80000U)
#define CCM_CLPCR_BYPASS_MMDC_CH0_LPM_HS_SHIFT   (19U)
#define CCM_CLPCR_BYPASS_MMDC_CH0_LPM_HS(x)      (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_BYPASS_MMDC_CH0_LPM_HS_SHIFT)) & CCM_CLPCR_BYPASS_MMDC_CH0_LPM_HS_MASK)
#define CCM_CLPCR_BYPASS_MMDC_CH1_LPM_HS_MASK    (0x200000U)
#define CCM_CLPCR_BYPASS_MMDC_CH1_LPM_HS_SHIFT   (21U)
#define CCM_CLPCR_BYPASS_MMDC_CH1_LPM_HS(x)      (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_BYPASS_MMDC_CH1_LPM_HS_SHIFT)) & CCM_CLPCR_BYPASS_MMDC_CH1_LPM_HS_MASK)
#define CCM_CLPCR_MASK_CORE0_WFI_MASK            (0x400000U)
#define CCM_CLPCR_MASK_CORE0_WFI_SHIFT           (22U)
#define CCM_CLPCR_MASK_CORE0_WFI(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_MASK_CORE0_WFI_SHIFT)) & CCM_CLPCR_MASK_CORE0_WFI_MASK)
#define CCM_CLPCR_MASK_SCU_IDLE_MASK             (0x4000000U)
#define CCM_CLPCR_MASK_SCU_IDLE_SHIFT            (26U)
#define CCM_CLPCR_MASK_SCU_IDLE(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_MASK_SCU_IDLE_SHIFT)) & CCM_CLPCR_MASK_SCU_IDLE_MASK)
#define CCM_CLPCR_MASK_L2CC_IDLE_MASK            (0x8000000U)
#define CCM_CLPCR_MASK_L2CC_IDLE_SHIFT           (27U)
#define CCM_CLPCR_MASK_L2CC_IDLE(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_MASK_L2CC_IDLE_SHIFT)) & CCM_CLPCR_MASK_L2CC_IDLE_MASK)

/*! @name CISR - CCM Interrupt Status Register */
#define CCM_CISR_LRF_PLL_MASK                    (0x1U)
#define CCM_CISR_LRF_PLL_SHIFT                   (0U)
#define CCM_CISR_LRF_PLL(x)                      (((uint32_t)(((uint32_t)(x)) << CCM_CISR_LRF_PLL_SHIFT)) & CCM_CISR_LRF_PLL_MASK)
#define CCM_CISR_COSC_READY_MASK                 (0x40U)
#define CCM_CISR_COSC_READY_SHIFT                (6U)
#define CCM_CISR_COSC_READY(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CISR_COSC_READY_SHIFT)) & CCM_CISR_COSC_READY_MASK)
#define CCM_CISR_AXI_PODF_LOADED_MASK            (0x20000U)
#define CCM_CISR_AXI_PODF_LOADED_SHIFT           (17U)
#define CCM_CISR_AXI_PODF_LOADED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CISR_AXI_PODF_LOADED_SHIFT)) & CCM_CISR_AXI_PODF_LOADED_MASK)
#define CCM_CISR_PERIPH2_CLK_SEL_LOADED_MASK     (0x80000U)
#define CCM_CISR_PERIPH2_CLK_SEL_LOADED_SHIFT    (19U)
#define CCM_CISR_PERIPH2_CLK_SEL_LOADED(x)       (((uint32_t)(((uint32_t)(x)) << CCM_CISR_PERIPH2_CLK_SEL_LOADED_SHIFT)) & CCM_CISR_PERIPH2_CLK_SEL_LOADED_MASK)
#define CCM_CISR_AHB_PODF_LOADED_MASK            (0x100000U)
#define CCM_CISR_AHB_PODF_LOADED_SHIFT           (20U)
#define CCM_CISR_AHB_PODF_LOADED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CISR_AHB_PODF_LOADED_SHIFT)) & CCM_CISR_AHB_PODF_LOADED_MASK)
#define CCM_CISR_MMDC_PODF_LOADED_MASK           (0x200000U)
#define CCM_CISR_MMDC_PODF_LOADED_SHIFT          (21U)
#define CCM_CISR_MMDC_PODF_LOADED(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CISR_MMDC_PODF_LOADED_SHIFT)) & CCM_CISR_MMDC_PODF_LOADED_MASK)
#define CCM_CISR_PERIPH_CLK_SEL_LOADED_MASK      (0x400000U)
#define CCM_CISR_PERIPH_CLK_SEL_LOADED_SHIFT     (22U)
#define CCM_CISR_PERIPH_CLK_SEL_LOADED(x)        (((uint32_t)(((uint32_t)(x)) << CCM_CISR_PERIPH_CLK_SEL_LOADED_SHIFT)) & CCM_CISR_PERIPH_CLK_SEL_LOADED_MASK)
#define CCM_CISR_ARM_PODF_LOADED_MASK            (0x4000000U)
#define CCM_CISR_ARM_PODF_LOADED_SHIFT           (26U)
#define CCM_CISR_ARM_PODF_LOADED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CISR_ARM_PODF_LOADED_SHIFT)) & CCM_CISR_ARM_PODF_LOADED_MASK)

/*! @name CIMR - CCM Interrupt Mask Register */
#define CCM_CIMR_MASK_LRF_PLL_MASK               (0x1U)
#define CCM_CIMR_MASK_LRF_PLL_SHIFT              (0U)
#define CCM_CIMR_MASK_LRF_PLL(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_LRF_PLL_SHIFT)) & CCM_CIMR_MASK_LRF_PLL_MASK)
#define CCM_CIMR_MASK_COSC_READY_MASK            (0x40U)
#define CCM_CIMR_MASK_COSC_READY_SHIFT           (6U)
#define CCM_CIMR_MASK_COSC_READY(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_COSC_READY_SHIFT)) & CCM_CIMR_MASK_COSC_READY_MASK)
#define CCM_CIMR_MASK_AXI_PODF_LOADED_MASK       (0x20000U)
#define CCM_CIMR_MASK_AXI_PODF_LOADED_SHIFT      (17U)
#define CCM_CIMR_MASK_AXI_PODF_LOADED(x)         (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_AXI_PODF_LOADED_SHIFT)) & CCM_CIMR_MASK_AXI_PODF_LOADED_MASK)
#define CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED_MASK (0x80000U)
#define CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED_SHIFT (19U)
#define CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED(x)  (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED_SHIFT)) & CCM_CIMR_MASK_PERIPH2_CLK_SEL_LOADED_MASK)
#define CCM_CIMR_MASK_AHB_PODF_LOADED_MASK       (0x100000U)
#define CCM_CIMR_MASK_AHB_PODF_LOADED_SHIFT      (20U)
#define CCM_CIMR_MASK_AHB_PODF_LOADED(x)         (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_AHB_PODF_LOADED_SHIFT)) & CCM_CIMR_MASK_AHB_PODF_LOADED_MASK)
#define CCM_CIMR_MASK_MMDC_PODF_LOADED_MASK      (0x200000U)
#define CCM_CIMR_MASK_MMDC_PODF_LOADED_SHIFT     (21U)
#define CCM_CIMR_MASK_MMDC_PODF_LOADED(x)        (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_MMDC_PODF_LOADED_SHIFT)) & CCM_CIMR_MASK_MMDC_PODF_LOADED_MASK)
#define CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_MASK (0x400000U)
#define CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_SHIFT (22U)
#define CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED(x)   (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_SHIFT)) & CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_MASK)
#define CCM_CIMR_ARM_PODF_LOADED_MASK            (0x4000000U)
#define CCM_CIMR_ARM_PODF_LOADED_SHIFT           (26U)
#define CCM_CIMR_ARM_PODF_LOADED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_ARM_PODF_LOADED_SHIFT)) & CCM_CIMR_ARM_PODF_LOADED_MASK)

/*! @name CCOSR - CCM Clock Output Source Register */
#define CCM_CCOSR_CLKO_SEL_MASK                  (0xFU)
#define CCM_CCOSR_CLKO_SEL_SHIFT                 (0U)
#define CCM_CCOSR_CLKO_SEL(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO_SEL_SHIFT)) & CCM_CCOSR_CLKO_SEL_MASK)
#define CCM_CCOSR_CLKO1_DIV_MASK                 (0x70U)
#define CCM_CCOSR_CLKO1_DIV_SHIFT                (4U)
#define CCM_CCOSR_CLKO1_DIV(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO1_DIV_SHIFT)) & CCM_CCOSR_CLKO1_DIV_MASK)
#define CCM_CCOSR_CLKO1_EN_MASK                  (0x80U)
#define CCM_CCOSR_CLKO1_EN_SHIFT                 (7U)
#define CCM_CCOSR_CLKO1_EN(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO1_EN_SHIFT)) & CCM_CCOSR_CLKO1_EN_MASK)
#define CCM_CCOSR_CLK_OUT_SEL_MASK               (0x100U)
#define CCM_CCOSR_CLK_OUT_SEL_SHIFT              (8U)
#define CCM_CCOSR_CLK_OUT_SEL(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLK_OUT_SEL_SHIFT)) & CCM_CCOSR_CLK_OUT_SEL_MASK)
#define CCM_CCOSR_CLKO2_SEL_MASK                 (0x1F0000U)
#define CCM_CCOSR_CLKO2_SEL_SHIFT                (16U)
#define CCM_CCOSR_CLKO2_SEL(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO2_SEL_SHIFT)) & CCM_CCOSR_CLKO2_SEL_MASK)
#define CCM_CCOSR_CLKO2_DIV_MASK                 (0xE00000U)
#define CCM_CCOSR_CLKO2_DIV_SHIFT                (21U)
#define CCM_CCOSR_CLKO2_DIV(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO2_DIV_SHIFT)) & CCM_CCOSR_CLKO2_DIV_MASK)
#define CCM_CCOSR_CLKO2_EN_MASK                  (0x1000000U)
#define CCM_CCOSR_CLKO2_EN_SHIFT                 (24U)
#define CCM_CCOSR_CLKO2_EN(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO2_EN_SHIFT)) & CCM_CCOSR_CLKO2_EN_MASK)

/*! @name CGPR - CCM General Purpose Register */
#define CCM_CGPR_PMIC_DELAY_SCALER_MASK          (0x1U)
#define CCM_CGPR_PMIC_DELAY_SCALER_SHIFT         (0U)
#define CCM_CGPR_PMIC_DELAY_SCALER(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_PMIC_DELAY_SCALER_SHIFT)) & CCM_CGPR_PMIC_DELAY_SCALER_MASK)
#define CCM_CGPR_MMDC_EXT_CLK_DIS_MASK           (0x4U)
#define CCM_CGPR_MMDC_EXT_CLK_DIS_SHIFT          (2U)
#define CCM_CGPR_MMDC_EXT_CLK_DIS(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_MMDC_EXT_CLK_DIS_SHIFT)) & CCM_CGPR_MMDC_EXT_CLK_DIS_MASK)
#define CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_MASK     (0x10U)
#define CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_SHIFT    (4U)
#define CCM_CGPR_EFUSE_PROG_SUPPLY_GATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_SHIFT)) & CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_MASK)
#define CCM_CGPR_SYS_MEM_DS_CTRL_MASK            (0xC000U)
#define CCM_CGPR_SYS_MEM_DS_CTRL_SHIFT           (14U)
#define CCM_CGPR_SYS_MEM_DS_CTRL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_SYS_MEM_DS_CTRL_SHIFT)) & CCM_CGPR_SYS_MEM_DS_CTRL_MASK)
#define CCM_CGPR_FPL_MASK                        (0x10000U)
#define CCM_CGPR_FPL_SHIFT                       (16U)
#define CCM_CGPR_FPL(x)                          (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_FPL_SHIFT)) & CCM_CGPR_FPL_MASK)
#define CCM_CGPR_INT_MEM_CLK_LPM_MASK            (0x20000U)
#define CCM_CGPR_INT_MEM_CLK_LPM_SHIFT           (17U)
#define CCM_CGPR_INT_MEM_CLK_LPM(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_INT_MEM_CLK_LPM_SHIFT)) & CCM_CGPR_INT_MEM_CLK_LPM_MASK)

/*! @name CCGR0 - CCM Clock Gating Register 0 */
#define CCM_CCGR0_CG0_MASK                       (0x3U)
#define CCM_CCGR0_CG0_SHIFT                      (0U)
#define CCM_CCGR0_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG0_SHIFT)) & CCM_CCGR0_CG0_MASK)
#define CCM_CCGR0_CG1_MASK                       (0xCU)
#define CCM_CCGR0_CG1_SHIFT                      (2U)
#define CCM_CCGR0_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG1_SHIFT)) & CCM_CCGR0_CG1_MASK)
#define CCM_CCGR0_CG2_MASK                       (0x30U)
#define CCM_CCGR0_CG2_SHIFT                      (4U)
#define CCM_CCGR0_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG2_SHIFT)) & CCM_CCGR0_CG2_MASK)
#define CCM_CCGR0_CG3_MASK                       (0xC0U)
#define CCM_CCGR0_CG3_SHIFT                      (6U)
#define CCM_CCGR0_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG3_SHIFT)) & CCM_CCGR0_CG3_MASK)
#define CCM_CCGR0_CG4_MASK                       (0x300U)
#define CCM_CCGR0_CG4_SHIFT                      (8U)
#define CCM_CCGR0_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG4_SHIFT)) & CCM_CCGR0_CG4_MASK)
#define CCM_CCGR0_CG5_MASK                       (0xC00U)
#define CCM_CCGR0_CG5_SHIFT                      (10U)
#define CCM_CCGR0_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG5_SHIFT)) & CCM_CCGR0_CG5_MASK)
#define CCM_CCGR0_CG6_MASK                       (0x3000U)
#define CCM_CCGR0_CG6_SHIFT                      (12U)
#define CCM_CCGR0_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG6_SHIFT)) & CCM_CCGR0_CG6_MASK)
#define CCM_CCGR0_CG7_MASK                       (0xC000U)
#define CCM_CCGR0_CG7_SHIFT                      (14U)
#define CCM_CCGR0_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG7_SHIFT)) & CCM_CCGR0_CG7_MASK)
#define CCM_CCGR0_CG8_MASK                       (0x30000U)
#define CCM_CCGR0_CG8_SHIFT                      (16U)
#define CCM_CCGR0_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG8_SHIFT)) & CCM_CCGR0_CG8_MASK)
#define CCM_CCGR0_CG9_MASK                       (0xC0000U)
#define CCM_CCGR0_CG9_SHIFT                      (18U)
#define CCM_CCGR0_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG9_SHIFT)) & CCM_CCGR0_CG9_MASK)
#define CCM_CCGR0_CG10_MASK                      (0x300000U)
#define CCM_CCGR0_CG10_SHIFT                     (20U)
#define CCM_CCGR0_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG10_SHIFT)) & CCM_CCGR0_CG10_MASK)
#define CCM_CCGR0_CG11_MASK                      (0xC00000U)
#define CCM_CCGR0_CG11_SHIFT                     (22U)
#define CCM_CCGR0_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG11_SHIFT)) & CCM_CCGR0_CG11_MASK)
#define CCM_CCGR0_CG12_MASK                      (0x3000000U)
#define CCM_CCGR0_CG12_SHIFT                     (24U)
#define CCM_CCGR0_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG12_SHIFT)) & CCM_CCGR0_CG12_MASK)
#define CCM_CCGR0_CG13_MASK                      (0xC000000U)
#define CCM_CCGR0_CG13_SHIFT                     (26U)
#define CCM_CCGR0_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG13_SHIFT)) & CCM_CCGR0_CG13_MASK)
#define CCM_CCGR0_CG14_MASK                      (0x30000000U)
#define CCM_CCGR0_CG14_SHIFT                     (28U)
#define CCM_CCGR0_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG14_SHIFT)) & CCM_CCGR0_CG14_MASK)
#define CCM_CCGR0_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR0_CG15_SHIFT                     (30U)
#define CCM_CCGR0_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG15_SHIFT)) & CCM_CCGR0_CG15_MASK)

/*! @name CCGR1 - CCM Clock Gating Register 1 */
#define CCM_CCGR1_CG0_MASK                       (0x3U)
#define CCM_CCGR1_CG0_SHIFT                      (0U)
#define CCM_CCGR1_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG0_SHIFT)) & CCM_CCGR1_CG0_MASK)
#define CCM_CCGR1_CG1_MASK                       (0xCU)
#define CCM_CCGR1_CG1_SHIFT                      (2U)
#define CCM_CCGR1_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG1_SHIFT)) & CCM_CCGR1_CG1_MASK)
#define CCM_CCGR1_CG2_MASK                       (0x30U)
#define CCM_CCGR1_CG2_SHIFT                      (4U)
#define CCM_CCGR1_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG2_SHIFT)) & CCM_CCGR1_CG2_MASK)
#define CCM_CCGR1_CG3_MASK                       (0xC0U)
#define CCM_CCGR1_CG3_SHIFT                      (6U)
#define CCM_CCGR1_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG3_SHIFT)) & CCM_CCGR1_CG3_MASK)
#define CCM_CCGR1_CG4_MASK                       (0x300U)
#define CCM_CCGR1_CG4_SHIFT                      (8U)
#define CCM_CCGR1_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG4_SHIFT)) & CCM_CCGR1_CG4_MASK)
#define CCM_CCGR1_CG5_MASK                       (0xC00U)
#define CCM_CCGR1_CG5_SHIFT                      (10U)
#define CCM_CCGR1_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG5_SHIFT)) & CCM_CCGR1_CG5_MASK)
#define CCM_CCGR1_CG6_MASK                       (0x3000U)
#define CCM_CCGR1_CG6_SHIFT                      (12U)
#define CCM_CCGR1_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG6_SHIFT)) & CCM_CCGR1_CG6_MASK)
#define CCM_CCGR1_CG7_MASK                       (0xC000U)
#define CCM_CCGR1_CG7_SHIFT                      (14U)
#define CCM_CCGR1_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG7_SHIFT)) & CCM_CCGR1_CG7_MASK)
#define CCM_CCGR1_CG8_MASK                       (0x30000U)
#define CCM_CCGR1_CG8_SHIFT                      (16U)
#define CCM_CCGR1_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG8_SHIFT)) & CCM_CCGR1_CG8_MASK)
#define CCM_CCGR1_CG9_MASK                       (0xC0000U)
#define CCM_CCGR1_CG9_SHIFT                      (18U)
#define CCM_CCGR1_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG9_SHIFT)) & CCM_CCGR1_CG9_MASK)
#define CCM_CCGR1_CG10_MASK                      (0x300000U)
#define CCM_CCGR1_CG10_SHIFT                     (20U)
#define CCM_CCGR1_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG10_SHIFT)) & CCM_CCGR1_CG10_MASK)
#define CCM_CCGR1_CG11_MASK                      (0xC00000U)
#define CCM_CCGR1_CG11_SHIFT                     (22U)
#define CCM_CCGR1_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG11_SHIFT)) & CCM_CCGR1_CG11_MASK)
#define CCM_CCGR1_CG12_MASK                      (0x3000000U)
#define CCM_CCGR1_CG12_SHIFT                     (24U)
#define CCM_CCGR1_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG12_SHIFT)) & CCM_CCGR1_CG12_MASK)
#define CCM_CCGR1_CG13_MASK                      (0xC000000U)
#define CCM_CCGR1_CG13_SHIFT                     (26U)
#define CCM_CCGR1_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG13_SHIFT)) & CCM_CCGR1_CG13_MASK)
#define CCM_CCGR1_CG14_MASK                      (0x30000000U)
#define CCM_CCGR1_CG14_SHIFT                     (28U)
#define CCM_CCGR1_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG14_SHIFT)) & CCM_CCGR1_CG14_MASK)
#define CCM_CCGR1_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR1_CG15_SHIFT                     (30U)
#define CCM_CCGR1_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG15_SHIFT)) & CCM_CCGR1_CG15_MASK)

/*! @name CCGR2 - CCM Clock Gating Register 2 */
#define CCM_CCGR2_CG0_MASK                       (0x3U)
#define CCM_CCGR2_CG0_SHIFT                      (0U)
#define CCM_CCGR2_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG0_SHIFT)) & CCM_CCGR2_CG0_MASK)
#define CCM_CCGR2_CG1_MASK                       (0xCU)
#define CCM_CCGR2_CG1_SHIFT                      (2U)
#define CCM_CCGR2_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG1_SHIFT)) & CCM_CCGR2_CG1_MASK)
#define CCM_CCGR2_CG2_MASK                       (0x30U)
#define CCM_CCGR2_CG2_SHIFT                      (4U)
#define CCM_CCGR2_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG2_SHIFT)) & CCM_CCGR2_CG2_MASK)
#define CCM_CCGR2_CG3_MASK                       (0xC0U)
#define CCM_CCGR2_CG3_SHIFT                      (6U)
#define CCM_CCGR2_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG3_SHIFT)) & CCM_CCGR2_CG3_MASK)
#define CCM_CCGR2_CG4_MASK                       (0x300U)
#define CCM_CCGR2_CG4_SHIFT                      (8U)
#define CCM_CCGR2_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG4_SHIFT)) & CCM_CCGR2_CG4_MASK)
#define CCM_CCGR2_CG5_MASK                       (0xC00U)
#define CCM_CCGR2_CG5_SHIFT                      (10U)
#define CCM_CCGR2_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG5_SHIFT)) & CCM_CCGR2_CG5_MASK)
#define CCM_CCGR2_CG6_MASK                       (0x3000U)
#define CCM_CCGR2_CG6_SHIFT                      (12U)
#define CCM_CCGR2_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG6_SHIFT)) & CCM_CCGR2_CG6_MASK)
#define CCM_CCGR2_CG7_MASK                       (0xC000U)
#define CCM_CCGR2_CG7_SHIFT                      (14U)
#define CCM_CCGR2_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG7_SHIFT)) & CCM_CCGR2_CG7_MASK)
#define CCM_CCGR2_CG8_MASK                       (0x30000U)
#define CCM_CCGR2_CG8_SHIFT                      (16U)
#define CCM_CCGR2_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG8_SHIFT)) & CCM_CCGR2_CG8_MASK)
#define CCM_CCGR2_CG9_MASK                       (0xC0000U)
#define CCM_CCGR2_CG9_SHIFT                      (18U)
#define CCM_CCGR2_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG9_SHIFT)) & CCM_CCGR2_CG9_MASK)
#define CCM_CCGR2_CG10_MASK                      (0x300000U)
#define CCM_CCGR2_CG10_SHIFT                     (20U)
#define CCM_CCGR2_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG10_SHIFT)) & CCM_CCGR2_CG10_MASK)
#define CCM_CCGR2_CG11_MASK                      (0xC00000U)
#define CCM_CCGR2_CG11_SHIFT                     (22U)
#define CCM_CCGR2_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG11_SHIFT)) & CCM_CCGR2_CG11_MASK)
#define CCM_CCGR2_CG12_MASK                      (0x3000000U)
#define CCM_CCGR2_CG12_SHIFT                     (24U)
#define CCM_CCGR2_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG12_SHIFT)) & CCM_CCGR2_CG12_MASK)
#define CCM_CCGR2_CG13_MASK                      (0xC000000U)
#define CCM_CCGR2_CG13_SHIFT                     (26U)
#define CCM_CCGR2_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG13_SHIFT)) & CCM_CCGR2_CG13_MASK)
#define CCM_CCGR2_CG14_MASK                      (0x30000000U)
#define CCM_CCGR2_CG14_SHIFT                     (28U)
#define CCM_CCGR2_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG14_SHIFT)) & CCM_CCGR2_CG14_MASK)
#define CCM_CCGR2_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR2_CG15_SHIFT                     (30U)
#define CCM_CCGR2_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG15_SHIFT)) & CCM_CCGR2_CG15_MASK)

/*! @name CCGR3 - CCM Clock Gating Register 3 */
#define CCM_CCGR3_CG0_MASK                       (0x3U)
#define CCM_CCGR3_CG0_SHIFT                      (0U)
#define CCM_CCGR3_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG0_SHIFT)) & CCM_CCGR3_CG0_MASK)
#define CCM_CCGR3_CG1_MASK                       (0xCU)
#define CCM_CCGR3_CG1_SHIFT                      (2U)
#define CCM_CCGR3_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG1_SHIFT)) & CCM_CCGR3_CG1_MASK)
#define CCM_CCGR3_CG2_MASK                       (0x30U)
#define CCM_CCGR3_CG2_SHIFT                      (4U)
#define CCM_CCGR3_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG2_SHIFT)) & CCM_CCGR3_CG2_MASK)
#define CCM_CCGR3_CG3_MASK                       (0xC0U)
#define CCM_CCGR3_CG3_SHIFT                      (6U)
#define CCM_CCGR3_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG3_SHIFT)) & CCM_CCGR3_CG3_MASK)
#define CCM_CCGR3_CG4_MASK                       (0x300U)
#define CCM_CCGR3_CG4_SHIFT                      (8U)
#define CCM_CCGR3_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG4_SHIFT)) & CCM_CCGR3_CG4_MASK)
#define CCM_CCGR3_CG5_MASK                       (0xC00U)
#define CCM_CCGR3_CG5_SHIFT                      (10U)
#define CCM_CCGR3_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG5_SHIFT)) & CCM_CCGR3_CG5_MASK)
#define CCM_CCGR3_CG6_MASK                       (0x3000U)
#define CCM_CCGR3_CG6_SHIFT                      (12U)
#define CCM_CCGR3_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG6_SHIFT)) & CCM_CCGR3_CG6_MASK)
#define CCM_CCGR3_CG7_MASK                       (0xC000U)
#define CCM_CCGR3_CG7_SHIFT                      (14U)
#define CCM_CCGR3_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG7_SHIFT)) & CCM_CCGR3_CG7_MASK)
#define CCM_CCGR3_CG8_MASK                       (0x30000U)
#define CCM_CCGR3_CG8_SHIFT                      (16U)
#define CCM_CCGR3_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG8_SHIFT)) & CCM_CCGR3_CG8_MASK)
#define CCM_CCGR3_CG9_MASK                       (0xC0000U)
#define CCM_CCGR3_CG9_SHIFT                      (18U)
#define CCM_CCGR3_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG9_SHIFT)) & CCM_CCGR3_CG9_MASK)
#define CCM_CCGR3_CG10_MASK                      (0x300000U)
#define CCM_CCGR3_CG10_SHIFT                     (20U)
#define CCM_CCGR3_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG10_SHIFT)) & CCM_CCGR3_CG10_MASK)
#define CCM_CCGR3_CG11_MASK                      (0xC00000U)
#define CCM_CCGR3_CG11_SHIFT                     (22U)
#define CCM_CCGR3_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG11_SHIFT)) & CCM_CCGR3_CG11_MASK)
#define CCM_CCGR3_CG12_MASK                      (0x3000000U)
#define CCM_CCGR3_CG12_SHIFT                     (24U)
#define CCM_CCGR3_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG12_SHIFT)) & CCM_CCGR3_CG12_MASK)
#define CCM_CCGR3_CG13_MASK                      (0xC000000U)
#define CCM_CCGR3_CG13_SHIFT                     (26U)
#define CCM_CCGR3_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG13_SHIFT)) & CCM_CCGR3_CG13_MASK)
#define CCM_CCGR3_CG14_MASK                      (0x30000000U)
#define CCM_CCGR3_CG14_SHIFT                     (28U)
#define CCM_CCGR3_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG14_SHIFT)) & CCM_CCGR3_CG14_MASK)
#define CCM_CCGR3_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR3_CG15_SHIFT                     (30U)
#define CCM_CCGR3_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG15_SHIFT)) & CCM_CCGR3_CG15_MASK)

/*! @name CCGR4 - CCM Clock Gating Register 4 */
#define CCM_CCGR4_CG0_MASK                       (0x3U)
#define CCM_CCGR4_CG0_SHIFT                      (0U)
#define CCM_CCGR4_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG0_SHIFT)) & CCM_CCGR4_CG0_MASK)
#define CCM_CCGR4_CG1_MASK                       (0xCU)
#define CCM_CCGR4_CG1_SHIFT                      (2U)
#define CCM_CCGR4_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG1_SHIFT)) & CCM_CCGR4_CG1_MASK)
#define CCM_CCGR4_CG2_MASK                       (0x30U)
#define CCM_CCGR4_CG2_SHIFT                      (4U)
#define CCM_CCGR4_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG2_SHIFT)) & CCM_CCGR4_CG2_MASK)
#define CCM_CCGR4_CG3_MASK                       (0xC0U)
#define CCM_CCGR4_CG3_SHIFT                      (6U)
#define CCM_CCGR4_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG3_SHIFT)) & CCM_CCGR4_CG3_MASK)
#define CCM_CCGR4_CG4_MASK                       (0x300U)
#define CCM_CCGR4_CG4_SHIFT                      (8U)
#define CCM_CCGR4_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG4_SHIFT)) & CCM_CCGR4_CG4_MASK)
#define CCM_CCGR4_CG5_MASK                       (0xC00U)
#define CCM_CCGR4_CG5_SHIFT                      (10U)
#define CCM_CCGR4_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG5_SHIFT)) & CCM_CCGR4_CG5_MASK)
#define CCM_CCGR4_CG6_MASK                       (0x3000U)
#define CCM_CCGR4_CG6_SHIFT                      (12U)
#define CCM_CCGR4_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG6_SHIFT)) & CCM_CCGR4_CG6_MASK)
#define CCM_CCGR4_CG7_MASK                       (0xC000U)
#define CCM_CCGR4_CG7_SHIFT                      (14U)
#define CCM_CCGR4_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG7_SHIFT)) & CCM_CCGR4_CG7_MASK)
#define CCM_CCGR4_CG8_MASK                       (0x30000U)
#define CCM_CCGR4_CG8_SHIFT                      (16U)
#define CCM_CCGR4_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG8_SHIFT)) & CCM_CCGR4_CG8_MASK)
#define CCM_CCGR4_CG9_MASK                       (0xC0000U)
#define CCM_CCGR4_CG9_SHIFT                      (18U)
#define CCM_CCGR4_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG9_SHIFT)) & CCM_CCGR4_CG9_MASK)
#define CCM_CCGR4_CG10_MASK                      (0x300000U)
#define CCM_CCGR4_CG10_SHIFT                     (20U)
#define CCM_CCGR4_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG10_SHIFT)) & CCM_CCGR4_CG10_MASK)
#define CCM_CCGR4_CG11_MASK                      (0xC00000U)
#define CCM_CCGR4_CG11_SHIFT                     (22U)
#define CCM_CCGR4_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG11_SHIFT)) & CCM_CCGR4_CG11_MASK)
#define CCM_CCGR4_CG12_MASK                      (0x3000000U)
#define CCM_CCGR4_CG12_SHIFT                     (24U)
#define CCM_CCGR4_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG12_SHIFT)) & CCM_CCGR4_CG12_MASK)
#define CCM_CCGR4_CG13_MASK                      (0xC000000U)
#define CCM_CCGR4_CG13_SHIFT                     (26U)
#define CCM_CCGR4_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG13_SHIFT)) & CCM_CCGR4_CG13_MASK)
#define CCM_CCGR4_CG14_MASK                      (0x30000000U)
#define CCM_CCGR4_CG14_SHIFT                     (28U)
#define CCM_CCGR4_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG14_SHIFT)) & CCM_CCGR4_CG14_MASK)
#define CCM_CCGR4_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR4_CG15_SHIFT                     (30U)
#define CCM_CCGR4_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG15_SHIFT)) & CCM_CCGR4_CG15_MASK)

/*! @name CCGR5 - CCM Clock Gating Register 5 */
#define CCM_CCGR5_CG0_MASK                       (0x3U)
#define CCM_CCGR5_CG0_SHIFT                      (0U)
#define CCM_CCGR5_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG0_SHIFT)) & CCM_CCGR5_CG0_MASK)
#define CCM_CCGR5_CG1_MASK                       (0xCU)
#define CCM_CCGR5_CG1_SHIFT                      (2U)
#define CCM_CCGR5_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG1_SHIFT)) & CCM_CCGR5_CG1_MASK)
#define CCM_CCGR5_CG2_MASK                       (0x30U)
#define CCM_CCGR5_CG2_SHIFT                      (4U)
#define CCM_CCGR5_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG2_SHIFT)) & CCM_CCGR5_CG2_MASK)
#define CCM_CCGR5_CG3_MASK                       (0xC0U)
#define CCM_CCGR5_CG3_SHIFT                      (6U)
#define CCM_CCGR5_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG3_SHIFT)) & CCM_CCGR5_CG3_MASK)
#define CCM_CCGR5_CG4_MASK                       (0x300U)
#define CCM_CCGR5_CG4_SHIFT                      (8U)
#define CCM_CCGR5_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG4_SHIFT)) & CCM_CCGR5_CG4_MASK)
#define CCM_CCGR5_CG5_MASK                       (0xC00U)
#define CCM_CCGR5_CG5_SHIFT                      (10U)
#define CCM_CCGR5_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG5_SHIFT)) & CCM_CCGR5_CG5_MASK)
#define CCM_CCGR5_CG6_MASK                       (0x3000U)
#define CCM_CCGR5_CG6_SHIFT                      (12U)
#define CCM_CCGR5_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG6_SHIFT)) & CCM_CCGR5_CG6_MASK)
#define CCM_CCGR5_CG7_MASK                       (0xC000U)
#define CCM_CCGR5_CG7_SHIFT                      (14U)
#define CCM_CCGR5_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG7_SHIFT)) & CCM_CCGR5_CG7_MASK)
#define CCM_CCGR5_CG8_MASK                       (0x30000U)
#define CCM_CCGR5_CG8_SHIFT                      (16U)
#define CCM_CCGR5_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG8_SHIFT)) & CCM_CCGR5_CG8_MASK)
#define CCM_CCGR5_CG9_MASK                       (0xC0000U)
#define CCM_CCGR5_CG9_SHIFT                      (18U)
#define CCM_CCGR5_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG9_SHIFT)) & CCM_CCGR5_CG9_MASK)
#define CCM_CCGR5_CG10_MASK                      (0x300000U)
#define CCM_CCGR5_CG10_SHIFT                     (20U)
#define CCM_CCGR5_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG10_SHIFT)) & CCM_CCGR5_CG10_MASK)
#define CCM_CCGR5_CG11_MASK                      (0xC00000U)
#define CCM_CCGR5_CG11_SHIFT                     (22U)
#define CCM_CCGR5_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG11_SHIFT)) & CCM_CCGR5_CG11_MASK)
#define CCM_CCGR5_CG12_MASK                      (0x3000000U)
#define CCM_CCGR5_CG12_SHIFT                     (24U)
#define CCM_CCGR5_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG12_SHIFT)) & CCM_CCGR5_CG12_MASK)
#define CCM_CCGR5_CG13_MASK                      (0xC000000U)
#define CCM_CCGR5_CG13_SHIFT                     (26U)
#define CCM_CCGR5_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG13_SHIFT)) & CCM_CCGR5_CG13_MASK)
#define CCM_CCGR5_CG14_MASK                      (0x30000000U)
#define CCM_CCGR5_CG14_SHIFT                     (28U)
#define CCM_CCGR5_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG14_SHIFT)) & CCM_CCGR5_CG14_MASK)
#define CCM_CCGR5_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR5_CG15_SHIFT                     (30U)
#define CCM_CCGR5_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG15_SHIFT)) & CCM_CCGR5_CG15_MASK)

/*! @name CCGR6 - CCM Clock Gating Register 6 */
#define CCM_CCGR6_CG0_MASK                       (0x3U)
#define CCM_CCGR6_CG0_SHIFT                      (0U)
#define CCM_CCGR6_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG0_SHIFT)) & CCM_CCGR6_CG0_MASK)
#define CCM_CCGR6_CG1_MASK                       (0xCU)
#define CCM_CCGR6_CG1_SHIFT                      (2U)
#define CCM_CCGR6_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG1_SHIFT)) & CCM_CCGR6_CG1_MASK)
#define CCM_CCGR6_CG2_MASK                       (0x30U)
#define CCM_CCGR6_CG2_SHIFT                      (4U)
#define CCM_CCGR6_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG2_SHIFT)) & CCM_CCGR6_CG2_MASK)
#define CCM_CCGR6_CG3_MASK                       (0xC0U)
#define CCM_CCGR6_CG3_SHIFT                      (6U)
#define CCM_CCGR6_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG3_SHIFT)) & CCM_CCGR6_CG3_MASK)
#define CCM_CCGR6_CG4_MASK                       (0x300U)
#define CCM_CCGR6_CG4_SHIFT                      (8U)
#define CCM_CCGR6_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG4_SHIFT)) & CCM_CCGR6_CG4_MASK)
#define CCM_CCGR6_CG5_MASK                       (0xC00U)
#define CCM_CCGR6_CG5_SHIFT                      (10U)
#define CCM_CCGR6_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG5_SHIFT)) & CCM_CCGR6_CG5_MASK)
#define CCM_CCGR6_CG6_MASK                       (0x3000U)
#define CCM_CCGR6_CG6_SHIFT                      (12U)
#define CCM_CCGR6_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG6_SHIFT)) & CCM_CCGR6_CG6_MASK)
#define CCM_CCGR6_CG7_MASK                       (0xC000U)
#define CCM_CCGR6_CG7_SHIFT                      (14U)
#define CCM_CCGR6_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG7_SHIFT)) & CCM_CCGR6_CG7_MASK)
#define CCM_CCGR6_CG8_MASK                       (0x30000U)
#define CCM_CCGR6_CG8_SHIFT                      (16U)
#define CCM_CCGR6_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG8_SHIFT)) & CCM_CCGR6_CG8_MASK)
#define CCM_CCGR6_CG9_MASK                       (0xC0000U)
#define CCM_CCGR6_CG9_SHIFT                      (18U)
#define CCM_CCGR6_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG9_SHIFT)) & CCM_CCGR6_CG9_MASK)
#define CCM_CCGR6_CG10_MASK                      (0x300000U)
#define CCM_CCGR6_CG10_SHIFT                     (20U)
#define CCM_CCGR6_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG10_SHIFT)) & CCM_CCGR6_CG10_MASK)
#define CCM_CCGR6_CG11_MASK                      (0xC00000U)
#define CCM_CCGR6_CG11_SHIFT                     (22U)
#define CCM_CCGR6_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG11_SHIFT)) & CCM_CCGR6_CG11_MASK)
#define CCM_CCGR6_CG12_MASK                      (0x3000000U)
#define CCM_CCGR6_CG12_SHIFT                     (24U)
#define CCM_CCGR6_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG12_SHIFT)) & CCM_CCGR6_CG12_MASK)
#define CCM_CCGR6_CG13_MASK                      (0xC000000U)
#define CCM_CCGR6_CG13_SHIFT                     (26U)
#define CCM_CCGR6_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG13_SHIFT)) & CCM_CCGR6_CG13_MASK)
#define CCM_CCGR6_CG14_MASK                      (0x30000000U)
#define CCM_CCGR6_CG14_SHIFT                     (28U)
#define CCM_CCGR6_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG14_SHIFT)) & CCM_CCGR6_CG14_MASK)
#define CCM_CCGR6_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR6_CG15_SHIFT                     (30U)
#define CCM_CCGR6_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG15_SHIFT)) & CCM_CCGR6_CG15_MASK)

/*! @name CMEOR - CCM Module Enable Overide Register */
#define CCM_CMEOR_MOD_EN_OV_GPT_MASK             (0x20U)
#define CCM_CMEOR_MOD_EN_OV_GPT_SHIFT            (5U)
#define CCM_CMEOR_MOD_EN_OV_GPT(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_GPT_SHIFT)) & CCM_CMEOR_MOD_EN_OV_GPT_MASK)
#define CCM_CMEOR_MOD_EN_OV_EPIT_MASK            (0x40U)
#define CCM_CMEOR_MOD_EN_OV_EPIT_SHIFT           (6U)
#define CCM_CMEOR_MOD_EN_OV_EPIT(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_EPIT_SHIFT)) & CCM_CMEOR_MOD_EN_OV_EPIT_MASK)
#define CCM_CMEOR_MOD_EN_USDHC_MASK              (0x80U)
#define CCM_CMEOR_MOD_EN_USDHC_SHIFT             (7U)
#define CCM_CMEOR_MOD_EN_USDHC(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_USDHC_SHIFT)) & CCM_CMEOR_MOD_EN_USDHC_MASK)
#define CCM_CMEOR_MOD_EN_OV_CAN2_CPI_MASK        (0x10000000U)
#define CCM_CMEOR_MOD_EN_OV_CAN2_CPI_SHIFT       (28U)
#define CCM_CMEOR_MOD_EN_OV_CAN2_CPI(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_CAN2_CPI_SHIFT)) & CCM_CMEOR_MOD_EN_OV_CAN2_CPI_MASK)
#define CCM_CMEOR_MOD_EN_OV_CAN1_CPI_MASK        (0x40000000U)
#define CCM_CMEOR_MOD_EN_OV_CAN1_CPI_SHIFT       (30U)
#define CCM_CMEOR_MOD_EN_OV_CAN1_CPI(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_CAN1_CPI_SHIFT)) & CCM_CMEOR_MOD_EN_OV_CAN1_CPI_MASK)

/*!
 * @}
 */ /* end of group CCM_Register_Masks */


/* CCM - Peripheral instance base addresses */
/** Peripheral CCM base address */
#define CCM_BASE                                 (0x20C4000u)
/** Peripheral CCM base pointer */
#define CCM                                      ((CCM_Type *)CCM_BASE)
/** Array initializer of CCM peripheral base addresses */
#define CCM_BASE_ADDRS                           { CCM_BASE }
/** Array initializer of CCM peripheral base pointers */
#define CCM_BASE_PTRS                            { CCM }
/** Interrupt vectors for the CCM peripheral type */
#define CCM_IRQS                                 { CCM_IRQ1_IRQn, CCM_IRQ2_IRQn }

/*!
 * @}
 */ /* end of group CCM_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- CCM_ANALOG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_ANALOG_Peripheral_Access_Layer CCM_ANALOG Peripheral Access Layer
 * @{
 */

/** CCM_ANALOG - Register Layout Typedef */
typedef struct {
  __IO uint32_t PLL_ARM;                           /**< Analog ARM PLL control Register, offset: 0x0 */
  __IO uint32_t PLL_ARM_SET;                       /**< Analog ARM PLL control Register, offset: 0x4 */
  __IO uint32_t PLL_ARM_CLR;                       /**< Analog ARM PLL control Register, offset: 0x8 */
  __IO uint32_t PLL_ARM_TOG;                       /**< Analog ARM PLL control Register, offset: 0xC */
  __IO uint32_t PLL_USB1;                          /**< Analog USB1 480MHz PLL Control Register, offset: 0x10 */
  __IO uint32_t PLL_USB1_SET;                      /**< Analog USB1 480MHz PLL Control Register, offset: 0x14 */
  __IO uint32_t PLL_USB1_CLR;                      /**< Analog USB1 480MHz PLL Control Register, offset: 0x18 */
  __IO uint32_t PLL_USB1_TOG;                      /**< Analog USB1 480MHz PLL Control Register, offset: 0x1C */
  __IO uint32_t PLL_USB2;                          /**< Analog USB2 480MHz PLL Control Register, offset: 0x20 */
  __IO uint32_t PLL_USB2_SET;                      /**< Analog USB2 480MHz PLL Control Register, offset: 0x24 */
  __IO uint32_t PLL_USB2_CLR;                      /**< Analog USB2 480MHz PLL Control Register, offset: 0x28 */
  __IO uint32_t PLL_USB2_TOG;                      /**< Analog USB2 480MHz PLL Control Register, offset: 0x2C */
  __IO uint32_t PLL_SYS;                           /**< Analog System PLL Control Register, offset: 0x30 */
  __IO uint32_t PLL_SYS_SET;                       /**< Analog System PLL Control Register, offset: 0x34 */
  __IO uint32_t PLL_SYS_CLR;                       /**< Analog System PLL Control Register, offset: 0x38 */
  __IO uint32_t PLL_SYS_TOG;                       /**< Analog System PLL Control Register, offset: 0x3C */
  __IO uint32_t PLL_SYS_SS;                        /**< 528MHz System PLL Spread Spectrum Register, offset: 0x40 */
       uint8_t RESERVED_0[12];
  __IO uint32_t PLL_SYS_NUM;                       /**< Numerator of 528MHz System PLL Fractional Loop Divider Register, offset: 0x50 */
       uint8_t RESERVED_1[12];
  __IO uint32_t PLL_SYS_DENOM;                     /**< Denominator of 528MHz System PLL Fractional Loop Divider Register, offset: 0x60 */
       uint8_t RESERVED_2[12];
  __IO uint32_t PLL_AUDIO;                         /**< Analog Audio PLL control Register, offset: 0x70 */
  __IO uint32_t PLL_AUDIO_SET;                     /**< Analog Audio PLL control Register, offset: 0x74 */
  __IO uint32_t PLL_AUDIO_CLR;                     /**< Analog Audio PLL control Register, offset: 0x78 */
  __IO uint32_t PLL_AUDIO_TOG;                     /**< Analog Audio PLL control Register, offset: 0x7C */
  __IO uint32_t PLL_AUDIO_NUM;                     /**< Numerator of Audio PLL Fractional Loop Divider Register, offset: 0x80 */
       uint8_t RESERVED_3[12];
  __IO uint32_t PLL_AUDIO_DENOM;                   /**< Denominator of Audio PLL Fractional Loop Divider Register, offset: 0x90 */
       uint8_t RESERVED_4[12];
  __IO uint32_t PLL_VIDEO;                         /**< Analog Video PLL control Register, offset: 0xA0 */
  __IO uint32_t PLL_VIDEO_SET;                     /**< Analog Video PLL control Register, offset: 0xA4 */
  __IO uint32_t PLL_VIDEO_CLR;                     /**< Analog Video PLL control Register, offset: 0xA8 */
  __IO uint32_t PLL_VIDEO_TOG;                     /**< Analog Video PLL control Register, offset: 0xAC */
  __IO uint32_t PLL_VIDEO_NUM;                     /**< Numerator of Video PLL Fractional Loop Divider Register, offset: 0xB0 */
       uint8_t RESERVED_5[12];
  __IO uint32_t PLL_VIDEO_DENOM;                   /**< Denominator of Video PLL Fractional Loop Divider Register, offset: 0xC0 */
       uint8_t RESERVED_6[28];
  __IO uint32_t PLL_ENET;                          /**< Analog ENET PLL Control Register, offset: 0xE0 */
  __IO uint32_t PLL_ENET_SET;                      /**< Analog ENET PLL Control Register, offset: 0xE4 */
  __IO uint32_t PLL_ENET_CLR;                      /**< Analog ENET PLL Control Register, offset: 0xE8 */
  __IO uint32_t PLL_ENET_TOG;                      /**< Analog ENET PLL Control Register, offset: 0xEC */
  __IO uint32_t PFD_480;                           /**< 480MHz Clock (PLL3) Phase Fractional Divider Control Register, offset: 0xF0 */
  __IO uint32_t PFD_480_SET;                       /**< 480MHz Clock (PLL3) Phase Fractional Divider Control Register, offset: 0xF4 */
  __IO uint32_t PFD_480_CLR;                       /**< 480MHz Clock (PLL3) Phase Fractional Divider Control Register, offset: 0xF8 */
  __IO uint32_t PFD_480_TOG;                       /**< 480MHz Clock (PLL3) Phase Fractional Divider Control Register, offset: 0xFC */
  __IO uint32_t PFD_528;                           /**< 528MHz Clock (PLL2) Phase Fractional Divider Control Register, offset: 0x100 */
  __IO uint32_t PFD_528_SET;                       /**< 528MHz Clock (PLL2) Phase Fractional Divider Control Register, offset: 0x104 */
  __IO uint32_t PFD_528_CLR;                       /**< 528MHz Clock (PLL2) Phase Fractional Divider Control Register, offset: 0x108 */
  __IO uint32_t PFD_528_TOG;                       /**< 528MHz Clock (PLL2) Phase Fractional Divider Control Register, offset: 0x10C */
       uint8_t RESERVED_7[64];
  __IO uint32_t MISC0;                             /**< Miscellaneous Register 0, offset: 0x150 */
  __IO uint32_t MISC0_SET;                         /**< Miscellaneous Register 0, offset: 0x154 */
  __IO uint32_t MISC0_CLR;                         /**< Miscellaneous Register 0, offset: 0x158 */
  __IO uint32_t MISC0_TOG;                         /**< Miscellaneous Register 0, offset: 0x15C */
  __IO uint32_t MISC1;                             /**< Miscellaneous Register 1, offset: 0x160 */
  __IO uint32_t MISC1_SET;                         /**< Miscellaneous Register 1, offset: 0x164 */
  __IO uint32_t MISC1_CLR;                         /**< Miscellaneous Register 1, offset: 0x168 */
  __IO uint32_t MISC1_TOG;                         /**< Miscellaneous Register 1, offset: 0x16C */
  __IO uint32_t MISC2;                             /**< Miscellaneous Register 2, offset: 0x170 */
  __IO uint32_t MISC2_SET;                         /**< Miscellaneous Register 2, offset: 0x174 */
  __IO uint32_t MISC2_CLR;                         /**< Miscellaneous Register 2, offset: 0x178 */
  __IO uint32_t MISC2_TOG;                         /**< Miscellaneous Register 2, offset: 0x17C */
} CCM_ANALOG_Type;

/* ----------------------------------------------------------------------------
   -- CCM_ANALOG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_ANALOG_Register_Masks CCM_ANALOG Register Masks
 * @{
 */

/*! @name PLL_ARM - Analog ARM PLL control Register */
#define CCM_ANALOG_PLL_ARM_DIV_SELECT_MASK       (0x7FU)
#define CCM_ANALOG_PLL_ARM_DIV_SELECT_SHIFT      (0U)
#define CCM_ANALOG_PLL_ARM_DIV_SELECT(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ARM_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ARM_POWERDOWN_MASK        (0x1000U)
#define CCM_ANALOG_PLL_ARM_POWERDOWN_SHIFT       (12U)
#define CCM_ANALOG_PLL_ARM_POWERDOWN(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ARM_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_ARM_ENABLE_MASK           (0x2000U)
#define CCM_ANALOG_PLL_ARM_ENABLE_SHIFT          (13U)
#define CCM_ANALOG_PLL_ARM_ENABLE(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_ENABLE_SHIFT)) & CCM_ANALOG_PLL_ARM_ENABLE_MASK)
#define CCM_ANALOG_PLL_ARM_BYPASS_CLK_SRC_MASK   (0xC000U)
#define CCM_ANALOG_PLL_ARM_BYPASS_CLK_SRC_SHIFT  (14U)
#define CCM_ANALOG_PLL_ARM_BYPASS_CLK_SRC(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ARM_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_ARM_BYPASS_MASK           (0x10000U)
#define CCM_ANALOG_PLL_ARM_BYPASS_SHIFT          (16U)
#define CCM_ANALOG_PLL_ARM_BYPASS(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ARM_BYPASS_MASK)
#define CCM_ANALOG_PLL_ARM_PLL_SEL_MASK          (0x80000U)
#define CCM_ANALOG_PLL_ARM_PLL_SEL_SHIFT         (19U)
#define CCM_ANALOG_PLL_ARM_PLL_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_PLL_SEL_SHIFT)) & CCM_ANALOG_PLL_ARM_PLL_SEL_MASK)
#define CCM_ANALOG_PLL_ARM_LOCK_MASK             (0x80000000U)
#define CCM_ANALOG_PLL_ARM_LOCK_SHIFT            (31U)
#define CCM_ANALOG_PLL_ARM_LOCK(x)               (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_LOCK_SHIFT)) & CCM_ANALOG_PLL_ARM_LOCK_MASK)

/*! @name PLL_ARM_SET - Analog ARM PLL control Register */
#define CCM_ANALOG_PLL_ARM_SET_DIV_SELECT_MASK   (0x7FU)
#define CCM_ANALOG_PLL_ARM_SET_DIV_SELECT_SHIFT  (0U)
#define CCM_ANALOG_PLL_ARM_SET_DIV_SELECT(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_SET_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ARM_SET_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ARM_SET_POWERDOWN_MASK    (0x1000U)
#define CCM_ANALOG_PLL_ARM_SET_POWERDOWN_SHIFT   (12U)
#define CCM_ANALOG_PLL_ARM_SET_POWERDOWN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_SET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ARM_SET_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_ARM_SET_ENABLE_MASK       (0x2000U)
#define CCM_ANALOG_PLL_ARM_SET_ENABLE_SHIFT      (13U)
#define CCM_ANALOG_PLL_ARM_SET_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_SET_ENABLE_SHIFT)) & CCM_ANALOG_PLL_ARM_SET_ENABLE_MASK)
#define CCM_ANALOG_PLL_ARM_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_ARM_SET_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_ARM_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ARM_SET_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_ARM_SET_BYPASS_MASK       (0x10000U)
#define CCM_ANALOG_PLL_ARM_SET_BYPASS_SHIFT      (16U)
#define CCM_ANALOG_PLL_ARM_SET_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ARM_SET_BYPASS_MASK)
#define CCM_ANALOG_PLL_ARM_SET_PLL_SEL_MASK      (0x80000U)
#define CCM_ANALOG_PLL_ARM_SET_PLL_SEL_SHIFT     (19U)
#define CCM_ANALOG_PLL_ARM_SET_PLL_SEL(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_SET_PLL_SEL_SHIFT)) & CCM_ANALOG_PLL_ARM_SET_PLL_SEL_MASK)
#define CCM_ANALOG_PLL_ARM_SET_LOCK_MASK         (0x80000000U)
#define CCM_ANALOG_PLL_ARM_SET_LOCK_SHIFT        (31U)
#define CCM_ANALOG_PLL_ARM_SET_LOCK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_ARM_SET_LOCK_MASK)

/*! @name PLL_ARM_CLR - Analog ARM PLL control Register */
#define CCM_ANALOG_PLL_ARM_CLR_DIV_SELECT_MASK   (0x7FU)
#define CCM_ANALOG_PLL_ARM_CLR_DIV_SELECT_SHIFT  (0U)
#define CCM_ANALOG_PLL_ARM_CLR_DIV_SELECT(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_CLR_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ARM_CLR_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ARM_CLR_POWERDOWN_MASK    (0x1000U)
#define CCM_ANALOG_PLL_ARM_CLR_POWERDOWN_SHIFT   (12U)
#define CCM_ANALOG_PLL_ARM_CLR_POWERDOWN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_CLR_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ARM_CLR_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_ARM_CLR_ENABLE_MASK       (0x2000U)
#define CCM_ANALOG_PLL_ARM_CLR_ENABLE_SHIFT      (13U)
#define CCM_ANALOG_PLL_ARM_CLR_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_CLR_ENABLE_SHIFT)) & CCM_ANALOG_PLL_ARM_CLR_ENABLE_MASK)
#define CCM_ANALOG_PLL_ARM_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_ARM_CLR_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_ARM_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ARM_CLR_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_ARM_CLR_BYPASS_MASK       (0x10000U)
#define CCM_ANALOG_PLL_ARM_CLR_BYPASS_SHIFT      (16U)
#define CCM_ANALOG_PLL_ARM_CLR_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ARM_CLR_BYPASS_MASK)
#define CCM_ANALOG_PLL_ARM_CLR_PLL_SEL_MASK      (0x80000U)
#define CCM_ANALOG_PLL_ARM_CLR_PLL_SEL_SHIFT     (19U)
#define CCM_ANALOG_PLL_ARM_CLR_PLL_SEL(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_CLR_PLL_SEL_SHIFT)) & CCM_ANALOG_PLL_ARM_CLR_PLL_SEL_MASK)
#define CCM_ANALOG_PLL_ARM_CLR_LOCK_MASK         (0x80000000U)
#define CCM_ANALOG_PLL_ARM_CLR_LOCK_SHIFT        (31U)
#define CCM_ANALOG_PLL_ARM_CLR_LOCK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_ARM_CLR_LOCK_MASK)

/*! @name PLL_ARM_TOG - Analog ARM PLL control Register */
#define CCM_ANALOG_PLL_ARM_TOG_DIV_SELECT_MASK   (0x7FU)
#define CCM_ANALOG_PLL_ARM_TOG_DIV_SELECT_SHIFT  (0U)
#define CCM_ANALOG_PLL_ARM_TOG_DIV_SELECT(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_TOG_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ARM_TOG_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ARM_TOG_POWERDOWN_MASK    (0x1000U)
#define CCM_ANALOG_PLL_ARM_TOG_POWERDOWN_SHIFT   (12U)
#define CCM_ANALOG_PLL_ARM_TOG_POWERDOWN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_TOG_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ARM_TOG_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_ARM_TOG_ENABLE_MASK       (0x2000U)
#define CCM_ANALOG_PLL_ARM_TOG_ENABLE_SHIFT      (13U)
#define CCM_ANALOG_PLL_ARM_TOG_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_TOG_ENABLE_SHIFT)) & CCM_ANALOG_PLL_ARM_TOG_ENABLE_MASK)
#define CCM_ANALOG_PLL_ARM_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_ARM_TOG_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_ARM_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ARM_TOG_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_ARM_TOG_BYPASS_MASK       (0x10000U)
#define CCM_ANALOG_PLL_ARM_TOG_BYPASS_SHIFT      (16U)
#define CCM_ANALOG_PLL_ARM_TOG_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ARM_TOG_BYPASS_MASK)
#define CCM_ANALOG_PLL_ARM_TOG_PLL_SEL_MASK      (0x80000U)
#define CCM_ANALOG_PLL_ARM_TOG_PLL_SEL_SHIFT     (19U)
#define CCM_ANALOG_PLL_ARM_TOG_PLL_SEL(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_TOG_PLL_SEL_SHIFT)) & CCM_ANALOG_PLL_ARM_TOG_PLL_SEL_MASK)
#define CCM_ANALOG_PLL_ARM_TOG_LOCK_MASK         (0x80000000U)
#define CCM_ANALOG_PLL_ARM_TOG_LOCK_SHIFT        (31U)
#define CCM_ANALOG_PLL_ARM_TOG_LOCK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ARM_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_ARM_TOG_LOCK_MASK)

/*! @name PLL_USB1 - Analog USB1 480MHz PLL Control Register */
#define CCM_ANALOG_PLL_USB1_DIV_SELECT_MASK      (0x3U)
#define CCM_ANALOG_PLL_USB1_DIV_SELECT_SHIFT     (0U)
#define CCM_ANALOG_PLL_USB1_DIV_SELECT(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB1_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_USB1_EN_USB_CLKS_MASK     (0x40U)
#define CCM_ANALOG_PLL_USB1_EN_USB_CLKS_SHIFT    (6U)
#define CCM_ANALOG_PLL_USB1_EN_USB_CLKS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB1_EN_USB_CLKS_MASK)
#define CCM_ANALOG_PLL_USB1_POWER_MASK           (0x1000U)
#define CCM_ANALOG_PLL_USB1_POWER_SHIFT          (12U)
#define CCM_ANALOG_PLL_USB1_POWER(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_POWER_SHIFT)) & CCM_ANALOG_PLL_USB1_POWER_MASK)
#define CCM_ANALOG_PLL_USB1_ENABLE_MASK          (0x2000U)
#define CCM_ANALOG_PLL_USB1_ENABLE_SHIFT         (13U)
#define CCM_ANALOG_PLL_USB1_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB1_ENABLE_MASK)
#define CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC_MASK  (0xC000U)
#define CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_USB1_BYPASS_MASK          (0x10000U)
#define CCM_ANALOG_PLL_USB1_BYPASS_SHIFT         (16U)
#define CCM_ANALOG_PLL_USB1_BYPASS(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB1_BYPASS_MASK)
#define CCM_ANALOG_PLL_USB1_LOCK_MASK            (0x80000000U)
#define CCM_ANALOG_PLL_USB1_LOCK_SHIFT           (31U)
#define CCM_ANALOG_PLL_USB1_LOCK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB1_LOCK_MASK)

/*! @name PLL_USB1_SET - Analog USB1 480MHz PLL Control Register */
#define CCM_ANALOG_PLL_USB1_SET_DIV_SELECT_MASK  (0x3U)
#define CCM_ANALOG_PLL_USB1_SET_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_USB1_SET_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS_MASK (0x40U)
#define CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS_SHIFT (6U)
#define CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS_MASK)
#define CCM_ANALOG_PLL_USB1_SET_POWER_MASK       (0x1000U)
#define CCM_ANALOG_PLL_USB1_SET_POWER_SHIFT      (12U)
#define CCM_ANALOG_PLL_USB1_SET_POWER(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_POWER_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_POWER_MASK)
#define CCM_ANALOG_PLL_USB1_SET_ENABLE_MASK      (0x2000U)
#define CCM_ANALOG_PLL_USB1_SET_ENABLE_SHIFT     (13U)
#define CCM_ANALOG_PLL_USB1_SET_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_ENABLE_MASK)
#define CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_USB1_SET_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_USB1_SET_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_USB1_SET_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_BYPASS_MASK)
#define CCM_ANALOG_PLL_USB1_SET_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_USB1_SET_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_USB1_SET_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_LOCK_MASK)

/*! @name PLL_USB1_CLR - Analog USB1 480MHz PLL Control Register */
#define CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT_MASK  (0x3U)
#define CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS_MASK (0x40U)
#define CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS_SHIFT (6U)
#define CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS_MASK)
#define CCM_ANALOG_PLL_USB1_CLR_POWER_MASK       (0x1000U)
#define CCM_ANALOG_PLL_USB1_CLR_POWER_SHIFT      (12U)
#define CCM_ANALOG_PLL_USB1_CLR_POWER(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_POWER_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_POWER_MASK)
#define CCM_ANALOG_PLL_USB1_CLR_ENABLE_MASK      (0x2000U)
#define CCM_ANALOG_PLL_USB1_CLR_ENABLE_SHIFT     (13U)
#define CCM_ANALOG_PLL_USB1_CLR_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_ENABLE_MASK)
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_BYPASS_MASK)
#define CCM_ANALOG_PLL_USB1_CLR_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_USB1_CLR_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_USB1_CLR_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_LOCK_MASK)

/*! @name PLL_USB1_TOG - Analog USB1 480MHz PLL Control Register */
#define CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT_MASK  (0x3U)
#define CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS_MASK (0x40U)
#define CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS_SHIFT (6U)
#define CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS_MASK)
#define CCM_ANALOG_PLL_USB1_TOG_POWER_MASK       (0x1000U)
#define CCM_ANALOG_PLL_USB1_TOG_POWER_SHIFT      (12U)
#define CCM_ANALOG_PLL_USB1_TOG_POWER(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_POWER_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_POWER_MASK)
#define CCM_ANALOG_PLL_USB1_TOG_ENABLE_MASK      (0x2000U)
#define CCM_ANALOG_PLL_USB1_TOG_ENABLE_SHIFT     (13U)
#define CCM_ANALOG_PLL_USB1_TOG_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_ENABLE_MASK)
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_BYPASS_MASK)
#define CCM_ANALOG_PLL_USB1_TOG_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_USB1_TOG_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_USB1_TOG_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_LOCK_MASK)

/*! @name PLL_USB2 - Analog USB2 480MHz PLL Control Register */
#define CCM_ANALOG_PLL_USB2_DIV_SELECT_MASK      (0x3U)
#define CCM_ANALOG_PLL_USB2_DIV_SELECT_SHIFT     (0U)
#define CCM_ANALOG_PLL_USB2_DIV_SELECT(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB2_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_USB2_EN_USB_CLKS_MASK     (0x40U)
#define CCM_ANALOG_PLL_USB2_EN_USB_CLKS_SHIFT    (6U)
#define CCM_ANALOG_PLL_USB2_EN_USB_CLKS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB2_EN_USB_CLKS_MASK)
#define CCM_ANALOG_PLL_USB2_POWER_MASK           (0x1000U)
#define CCM_ANALOG_PLL_USB2_POWER_SHIFT          (12U)
#define CCM_ANALOG_PLL_USB2_POWER(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_POWER_SHIFT)) & CCM_ANALOG_PLL_USB2_POWER_MASK)
#define CCM_ANALOG_PLL_USB2_ENABLE_MASK          (0x2000U)
#define CCM_ANALOG_PLL_USB2_ENABLE_SHIFT         (13U)
#define CCM_ANALOG_PLL_USB2_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB2_ENABLE_MASK)
#define CCM_ANALOG_PLL_USB2_BYPASS_CLK_SRC_MASK  (0xC000U)
#define CCM_ANALOG_PLL_USB2_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_USB2_BYPASS_CLK_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB2_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_USB2_BYPASS_MASK          (0x10000U)
#define CCM_ANALOG_PLL_USB2_BYPASS_SHIFT         (16U)
#define CCM_ANALOG_PLL_USB2_BYPASS(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB2_BYPASS_MASK)
#define CCM_ANALOG_PLL_USB2_LOCK_MASK            (0x80000000U)
#define CCM_ANALOG_PLL_USB2_LOCK_SHIFT           (31U)
#define CCM_ANALOG_PLL_USB2_LOCK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB2_LOCK_MASK)

/*! @name PLL_USB2_SET - Analog USB2 480MHz PLL Control Register */
#define CCM_ANALOG_PLL_USB2_SET_DIV_SELECT_MASK  (0x3U)
#define CCM_ANALOG_PLL_USB2_SET_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_USB2_SET_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_SET_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB2_SET_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_USB2_SET_EN_USB_CLKS_MASK (0x40U)
#define CCM_ANALOG_PLL_USB2_SET_EN_USB_CLKS_SHIFT (6U)
#define CCM_ANALOG_PLL_USB2_SET_EN_USB_CLKS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_SET_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB2_SET_EN_USB_CLKS_MASK)
#define CCM_ANALOG_PLL_USB2_SET_POWER_MASK       (0x1000U)
#define CCM_ANALOG_PLL_USB2_SET_POWER_SHIFT      (12U)
#define CCM_ANALOG_PLL_USB2_SET_POWER(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_SET_POWER_SHIFT)) & CCM_ANALOG_PLL_USB2_SET_POWER_MASK)
#define CCM_ANALOG_PLL_USB2_SET_ENABLE_MASK      (0x2000U)
#define CCM_ANALOG_PLL_USB2_SET_ENABLE_SHIFT     (13U)
#define CCM_ANALOG_PLL_USB2_SET_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_SET_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB2_SET_ENABLE_MASK)
#define CCM_ANALOG_PLL_USB2_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_USB2_SET_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_USB2_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB2_SET_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_USB2_SET_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_USB2_SET_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_USB2_SET_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB2_SET_BYPASS_MASK)
#define CCM_ANALOG_PLL_USB2_SET_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_USB2_SET_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_USB2_SET_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB2_SET_LOCK_MASK)

/*! @name PLL_USB2_CLR - Analog USB2 480MHz PLL Control Register */
#define CCM_ANALOG_PLL_USB2_CLR_DIV_SELECT_MASK  (0x3U)
#define CCM_ANALOG_PLL_USB2_CLR_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_USB2_CLR_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_CLR_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB2_CLR_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_USB2_CLR_EN_USB_CLKS_MASK (0x40U)
#define CCM_ANALOG_PLL_USB2_CLR_EN_USB_CLKS_SHIFT (6U)
#define CCM_ANALOG_PLL_USB2_CLR_EN_USB_CLKS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_CLR_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB2_CLR_EN_USB_CLKS_MASK)
#define CCM_ANALOG_PLL_USB2_CLR_POWER_MASK       (0x1000U)
#define CCM_ANALOG_PLL_USB2_CLR_POWER_SHIFT      (12U)
#define CCM_ANALOG_PLL_USB2_CLR_POWER(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_CLR_POWER_SHIFT)) & CCM_ANALOG_PLL_USB2_CLR_POWER_MASK)
#define CCM_ANALOG_PLL_USB2_CLR_ENABLE_MASK      (0x2000U)
#define CCM_ANALOG_PLL_USB2_CLR_ENABLE_SHIFT     (13U)
#define CCM_ANALOG_PLL_USB2_CLR_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_CLR_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB2_CLR_ENABLE_MASK)
#define CCM_ANALOG_PLL_USB2_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_USB2_CLR_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_USB2_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB2_CLR_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_USB2_CLR_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_USB2_CLR_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_USB2_CLR_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB2_CLR_BYPASS_MASK)
#define CCM_ANALOG_PLL_USB2_CLR_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_USB2_CLR_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_USB2_CLR_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB2_CLR_LOCK_MASK)

/*! @name PLL_USB2_TOG - Analog USB2 480MHz PLL Control Register */
#define CCM_ANALOG_PLL_USB2_TOG_DIV_SELECT_MASK  (0x3U)
#define CCM_ANALOG_PLL_USB2_TOG_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_USB2_TOG_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_TOG_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB2_TOG_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_USB2_TOG_EN_USB_CLKS_MASK (0x40U)
#define CCM_ANALOG_PLL_USB2_TOG_EN_USB_CLKS_SHIFT (6U)
#define CCM_ANALOG_PLL_USB2_TOG_EN_USB_CLKS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_TOG_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB2_TOG_EN_USB_CLKS_MASK)
#define CCM_ANALOG_PLL_USB2_TOG_POWER_MASK       (0x1000U)
#define CCM_ANALOG_PLL_USB2_TOG_POWER_SHIFT      (12U)
#define CCM_ANALOG_PLL_USB2_TOG_POWER(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_TOG_POWER_SHIFT)) & CCM_ANALOG_PLL_USB2_TOG_POWER_MASK)
#define CCM_ANALOG_PLL_USB2_TOG_ENABLE_MASK      (0x2000U)
#define CCM_ANALOG_PLL_USB2_TOG_ENABLE_SHIFT     (13U)
#define CCM_ANALOG_PLL_USB2_TOG_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_TOG_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB2_TOG_ENABLE_MASK)
#define CCM_ANALOG_PLL_USB2_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_USB2_TOG_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_USB2_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB2_TOG_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_USB2_TOG_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_USB2_TOG_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_USB2_TOG_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB2_TOG_BYPASS_MASK)
#define CCM_ANALOG_PLL_USB2_TOG_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_USB2_TOG_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_USB2_TOG_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB2_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB2_TOG_LOCK_MASK)

/*! @name PLL_SYS - Analog System PLL Control Register */
#define CCM_ANALOG_PLL_SYS_DIV_SELECT_MASK       (0x1U)
#define CCM_ANALOG_PLL_SYS_DIV_SELECT_SHIFT      (0U)
#define CCM_ANALOG_PLL_SYS_DIV_SELECT(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_SYS_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_SYS_POWERDOWN_MASK        (0x1000U)
#define CCM_ANALOG_PLL_SYS_POWERDOWN_SHIFT       (12U)
#define CCM_ANALOG_PLL_SYS_POWERDOWN(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_SYS_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_SYS_ENABLE_MASK           (0x2000U)
#define CCM_ANALOG_PLL_SYS_ENABLE_SHIFT          (13U)
#define CCM_ANALOG_PLL_SYS_ENABLE(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_ENABLE_MASK)
#define CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC_MASK   (0xC000U)
#define CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC_SHIFT  (14U)
#define CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_SYS_BYPASS_MASK           (0x10000U)
#define CCM_ANALOG_PLL_SYS_BYPASS_SHIFT          (16U)
#define CCM_ANALOG_PLL_SYS_BYPASS(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_BYPASS_SHIFT)) & CCM_ANALOG_PLL_SYS_BYPASS_MASK)
#define CCM_ANALOG_PLL_SYS_PFD_OFFSET_EN_MASK    (0x40000U)
#define CCM_ANALOG_PLL_SYS_PFD_OFFSET_EN_SHIFT   (18U)
#define CCM_ANALOG_PLL_SYS_PFD_OFFSET_EN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_SYS_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_SYS_LOCK_MASK             (0x80000000U)
#define CCM_ANALOG_PLL_SYS_LOCK_SHIFT            (31U)
#define CCM_ANALOG_PLL_SYS_LOCK(x)               (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_LOCK_SHIFT)) & CCM_ANALOG_PLL_SYS_LOCK_MASK)

/*! @name PLL_SYS_SET - Analog System PLL Control Register */
#define CCM_ANALOG_PLL_SYS_SET_DIV_SELECT_MASK   (0x1U)
#define CCM_ANALOG_PLL_SYS_SET_DIV_SELECT_SHIFT  (0U)
#define CCM_ANALOG_PLL_SYS_SET_DIV_SELECT(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_SYS_SET_POWERDOWN_MASK    (0x1000U)
#define CCM_ANALOG_PLL_SYS_SET_POWERDOWN_SHIFT   (12U)
#define CCM_ANALOG_PLL_SYS_SET_POWERDOWN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_SYS_SET_ENABLE_MASK       (0x2000U)
#define CCM_ANALOG_PLL_SYS_SET_ENABLE_SHIFT      (13U)
#define CCM_ANALOG_PLL_SYS_SET_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_ENABLE_MASK)
#define CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_SYS_SET_BYPASS_MASK       (0x10000U)
#define CCM_ANALOG_PLL_SYS_SET_BYPASS_SHIFT      (16U)
#define CCM_ANALOG_PLL_SYS_SET_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_BYPASS_MASK)
#define CCM_ANALOG_PLL_SYS_SET_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_SYS_SET_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_SYS_SET_PFD_OFFSET_EN(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_SYS_SET_LOCK_MASK         (0x80000000U)
#define CCM_ANALOG_PLL_SYS_SET_LOCK_SHIFT        (31U)
#define CCM_ANALOG_PLL_SYS_SET_LOCK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_LOCK_MASK)

/*! @name PLL_SYS_CLR - Analog System PLL Control Register */
#define CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT_MASK   (0x1U)
#define CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT_SHIFT  (0U)
#define CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_SYS_CLR_POWERDOWN_MASK    (0x1000U)
#define CCM_ANALOG_PLL_SYS_CLR_POWERDOWN_SHIFT   (12U)
#define CCM_ANALOG_PLL_SYS_CLR_POWERDOWN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_SYS_CLR_ENABLE_MASK       (0x2000U)
#define CCM_ANALOG_PLL_SYS_CLR_ENABLE_SHIFT      (13U)
#define CCM_ANALOG_PLL_SYS_CLR_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_ENABLE_MASK)
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_MASK       (0x10000U)
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_SHIFT      (16U)
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_BYPASS_MASK)
#define CCM_ANALOG_PLL_SYS_CLR_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_SYS_CLR_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_SYS_CLR_PFD_OFFSET_EN(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_SYS_CLR_LOCK_MASK         (0x80000000U)
#define CCM_ANALOG_PLL_SYS_CLR_LOCK_SHIFT        (31U)
#define CCM_ANALOG_PLL_SYS_CLR_LOCK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_LOCK_MASK)

/*! @name PLL_SYS_TOG - Analog System PLL Control Register */
#define CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT_MASK   (0x1U)
#define CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT_SHIFT  (0U)
#define CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_SYS_TOG_POWERDOWN_MASK    (0x1000U)
#define CCM_ANALOG_PLL_SYS_TOG_POWERDOWN_SHIFT   (12U)
#define CCM_ANALOG_PLL_SYS_TOG_POWERDOWN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_SYS_TOG_ENABLE_MASK       (0x2000U)
#define CCM_ANALOG_PLL_SYS_TOG_ENABLE_SHIFT      (13U)
#define CCM_ANALOG_PLL_SYS_TOG_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_ENABLE_MASK)
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_MASK       (0x10000U)
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_SHIFT      (16U)
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_BYPASS_MASK)
#define CCM_ANALOG_PLL_SYS_TOG_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_SYS_TOG_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_SYS_TOG_PFD_OFFSET_EN(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_SYS_TOG_LOCK_MASK         (0x80000000U)
#define CCM_ANALOG_PLL_SYS_TOG_LOCK_SHIFT        (31U)
#define CCM_ANALOG_PLL_SYS_TOG_LOCK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_LOCK_MASK)

/*! @name PLL_SYS_SS - 528MHz System PLL Spread Spectrum Register */
#define CCM_ANALOG_PLL_SYS_SS_STEP_MASK          (0x7FFFU)
#define CCM_ANALOG_PLL_SYS_SS_STEP_SHIFT         (0U)
#define CCM_ANALOG_PLL_SYS_SS_STEP(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SS_STEP_SHIFT)) & CCM_ANALOG_PLL_SYS_SS_STEP_MASK)
#define CCM_ANALOG_PLL_SYS_SS_ENABLE_MASK        (0x8000U)
#define CCM_ANALOG_PLL_SYS_SS_ENABLE_SHIFT       (15U)
#define CCM_ANALOG_PLL_SYS_SS_ENABLE(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SS_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_SS_ENABLE_MASK)
#define CCM_ANALOG_PLL_SYS_SS_STOP_MASK          (0xFFFF0000U)
#define CCM_ANALOG_PLL_SYS_SS_STOP_SHIFT         (16U)
#define CCM_ANALOG_PLL_SYS_SS_STOP(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SS_STOP_SHIFT)) & CCM_ANALOG_PLL_SYS_SS_STOP_MASK)

/*! @name PLL_SYS_NUM - Numerator of 528MHz System PLL Fractional Loop Divider Register */
#define CCM_ANALOG_PLL_SYS_NUM_A_MASK            (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_SYS_NUM_A_SHIFT           (0U)
#define CCM_ANALOG_PLL_SYS_NUM_A(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_NUM_A_SHIFT)) & CCM_ANALOG_PLL_SYS_NUM_A_MASK)

/*! @name PLL_SYS_DENOM - Denominator of 528MHz System PLL Fractional Loop Divider Register */
#define CCM_ANALOG_PLL_SYS_DENOM_B_MASK          (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_SYS_DENOM_B_SHIFT         (0U)
#define CCM_ANALOG_PLL_SYS_DENOM_B(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_DENOM_B_SHIFT)) & CCM_ANALOG_PLL_SYS_DENOM_B_MASK)

/*! @name PLL_AUDIO - Analog Audio PLL control Register */
#define CCM_ANALOG_PLL_AUDIO_DIV_SELECT_MASK     (0x7FU)
#define CCM_ANALOG_PLL_AUDIO_DIV_SELECT_SHIFT    (0U)
#define CCM_ANALOG_PLL_AUDIO_DIV_SELECT(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_AUDIO_POWERDOWN_MASK      (0x1000U)
#define CCM_ANALOG_PLL_AUDIO_POWERDOWN_SHIFT     (12U)
#define CCM_ANALOG_PLL_AUDIO_POWERDOWN(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_AUDIO_ENABLE_MASK         (0x2000U)
#define CCM_ANALOG_PLL_AUDIO_ENABLE_SHIFT        (13U)
#define CCM_ANALOG_PLL_AUDIO_ENABLE(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_ENABLE_SHIFT)) & CCM_ANALOG_PLL_AUDIO_ENABLE_MASK)
#define CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_AUDIO_BYPASS_MASK         (0x10000U)
#define CCM_ANALOG_PLL_AUDIO_BYPASS_SHIFT        (16U)
#define CCM_ANALOG_PLL_AUDIO_BYPASS(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_BYPASS_SHIFT)) & CCM_ANALOG_PLL_AUDIO_BYPASS_MASK)
#define CCM_ANALOG_PLL_AUDIO_PFD_OFFSET_EN_MASK  (0x40000U)
#define CCM_ANALOG_PLL_AUDIO_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_AUDIO_PFD_OFFSET_EN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT_SHIFT (19U)
#define CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_AUDIO_LOCK_MASK           (0x80000000U)
#define CCM_ANALOG_PLL_AUDIO_LOCK_SHIFT          (31U)
#define CCM_ANALOG_PLL_AUDIO_LOCK(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_LOCK_SHIFT)) & CCM_ANALOG_PLL_AUDIO_LOCK_MASK)

/*! @name PLL_AUDIO_SET - Analog Audio PLL control Register */
#define CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT_MASK (0x7FU)
#define CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN_MASK  (0x1000U)
#define CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN_SHIFT (12U)
#define CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_AUDIO_SET_ENABLE_MASK     (0x2000U)
#define CCM_ANALOG_PLL_AUDIO_SET_ENABLE_SHIFT    (13U)
#define CCM_ANALOG_PLL_AUDIO_SET_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_ENABLE_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_ENABLE_MASK)
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_MASK     (0x10000U)
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_SHIFT    (16U)
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_BYPASS_MASK)
#define CCM_ANALOG_PLL_AUDIO_SET_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_AUDIO_SET_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_AUDIO_SET_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT_SHIFT (19U)
#define CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_AUDIO_SET_LOCK_MASK       (0x80000000U)
#define CCM_ANALOG_PLL_AUDIO_SET_LOCK_SHIFT      (31U)
#define CCM_ANALOG_PLL_AUDIO_SET_LOCK(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_LOCK_MASK)

/*! @name PLL_AUDIO_CLR - Analog Audio PLL control Register */
#define CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT_MASK (0x7FU)
#define CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN_MASK  (0x1000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN_SHIFT (12U)
#define CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_AUDIO_CLR_ENABLE_MASK     (0x2000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_ENABLE_SHIFT    (13U)
#define CCM_ANALOG_PLL_AUDIO_CLR_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_ENABLE_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_ENABLE_MASK)
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_MASK     (0x10000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_SHIFT    (16U)
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_MASK)
#define CCM_ANALOG_PLL_AUDIO_CLR_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_AUDIO_CLR_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT_SHIFT (19U)
#define CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_AUDIO_CLR_LOCK_MASK       (0x80000000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_LOCK_SHIFT      (31U)
#define CCM_ANALOG_PLL_AUDIO_CLR_LOCK(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_LOCK_MASK)

/*! @name PLL_AUDIO_TOG - Analog Audio PLL control Register */
#define CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT_MASK (0x7FU)
#define CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN_MASK  (0x1000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN_SHIFT (12U)
#define CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_AUDIO_TOG_ENABLE_MASK     (0x2000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_ENABLE_SHIFT    (13U)
#define CCM_ANALOG_PLL_AUDIO_TOG_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_ENABLE_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_ENABLE_MASK)
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_MASK     (0x10000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_SHIFT    (16U)
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_MASK)
#define CCM_ANALOG_PLL_AUDIO_TOG_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_AUDIO_TOG_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT_SHIFT (19U)
#define CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_AUDIO_TOG_LOCK_MASK       (0x80000000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_LOCK_SHIFT      (31U)
#define CCM_ANALOG_PLL_AUDIO_TOG_LOCK(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_LOCK_MASK)

/*! @name PLL_AUDIO_NUM - Numerator of Audio PLL Fractional Loop Divider Register */
#define CCM_ANALOG_PLL_AUDIO_NUM_A_MASK          (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_AUDIO_NUM_A_SHIFT         (0U)
#define CCM_ANALOG_PLL_AUDIO_NUM_A(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_NUM_A_SHIFT)) & CCM_ANALOG_PLL_AUDIO_NUM_A_MASK)

/*! @name PLL_AUDIO_DENOM - Denominator of Audio PLL Fractional Loop Divider Register */
#define CCM_ANALOG_PLL_AUDIO_DENOM_B_MASK        (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_AUDIO_DENOM_B_SHIFT       (0U)
#define CCM_ANALOG_PLL_AUDIO_DENOM_B(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_DENOM_B_SHIFT)) & CCM_ANALOG_PLL_AUDIO_DENOM_B_MASK)

/*! @name PLL_VIDEO - Analog Video PLL control Register */
#define CCM_ANALOG_PLL_VIDEO_DIV_SELECT_MASK     (0x7FU)
#define CCM_ANALOG_PLL_VIDEO_DIV_SELECT_SHIFT    (0U)
#define CCM_ANALOG_PLL_VIDEO_DIV_SELECT(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_VIDEO_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_VIDEO_POWERDOWN_MASK      (0x1000U)
#define CCM_ANALOG_PLL_VIDEO_POWERDOWN_SHIFT     (12U)
#define CCM_ANALOG_PLL_VIDEO_POWERDOWN(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_VIDEO_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_VIDEO_ENABLE_MASK         (0x2000U)
#define CCM_ANALOG_PLL_VIDEO_ENABLE_SHIFT        (13U)
#define CCM_ANALOG_PLL_VIDEO_ENABLE(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_ENABLE_SHIFT)) & CCM_ANALOG_PLL_VIDEO_ENABLE_MASK)
#define CCM_ANALOG_PLL_VIDEO_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_VIDEO_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_VIDEO_BYPASS_CLK_SRC(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_VIDEO_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_VIDEO_BYPASS_MASK         (0x10000U)
#define CCM_ANALOG_PLL_VIDEO_BYPASS_SHIFT        (16U)
#define CCM_ANALOG_PLL_VIDEO_BYPASS(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_BYPASS_SHIFT)) & CCM_ANALOG_PLL_VIDEO_BYPASS_MASK)
#define CCM_ANALOG_PLL_VIDEO_PFD_OFFSET_EN_MASK  (0x40000U)
#define CCM_ANALOG_PLL_VIDEO_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_VIDEO_PFD_OFFSET_EN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_VIDEO_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT_SHIFT (19U)
#define CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_VIDEO_LOCK_MASK           (0x80000000U)
#define CCM_ANALOG_PLL_VIDEO_LOCK_SHIFT          (31U)
#define CCM_ANALOG_PLL_VIDEO_LOCK(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_LOCK_SHIFT)) & CCM_ANALOG_PLL_VIDEO_LOCK_MASK)

/*! @name PLL_VIDEO_SET - Analog Video PLL control Register */
#define CCM_ANALOG_PLL_VIDEO_SET_DIV_SELECT_MASK (0x7FU)
#define CCM_ANALOG_PLL_VIDEO_SET_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_VIDEO_SET_DIV_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_SET_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_VIDEO_SET_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_VIDEO_SET_POWERDOWN_MASK  (0x1000U)
#define CCM_ANALOG_PLL_VIDEO_SET_POWERDOWN_SHIFT (12U)
#define CCM_ANALOG_PLL_VIDEO_SET_POWERDOWN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_SET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_VIDEO_SET_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_VIDEO_SET_ENABLE_MASK     (0x2000U)
#define CCM_ANALOG_PLL_VIDEO_SET_ENABLE_SHIFT    (13U)
#define CCM_ANALOG_PLL_VIDEO_SET_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_SET_ENABLE_SHIFT)) & CCM_ANALOG_PLL_VIDEO_SET_ENABLE_MASK)
#define CCM_ANALOG_PLL_VIDEO_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_VIDEO_SET_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_VIDEO_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_VIDEO_SET_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_VIDEO_SET_BYPASS_MASK     (0x10000U)
#define CCM_ANALOG_PLL_VIDEO_SET_BYPASS_SHIFT    (16U)
#define CCM_ANALOG_PLL_VIDEO_SET_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_VIDEO_SET_BYPASS_MASK)
#define CCM_ANALOG_PLL_VIDEO_SET_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_VIDEO_SET_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_VIDEO_SET_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_SET_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_VIDEO_SET_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_VIDEO_SET_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_VIDEO_SET_POST_DIV_SELECT_SHIFT (19U)
#define CCM_ANALOG_PLL_VIDEO_SET_POST_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_SET_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_VIDEO_SET_POST_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_VIDEO_SET_LOCK_MASK       (0x80000000U)
#define CCM_ANALOG_PLL_VIDEO_SET_LOCK_SHIFT      (31U)
#define CCM_ANALOG_PLL_VIDEO_SET_LOCK(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_VIDEO_SET_LOCK_MASK)

/*! @name PLL_VIDEO_CLR - Analog Video PLL control Register */
#define CCM_ANALOG_PLL_VIDEO_CLR_DIV_SELECT_MASK (0x7FU)
#define CCM_ANALOG_PLL_VIDEO_CLR_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_VIDEO_CLR_DIV_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_CLR_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_VIDEO_CLR_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_VIDEO_CLR_POWERDOWN_MASK  (0x1000U)
#define CCM_ANALOG_PLL_VIDEO_CLR_POWERDOWN_SHIFT (12U)
#define CCM_ANALOG_PLL_VIDEO_CLR_POWERDOWN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_CLR_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_VIDEO_CLR_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_VIDEO_CLR_ENABLE_MASK     (0x2000U)
#define CCM_ANALOG_PLL_VIDEO_CLR_ENABLE_SHIFT    (13U)
#define CCM_ANALOG_PLL_VIDEO_CLR_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_CLR_ENABLE_SHIFT)) & CCM_ANALOG_PLL_VIDEO_CLR_ENABLE_MASK)
#define CCM_ANALOG_PLL_VIDEO_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_VIDEO_CLR_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_VIDEO_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_VIDEO_CLR_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_VIDEO_CLR_BYPASS_MASK     (0x10000U)
#define CCM_ANALOG_PLL_VIDEO_CLR_BYPASS_SHIFT    (16U)
#define CCM_ANALOG_PLL_VIDEO_CLR_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_VIDEO_CLR_BYPASS_MASK)
#define CCM_ANALOG_PLL_VIDEO_CLR_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_VIDEO_CLR_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_VIDEO_CLR_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_CLR_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_VIDEO_CLR_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_VIDEO_CLR_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_VIDEO_CLR_POST_DIV_SELECT_SHIFT (19U)
#define CCM_ANALOG_PLL_VIDEO_CLR_POST_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_CLR_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_VIDEO_CLR_POST_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_VIDEO_CLR_LOCK_MASK       (0x80000000U)
#define CCM_ANALOG_PLL_VIDEO_CLR_LOCK_SHIFT      (31U)
#define CCM_ANALOG_PLL_VIDEO_CLR_LOCK(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_VIDEO_CLR_LOCK_MASK)

/*! @name PLL_VIDEO_TOG - Analog Video PLL control Register */
#define CCM_ANALOG_PLL_VIDEO_TOG_DIV_SELECT_MASK (0x7FU)
#define CCM_ANALOG_PLL_VIDEO_TOG_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_VIDEO_TOG_DIV_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_TOG_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_VIDEO_TOG_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_VIDEO_TOG_POWERDOWN_MASK  (0x1000U)
#define CCM_ANALOG_PLL_VIDEO_TOG_POWERDOWN_SHIFT (12U)
#define CCM_ANALOG_PLL_VIDEO_TOG_POWERDOWN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_TOG_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_VIDEO_TOG_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_VIDEO_TOG_ENABLE_MASK     (0x2000U)
#define CCM_ANALOG_PLL_VIDEO_TOG_ENABLE_SHIFT    (13U)
#define CCM_ANALOG_PLL_VIDEO_TOG_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_TOG_ENABLE_SHIFT)) & CCM_ANALOG_PLL_VIDEO_TOG_ENABLE_MASK)
#define CCM_ANALOG_PLL_VIDEO_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_VIDEO_TOG_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_VIDEO_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_VIDEO_TOG_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_VIDEO_TOG_BYPASS_MASK     (0x10000U)
#define CCM_ANALOG_PLL_VIDEO_TOG_BYPASS_SHIFT    (16U)
#define CCM_ANALOG_PLL_VIDEO_TOG_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_VIDEO_TOG_BYPASS_MASK)
#define CCM_ANALOG_PLL_VIDEO_TOG_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_VIDEO_TOG_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_VIDEO_TOG_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_TOG_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_VIDEO_TOG_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_VIDEO_TOG_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_VIDEO_TOG_POST_DIV_SELECT_SHIFT (19U)
#define CCM_ANALOG_PLL_VIDEO_TOG_POST_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_TOG_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_VIDEO_TOG_POST_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_VIDEO_TOG_LOCK_MASK       (0x80000000U)
#define CCM_ANALOG_PLL_VIDEO_TOG_LOCK_SHIFT      (31U)
#define CCM_ANALOG_PLL_VIDEO_TOG_LOCK(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_VIDEO_TOG_LOCK_MASK)

/*! @name PLL_VIDEO_NUM - Numerator of Video PLL Fractional Loop Divider Register */
#define CCM_ANALOG_PLL_VIDEO_NUM_A_MASK          (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_VIDEO_NUM_A_SHIFT         (0U)
#define CCM_ANALOG_PLL_VIDEO_NUM_A(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_NUM_A_SHIFT)) & CCM_ANALOG_PLL_VIDEO_NUM_A_MASK)

/*! @name PLL_VIDEO_DENOM - Denominator of Video PLL Fractional Loop Divider Register */
#define CCM_ANALOG_PLL_VIDEO_DENOM_B_MASK        (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_VIDEO_DENOM_B_SHIFT       (0U)
#define CCM_ANALOG_PLL_VIDEO_DENOM_B(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_VIDEO_DENOM_B_SHIFT)) & CCM_ANALOG_PLL_VIDEO_DENOM_B_MASK)

/*! @name PLL_ENET - Analog ENET PLL Control Register */
#define CCM_ANALOG_PLL_ENET_ENET0_DIV_SELECT_MASK (0x3U)
#define CCM_ANALOG_PLL_ENET_ENET0_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_ENET_ENET0_DIV_SELECT(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_ENET0_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ENET_ENET0_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ENET_ENET1_DIV_SELECT_MASK (0xCU)
#define CCM_ANALOG_PLL_ENET_ENET1_DIV_SELECT_SHIFT (2U)
#define CCM_ANALOG_PLL_ENET_ENET1_DIV_SELECT(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_ENET1_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ENET_ENET1_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ENET_POWERDOWN_MASK       (0x1000U)
#define CCM_ANALOG_PLL_ENET_POWERDOWN_SHIFT      (12U)
#define CCM_ANALOG_PLL_ENET_POWERDOWN(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ENET_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_ENET_ENET1_125M_EN_MASK   (0x2000U)
#define CCM_ANALOG_PLL_ENET_ENET1_125M_EN_SHIFT  (13U)
#define CCM_ANALOG_PLL_ENET_ENET1_125M_EN(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_ENET1_125M_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_ENET1_125M_EN_MASK)
#define CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC_MASK  (0xC000U)
#define CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_ENET_BYPASS_MASK          (0x10000U)
#define CCM_ANALOG_PLL_ENET_BYPASS_SHIFT         (16U)
#define CCM_ANALOG_PLL_ENET_BYPASS(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ENET_BYPASS_MASK)
#define CCM_ANALOG_PLL_ENET_PFD_OFFSET_EN_MASK   (0x40000U)
#define CCM_ANALOG_PLL_ENET_PFD_OFFSET_EN_SHIFT  (18U)
#define CCM_ANALOG_PLL_ENET_PFD_OFFSET_EN(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_ENET_ENABLE_125M_MASK     (0x80000U)
#define CCM_ANALOG_PLL_ENET_ENABLE_125M_SHIFT    (19U)
#define CCM_ANALOG_PLL_ENET_ENABLE_125M(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_ENABLE_125M_SHIFT)) & CCM_ANALOG_PLL_ENET_ENABLE_125M_MASK)
#define CCM_ANALOG_PLL_ENET_ENET2_125M_EN_MASK   (0x100000U)
#define CCM_ANALOG_PLL_ENET_ENET2_125M_EN_SHIFT  (20U)
#define CCM_ANALOG_PLL_ENET_ENET2_125M_EN(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_ENET2_125M_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_ENET2_125M_EN_MASK)
#define CCM_ANALOG_PLL_ENET_ENET_25M_REF_EN_MASK (0x200000U)
#define CCM_ANALOG_PLL_ENET_ENET_25M_REF_EN_SHIFT (21U)
#define CCM_ANALOG_PLL_ENET_ENET_25M_REF_EN(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_ENET_25M_REF_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_ENET_25M_REF_EN_MASK)
#define CCM_ANALOG_PLL_ENET_LOCK_MASK            (0x80000000U)
#define CCM_ANALOG_PLL_ENET_LOCK_SHIFT           (31U)
#define CCM_ANALOG_PLL_ENET_LOCK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_LOCK_SHIFT)) & CCM_ANALOG_PLL_ENET_LOCK_MASK)

/*! @name PLL_ENET_SET - Analog ENET PLL Control Register */
#define CCM_ANALOG_PLL_ENET_SET_ENET0_DIV_SELECT_MASK (0x3U)
#define CCM_ANALOG_PLL_ENET_SET_ENET0_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_ENET_SET_ENET0_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_ENET0_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_ENET0_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ENET_SET_ENET1_DIV_SELECT_MASK (0xCU)
#define CCM_ANALOG_PLL_ENET_SET_ENET1_DIV_SELECT_SHIFT (2U)
#define CCM_ANALOG_PLL_ENET_SET_ENET1_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_ENET1_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_ENET1_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ENET_SET_POWERDOWN_MASK   (0x1000U)
#define CCM_ANALOG_PLL_ENET_SET_POWERDOWN_SHIFT  (12U)
#define CCM_ANALOG_PLL_ENET_SET_POWERDOWN(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_ENET_SET_ENET1_125M_EN_MASK (0x2000U)
#define CCM_ANALOG_PLL_ENET_SET_ENET1_125M_EN_SHIFT (13U)
#define CCM_ANALOG_PLL_ENET_SET_ENET1_125M_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_ENET1_125M_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_ENET1_125M_EN_MASK)
#define CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_ENET_SET_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_ENET_SET_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_ENET_SET_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_BYPASS_MASK)
#define CCM_ANALOG_PLL_ENET_SET_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_ENET_SET_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_ENET_SET_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_ENET_SET_ENABLE_125M_MASK (0x80000U)
#define CCM_ANALOG_PLL_ENET_SET_ENABLE_125M_SHIFT (19U)
#define CCM_ANALOG_PLL_ENET_SET_ENABLE_125M(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_ENABLE_125M_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_ENABLE_125M_MASK)
#define CCM_ANALOG_PLL_ENET_SET_ENET2_125M_EN_MASK (0x100000U)
#define CCM_ANALOG_PLL_ENET_SET_ENET2_125M_EN_SHIFT (20U)
#define CCM_ANALOG_PLL_ENET_SET_ENET2_125M_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_ENET2_125M_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_ENET2_125M_EN_MASK)
#define CCM_ANALOG_PLL_ENET_SET_ENET_25M_REF_EN_MASK (0x200000U)
#define CCM_ANALOG_PLL_ENET_SET_ENET_25M_REF_EN_SHIFT (21U)
#define CCM_ANALOG_PLL_ENET_SET_ENET_25M_REF_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_ENET_25M_REF_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_ENET_25M_REF_EN_MASK)
#define CCM_ANALOG_PLL_ENET_SET_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_ENET_SET_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_ENET_SET_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_LOCK_MASK)

/*! @name PLL_ENET_CLR - Analog ENET PLL Control Register */
#define CCM_ANALOG_PLL_ENET_CLR_ENET0_DIV_SELECT_MASK (0x3U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET0_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET0_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_ENET0_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_ENET0_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_ENET1_DIV_SELECT_MASK (0xCU)
#define CCM_ANALOG_PLL_ENET_CLR_ENET1_DIV_SELECT_SHIFT (2U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET1_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_ENET1_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_ENET1_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_POWERDOWN_MASK   (0x1000U)
#define CCM_ANALOG_PLL_ENET_CLR_POWERDOWN_SHIFT  (12U)
#define CCM_ANALOG_PLL_ENET_CLR_POWERDOWN(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_ENET1_125M_EN_MASK (0x2000U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET1_125M_EN_SHIFT (13U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET1_125M_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_ENET1_125M_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_ENET1_125M_EN_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_BYPASS_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_ENET_CLR_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_ENET_CLR_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_ENABLE_125M_MASK (0x80000U)
#define CCM_ANALOG_PLL_ENET_CLR_ENABLE_125M_SHIFT (19U)
#define CCM_ANALOG_PLL_ENET_CLR_ENABLE_125M(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_ENABLE_125M_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_ENABLE_125M_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_ENET2_125M_EN_MASK (0x100000U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET2_125M_EN_SHIFT (20U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET2_125M_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_ENET2_125M_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_ENET2_125M_EN_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_ENET_25M_REF_EN_MASK (0x200000U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET_25M_REF_EN_SHIFT (21U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET_25M_REF_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_ENET_25M_REF_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_ENET_25M_REF_EN_MASK)
#define CCM_ANALOG_PLL_ENET_CLR_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_ENET_CLR_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_ENET_CLR_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_LOCK_MASK)

/*! @name PLL_ENET_TOG - Analog ENET PLL Control Register */
#define CCM_ANALOG_PLL_ENET_TOG_ENET0_DIV_SELECT_MASK (0x3U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET0_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET0_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_ENET0_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_ENET0_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_ENET1_DIV_SELECT_MASK (0xCU)
#define CCM_ANALOG_PLL_ENET_TOG_ENET1_DIV_SELECT_SHIFT (2U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET1_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_ENET1_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_ENET1_DIV_SELECT_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_POWERDOWN_MASK   (0x1000U)
#define CCM_ANALOG_PLL_ENET_TOG_POWERDOWN_SHIFT  (12U)
#define CCM_ANALOG_PLL_ENET_TOG_POWERDOWN(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_POWERDOWN_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_ENET1_125M_EN_MASK (0x2000U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET1_125M_EN_SHIFT (13U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET1_125M_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_ENET1_125M_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_ENET1_125M_EN_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC_SHIFT (14U)
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_BYPASS_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_PFD_OFFSET_EN_MASK (0x40000U)
#define CCM_ANALOG_PLL_ENET_TOG_PFD_OFFSET_EN_SHIFT (18U)
#define CCM_ANALOG_PLL_ENET_TOG_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_PFD_OFFSET_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_PFD_OFFSET_EN_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_ENABLE_125M_MASK (0x80000U)
#define CCM_ANALOG_PLL_ENET_TOG_ENABLE_125M_SHIFT (19U)
#define CCM_ANALOG_PLL_ENET_TOG_ENABLE_125M(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_ENABLE_125M_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_ENABLE_125M_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_ENET2_125M_EN_MASK (0x100000U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET2_125M_EN_SHIFT (20U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET2_125M_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_ENET2_125M_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_ENET2_125M_EN_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_ENET_25M_REF_EN_MASK (0x200000U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET_25M_REF_EN_SHIFT (21U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET_25M_REF_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_ENET_25M_REF_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_ENET_25M_REF_EN_MASK)
#define CCM_ANALOG_PLL_ENET_TOG_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_ENET_TOG_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_ENET_TOG_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_LOCK_MASK)

/*! @name PFD_480 - 480MHz Clock (PLL3) Phase Fractional Divider Control Register */
#define CCM_ANALOG_PFD_480_PFD0_FRAC_MASK        (0x3FU)
#define CCM_ANALOG_PFD_480_PFD0_FRAC_SHIFT       (0U)
#define CCM_ANALOG_PFD_480_PFD0_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_PFD0_FRAC_MASK)
#define CCM_ANALOG_PFD_480_PFD0_STABLE_MASK      (0x40U)
#define CCM_ANALOG_PFD_480_PFD0_STABLE_SHIFT     (6U)
#define CCM_ANALOG_PFD_480_PFD0_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_PFD0_STABLE_MASK)
#define CCM_ANALOG_PFD_480_PFD0_CLKGATE_MASK     (0x80U)
#define CCM_ANALOG_PFD_480_PFD0_CLKGATE_SHIFT    (7U)
#define CCM_ANALOG_PFD_480_PFD0_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_PFD0_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_PFD1_FRAC_MASK        (0x3F00U)
#define CCM_ANALOG_PFD_480_PFD1_FRAC_SHIFT       (8U)
#define CCM_ANALOG_PFD_480_PFD1_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_PFD1_FRAC_MASK)
#define CCM_ANALOG_PFD_480_PFD1_STABLE_MASK      (0x4000U)
#define CCM_ANALOG_PFD_480_PFD1_STABLE_SHIFT     (14U)
#define CCM_ANALOG_PFD_480_PFD1_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_PFD1_STABLE_MASK)
#define CCM_ANALOG_PFD_480_PFD1_CLKGATE_MASK     (0x8000U)
#define CCM_ANALOG_PFD_480_PFD1_CLKGATE_SHIFT    (15U)
#define CCM_ANALOG_PFD_480_PFD1_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_PFD1_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_PFD2_FRAC_MASK        (0x3F0000U)
#define CCM_ANALOG_PFD_480_PFD2_FRAC_SHIFT       (16U)
#define CCM_ANALOG_PFD_480_PFD2_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_PFD2_FRAC_MASK)
#define CCM_ANALOG_PFD_480_PFD2_STABLE_MASK      (0x400000U)
#define CCM_ANALOG_PFD_480_PFD2_STABLE_SHIFT     (22U)
#define CCM_ANALOG_PFD_480_PFD2_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_PFD2_STABLE_MASK)
#define CCM_ANALOG_PFD_480_PFD2_CLKGATE_MASK     (0x800000U)
#define CCM_ANALOG_PFD_480_PFD2_CLKGATE_SHIFT    (23U)
#define CCM_ANALOG_PFD_480_PFD2_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_PFD2_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_PFD3_FRAC_MASK        (0x3F000000U)
#define CCM_ANALOG_PFD_480_PFD3_FRAC_SHIFT       (24U)
#define CCM_ANALOG_PFD_480_PFD3_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_PFD3_FRAC_MASK)
#define CCM_ANALOG_PFD_480_PFD3_STABLE_MASK      (0x40000000U)
#define CCM_ANALOG_PFD_480_PFD3_STABLE_SHIFT     (30U)
#define CCM_ANALOG_PFD_480_PFD3_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_PFD3_STABLE_MASK)
#define CCM_ANALOG_PFD_480_PFD3_CLKGATE_MASK     (0x80000000U)
#define CCM_ANALOG_PFD_480_PFD3_CLKGATE_SHIFT    (31U)
#define CCM_ANALOG_PFD_480_PFD3_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_PFD3_CLKGATE_MASK)

/*! @name PFD_480_SET - 480MHz Clock (PLL3) Phase Fractional Divider Control Register */
#define CCM_ANALOG_PFD_480_SET_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_480_SET_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_480_SET_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD0_FRAC_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_480_SET_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_480_SET_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD0_STABLE_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_480_SET_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_480_SET_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD1_FRAC_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_480_SET_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_480_SET_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD1_STABLE_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_480_SET_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_480_SET_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD2_FRAC_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_480_SET_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_480_SET_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD2_STABLE_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_480_SET_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_480_SET_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD3_FRAC_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_480_SET_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_480_SET_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD3_STABLE_MASK)
#define CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE_MASK)

/*! @name PFD_480_CLR - 480MHz Clock (PLL3) Phase Fractional Divider Control Register */
#define CCM_ANALOG_PFD_480_CLR_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_480_CLR_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD0_FRAC_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD0_STABLE_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD1_FRAC_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD1_STABLE_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD2_FRAC_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD2_STABLE_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD3_FRAC_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD3_STABLE_MASK)
#define CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE_MASK)

/*! @name PFD_480_TOG - 480MHz Clock (PLL3) Phase Fractional Divider Control Register */
#define CCM_ANALOG_PFD_480_TOG_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_480_TOG_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD0_FRAC_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD0_STABLE_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD1_FRAC_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD1_STABLE_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD2_FRAC_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD2_STABLE_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD3_FRAC_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD3_STABLE_MASK)
#define CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE_MASK)

/*! @name PFD_528 - 528MHz Clock (PLL2) Phase Fractional Divider Control Register */
#define CCM_ANALOG_PFD_528_PFD0_FRAC_MASK        (0x3FU)
#define CCM_ANALOG_PFD_528_PFD0_FRAC_SHIFT       (0U)
#define CCM_ANALOG_PFD_528_PFD0_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_PFD0_FRAC_MASK)
#define CCM_ANALOG_PFD_528_PFD0_STABLE_MASK      (0x40U)
#define CCM_ANALOG_PFD_528_PFD0_STABLE_SHIFT     (6U)
#define CCM_ANALOG_PFD_528_PFD0_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_PFD0_STABLE_MASK)
#define CCM_ANALOG_PFD_528_PFD0_CLKGATE_MASK     (0x80U)
#define CCM_ANALOG_PFD_528_PFD0_CLKGATE_SHIFT    (7U)
#define CCM_ANALOG_PFD_528_PFD0_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_PFD0_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_PFD1_FRAC_MASK        (0x3F00U)
#define CCM_ANALOG_PFD_528_PFD1_FRAC_SHIFT       (8U)
#define CCM_ANALOG_PFD_528_PFD1_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_PFD1_FRAC_MASK)
#define CCM_ANALOG_PFD_528_PFD1_STABLE_MASK      (0x4000U)
#define CCM_ANALOG_PFD_528_PFD1_STABLE_SHIFT     (14U)
#define CCM_ANALOG_PFD_528_PFD1_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_PFD1_STABLE_MASK)
#define CCM_ANALOG_PFD_528_PFD1_CLKGATE_MASK     (0x8000U)
#define CCM_ANALOG_PFD_528_PFD1_CLKGATE_SHIFT    (15U)
#define CCM_ANALOG_PFD_528_PFD1_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_PFD1_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_PFD2_FRAC_MASK        (0x3F0000U)
#define CCM_ANALOG_PFD_528_PFD2_FRAC_SHIFT       (16U)
#define CCM_ANALOG_PFD_528_PFD2_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_PFD2_FRAC_MASK)
#define CCM_ANALOG_PFD_528_PFD2_STABLE_MASK      (0x400000U)
#define CCM_ANALOG_PFD_528_PFD2_STABLE_SHIFT     (22U)
#define CCM_ANALOG_PFD_528_PFD2_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_PFD2_STABLE_MASK)
#define CCM_ANALOG_PFD_528_PFD2_CLKGATE_MASK     (0x800000U)
#define CCM_ANALOG_PFD_528_PFD2_CLKGATE_SHIFT    (23U)
#define CCM_ANALOG_PFD_528_PFD2_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_PFD2_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_PFD3_FRAC_MASK        (0x3F000000U)
#define CCM_ANALOG_PFD_528_PFD3_FRAC_SHIFT       (24U)
#define CCM_ANALOG_PFD_528_PFD3_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_PFD3_FRAC_MASK)
#define CCM_ANALOG_PFD_528_PFD3_STABLE_MASK      (0x40000000U)
#define CCM_ANALOG_PFD_528_PFD3_STABLE_SHIFT     (30U)
#define CCM_ANALOG_PFD_528_PFD3_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_PFD3_STABLE_MASK)
#define CCM_ANALOG_PFD_528_PFD3_CLKGATE_MASK     (0x80000000U)
#define CCM_ANALOG_PFD_528_PFD3_CLKGATE_SHIFT    (31U)
#define CCM_ANALOG_PFD_528_PFD3_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_PFD3_CLKGATE_MASK)

/*! @name PFD_528_SET - 528MHz Clock (PLL2) Phase Fractional Divider Control Register */
#define CCM_ANALOG_PFD_528_SET_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_528_SET_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_528_SET_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD0_FRAC_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_528_SET_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_528_SET_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD0_STABLE_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_528_SET_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_528_SET_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD1_FRAC_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_528_SET_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_528_SET_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD1_STABLE_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_528_SET_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_528_SET_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD2_FRAC_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_528_SET_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_528_SET_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD2_STABLE_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_528_SET_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_528_SET_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD3_FRAC_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_528_SET_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_528_SET_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD3_STABLE_MASK)
#define CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE_MASK)

/*! @name PFD_528_CLR - 528MHz Clock (PLL2) Phase Fractional Divider Control Register */
#define CCM_ANALOG_PFD_528_CLR_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_528_CLR_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD0_FRAC_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD0_STABLE_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD1_FRAC_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD1_STABLE_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD2_FRAC_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD2_STABLE_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD3_FRAC_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD3_STABLE_MASK)
#define CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE_MASK)

/*! @name PFD_528_TOG - 528MHz Clock (PLL2) Phase Fractional Divider Control Register */
#define CCM_ANALOG_PFD_528_TOG_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_528_TOG_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD0_FRAC_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD0_STABLE_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD1_FRAC_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD1_STABLE_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD2_FRAC_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD2_STABLE_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD3_FRAC_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD3_STABLE_MASK)
#define CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE_MASK)

/*! @name MISC0 - Miscellaneous Register 0 */
#define CCM_ANALOG_MISC0_REFTOP_PWD_MASK         (0x1U)
#define CCM_ANALOG_MISC0_REFTOP_PWD_SHIFT        (0U)
#define CCM_ANALOG_MISC0_REFTOP_PWD(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_REFTOP_PWD_SHIFT)) & CCM_ANALOG_MISC0_REFTOP_PWD_MASK)
#define CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF_MASK (0x8U)
#define CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF_SHIFT (3U)
#define CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF_SHIFT)) & CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF_MASK)
#define CCM_ANALOG_MISC0_REFTOP_VBGADJ_MASK      (0x70U)
#define CCM_ANALOG_MISC0_REFTOP_VBGADJ_SHIFT     (4U)
#define CCM_ANALOG_MISC0_REFTOP_VBGADJ(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_REFTOP_VBGADJ_SHIFT)) & CCM_ANALOG_MISC0_REFTOP_VBGADJ_MASK)
#define CCM_ANALOG_MISC0_REFTOP_VBGUP_MASK       (0x80U)
#define CCM_ANALOG_MISC0_REFTOP_VBGUP_SHIFT      (7U)
#define CCM_ANALOG_MISC0_REFTOP_VBGUP(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_REFTOP_VBGUP_SHIFT)) & CCM_ANALOG_MISC0_REFTOP_VBGUP_MASK)
#define CCM_ANALOG_MISC0_STOP_MODE_CONFIG_MASK   (0xC00U)
#define CCM_ANALOG_MISC0_STOP_MODE_CONFIG_SHIFT  (10U)
#define CCM_ANALOG_MISC0_STOP_MODE_CONFIG(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_STOP_MODE_CONFIG_SHIFT)) & CCM_ANALOG_MISC0_STOP_MODE_CONFIG_MASK)
#define CCM_ANALOG_MISC0_DISCON_HIGH_SNVS_MASK   (0x1000U)
#define CCM_ANALOG_MISC0_DISCON_HIGH_SNVS_SHIFT  (12U)
#define CCM_ANALOG_MISC0_DISCON_HIGH_SNVS(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_DISCON_HIGH_SNVS_SHIFT)) & CCM_ANALOG_MISC0_DISCON_HIGH_SNVS_MASK)
#define CCM_ANALOG_MISC0_OSC_I_MASK              (0x6000U)
#define CCM_ANALOG_MISC0_OSC_I_SHIFT             (13U)
#define CCM_ANALOG_MISC0_OSC_I(x)                (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_OSC_I_SHIFT)) & CCM_ANALOG_MISC0_OSC_I_MASK)
#define CCM_ANALOG_MISC0_OSC_XTALOK_MASK         (0x8000U)
#define CCM_ANALOG_MISC0_OSC_XTALOK_SHIFT        (15U)
#define CCM_ANALOG_MISC0_OSC_XTALOK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_OSC_XTALOK_SHIFT)) & CCM_ANALOG_MISC0_OSC_XTALOK_MASK)
#define CCM_ANALOG_MISC0_OSC_XTALOK_EN_MASK      (0x10000U)
#define CCM_ANALOG_MISC0_OSC_XTALOK_EN_SHIFT     (16U)
#define CCM_ANALOG_MISC0_OSC_XTALOK_EN(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_OSC_XTALOK_EN_SHIFT)) & CCM_ANALOG_MISC0_OSC_XTALOK_EN_MASK)
#define CCM_ANALOG_MISC0_CLKGATE_CTRL_MASK       (0x2000000U)
#define CCM_ANALOG_MISC0_CLKGATE_CTRL_SHIFT      (25U)
#define CCM_ANALOG_MISC0_CLKGATE_CTRL(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLKGATE_CTRL_SHIFT)) & CCM_ANALOG_MISC0_CLKGATE_CTRL_MASK)
#define CCM_ANALOG_MISC0_CLKGATE_DELAY_MASK      (0x1C000000U)
#define CCM_ANALOG_MISC0_CLKGATE_DELAY_SHIFT     (26U)
#define CCM_ANALOG_MISC0_CLKGATE_DELAY(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLKGATE_DELAY_SHIFT)) & CCM_ANALOG_MISC0_CLKGATE_DELAY_MASK)
#define CCM_ANALOG_MISC0_RTC_XTAL_SOURCE_MASK    (0x20000000U)
#define CCM_ANALOG_MISC0_RTC_XTAL_SOURCE_SHIFT   (29U)
#define CCM_ANALOG_MISC0_RTC_XTAL_SOURCE(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_RTC_XTAL_SOURCE_SHIFT)) & CCM_ANALOG_MISC0_RTC_XTAL_SOURCE_MASK)
#define CCM_ANALOG_MISC0_XTAL_24M_PWD_MASK       (0x40000000U)
#define CCM_ANALOG_MISC0_XTAL_24M_PWD_SHIFT      (30U)
#define CCM_ANALOG_MISC0_XTAL_24M_PWD(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_XTAL_24M_PWD_SHIFT)) & CCM_ANALOG_MISC0_XTAL_24M_PWD_MASK)
#define CCM_ANALOG_MISC0_VID_PLL_PREDIV_MASK     (0x80000000U)
#define CCM_ANALOG_MISC0_VID_PLL_PREDIV_SHIFT    (31U)
#define CCM_ANALOG_MISC0_VID_PLL_PREDIV(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_VID_PLL_PREDIV_SHIFT)) & CCM_ANALOG_MISC0_VID_PLL_PREDIV_MASK)

/*! @name MISC0_SET - Miscellaneous Register 0 */
#define CCM_ANALOG_MISC0_SET_REFTOP_PWD_MASK     (0x1U)
#define CCM_ANALOG_MISC0_SET_REFTOP_PWD_SHIFT    (0U)
#define CCM_ANALOG_MISC0_SET_REFTOP_PWD(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_REFTOP_PWD_SHIFT)) & CCM_ANALOG_MISC0_SET_REFTOP_PWD_MASK)
#define CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF_MASK (0x8U)
#define CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF_SHIFT (3U)
#define CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF_SHIFT)) & CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF_MASK)
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ_MASK  (0x70U)
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ_SHIFT (4U)
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ_SHIFT)) & CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ_MASK)
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGUP_MASK   (0x80U)
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGUP_SHIFT  (7U)
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGUP(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_REFTOP_VBGUP_SHIFT)) & CCM_ANALOG_MISC0_SET_REFTOP_VBGUP_MASK)
#define CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG_MASK (0xC00U)
#define CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG_SHIFT (10U)
#define CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG_SHIFT)) & CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG_MASK)
#define CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS_MASK (0x1000U)
#define CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS_SHIFT (12U)
#define CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS_SHIFT)) & CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS_MASK)
#define CCM_ANALOG_MISC0_SET_OSC_I_MASK          (0x6000U)
#define CCM_ANALOG_MISC0_SET_OSC_I_SHIFT         (13U)
#define CCM_ANALOG_MISC0_SET_OSC_I(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_OSC_I_SHIFT)) & CCM_ANALOG_MISC0_SET_OSC_I_MASK)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_MASK     (0x8000U)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_SHIFT    (15U)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_OSC_XTALOK_SHIFT)) & CCM_ANALOG_MISC0_SET_OSC_XTALOK_MASK)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN_MASK  (0x10000U)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN_SHIFT (16U)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN_SHIFT)) & CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN_MASK)
#define CCM_ANALOG_MISC0_SET_CLKGATE_CTRL_MASK   (0x2000000U)
#define CCM_ANALOG_MISC0_SET_CLKGATE_CTRL_SHIFT  (25U)
#define CCM_ANALOG_MISC0_SET_CLKGATE_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_CLKGATE_CTRL_SHIFT)) & CCM_ANALOG_MISC0_SET_CLKGATE_CTRL_MASK)
#define CCM_ANALOG_MISC0_SET_CLKGATE_DELAY_MASK  (0x1C000000U)
#define CCM_ANALOG_MISC0_SET_CLKGATE_DELAY_SHIFT (26U)
#define CCM_ANALOG_MISC0_SET_CLKGATE_DELAY(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_CLKGATE_DELAY_SHIFT)) & CCM_ANALOG_MISC0_SET_CLKGATE_DELAY_MASK)
#define CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE_MASK (0x20000000U)
#define CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE_SHIFT (29U)
#define CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE_SHIFT)) & CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE_MASK)
#define CCM_ANALOG_MISC0_SET_XTAL_24M_PWD_MASK   (0x40000000U)
#define CCM_ANALOG_MISC0_SET_XTAL_24M_PWD_SHIFT  (30U)
#define CCM_ANALOG_MISC0_SET_XTAL_24M_PWD(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_XTAL_24M_PWD_SHIFT)) & CCM_ANALOG_MISC0_SET_XTAL_24M_PWD_MASK)
#define CCM_ANALOG_MISC0_SET_VID_PLL_PREDIV_MASK (0x80000000U)
#define CCM_ANALOG_MISC0_SET_VID_PLL_PREDIV_SHIFT (31U)
#define CCM_ANALOG_MISC0_SET_VID_PLL_PREDIV(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_VID_PLL_PREDIV_SHIFT)) & CCM_ANALOG_MISC0_SET_VID_PLL_PREDIV_MASK)

/*! @name MISC0_CLR - Miscellaneous Register 0 */
#define CCM_ANALOG_MISC0_CLR_REFTOP_PWD_MASK     (0x1U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_PWD_SHIFT    (0U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_PWD(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_REFTOP_PWD_SHIFT)) & CCM_ANALOG_MISC0_CLR_REFTOP_PWD_MASK)
#define CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF_MASK (0x8U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF_SHIFT (3U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF_SHIFT)) & CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF_MASK)
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ_MASK  (0x70U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ_SHIFT (4U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ_SHIFT)) & CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ_MASK)
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP_MASK   (0x80U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP_SHIFT  (7U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP_SHIFT)) & CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP_MASK)
#define CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG_MASK (0xC00U)
#define CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG_SHIFT (10U)
#define CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG_SHIFT)) & CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG_MASK)
#define CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS_MASK (0x1000U)
#define CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS_SHIFT (12U)
#define CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS_SHIFT)) & CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS_MASK)
#define CCM_ANALOG_MISC0_CLR_OSC_I_MASK          (0x6000U)
#define CCM_ANALOG_MISC0_CLR_OSC_I_SHIFT         (13U)
#define CCM_ANALOG_MISC0_CLR_OSC_I(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_OSC_I_SHIFT)) & CCM_ANALOG_MISC0_CLR_OSC_I_MASK)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_MASK     (0x8000U)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_SHIFT    (15U)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_OSC_XTALOK_SHIFT)) & CCM_ANALOG_MISC0_CLR_OSC_XTALOK_MASK)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN_MASK  (0x10000U)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN_SHIFT (16U)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN_SHIFT)) & CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN_MASK)
#define CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL_MASK   (0x2000000U)
#define CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL_SHIFT  (25U)
#define CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL_SHIFT)) & CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL_MASK)
#define CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY_MASK  (0x1C000000U)
#define CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY_SHIFT (26U)
#define CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY_SHIFT)) & CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY_MASK)
#define CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE_MASK (0x20000000U)
#define CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE_SHIFT (29U)
#define CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE_SHIFT)) & CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE_MASK)
#define CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD_MASK   (0x40000000U)
#define CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD_SHIFT  (30U)
#define CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD_SHIFT)) & CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD_MASK)
#define CCM_ANALOG_MISC0_CLR_VID_PLL_PREDIV_MASK (0x80000000U)
#define CCM_ANALOG_MISC0_CLR_VID_PLL_PREDIV_SHIFT (31U)
#define CCM_ANALOG_MISC0_CLR_VID_PLL_PREDIV(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_VID_PLL_PREDIV_SHIFT)) & CCM_ANALOG_MISC0_CLR_VID_PLL_PREDIV_MASK)

/*! @name MISC0_TOG - Miscellaneous Register 0 */
#define CCM_ANALOG_MISC0_TOG_REFTOP_PWD_MASK     (0x1U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_PWD_SHIFT    (0U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_PWD(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_REFTOP_PWD_SHIFT)) & CCM_ANALOG_MISC0_TOG_REFTOP_PWD_MASK)
#define CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF_MASK (0x8U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF_SHIFT (3U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF_SHIFT)) & CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF_MASK)
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ_MASK  (0x70U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ_SHIFT (4U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ_SHIFT)) & CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ_MASK)
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP_MASK   (0x80U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP_SHIFT  (7U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP_SHIFT)) & CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP_MASK)
#define CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG_MASK (0xC00U)
#define CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG_SHIFT (10U)
#define CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG_SHIFT)) & CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG_MASK)
#define CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS_MASK (0x1000U)
#define CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS_SHIFT (12U)
#define CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS_SHIFT)) & CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS_MASK)
#define CCM_ANALOG_MISC0_TOG_OSC_I_MASK          (0x6000U)
#define CCM_ANALOG_MISC0_TOG_OSC_I_SHIFT         (13U)
#define CCM_ANALOG_MISC0_TOG_OSC_I(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_OSC_I_SHIFT)) & CCM_ANALOG_MISC0_TOG_OSC_I_MASK)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_MASK     (0x8000U)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_SHIFT    (15U)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_OSC_XTALOK_SHIFT)) & CCM_ANALOG_MISC0_TOG_OSC_XTALOK_MASK)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN_MASK  (0x10000U)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN_SHIFT (16U)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN_SHIFT)) & CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN_MASK)
#define CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL_MASK   (0x2000000U)
#define CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL_SHIFT  (25U)
#define CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL_SHIFT)) & CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL_MASK)
#define CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY_MASK  (0x1C000000U)
#define CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY_SHIFT (26U)
#define CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY_SHIFT)) & CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY_MASK)
#define CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE_MASK (0x20000000U)
#define CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE_SHIFT (29U)
#define CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE_SHIFT)) & CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE_MASK)
#define CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD_MASK   (0x40000000U)
#define CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD_SHIFT  (30U)
#define CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD_SHIFT)) & CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD_MASK)
#define CCM_ANALOG_MISC0_TOG_VID_PLL_PREDIV_MASK (0x80000000U)
#define CCM_ANALOG_MISC0_TOG_VID_PLL_PREDIV_SHIFT (31U)
#define CCM_ANALOG_MISC0_TOG_VID_PLL_PREDIV(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_VID_PLL_PREDIV_SHIFT)) & CCM_ANALOG_MISC0_TOG_VID_PLL_PREDIV_MASK)

/*! @name MISC1 - Miscellaneous Register 1 */
#define CCM_ANALOG_MISC1_LVDS1_CLK_SEL_MASK      (0x1FU)
#define CCM_ANALOG_MISC1_LVDS1_CLK_SEL_SHIFT     (0U)
#define CCM_ANALOG_MISC1_LVDS1_CLK_SEL(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_LVDS1_CLK_SEL_SHIFT)) & CCM_ANALOG_MISC1_LVDS1_CLK_SEL_MASK)
#define CCM_ANALOG_MISC1_LVDSCLK1_OBEN_MASK      (0x400U)
#define CCM_ANALOG_MISC1_LVDSCLK1_OBEN_SHIFT     (10U)
#define CCM_ANALOG_MISC1_LVDSCLK1_OBEN(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_LVDSCLK1_OBEN_SHIFT)) & CCM_ANALOG_MISC1_LVDSCLK1_OBEN_MASK)
#define CCM_ANALOG_MISC1_LVDSCLK1_IBEN_MASK      (0x1000U)
#define CCM_ANALOG_MISC1_LVDSCLK1_IBEN_SHIFT     (12U)
#define CCM_ANALOG_MISC1_LVDSCLK1_IBEN(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_LVDSCLK1_IBEN_SHIFT)) & CCM_ANALOG_MISC1_LVDSCLK1_IBEN_MASK)
#define CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN_MASK (0x10000U)
#define CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN_SHIFT (16U)
#define CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN_MASK)
#define CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN_MASK (0x20000U)
#define CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN_SHIFT (17U)
#define CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN_MASK)
#define CCM_ANALOG_MISC1_IRQ_TEMPPANIC_MASK      (0x8000000U)
#define CCM_ANALOG_MISC1_IRQ_TEMPPANIC_SHIFT     (27U)
#define CCM_ANALOG_MISC1_IRQ_TEMPPANIC(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_TEMPPANIC_SHIFT)) & CCM_ANALOG_MISC1_IRQ_TEMPPANIC_MASK)
#define CCM_ANALOG_MISC1_IRQ_TEMPLOW_MASK        (0x10000000U)
#define CCM_ANALOG_MISC1_IRQ_TEMPLOW_SHIFT       (28U)
#define CCM_ANALOG_MISC1_IRQ_TEMPLOW(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_TEMPLOW_SHIFT)) & CCM_ANALOG_MISC1_IRQ_TEMPLOW_MASK)
#define CCM_ANALOG_MISC1_IRQ_TEMPHIGH_MASK       (0x20000000U)
#define CCM_ANALOG_MISC1_IRQ_TEMPHIGH_SHIFT      (29U)
#define CCM_ANALOG_MISC1_IRQ_TEMPHIGH(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_TEMPHIGH_SHIFT)) & CCM_ANALOG_MISC1_IRQ_TEMPHIGH_MASK)
#define CCM_ANALOG_MISC1_IRQ_ANA_BO_MASK         (0x40000000U)
#define CCM_ANALOG_MISC1_IRQ_ANA_BO_SHIFT        (30U)
#define CCM_ANALOG_MISC1_IRQ_ANA_BO(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_ANA_BO_SHIFT)) & CCM_ANALOG_MISC1_IRQ_ANA_BO_MASK)
#define CCM_ANALOG_MISC1_IRQ_DIG_BO_MASK         (0x80000000U)
#define CCM_ANALOG_MISC1_IRQ_DIG_BO_SHIFT        (31U)
#define CCM_ANALOG_MISC1_IRQ_DIG_BO(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_DIG_BO_SHIFT)) & CCM_ANALOG_MISC1_IRQ_DIG_BO_MASK)

/*! @name MISC1_SET - Miscellaneous Register 1 */
#define CCM_ANALOG_MISC1_SET_LVDS1_CLK_SEL_MASK  (0x1FU)
#define CCM_ANALOG_MISC1_SET_LVDS1_CLK_SEL_SHIFT (0U)
#define CCM_ANALOG_MISC1_SET_LVDS1_CLK_SEL(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_LVDS1_CLK_SEL_SHIFT)) & CCM_ANALOG_MISC1_SET_LVDS1_CLK_SEL_MASK)
#define CCM_ANALOG_MISC1_SET_LVDSCLK1_OBEN_MASK  (0x400U)
#define CCM_ANALOG_MISC1_SET_LVDSCLK1_OBEN_SHIFT (10U)
#define CCM_ANALOG_MISC1_SET_LVDSCLK1_OBEN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_LVDSCLK1_OBEN_SHIFT)) & CCM_ANALOG_MISC1_SET_LVDSCLK1_OBEN_MASK)
#define CCM_ANALOG_MISC1_SET_LVDSCLK1_IBEN_MASK  (0x1000U)
#define CCM_ANALOG_MISC1_SET_LVDSCLK1_IBEN_SHIFT (12U)
#define CCM_ANALOG_MISC1_SET_LVDSCLK1_IBEN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_LVDSCLK1_IBEN_SHIFT)) & CCM_ANALOG_MISC1_SET_LVDSCLK1_IBEN_MASK)
#define CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN_MASK (0x10000U)
#define CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN_SHIFT (16U)
#define CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN_MASK)
#define CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN_MASK (0x20000U)
#define CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN_SHIFT (17U)
#define CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN_MASK)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC_MASK  (0x8000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC_SHIFT (27U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC_MASK)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW_MASK    (0x10000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW_SHIFT   (28U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW_MASK)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH_MASK   (0x20000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH_SHIFT  (29U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH_MASK)
#define CCM_ANALOG_MISC1_SET_IRQ_ANA_BO_MASK     (0x40000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_ANA_BO_SHIFT    (30U)
#define CCM_ANALOG_MISC1_SET_IRQ_ANA_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_ANA_BO_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_ANA_BO_MASK)
#define CCM_ANALOG_MISC1_SET_IRQ_DIG_BO_MASK     (0x80000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_DIG_BO_SHIFT    (31U)
#define CCM_ANALOG_MISC1_SET_IRQ_DIG_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_DIG_BO_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_DIG_BO_MASK)

/*! @name MISC1_CLR - Miscellaneous Register 1 */
#define CCM_ANALOG_MISC1_CLR_LVDS1_CLK_SEL_MASK  (0x1FU)
#define CCM_ANALOG_MISC1_CLR_LVDS1_CLK_SEL_SHIFT (0U)
#define CCM_ANALOG_MISC1_CLR_LVDS1_CLK_SEL(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_LVDS1_CLK_SEL_SHIFT)) & CCM_ANALOG_MISC1_CLR_LVDS1_CLK_SEL_MASK)
#define CCM_ANALOG_MISC1_CLR_LVDSCLK1_OBEN_MASK  (0x400U)
#define CCM_ANALOG_MISC1_CLR_LVDSCLK1_OBEN_SHIFT (10U)
#define CCM_ANALOG_MISC1_CLR_LVDSCLK1_OBEN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_LVDSCLK1_OBEN_SHIFT)) & CCM_ANALOG_MISC1_CLR_LVDSCLK1_OBEN_MASK)
#define CCM_ANALOG_MISC1_CLR_LVDSCLK1_IBEN_MASK  (0x1000U)
#define CCM_ANALOG_MISC1_CLR_LVDSCLK1_IBEN_SHIFT (12U)
#define CCM_ANALOG_MISC1_CLR_LVDSCLK1_IBEN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_LVDSCLK1_IBEN_SHIFT)) & CCM_ANALOG_MISC1_CLR_LVDSCLK1_IBEN_MASK)
#define CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN_MASK (0x10000U)
#define CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN_SHIFT (16U)
#define CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN_MASK)
#define CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN_MASK (0x20000U)
#define CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN_SHIFT (17U)
#define CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN_MASK)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC_MASK  (0x8000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC_SHIFT (27U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC_MASK)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW_MASK    (0x10000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW_SHIFT   (28U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW_MASK)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH_MASK   (0x20000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH_SHIFT  (29U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH_MASK)
#define CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO_MASK     (0x40000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO_SHIFT    (30U)
#define CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO_MASK)
#define CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO_MASK     (0x80000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO_SHIFT    (31U)
#define CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO_MASK)

/*! @name MISC1_TOG - Miscellaneous Register 1 */
#define CCM_ANALOG_MISC1_TOG_LVDS1_CLK_SEL_MASK  (0x1FU)
#define CCM_ANALOG_MISC1_TOG_LVDS1_CLK_SEL_SHIFT (0U)
#define CCM_ANALOG_MISC1_TOG_LVDS1_CLK_SEL(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_LVDS1_CLK_SEL_SHIFT)) & CCM_ANALOG_MISC1_TOG_LVDS1_CLK_SEL_MASK)
#define CCM_ANALOG_MISC1_TOG_LVDSCLK1_OBEN_MASK  (0x400U)
#define CCM_ANALOG_MISC1_TOG_LVDSCLK1_OBEN_SHIFT (10U)
#define CCM_ANALOG_MISC1_TOG_LVDSCLK1_OBEN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_LVDSCLK1_OBEN_SHIFT)) & CCM_ANALOG_MISC1_TOG_LVDSCLK1_OBEN_MASK)
#define CCM_ANALOG_MISC1_TOG_LVDSCLK1_IBEN_MASK  (0x1000U)
#define CCM_ANALOG_MISC1_TOG_LVDSCLK1_IBEN_SHIFT (12U)
#define CCM_ANALOG_MISC1_TOG_LVDSCLK1_IBEN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_LVDSCLK1_IBEN_SHIFT)) & CCM_ANALOG_MISC1_TOG_LVDSCLK1_IBEN_MASK)
#define CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN_MASK (0x10000U)
#define CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN_SHIFT (16U)
#define CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN_MASK)
#define CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN_MASK (0x20000U)
#define CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN_SHIFT (17U)
#define CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN_MASK)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC_MASK  (0x8000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC_SHIFT (27U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC_MASK)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW_MASK    (0x10000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW_SHIFT   (28U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW_MASK)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH_MASK   (0x20000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH_SHIFT  (29U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH_MASK)
#define CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO_MASK     (0x40000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO_SHIFT    (30U)
#define CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO_MASK)
#define CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO_MASK     (0x80000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO_SHIFT    (31U)
#define CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO_MASK)

/*! @name MISC2 - Miscellaneous Register 2 */
#define CCM_ANALOG_MISC2_REG0_BO_OFFSET_MASK     (0x7U)
#define CCM_ANALOG_MISC2_REG0_BO_OFFSET_SHIFT    (0U)
#define CCM_ANALOG_MISC2_REG0_BO_OFFSET(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_REG0_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_REG0_BO_STATUS_MASK     (0x8U)
#define CCM_ANALOG_MISC2_REG0_BO_STATUS_SHIFT    (3U)
#define CCM_ANALOG_MISC2_REG0_BO_STATUS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_REG0_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_REG0_ENABLE_BO_MASK     (0x20U)
#define CCM_ANALOG_MISC2_REG0_ENABLE_BO_SHIFT    (5U)
#define CCM_ANALOG_MISC2_REG0_ENABLE_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_REG0_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_REG0_OK_MASK            (0x40U)
#define CCM_ANALOG_MISC2_REG0_OK_SHIFT           (6U)
#define CCM_ANALOG_MISC2_REG0_OK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_OK_SHIFT)) & CCM_ANALOG_MISC2_REG0_OK_MASK)
#define CCM_ANALOG_MISC2_PLL3_disable_MASK       (0x80U)
#define CCM_ANALOG_MISC2_PLL3_disable_SHIFT      (7U)
#define CCM_ANALOG_MISC2_PLL3_disable(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_PLL3_disable_SHIFT)) & CCM_ANALOG_MISC2_PLL3_disable_MASK)
#define CCM_ANALOG_MISC2_REG1_BO_OFFSET_MASK     (0x700U)
#define CCM_ANALOG_MISC2_REG1_BO_OFFSET_SHIFT    (8U)
#define CCM_ANALOG_MISC2_REG1_BO_OFFSET(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_REG1_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_REG1_BO_STATUS_MASK     (0x800U)
#define CCM_ANALOG_MISC2_REG1_BO_STATUS_SHIFT    (11U)
#define CCM_ANALOG_MISC2_REG1_BO_STATUS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_REG1_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_REG1_ENABLE_BO_MASK     (0x2000U)
#define CCM_ANALOG_MISC2_REG1_ENABLE_BO_SHIFT    (13U)
#define CCM_ANALOG_MISC2_REG1_ENABLE_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_REG1_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_REG1_OK_MASK            (0x4000U)
#define CCM_ANALOG_MISC2_REG1_OK_SHIFT           (14U)
#define CCM_ANALOG_MISC2_REG1_OK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_OK_SHIFT)) & CCM_ANALOG_MISC2_REG1_OK_MASK)
#define CCM_ANALOG_MISC2_AUDIO_DIV_LSB_MASK      (0x8000U)
#define CCM_ANALOG_MISC2_AUDIO_DIV_LSB_SHIFT     (15U)
#define CCM_ANALOG_MISC2_AUDIO_DIV_LSB(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_AUDIO_DIV_LSB_SHIFT)) & CCM_ANALOG_MISC2_AUDIO_DIV_LSB_MASK)
#define CCM_ANALOG_MISC2_REG2_BO_OFFSET_MASK     (0x70000U)
#define CCM_ANALOG_MISC2_REG2_BO_OFFSET_SHIFT    (16U)
#define CCM_ANALOG_MISC2_REG2_BO_OFFSET(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_REG2_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_REG2_BO_STATUS_MASK     (0x80000U)
#define CCM_ANALOG_MISC2_REG2_BO_STATUS_SHIFT    (19U)
#define CCM_ANALOG_MISC2_REG2_BO_STATUS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_REG2_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_REG2_ENABLE_BO_MASK     (0x200000U)
#define CCM_ANALOG_MISC2_REG2_ENABLE_BO_SHIFT    (21U)
#define CCM_ANALOG_MISC2_REG2_ENABLE_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_REG2_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_REG2_OK_MASK            (0x400000U)
#define CCM_ANALOG_MISC2_REG2_OK_SHIFT           (22U)
#define CCM_ANALOG_MISC2_REG2_OK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_OK_SHIFT)) & CCM_ANALOG_MISC2_REG2_OK_MASK)
#define CCM_ANALOG_MISC2_AUDIO_DIV_MSB_MASK      (0x800000U)
#define CCM_ANALOG_MISC2_AUDIO_DIV_MSB_SHIFT     (23U)
#define CCM_ANALOG_MISC2_AUDIO_DIV_MSB(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_AUDIO_DIV_MSB_SHIFT)) & CCM_ANALOG_MISC2_AUDIO_DIV_MSB_MASK)
#define CCM_ANALOG_MISC2_REG0_STEP_TIME_MASK     (0x3000000U)
#define CCM_ANALOG_MISC2_REG0_STEP_TIME_SHIFT    (24U)
#define CCM_ANALOG_MISC2_REG0_STEP_TIME(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_REG0_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_REG1_STEP_TIME_MASK     (0xC000000U)
#define CCM_ANALOG_MISC2_REG1_STEP_TIME_SHIFT    (26U)
#define CCM_ANALOG_MISC2_REG1_STEP_TIME(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_REG1_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_REG2_STEP_TIME_MASK     (0x30000000U)
#define CCM_ANALOG_MISC2_REG2_STEP_TIME_SHIFT    (28U)
#define CCM_ANALOG_MISC2_REG2_STEP_TIME(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_REG2_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_VIDEO_DIV_MASK          (0xC0000000U)
#define CCM_ANALOG_MISC2_VIDEO_DIV_SHIFT         (30U)
#define CCM_ANALOG_MISC2_VIDEO_DIV(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_VIDEO_DIV_SHIFT)) & CCM_ANALOG_MISC2_VIDEO_DIV_MASK)

/*! @name MISC2_SET - Miscellaneous Register 2 */
#define CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET_MASK (0x7U)
#define CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET_SHIFT (0U)
#define CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_SET_REG0_BO_STATUS_MASK (0x8U)
#define CCM_ANALOG_MISC2_SET_REG0_BO_STATUS_SHIFT (3U)
#define CCM_ANALOG_MISC2_SET_REG0_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO_MASK (0x20U)
#define CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO_SHIFT (5U)
#define CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_SET_REG0_OK_MASK        (0x40U)
#define CCM_ANALOG_MISC2_SET_REG0_OK_SHIFT       (6U)
#define CCM_ANALOG_MISC2_SET_REG0_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_OK_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_OK_MASK)
#define CCM_ANALOG_MISC2_SET_PLL3_disable_MASK   (0x80U)
#define CCM_ANALOG_MISC2_SET_PLL3_disable_SHIFT  (7U)
#define CCM_ANALOG_MISC2_SET_PLL3_disable(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_PLL3_disable_SHIFT)) & CCM_ANALOG_MISC2_SET_PLL3_disable_MASK)
#define CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET_MASK (0x700U)
#define CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET_SHIFT (8U)
#define CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_SET_REG1_BO_STATUS_MASK (0x800U)
#define CCM_ANALOG_MISC2_SET_REG1_BO_STATUS_SHIFT (11U)
#define CCM_ANALOG_MISC2_SET_REG1_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO_MASK (0x2000U)
#define CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO_SHIFT (13U)
#define CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_SET_REG1_OK_MASK        (0x4000U)
#define CCM_ANALOG_MISC2_SET_REG1_OK_SHIFT       (14U)
#define CCM_ANALOG_MISC2_SET_REG1_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_OK_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_OK_MASK)
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB_MASK  (0x8000U)
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB_SHIFT (15U)
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB_SHIFT)) & CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB_MASK)
#define CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET_MASK (0x70000U)
#define CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET_SHIFT (16U)
#define CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_SET_REG2_BO_STATUS_MASK (0x80000U)
#define CCM_ANALOG_MISC2_SET_REG2_BO_STATUS_SHIFT (19U)
#define CCM_ANALOG_MISC2_SET_REG2_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO_MASK (0x200000U)
#define CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO_SHIFT (21U)
#define CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_SET_REG2_OK_MASK        (0x400000U)
#define CCM_ANALOG_MISC2_SET_REG2_OK_SHIFT       (22U)
#define CCM_ANALOG_MISC2_SET_REG2_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_OK_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_OK_MASK)
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB_MASK  (0x800000U)
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB_SHIFT (23U)
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB_SHIFT)) & CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB_MASK)
#define CCM_ANALOG_MISC2_SET_REG0_STEP_TIME_MASK (0x3000000U)
#define CCM_ANALOG_MISC2_SET_REG0_STEP_TIME_SHIFT (24U)
#define CCM_ANALOG_MISC2_SET_REG0_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_SET_REG1_STEP_TIME_MASK (0xC000000U)
#define CCM_ANALOG_MISC2_SET_REG1_STEP_TIME_SHIFT (26U)
#define CCM_ANALOG_MISC2_SET_REG1_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_SET_REG2_STEP_TIME_MASK (0x30000000U)
#define CCM_ANALOG_MISC2_SET_REG2_STEP_TIME_SHIFT (28U)
#define CCM_ANALOG_MISC2_SET_REG2_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_SET_VIDEO_DIV_MASK      (0xC0000000U)
#define CCM_ANALOG_MISC2_SET_VIDEO_DIV_SHIFT     (30U)
#define CCM_ANALOG_MISC2_SET_VIDEO_DIV(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_VIDEO_DIV_SHIFT)) & CCM_ANALOG_MISC2_SET_VIDEO_DIV_MASK)

/*! @name MISC2_CLR - Miscellaneous Register 2 */
#define CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET_MASK (0x7U)
#define CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET_SHIFT (0U)
#define CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS_MASK (0x8U)
#define CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS_SHIFT (3U)
#define CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO_MASK (0x20U)
#define CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO_SHIFT (5U)
#define CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_CLR_REG0_OK_MASK        (0x40U)
#define CCM_ANALOG_MISC2_CLR_REG0_OK_SHIFT       (6U)
#define CCM_ANALOG_MISC2_CLR_REG0_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_OK_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_OK_MASK)
#define CCM_ANALOG_MISC2_CLR_PLL3_disable_MASK   (0x80U)
#define CCM_ANALOG_MISC2_CLR_PLL3_disable_SHIFT  (7U)
#define CCM_ANALOG_MISC2_CLR_PLL3_disable(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_PLL3_disable_SHIFT)) & CCM_ANALOG_MISC2_CLR_PLL3_disable_MASK)
#define CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET_MASK (0x700U)
#define CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET_SHIFT (8U)
#define CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS_MASK (0x800U)
#define CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS_SHIFT (11U)
#define CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO_MASK (0x2000U)
#define CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO_SHIFT (13U)
#define CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_CLR_REG1_OK_MASK        (0x4000U)
#define CCM_ANALOG_MISC2_CLR_REG1_OK_SHIFT       (14U)
#define CCM_ANALOG_MISC2_CLR_REG1_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_OK_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_OK_MASK)
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB_MASK  (0x8000U)
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB_SHIFT (15U)
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB_SHIFT)) & CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB_MASK)
#define CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET_MASK (0x70000U)
#define CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET_SHIFT (16U)
#define CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS_MASK (0x80000U)
#define CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS_SHIFT (19U)
#define CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO_MASK (0x200000U)
#define CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO_SHIFT (21U)
#define CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_CLR_REG2_OK_MASK        (0x400000U)
#define CCM_ANALOG_MISC2_CLR_REG2_OK_SHIFT       (22U)
#define CCM_ANALOG_MISC2_CLR_REG2_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_OK_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_OK_MASK)
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB_MASK  (0x800000U)
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB_SHIFT (23U)
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB_SHIFT)) & CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB_MASK)
#define CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME_MASK (0x3000000U)
#define CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME_SHIFT (24U)
#define CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME_MASK (0xC000000U)
#define CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME_SHIFT (26U)
#define CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME_MASK (0x30000000U)
#define CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME_SHIFT (28U)
#define CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_CLR_VIDEO_DIV_MASK      (0xC0000000U)
#define CCM_ANALOG_MISC2_CLR_VIDEO_DIV_SHIFT     (30U)
#define CCM_ANALOG_MISC2_CLR_VIDEO_DIV(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_VIDEO_DIV_SHIFT)) & CCM_ANALOG_MISC2_CLR_VIDEO_DIV_MASK)

/*! @name MISC2_TOG - Miscellaneous Register 2 */
#define CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET_MASK (0x7U)
#define CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET_SHIFT (0U)
#define CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS_MASK (0x8U)
#define CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS_SHIFT (3U)
#define CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO_MASK (0x20U)
#define CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO_SHIFT (5U)
#define CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_TOG_REG0_OK_MASK        (0x40U)
#define CCM_ANALOG_MISC2_TOG_REG0_OK_SHIFT       (6U)
#define CCM_ANALOG_MISC2_TOG_REG0_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_OK_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_OK_MASK)
#define CCM_ANALOG_MISC2_TOG_PLL3_disable_MASK   (0x80U)
#define CCM_ANALOG_MISC2_TOG_PLL3_disable_SHIFT  (7U)
#define CCM_ANALOG_MISC2_TOG_PLL3_disable(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_PLL3_disable_SHIFT)) & CCM_ANALOG_MISC2_TOG_PLL3_disable_MASK)
#define CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET_MASK (0x700U)
#define CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET_SHIFT (8U)
#define CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS_MASK (0x800U)
#define CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS_SHIFT (11U)
#define CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO_MASK (0x2000U)
#define CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO_SHIFT (13U)
#define CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_TOG_REG1_OK_MASK        (0x4000U)
#define CCM_ANALOG_MISC2_TOG_REG1_OK_SHIFT       (14U)
#define CCM_ANALOG_MISC2_TOG_REG1_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_OK_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_OK_MASK)
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB_MASK  (0x8000U)
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB_SHIFT (15U)
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB_SHIFT)) & CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB_MASK)
#define CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET_MASK (0x70000U)
#define CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET_SHIFT (16U)
#define CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET_MASK)
#define CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS_MASK (0x80000U)
#define CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS_SHIFT (19U)
#define CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS_MASK)
#define CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO_MASK (0x200000U)
#define CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO_SHIFT (21U)
#define CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO_MASK)
#define CCM_ANALOG_MISC2_TOG_REG2_OK_MASK        (0x400000U)
#define CCM_ANALOG_MISC2_TOG_REG2_OK_SHIFT       (22U)
#define CCM_ANALOG_MISC2_TOG_REG2_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_OK_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_OK_MASK)
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB_MASK  (0x800000U)
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB_SHIFT (23U)
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB_SHIFT)) & CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB_MASK)
#define CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME_MASK (0x3000000U)
#define CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME_SHIFT (24U)
#define CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME_MASK (0xC000000U)
#define CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME_SHIFT (26U)
#define CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME_MASK (0x30000000U)
#define CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME_SHIFT (28U)
#define CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME_MASK)
#define CCM_ANALOG_MISC2_TOG_VIDEO_DIV_MASK      (0xC0000000U)
#define CCM_ANALOG_MISC2_TOG_VIDEO_DIV_SHIFT     (30U)
#define CCM_ANALOG_MISC2_TOG_VIDEO_DIV(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_VIDEO_DIV_SHIFT)) & CCM_ANALOG_MISC2_TOG_VIDEO_DIV_MASK)

/*!
 * @}
 */ /* end of group CCM_ANALOG_Register_Masks */

/* CCM_ANALOG - Peripheral instance base addresses */
/** Peripheral CCM_ANALOG base address */
#define CCM_ANALOG_BASE                          (0x20C8000u)
/** Peripheral CCM_ANALOG base pointer */
#define CCM_ANALOG                               ((CCM_ANALOG_Type *)CCM_ANALOG_BASE)
/** Array initializer of CCM_ANALOG peripheral base addresses */
#define CCM_ANALOG_BASE_ADDRS                    { CCM_ANALOG_BASE }
/** Array initializer of CCM_ANALOG peripheral base pointers */
#define CCM_ANALOG_BASE_PTRS                     { CCM_ANALOG }

/*!
 * @}
 */ /* end of group CCM_ANALOG_Peripheral_Access_Layer */



/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*!
 * @brief tuple {
     7:0   - REG offset to CCM_BASE in bytes;
     12:8  - the shift of bit in REG;
     25:13 - the mask
     31:26 - busyShift
 }
 */
#define CCM_TUPLE(reg, shift, mask, busyShift) ((((uint32_t)(&((CCM_Type *)0U)->reg)) & 0xFFU) | ((shift) << 8U) | ((((mask) >> (shift)) & 0x1FFFU) << 13U) | ((busyShift) << 26U))
#define CCM_TUPLE_REG(base, tuple)     (*((volatile uint32_t *)(((uint32_t)(base)) + ((tuple) & 0xFFU))))
#define CCM_TUPLE_SHIFT(tuple)         (((tuple) >> 8U) & 0x1FU)
#define CCM_TUPLE_MASK(tuple)          ((uint32_t)((((tuple) >> 13U) & 0x1FFFU) << ((((tuple) >> 8U) & 0x1FU))))
#define CCM_TUPLE_BUSY_SHIFT(tuple)    (((tuple) >> 26U) & 0x3FU)

#define CCM_NO_BUSY_WAIT (0x20U)

/*! @brief External XTAL (24M OSC/SYSOSC) clock frequency.
 *
 * The XTAL (24M OSC/SYSOSC) clock frequency in Hz, when the clock is setup, use the
 * function CLOCK_SetXtalFreq to set the value in to clock driver. For example,
 * if XTAL is 24MHz,
 * @code
 * CLOCK_InitExternalClk(false); // Setup the 24M OSC/SYSOSC
 * CLOCK_SetXtalFreq(240000000); // Set the XTAL value to clock driver.
 * @endcode
 */
extern uint32_t g_xtalFreq;

/*! @brief External RTC XTAL (32K OSC) clock frequency.
 *
 * The RTC XTAL (32K OSC) clock frequency in Hz, when the clock is setup, use the
 * function CLOCK_SetRtcXtalFreq to set the value in to clock driver.
 */
extern uint32_t g_rtcXtalFreq;

 /*! @brief Clock ip name array for ADC. */
#define ADC_CLOCKS                                                   \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Adc1                                \
    }

/*! @brief Clock ip name array for ADC_5HC. */
#define ADC_5HC_CLOCKS                                               \
    {                                                                \
        kCLOCK_Adc_5hc                                               \
    }

/*! @brief Clock ip name array for ECSPI. */
#define ECSPI_CLOCKS                                                 \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Ecspi1, kCLOCK_Ecspi2,              \
        kCLOCK_Ecspi3, kCLOCK_Ecspi4                                 \
    }

/*! @brief Clock ip name array for ENET. */
#define ENET_CLOCKS                                                  \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Enet, kCLOCK_Enet                   \
    }

/*! @brief Clock ip name array for EPIT. */
#define EPIT_CLOCKS                                                  \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Epit1, kCLOCK_Epit2                 \
    }

/*! @brief Clock ip name array for ESAI. */
#define ESAI_CLOCKS                                                  \
    {                                                                \
        kCLOCK_Esai                                                  \
    }

/*! @brief Clock ip name array for FLEXCAN. */
#define FLEXCAN_CLOCKS                                               \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Can1, kCLOCK_Can2                   \
    }

/*! @brief Serial Clock ip name array for FLEXCAN. */
#define FLEXCAN_PERIPH_CLOCKS                                        \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Can1S, kCLOCK_Can2S                 \
    }

/*! @brief Clock ip name array for GPIO. */
#define GPIO_CLOCKS                                                  \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Gpio1, kCLOCK_Gpio2,                \
        kCLOCK_Gpio3, kCLOCK_Gpio4, kCLOCK_Gpio5                     \
    }

/*! @brief Clock ip name array for GPT. */
#define GPT_CLOCKS                                                   \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Gpt1, kCLOCK_Gpt2                   \
    }

/*! @brief Serial Clock ip name array for GPT. */
#define GPT_PERIPH_CLOCKS                                            \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Gpt1S, kCLOCK_Gpt2S                 \
    }

/*! @brief Clock ip name array for I2C. */
#define I2C_CLOCKS                                                   \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_I2c1S, kCLOCK_I2c2S,                \
        kCLOCK_I2c3S, kCLOCK_I2c4S                                   \
    }

/*! @brief Clock ip name array for PWM. */
#define PWM_CLOCKS                                                   \
    {                                                                \
        kCLOCK_IpInvalid,                                            \
        kCLOCK_Pwm1, kCLOCK_Pwm2, kCLOCK_Pwm3, kCLOCK_Pwm4,          \
        kCLOCK_Pwm5, kCLOCK_Pwm6, kCLOCK_Pwm7, kCLOCK_Pwm8,          \
    }

/*! @brief Clock ip name array for QSPI. */
#define QSPI_CLOCKS                                                  \
    {                                                                \
        kCLOCK_Qspi1                                                 \
    }

/*! @brief Clock ip name array for SAI. */
#define SAI_CLOCKS                                                   \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Sai1, kCLOCK_Sai2, kCLOCK_Sai3,     \
    }

/*! @brief Clock ip name array for SDMA. */
#define SDMA_CLOCKS                                                  \
    {                                                                \
        kCLOCK_Sdma                                                  \
    }

/*! @brief Clock ip name array for TSC. */
#define TSC_CLOCKS                                                   \
    {                                                                \
        kCLOCK_Tsc                                                   \
    }

/*! @brief Clock ip name array for UART. */
#define UART_CLOCKS                                                  \
    {                                                                \
        kCLOCK_IpInvalid,                                            \
        kCLOCK_Uart1, kCLOCK_Uart2, kCLOCK_Uart3, kCLOCK_Uart4,      \
        kCLOCK_Uart5, kCLOCK_Uart6, kCLOCK_Uart7, kCLOCK_Uart8       \
    }

/*! @brief Clock ip name array for USDHC. */
#define USDHC_CLOCKS                                                 \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Usdhc1, kCLOCK_Usdhc2               \
    }

/*! @brief Clock ip name array for WDOG. */
#define WDOG_CLOCKS                                                  \
    {                                                                \
        kCLOCK_IpInvalid, kCLOCK_Wdog1, kCLOCK_Wdog2, kCLOCK_Wdog3   \
    }

/*! @brief eLCDIF apb_clk. */
#define LCDIF_CLOCKS \
    {                \
        kCLOCK_Lcd   \
    }

/*! @brief eLCDIF pix_clk. */
#define LCDIF_PERIPH_CLOCKS \
    {                       \
        kCLOCK_Lcdif1       \
    }

/*! @brief PXP clock. */
#define PXP_CLOCKS \
    {              \
        kCLOCK_Pxp \
    }

/*! @brief Clock ip name array for SNVS HP. */
#define SNVS_HP_CLOCKS \
    {                  \
        kCLOCK_SnvsHp  \
    }

/*! @brief Clock ip name array for SNVS LP. */
#define SNVS_LP_CLOCKS \
    {                  \
        kCLOCK_SnvsLp  \
    }

/*! @brief CSI clock. */
#define CSI_CLOCKS  \
    {               \
        kCLOCK_Csi  \
    }

/*! @brief CSI MCLK. */
#define CSI_MCLK_CLOCKS  \
    {                    \
        kCLOCK_CsiMclk   \
    }

/*! @brief MMDC IPG clock. */
#define FSL_CLOCK_MMDC_IPG_GATE_COUNT 2U
#define MMDC_CLOCKS                          \
    {                                        \
        {kCLOCK_MmdcIpgP0, kCLOCK_MmdcIpgP1} \
    }

/*! @brief MMDC ACLK. */
#define MMDC_ACLK_CLOCKS  \
    {                     \
        kCLOCK_MmdcAClk   \
    }

/*! @brief Clock name used to get clock frequency. */
typedef enum _clock_name
{
    kCLOCK_CpuClk            = 0x0U, /*!< CPU clock */
    kCLOCK_AxiClk            = 0x1U, /*!< AXI clock */
    kCLOCK_AhbClk            = 0x2U, /*!< AHB clock */
    kCLOCK_IpgClk            = 0x3U, /*!< IPG clock */
    kCLOCK_MmdcClk           = 0x4U, /*!< MMDC clock */

    kCLOCK_OscClk            = 0x5U, /*!< OSC clock selected by PMU_LOWPWR_CTRL[OSC_SEL]. */
    kCLOCK_RtcClk            = 0x6U, /*!< RTC clock. (RTCCLK)                           */

    kCLOCK_ArmPllClk         = 0x7U, /*!< ARMPLLCLK.                              */

    kCLOCK_Usb1PllClk        = 0x8U, /*!< USB1PLLCLK.                              */
    kCLOCK_Usb1PllPfd0Clk    = 0x9U, /*!< USB1PLLPDF0CLK.                          */
    kCLOCK_Usb1PllPfd1Clk    = 0xAU, /*!< USB1PLLPFD1CLK.                          */
    kCLOCK_Usb1PllPfd2Clk    = 0xBU, /*!< USB1PLLPFD2CLK.                          */
    kCLOCK_Usb1PllPfd3Clk    = 0xCU, /*!< USB1PLLPFD3CLK.                          */

    kCLOCK_Usb2PllClk        = 0xDU, /*!< USB2PLLCLK.                          */

    kCLOCK_SysPllClk         = 0xEU, /*!< SYSPLLCLK.                          */
    kCLOCK_SysPllPfd0Clk     = 0xFU, /*!< SYSPLLPDF0CLK.                          */
    kCLOCK_SysPllPfd1Clk     = 0x10U, /*!< SYSPLLPFD1CLK.                          */
    kCLOCK_SysPllPfd2Clk     = 0x11U, /*!< SYSPLLPFD2CLK.                          */
    kCLOCK_SysPllPfd3Clk     = 0x12U, /*!< SYSPLLPFD3CLK.                          */

    kCLOCK_EnetPll0Clk       = 0x13U,   /*!< Enet PLLCLK ref_enetpll0.               */
    kCLOCK_EnetPll1Clk       = 0x14U,   /*!< Enet PLLCLK ref_enetpll1.               */
    kCLOCK_EnetPll2Clk       = 0x15U,   /*!< Enet PLLCLK ref_enetpll2.               */

    kCLOCK_AudioPllClk       = 0x16U,   /*!< Audio PLLCLK.                          */
    kCLOCK_VideoPllClk       = 0x17U,   /*!< Video PLLCLK.                          */
} clock_name_t;

/*! @brief Clock name used to enable/disable gate */
typedef enum _clock_ip_name
{
    kCLOCK_IpInvalid      = -1,
    /* CCM CCGR0 */
    kCLOCK_AipsTz1        = (0U << 8) | 0x0U,     /*!< CCGR0, CG0  */
    kCLOCK_AipsTz2        = (0U << 8) | 0x1U,     /*!< CCGR0, CG1  */
    kCLOCK_Apbhdma        = (0U << 8) | 0x2U,     /*!< CCGR0, CG2  */
    kCLOCK_Asrc           = (0U << 8) | 0x3U,     /*!< CCGR0, CG3  */
                                                  /*!< CCGR(0U << 8), CG4 reserved */
    kCLOCK_Dcp            = (0U << 8) | 0x5U,     /*!< CCGR0, CG5  */
    kCLOCK_Enet           = (0U << 8) | 0x6U,     /*!< CCGR0, CG6  */
    kCLOCK_Can1           = (0U << 8) | 0x7U,     /*!< CCGR0, CG7  */
    kCLOCK_Can1S          = (0U << 8) | 0x8U,     /*!< CCGR0, CG8 , Serial Clock */
    kCLOCK_Can2           = (0U << 8) | 0x9U,     /*!< CCGR0, CG9  */
    kCLOCK_Can2S          = (0U << 8) | 0xAU,     /*!< CCGR0, CG10, Serial Clock */
    kCLOCK_CpuDbg         = (0U << 8) | 0xBU,     /*!< CCGR0, CG11 */
    kCLOCK_Gpt2           = (0U << 8) | 0xCU,     /*!< CCGR0, CG12 */
    kCLOCK_Gpt2S          = (0U << 8) | 0xDU,     /*!< CCGR0, CG13, Serial Clock */
    kCLOCK_Uart2          = (0U << 8) | 0xEU,     /*!< CCGR0, CG14 */
    kCLOCK_Gpio2          = (0U << 8) | 0xFU,     /*!< CCGR0, CG15 */

    /*!< CCM CCGR1 */
    kCLOCK_Ecspi1         = (1U << 8) | 0x0U,     /*!< CCGR1, CG0  */
    kCLOCK_Ecspi2         = (1U << 8) | 0x1U,     /*!< CCGR1, CG1  */
    kCLOCK_Ecspi3         = (1U << 8) | 0x2U,     /*!< CCGR1, CG2  */
    kCLOCK_Ecspi4         = (1U << 8) | 0x3U,     /*!< CCGR1, CG3  */
    kCLOCK_Adc_5hc        = (1U << 8) | 0x4U,     /*!< CCGR1, CG4  */
    kCLOCK_Uart3          = (1U << 8) | 0x5U,     /*!< CCGR1, CG5  */
    kCLOCK_Epit1          = (1U << 8) | 0x6U,     /*!< CCGR1, CG6  */
    kCLOCK_Epit2          = (1U << 8) | 0x7U,     /*!< CCGR1, CG7  */
    kCLOCK_Adc1           = (1U << 8) | 0x8U,     /*!< CCGR1, CG8  */
    kCLOCK_SimS           = (1U << 8) | 0x9U,     /*!< CCGR1, CG9  */
    kCLOCK_Gpt1           = (1U << 8) | 0xAU,     /*!< CCGR1, CG10 */
    kCLOCK_Gpt1S          = (1U << 8) | 0xBU,     /*!< CCGR1, CG11, Serial Clock */
    kCLOCK_Uart4          = (1U << 8) | 0xCU,     /*!< CCGR1, CG12 */
    kCLOCK_Gpio1          = (1U << 8) | 0xDU,     /*!< CCGR1, CG13 */
    kCLOCK_Csu            = (1U << 8) | 0xEU,     /*!< CCGR1, CG14 */
    kCLOCK_Gpio5          = (1U << 8) | 0xFU,     /*!< CCGR1, CG15 */

    /*!< CCM CCGR2 */
    kCLOCK_Esai           = (2U << 8) | 0x0U,     /*!< CCGR2, CG0  */
    kCLOCK_Csi            = (2U << 8) | 0x1U,     /*!< CCGR2, CG1  */
    kCLOCK_IomuxcSnvs     = (2U << 8) | 0x2U,     /*!< CCGR2, CG2  */
    kCLOCK_I2c1S          = (2U << 8) | 0x3U,     /*!< CCGR2, CG3,  Serial Clock */
    kCLOCK_I2c2S          = (2U << 8) | 0x4U,     /*!< CCGR2, CG4,  Serial Clock */
    kCLOCK_I2c3S          = (2U << 8) | 0x5U,     /*!< CCGR2, CG5,  Serial Clock */
    kCLOCK_Ocotp          = (2U << 8) | 0x6U,     /*!< CCGR2, CG6  */
    kCLOCK_IomuxcIpt      = (2U << 8) | 0x7U,     /*!< CCGR2, CG7  */
    kCLOCK_Ipmux1         = (2U << 8) | 0x8U,     /*!< CCGR2, CG8  */
    kCLOCK_Ipmux2         = (2U << 8) | 0x9U,     /*!< CCGR2, CG9  */
    kCLOCK_Ipmux3         = (2U << 8) | 0xAU,     /*!< CCGR2, CG10 */
    kCLOCK_Ipsync         = (2U << 8) | 0xBU,     /*!< CCGR2, CG11 */
                                                  /*!< CCGR2, CG12 reserved */
    kCLOCK_Gpio3          = (2U << 8) | 0xDU,     /*!< CCGR2, CG13 */
    kCLOCK_Lcd            = (2U << 8) | 0xEU,     /*!< CCGR2, CG14 */
    kCLOCK_Pxp            = (2U << 8) | 0xFU,     /*!< CCGR2, CG15 */

    /*!< CCM CCGR3 */
    kCLOCK_CsiMclk        = (3U << 8) | 0x0U,     /*!< CCGR3, CG0  */
    kCLOCK_Uart5          = (3U << 8) | 0x1U,     /*!< CCGR3, CG1  */
    kCLOCK_Epdc           = (3U << 8) | 0x2U,     /*!< CCGR3, CG2  */
    kCLOCK_Uart6          = (3U << 8) | 0x3U,     /*!< CCGR3, CG3  */
    kCLOCK_Dap            = (3U << 8) | 0x4U,     /*!< CCGR3, CG4  */
    kCLOCK_Lcdif1         = (3U << 8) | 0x5U,     /*!< CCGR3, CG5  */
    kCLOCK_Gpio4          = (3U << 8) | 0x6U,     /*!< CCGR3, CG6  */
    kCLOCK_Qspi1          = (3U << 8) | 0x7U,     /*!< CCGR3, CG7  */
    kCLOCK_Wdog1          = (3U << 8) | 0x8U,     /*!< CCGR3, CG8  */
    kCLOCK_Patch          = (3U << 8) | 0x9U,     /*!< CCGR3, CG9  */
    kCLOCK_MmdcAClk       = (3U << 8) | 0xAU,     /*!< CCGR3, CG10 */
                                                  /*!< CCGR3, CG11 reserved */
    kCLOCK_MmdcIpgP0      = (3U << 8) | 0xCU,     /*!< CCGR3, CG12 */
    kCLOCK_MmdcIpgP1      = (3U << 8) | 0xDU,     /*!< CCGR3, CG13 */
    kCLOCK_Axi            = (3U << 8) | 0xEU,     /*!< CCGR3, CG14 */
    kCLOCK_IomuxcSnvsGpr  = (3U << 8) | 0xFU,     /*!< CCGR3, CG15 */

    /*!< CCM CCGR4 */
                                                  /*!< CCGR4, CG0 reserved */
    kCLOCK_Iomuxc         = (4U << 8) | 0x1U,     /*!< CCGR4, CG1  */
    kCLOCK_IomuxcGpr      = (4U << 8) | 0x2U,     /*!< CCGR4, CG2  */
    kCLOCK_SimCpu         = (4U << 8) | 0x3U,     /*!< CCGR4, CG3  */
    kCLOCK_ApbSlave       = (4U << 8) | 0x4U,     /*!< CCGR4, CG4  */
    kCLOCK_Tsc            = (4U << 8) | 0x5U,     /*!< CCGR4, CG5  */
    kCLOCK_SimM           = (4U << 8) | 0x6U,     /*!< CCGR4, CG6  */
    kCLOCK_Axi2Apb        = (4U << 8) | 0x7U,     /*!< CCGR4, CG7  */
    kCLOCK_Pwm1           = (4U << 8) | 0x8U,     /*!< CCGR4, CG8  */
    kCLOCK_Pwm2           = (4U << 8) | 0x9U,     /*!< CCGR4, CG9  */
    kCLOCK_Pwm3           = (4U << 8) | 0xAU,     /*!< CCGR4, CG10 */
    kCLOCK_Pwm4           = (4U << 8) | 0xBU,     /*!< CCGR4, CG11 */
    kCLOCK_RawNandBchApb  = (4U << 8) | 0xCU,     /*!< CCGR4, CG12 */
    kCLOCK_RawNandBch     = (4U << 8) | 0xDU,     /*!< CCGR4, CG13 */
    kCLOCK_RawNandGpmi    = (4U << 8) | 0xEU,     /*!< CCGR4, CG14 */
    kCLOCK_RawNandGpmiApb = (4U << 8) | 0xFU,     /*!< CCGR4, CG15 */

    /*!< CCM CCGR5 */
    kCLOCK_Rom            = (5U << 8) | 0x0U,     /*!< CCGR5, CG0  */
    kCLOCK_Stcr           = (5U << 8) | 0x1U,     /*!< CCGR5, CG1  */
    kCLOCK_SnvsDryice     = (5U << 8) | 0x2U,     /*!< CCGR5, CG2  */
    kCLOCK_Sdma           = (5U << 8) | 0x3U,     /*!< CCGR5, CG3  */
    kCLOCK_Kpp            = (5U << 8) | 0x4U,     /*!< CCGR5, CG4  */
    kCLOCK_Wdog2          = (5U << 8) | 0x5U,     /*!< CCGR5, CG5  */
    kCLOCK_Spba           = (5U << 8) | 0x6U,     /*!< CCGR5, CG6  */
    kCLOCK_Spdif          = (5U << 8) | 0x7U,     /*!< CCGR5, CG7  */
    kCLOCK_SimMain        = (5U << 8) | 0x8U,     /*!< CCGR5, CG8  */
    kCLOCK_SnvsHp         = (5U << 8) | 0x9U,     /*!< CCGR5, CG9  */
    kCLOCK_SnvsLp         = (5U << 8) | 0xAU,     /*!< CCGR5, CG10 */
    kCLOCK_Sai3           = (5U << 8) | 0xBU,     /*!< CCGR5, CG11 */
    kCLOCK_Uart1          = (5U << 8) | 0xCU,     /*!< CCGR5, CG12 */
    kCLOCK_Uart7          = (5U << 8) | 0xDU,     /*!< CCGR5, CG13 */
    kCLOCK_Sai1           = (5U << 8) | 0xEU,     /*!< CCGR5, CG14 */
    kCLOCK_Sai2           = (5U << 8) | 0xFU,     /*!< CCGR5, CG15 */

    /*!< CCM CCGR6 */
    kCLOCK_UsbOh3         = (6U << 8) | 0x0U,     /*!< CCGR6, CG0  */
    kCLOCK_Usdhc1         = (6U << 8) | 0x1U,     /*!< CCGR6, CG1  */
    kCLOCK_Usdhc2         = (6U << 8) | 0x2U,     /*!< CCGR6, CG2  */
                                                  /*!< CCGR6, CG3 reserved */
    kCLOCK_Ipmux4         = (6U << 8) | 0x4U,     /*!< CCGR6, CG4  */
    kCLOCK_EimSlow        = (6U << 8) | 0x5U,     /*!< CCGR6, CG5  */
                                                  /*!< CCGR6, CG6 reserved */
    kCLOCK_Uart8          = (6U << 8) | 0x7U,     /*!< CCGR6, CG7  */
    kCLOCK_Pwm8           = (6U << 8) | 0x8U,     /*!< CCGR6, CG8  */
    kCLOCK_AipsTz3        = (6U << 8) | 0x9U,     /*!< CCGR6, CG9  */
    kCLOCK_Wdog3          = (6U << 8) | 0xAU,     /*!< CCGR6, CG10 */
    kCLOCK_Anadig         = (6U << 8) | 0xBU,     /*!< CCGR6, CG11 */
    kCLOCK_I2c4S          = (6U << 8) | 0xCU,     /*!< CCGR6, CG12, Serial Clock */
    kCLOCK_Pwm5           = (6U << 8) | 0xDU,     /*!< CCGR6, CG13 */
    kCLOCK_Pwm6           = (6U << 8) | 0xEU,     /*!< CCGR6, CG14 */
    kCLOCK_Pwm7           = (6U << 8) | 0xFU,     /*!< CCGR6, CG15 */
} clock_ip_name_t;

/*! @brief OSC 24M sorce select */
typedef enum _clock_osc
{
    kCLOCK_RcOsc          = 0U,       /*!< On chip OSC. */
    kCLOCK_XtalOsc        = 1U,       /*!< 24M Xtal OSC */
} clock_osc_t;

/*! @brief Clock gate value */
typedef enum _clock_gate_value
{
    kCLOCK_ClockNotNeeded      = 0U,       /*!< Clock is off during all modes. */
    kCLOCK_ClockNeededRun      = 1U,       /*!< Clock is on in run mode, but off in WAIT and STOP modes */
    kCLOCK_ClockNeededRunWait  = 3U,       /*!< Clock is on during all modes, except STOP mode */
} clock_gate_value_t;

/*! @brief System clock mode */
typedef enum _clock_mode_t
{
    kCLOCK_ModeRun         = 0U,        /*!< Remain in run mode. */
    kCLOCK_ModeWait        = 1U,        /*!< Transfer to wait mode. */
    kCLOCK_ModeStop        = 2U,        /*!< Transfer to stop mode. */
} clock_mode_t;

/*!
 * @brief MUX control names for clock mux setting.
 *
 * These constants define the mux control names for clock mux setting.\n
 * - 7:0: REG offset to CCM_BASE in bytes.
 * - 12:8: Root clock setting bit field shift.
 * - 25:13: Root clock setting bit field width.
 * - 31:26: Root clock setting bit field width.
 */
typedef enum _clock_mux
{
    kCLOCK_StepMux   = CCM_TUPLE(CCSR, CCM_CCSR_STEP_SEL_SHIFT, CCM_CCSR_STEP_SEL_MASK, CCM_NO_BUSY_WAIT),                               /*!< atep clock mux name */
    kCLOCK_SecMux    = CCM_TUPLE(CCSR, CCM_CCSR_SECONDARY_CLK_SEL_SHIFT, CCM_CCSR_SECONDARY_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),             /*!< secondary clock mux name */
    kCLOCK_Pll1SwMux = CCM_TUPLE(CCSR, CCM_CCSR_PLL1_SW_CLK_SEL_SHIFT, CCM_CCSR_PLL1_SW_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                 /*!< pll1_sw_clk mux name */
    kCLOCK_Pll3SwMux = CCM_TUPLE(CCSR, CCM_CCSR_PLL3_SW_CLK_SEL_SHIFT, CCM_CCSR_PLL3_SW_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                 /*!< Pll3_sw_clk mux name */

    kCLOCK_Periph2Mux = CCM_TUPLE(CBCDR, CCM_CBCDR_PERIPH2_CLK_SEL_SHIFT, CCM_CBCDR_PERIPH2_CLK_SEL_MASK, CCM_CDHIPR_PERIPH2_CLK_SEL_BUSY_SHIFT), /*!< periph2 mux name */
    kCLOCK_PeriphMux  = CCM_TUPLE(CBCDR, CCM_CBCDR_PERIPH_CLK_SEL_SHIFT, CCM_CBCDR_PERIPH_CLK_SEL_MASK, CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT),    /*!< periph mux name */
    kCLOCK_AxiAltMux  = CCM_TUPLE(CBCDR, CCM_CBCDR_AXI_ALT_SEL_SHIFT, CCM_CBCDR_AXI_ALT_SEL_MASK, CCM_NO_BUSY_WAIT),                              /*!< axi alt mux name */
    kCLOCK_AxiMux     = CCM_TUPLE(CBCDR, CCM_CBCDR_AXI_SEL_SHIFT, CCM_CBCDR_AXI_SEL_MASK, CCM_NO_BUSY_WAIT),                                      /*!< axi mux name */

    kCLOCK_PrePeriph2Mux  = CCM_TUPLE(CBCMR, CCM_CBCMR_PRE_PERIPH2_CLK_SEL_SHIFT, CCM_CBCMR_PRE_PERIPH2_CLK_SEL_MASK, CCM_NO_BUSY_WAIT), /*!< pre-periph2 mux name */
    kCLOCK_PrePeriphMux   = CCM_TUPLE(CBCMR, CCM_CBCMR_PRE_PERIPH_CLK_SEL_SHIFT, CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),   /*!< pre-periph mux name */
    kCLOCK_Periph2Clk2Mux = CCM_TUPLE(CBCMR, CCM_CBCMR_PERIPH2_CLK2_SEL_SHIFT, CCM_CBCMR_PERIPH2_CLK2_SEL_MASK, CCM_NO_BUSY_WAIT),       /*!< periph2 clock2 mux name */
    kCLOCK_PeriphClk2Mux  = CCM_TUPLE(CBCMR, CCM_CBCMR_PERIPH_CLK2_SEL_SHIFT, CCM_CBCMR_PERIPH_CLK2_SEL_MASK, CCM_NO_BUSY_WAIT),         /*!< periph clock2 mux name */

    kCLOCK_EimSlowMux = CCM_TUPLE(CSCMR1, CCM_CSCMR1_ACLK_EIM_SLOW_SEL_SHIFT, CCM_CSCMR1_ACLK_EIM_SLOW_SEL_MASK, CCM_NO_BUSY_WAIT),      /*!< aclk eim slow mux name */
    kCLOCK_GpmiMux    = CCM_TUPLE(CSCMR1, CCM_CSCMR1_GPMI_CLK_SEL_SHIFT, CCM_CSCMR1_GPMI_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                /*!< gpmi mux name */
    kCLOCK_BchMux     = CCM_TUPLE(CSCMR1, CCM_CSCMR1_BCH_CLK_SEL_SHIFT, CCM_CSCMR1_BCH_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                  /*!< bch mux name */
    kCLOCK_Usdhc2Mux  = CCM_TUPLE(CSCMR1, CCM_CSCMR1_USDHC2_CLK_SEL_SHIFT, CCM_CSCMR1_USDHC2_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),            /*!< usdhc2 mux name */
    kCLOCK_Usdhc1Mux  = CCM_TUPLE(CSCMR1, CCM_CSCMR1_USDHC1_CLK_SEL_SHIFT, CCM_CSCMR1_USDHC1_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),            /*!< usdhc1 mux name */
    kCLOCK_Sai3Mux    = CCM_TUPLE(CSCMR1, CCM_CSCMR1_SAI3_CLK_SEL_SHIFT, CCM_CSCMR1_SAI3_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                /*!< sai3 mux name */
    kCLOCK_Sai2Mux    = CCM_TUPLE(CSCMR1, CCM_CSCMR1_SAI2_CLK_SEL_SHIFT, CCM_CSCMR1_SAI2_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                /*!< sai2 mux name */
    kCLOCK_Sai1Mux    = CCM_TUPLE(CSCMR1, CCM_CSCMR1_SAI1_CLK_SEL_SHIFT, CCM_CSCMR1_SAI1_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                /*!< sai1 mux name */
    kCLOCK_Qspi1Mux   = CCM_TUPLE(CSCMR1, CCM_CSCMR1_QSPI1_CLK_SEL_SHIFT, CCM_CSCMR1_QSPI1_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),              /*!< qspi1 mux name */
    kCLOCK_PerclkMux  = CCM_TUPLE(CSCMR1, CCM_CSCMR1_PERCLK_CLK_SEL_SHIFT, CCM_CSCMR1_PERCLK_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),            /*!< perclk mux name */

    //kCLOCK_VidMux     = CCM_TUPLE(CSCMR2, CCM_CSCMR2_VID_CLK_SEL_SHIFT, CCM_CSCMR2_VID_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                  /*!< vid mux name */
    kCLOCK_EsaiMux    = CCM_TUPLE(CSCMR2, CCM_CSCMR2_ESAI_CLK_SEL_SHIFT, CCM_CSCMR2_ESAI_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                /*!< esai mux name */
    kCLOCK_CanMux     = CCM_TUPLE(CSCMR2, CCM_CSCMR2_CAN_CLK_SEL_SHIFT, CCM_CSCMR2_CAN_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                  /*!< can mux name */

    kCLOCK_UartMux    = CCM_TUPLE(CSCDR1, CCM_CSCDR1_UART_CLK_SEL_SHIFT, CCM_CSCDR1_UART_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                /*!< uart mux name */

    kCLOCK_EnfcMux    = CCM_TUPLE(CS2CDR, CCM_CS2CDR_ENFC_CLK_SEL_SHIFT, CCM_CS2CDR_ENFC_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                /*!< enfc mux name */
    kCLOCK_LdbDi0Mux  = CCM_TUPLE(CS2CDR, CCM_CS2CDR_LDB_DI0_CLK_SEL_SHIFT, CCM_CS2CDR_LDB_DI0_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),          /*!< ldb di0 mux name */

    kCLOCK_SpdifMux   = CCM_TUPLE(CDCDR, CCM_CDCDR_SPDIF0_CLK_SEL_SHIFT, CCM_CDCDR_SPDIF0_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),               /*!< spdif mux name */

    kCLOCK_EpdcPreMux = CCM_TUPLE(CHSCCDR, CCM_CHSCCDR_EPDC_PRE_CLK_SEL_SHIFT, CCM_CHSCCDR_EPDC_PRE_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),     /*!< epdc pre mux name */
    kCLOCK_EpdcMux    = CCM_TUPLE(CHSCCDR, CCM_CHSCCDR_EPDC_CLK_SEL_SHIFT, CCM_CHSCCDR_EPDC_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),             /*!< epdc mux name */

    kCLOCK_EcspiMux     = CCM_TUPLE(CSCDR2, CCM_CSCDR2_ECSPI_CLK_SEL_SHIFT, CCM_CSCDR2_ECSPI_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),            /*!< ecspi mux name */
    kCLOCK_Lcdif1PreMux = CCM_TUPLE(CSCDR2, CCM_CSCDR2_LCDIF1_PRE_CLK_SEL_SHIFT, CCM_CSCDR2_LCDIF1_PRE_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),  /*!< lcdif1 pre mux name */
    kCLOCK_Lcdif1Mux    = CCM_TUPLE(CSCDR2, CCM_CSCDR2_LCDIF1_CLK_SEL_SHIFT, CCM_CSCDR2_LCDIF1_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),          /*!< lcdif1 mux name */

    kCLOCK_CsiMux     = CCM_TUPLE(CSCDR3, CCM_CSCDR3_CSI_CLK_SEL_SHIFT, CCM_CSCDR3_CSI_CLK_SEL_MASK, CCM_NO_BUSY_WAIT),                  /*!< csi mux name */
} clock_mux_t;

/*!
 * @brief DIV control names for clock div setting.
 *
 * These constants define div control names for clock div setting.\n
 * - 7:0: REG offset to CCM_BASE in bytes.
 * - 12:8: Root clock setting bit field shift.
 * - 25:13: Root clock setting bit field width.
 * - 31:26: Root clock setting bit field width.
 */
typedef enum _clock_div
{
    kCLOCK_ArmDiv     = CCM_TUPLE(CACRR, CCM_CACRR_ARM_PODF_SHIFT, CCM_CACRR_ARM_PODF_MASK, CCM_CDHIPR_ARM_PODF_BUSY_SHIFT),          /*!< core div name */

    kCLOCK_PeriphClk2Div  = CCM_TUPLE(CBCDR, CCM_CBCDR_PERIPH_CLK2_PODF_SHIFT, CCM_CBCDR_PERIPH_CLK2_PODF_MASK, CCM_NO_BUSY_WAIT),    /*!< periph clock2 div name */
    kCLOCK_Periph2Clk2Div = CCM_TUPLE(CBCDR, CCM_CBCDR_PERIPH2_CLK2_PODF_SHIFT, CCM_CBCDR_PERIPH2_CLK2_PODF_MASK, CCM_NO_BUSY_WAIT),  /*!< periph2 clock2 div name */
    kCLOCK_AxiDiv         = CCM_TUPLE(CBCDR, CCM_CBCDR_AXI_PODF_SHIFT, CCM_CBCDR_AXI_PODF_MASK, CCM_CDHIPR_AXI_PODF_BUSY_SHIFT),      /*!< axi div name */
    kCLOCK_AhbDiv         = CCM_TUPLE(CBCDR, CCM_CBCDR_AHB_PODF_SHIFT, CCM_CBCDR_AHB_PODF_MASK, CCM_CDHIPR_AHB_PODF_BUSY_SHIFT),      /*!< ahb div name */
    kCLOCK_IpgDiv         = CCM_TUPLE(CBCDR, CCM_CBCDR_IPG_PODF_SHIFT, CCM_CBCDR_IPG_PODF_MASK, CCM_NO_BUSY_WAIT),                    /*!< ipg div name */
    kCLOCK_FabricMmdcDiv  = CCM_TUPLE(CBCDR, CCM_CBCDR_FABRIC_MMDC_PODF_SHIFT, CCM_CBCDR_FABRIC_MMDC_PODF_MASK, CCM_CDHIPR_MMDC_PODF_BUSY_SHIFT), /*!< mmdc/fabric div name */

    kCLOCK_Lcdif1Div  = CCM_TUPLE(CBCMR, CCM_CBCMR_LCDIF1_PODF_SHIFT, CCM_CBCMR_LCDIF1_PODF_MASK, CCM_NO_BUSY_WAIT),                  /*!< lcdif1 div name */

    kCLOCK_Qspi1Div   = CCM_TUPLE(CSCMR1, CCM_CSCMR1_QSPI1_PODF_SHIFT, CCM_CSCMR1_QSPI1_PODF_MASK, CCM_NO_BUSY_WAIT),                 /*!< qspi1 div name */
    kCLOCK_EimSlowDiv = CCM_TUPLE(CSCMR1, CCM_CSCMR1_ACLK_EIM_SLOW_PODF_SHIFT, CCM_CSCMR1_ACLK_EIM_SLOW_PODF_MASK, CCM_NO_BUSY_WAIT), /*!< eim slow div name */
    kCLOCK_PerclkDiv  = CCM_TUPLE(CSCMR1, CCM_CSCMR1_PERCLK_PODF_SHIFT, CCM_CSCMR1_PERCLK_PODF_MASK, CCM_NO_BUSY_WAIT),               /*!< perclk div name */

    //kCLOCK_VidDiv     = CCM_TUPLE(CSCMR2, CCM_CSCMR2_VID_CLK_PODF_SHIFT, CCM_CSCMR2_VID_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),             /*!< vid div name */
    //kCLOCK_VidPreDiv  = CCM_TUPLE(CSCMR2, CCM_CSCMR2_VID_CLK_PRE_PODF_SHIFT, CCM_CSCMR2_VID_CLK_PRE_PODF_MASK, CCM_NO_BUSY_WAIT),     /*!< vid pre div name */
    kCLOCK_LdbDi0Div  = CCM_TUPLE(CSCMR2, CCM_CSCMR2_LDB_DI0_DIV_SHIFT, CCM_CSCMR2_LDB_DI0_DIV_MASK, CCM_NO_BUSY_WAIT),               /*!< ldb di0 div name */
    kCLOCK_LdbDi1Div  = CCM_TUPLE(CSCMR2, CCM_CSCMR2_LDB_DI1_DIV_SHIFT, CCM_CSCMR2_LDB_DI1_DIV_MASK, CCM_NO_BUSY_WAIT),               /*!< ldb di1 div name */
    kCLOCK_CanDiv     = CCM_TUPLE(CSCMR2, CCM_CSCMR2_CAN_CLK_PODF_SHIFT, CCM_CSCMR2_CAN_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),             /*!< can div name */

    kCLOCK_GpmiDiv    = CCM_TUPLE(CSCDR1, CCM_CSCDR1_GPMI_PODF_SHIFT, CCM_CSCDR1_GPMI_PODF_MASK, CCM_NO_BUSY_WAIT),                   /*!< gpmi div name */
    kCLOCK_BchDiv     = CCM_TUPLE(CSCDR1, CCM_CSCDR1_BCH_PODF_SHIFT, CCM_CSCDR1_BCH_PODF_MASK, CCM_NO_BUSY_WAIT),                     /*!< bch div name */
    kCLOCK_Usdhc2Div  = CCM_TUPLE(CSCDR1, CCM_CSCDR1_USDHC2_PODF_SHIFT, CCM_CSCDR1_USDHC2_PODF_MASK, CCM_NO_BUSY_WAIT),               /*!< usdhc2 div name */
    kCLOCK_Usdhc1Div  = CCM_TUPLE(CSCDR1, CCM_CSCDR1_USDHC1_PODF_SHIFT, CCM_CSCDR1_USDHC1_PODF_MASK, CCM_NO_BUSY_WAIT),               /*!< usdhc1 div name */
    kCLOCK_UartDiv    = CCM_TUPLE(CSCDR1, CCM_CSCDR1_UART_CLK_PODF_SHIFT, CCM_CSCDR1_UART_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),           /*!< uart div name */

    kCLOCK_EsaiPreDiv = CCM_TUPLE(CS1CDR, CCM_CS1CDR_ESAI_CLK_PRED_SHIFT, CCM_CS1CDR_ESAI_CLK_PRED_MASK, CCM_NO_BUSY_WAIT),           /*!< sai3 pre div name */
    kCLOCK_EsaiDiv    = CCM_TUPLE(CS1CDR, CCM_CS1CDR_ESAI_CLK_PODF_SHIFT, CCM_CS1CDR_ESAI_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),           /*!< esai div name */
    kCLOCK_Sai3PreDiv = CCM_TUPLE(CS1CDR, CCM_CS1CDR_SAI3_CLK_PRED_SHIFT, CCM_CS1CDR_SAI3_CLK_PRED_MASK, CCM_NO_BUSY_WAIT),           /*!< sai3 pre div name */
    kCLOCK_Sai3Div    = CCM_TUPLE(CS1CDR, CCM_CS1CDR_SAI3_CLK_PODF_SHIFT, CCM_CS1CDR_SAI3_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),           /*!< sai3 div name */
    kCLOCK_Sai1PreDiv = CCM_TUPLE(CS1CDR, CCM_CS1CDR_SAI1_CLK_PRED_SHIFT, CCM_CS1CDR_SAI1_CLK_PRED_MASK, CCM_NO_BUSY_WAIT),           /*!< sai1 pre div name */
    kCLOCK_Sai1Div    = CCM_TUPLE(CS1CDR, CCM_CS1CDR_SAI1_CLK_PODF_SHIFT, CCM_CS1CDR_SAI1_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),           /*!< sai1 div name */

    kCLOCK_EnfcPreDiv = CCM_TUPLE(CS2CDR, CCM_CS2CDR_ENFC_CLK_PRED_SHIFT, CCM_CS2CDR_ENFC_CLK_PRED_MASK, CCM_NO_BUSY_WAIT),           /*!< enfc pre div name */
    kCLOCK_EnfcDiv    = CCM_TUPLE(CS2CDR, CCM_CS2CDR_ENFC_CLK_PODF_SHIFT, CCM_CS2CDR_ENFC_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),           /*!< enfc div name */
    kCLOCK_Sai2PreDiv = CCM_TUPLE(CS2CDR, CCM_CS2CDR_SAI2_CLK_PRED_SHIFT, CCM_CS2CDR_SAI2_CLK_PRED_MASK, CCM_NO_BUSY_WAIT),           /*!< sai2 pre div name */
    kCLOCK_Sai2Div    = CCM_TUPLE(CS2CDR, CCM_CS2CDR_SAI2_CLK_PODF_SHIFT, CCM_CS2CDR_SAI2_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),           /*!< sai2 div name */

    kCLOCK_Spdif0PreDiv = CCM_TUPLE(CDCDR, CCM_CDCDR_SPDIF0_CLK_PRED_SHIFT, CCM_CDCDR_SPDIF0_CLK_PRED_MASK, CCM_NO_BUSY_WAIT),        /*!< spdif pre div name */
    kCLOCK_Spdif0Div  = CCM_TUPLE(CDCDR, CCM_CDCDR_SPDIF0_CLK_PODF_SHIFT, CCM_CDCDR_SPDIF0_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),          /*!< spdif div name */

    kCLOCK_EpdcDiv    = CCM_TUPLE(CHSCCDR, CCM_CHSCCDR_EPDC_PODF_SHIFT, CCM_CHSCCDR_EPDC_PODF_MASK, CCM_NO_BUSY_WAIT),                /*!< epdc div name */

    kCLOCK_EcspiDiv   = CCM_TUPLE(CSCDR2, CCM_CSCDR2_ECSPI_CLK_PODF_SHIFT, CCM_CSCDR2_ECSPI_CLK_PODF_MASK, CCM_NO_BUSY_WAIT),         /*!< ecspi div name */
    kCLOCK_Lcdif1PreDiv = CCM_TUPLE(CSCDR2, CCM_CSCDR2_LCDIF1_PRED_SHIFT, CCM_CSCDR2_LCDIF1_PRED_MASK, CCM_NO_BUSY_WAIT),             /*!< lcdif1 pre div name */

    kCLOCK_CsiDiv     = CCM_TUPLE(CSCDR3, CCM_CSCDR3_CSI_PODF_SHIFT, CCM_CSCDR3_CSI_PODF_MASK, CCM_NO_BUSY_WAIT),                     /*!< csi div name */
} clock_div_t;

/*! @brief PLL configuration for ARM */
typedef struct _clock_arm_pll_config
{
    uint32_t loopDivider;      /*!< PLL loop divider. Valid range for divider value: 54-108. Fout=Fin*loopDivider/2. */
} clock_arm_pll_config_t;

/*! @brief PLL configuration for USB */
typedef struct _clock_usb_pll_config
{
    uint8_t  loopDivider;      /*!< PLL loop divider.
                                    0 - Fout=Fref*20;
                                    1 - Fout=Fref*22 */
} clock_usb_pll_config_t;

/*! @brief PLL configuration for System */
typedef struct _clock_sys_pll_config
{
    uint8_t  loopDivider;      /*!< PLL loop divider. Intended to be 1 (528M).
                                    0 - Fout=Fref*20;
                                    1 - Fout=Fref*22 */
    uint32_t numerator;        /*!< 30 bit numerator of fractional loop divider.*/
    uint32_t denominator;      /*!< 30 bit denominator of fractional loop divider */
} clock_sys_pll_config_t;

/*! @brief PLL configuration for AUDIO and VIDEO */
typedef struct _clock_audio_pll_config
{
    uint8_t loopDivider;       /*!< PLL loop divider. Valid range for DIV_SELECT divider value: 27~54. */
    uint8_t postDivider;       /*!< Divider after the PLL, should only be 1, 2, 4, 8, 16. */
    uint32_t numerator;        /*!< 30 bit numerator of fractional loop divider.*/
    uint32_t denominator;      /*!< 30 bit denominator of fractional loop divider */
} clock_audio_pll_config_t;

/*! @brief PLL configuration for AUDIO and VIDEO */
typedef struct _clock_video_pll_config
{
    uint8_t loopDivider;       /*!< PLL loop divider. Valid range for DIV_SELECT divider value: 27~54. */
    uint8_t postDivider;       /*!< Divider after the PLL, should only be 1, 2, 4, 8, 16. */
    uint32_t numerator;        /*!< 30 bit numerator of fractional loop divider.*/
    uint32_t denominator;      /*!< 30 bit denominator of fractional loop divider */
} clock_video_pll_config_t;

/*! @brief PLL configuration for ENET */
typedef struct _clock_enet_pll_config
{
    bool     enableClkOutput0;  /*!< Power on and enable PLL clock output for ENET0 (ref_enetpll0). */
    bool     enableClkOutput1;  /*!< Power on and enable PLL clock output for ENET1 (ref_enetpll1). */
    bool     enableClkOutput2;  /*!< Power on and enable PLL clock output for ENET2 (ref_enetpll2). */
    uint8_t  loopDivider0;      /*!< Controls the frequency of the ENET0 reference clock.
                                     b00 25MHz
                                     b01 50MHz
                                     b10 100MHz (not 50% duty cycle)
                                     b11 125MHz */
    uint8_t  loopDivider1;      /*!< Controls the frequency of the ENET1 reference clock.
                                     b00 25MHz
                                     b01 50MHz
                                     b10 100MHz (not 50% duty cycle)
                                     b11 125MHz */
} clock_enet_pll_config_t;

/*! @brief PLL name */
typedef enum _clock_pll
{
    kCLOCK_PllArm    = 0U,   /*!< PLL ARM */
    kCLOCK_PllSys    = 1U,   /*!< PLL SYS */
    kCLOCK_PllUsb1   = 2U,   /*!< PLL USB1 */
    kCLOCK_PllAudio  = 3U,   /*!< PLL Audio */
    kCLOCK_PllVideo  = 4U,   /*!< PLL Video */
    kCLOCK_PllEnet0  = 5U,   /*!< PLL Enet0 */
    kCLOCK_PllEnet1  = 6U,   /*!< PLL Enet1 */
    kCLOCK_PllEnet2  = 7U,   /*!< PLL Enet2 */
    kCLOCK_PllUsb2   = 8U,   /*!< PLL USB2 */
} clock_pll_t;

/*! @brief PLL PFD name */
typedef enum _clock_pfd
{
    kCLOCK_Pfd0    = 0U,   /*!< PLL PFD0 */
    kCLOCK_Pfd1    = 1U,   /*!< PLL PFD1 */
    kCLOCK_Pfd2    = 2U,   /*!< PLL PFD2 */
    kCLOCK_Pfd3    = 3U,   /*!< PLL PFD3 */
} clock_pfd_t;

/*! @brief USB clock source definition. */
typedef enum _clock_usb_src
{
    kCLOCK_Usb480M = 0,   /*!< Use 480M.      */
    kCLOCK_UsbSrcUnused = 0xFFFFFFFFU,                                    /*!< Used when the function does not
                                                                               care the clock source. */
} clock_usb_src_t;

/*! @brief Source of the USB HS PHY. */
typedef enum _clock_usb_phy_src
{
    kCLOCK_Usbphy480M = 0,   /*!< Use 480M.      */
} clock_usb_phy_src_t;


/*!
 * @brief Set CCM MUX node to certain value.
 *
 * @param mux   Which mux node to set, see clock_mux_t.
 * @param value Clock mux value to set, different mux has different value range.
 */
static inline void CLOCK_SetMux(clock_mux_t mux, uint32_t value)
{
    uint32_t busyShift;

    busyShift = CCM_TUPLE_BUSY_SHIFT(mux);
    CCM_TUPLE_REG(CCM, mux) = (CCM_TUPLE_REG(CCM, mux) & (~CCM_TUPLE_MASK(mux))) |
                              (((uint32_t)((value) << CCM_TUPLE_SHIFT(mux))) & CCM_TUPLE_MASK(mux));

    //assert(busyShift <= CCM_NO_BUSY_WAIT);

    /* Clock switch need Handshake? */
    if (CCM_NO_BUSY_WAIT != busyShift)
    {
        /* Wait until CCM internal handshake finish. */
        while (CCM->CDHIPR & (1U << busyShift))
        {
        }
    }
}

/*!
 * @brief Get CCM MUX value.
 *
 * @param mux   Which mux node to get, see clock_mux_t.
 * @return Clock mux value.
 */
static inline uint32_t CLOCK_GetMux(clock_mux_t mux)
{
    return (CCM_TUPLE_REG(CCM, mux) & CCM_TUPLE_MASK(mux)) >> CCM_TUPLE_SHIFT(mux);
}


/*!
 * @brief Set CCM DIV node to certain value.
 *
 * @param divider Which div node to set, see clock_div_t.
 * @param value   Clock div value to set, different divider has different value range.
 */
static inline void CLOCK_SetDiv(clock_div_t divider, uint32_t value)
{
    uint32_t busyShift;

    busyShift = CCM_TUPLE_BUSY_SHIFT(divider);
    CCM_TUPLE_REG(CCM, divider) = (CCM_TUPLE_REG(CCM, divider) & (~CCM_TUPLE_MASK(divider))) |
                              (((uint32_t)((value) << CCM_TUPLE_SHIFT(divider))) & CCM_TUPLE_MASK(divider));

    //assert(busyShift <= CCM_NO_BUSY_WAIT);

    /* Clock switch need Handshake? */
    if (CCM_NO_BUSY_WAIT != busyShift)
    {
        /* Wait until CCM internal handshake finish. */
        while (CCM->CDHIPR & (1U << busyShift))
        {
        }
    }
}

/*!
 * @brief Get CCM DIV node value.
 *
 * @param divider Which div node to get, see clock_div_t.
 */
static inline uint32_t CLOCK_GetDiv(clock_div_t divider)
{
    uint32_t value;
    
    value = (CCM_TUPLE_REG(CCM, divider) & CCM_TUPLE_MASK(divider)) >> CCM_TUPLE_SHIFT(divider);
    return value;
}


/*!
 * @brief Control the clock gate for specific IP.
 *
 * @param name  Which clock to enable, see clock_ip_name_t.
 * @param value Clock gate value to set, see clock_gate_value_t.
 */
static inline void CLOCK_ControlGate(clock_ip_name_t name, clock_gate_value_t value)
{
    uint32_t index = ((uint32_t)name) >> 8;
    uint32_t shift = (((uint32_t)name) & 0xF) << 1;
    volatile uint32_t *reg;

    //assert (index <= 6);

    reg = ((volatile uint32_t *)&CCM->CCGR0) + index;
    *reg = ((*reg) & ~(3U << shift)) | (((uint32_t)value) << shift);
}

/*!
 * @brief Enable the clock for specific IP.
 *
 * @param name  Which clock to enable, see clock_ip_name_t.
 */
static inline void CLOCK_EnableClock(clock_ip_name_t name)
{
    CLOCK_ControlGate(name, kCLOCK_ClockNeededRunWait);
}

/*!
 * @brief Disable the clock for specific IP.
 *
 * @param name  Which clock to disable, see clock_ip_name_t.
 */
static inline void CLOCK_DisableClock(clock_ip_name_t name)
{
    CLOCK_ControlGate(name, kCLOCK_ClockNotNeeded);
}


/*!
 * @brief Setting the low power mode that system will enter on next assertion of dsm_request signal.
 *
 * @param mode  Which mode to enter, see clock_mode_t.
 */
static inline void CLOCK_SetMode(clock_mode_t mode)
{
    CCM->CLPCR = (CCM->CLPCR & ~CCM_CLPCR_LPM_MASK) | CCM_CLPCR_LPM((uint32_t)mode);
}

/*!
 * @brief Gets the clock frequency for a specific clock name.
 *
 * This function checks the current clock configurations and then calculates
 * the clock frequency for a specific clock name defined in clock_name_t.
 *
 * @param clockName Clock names defined in clock_name_t
 * @return Clock frequency value in hertz
 */
uint32_t CLOCK_GetFreq(clock_name_t name);


/*!
 * @brief Initialize the external 24MHz clock.
 *
 * This function supports two modes:
 * 1. Use external crystal oscillator.
 * 2. Bypass the external crystal oscillator, using input source clock directly.
 *
 * After this function, please call CLOCK_SetXtal0Freq to inform clock driver
 * the external clock frequency.
 *
 * @param bypassXtalOsc Pass in true to bypass the external crystal oscillator.
 * @note This device does not support bypass external crystal oscillator, so
 * the input parameter should always be false.
 */
void CLOCK_InitExternalClk(bool bypassXtalOsc);

/*!
 * @brief Deinitialize the external 24MHz clock.
 *
 * This function disables the external 24MHz clock.
 *
 * After this function, please call @ref CLOCK_SetXtal0Freq to set external clock
 * frequency to 0.
 */
void CLOCK_DeinitExternalClk(void);

/*!
 * @brief Switch the OSC.
 *
 * This function switches the OSC source for SoC.
 *
 * @param osc   OSC source to switch to.
 */
void CLOCK_SwitchOsc(clock_osc_t osc);

/*!
 * @brief Gets the OSC clock frequency.
 *
 * This function will return the external XTAL OSC frequency if it is selected as the source of OSC,
 * otherwise internal 24MHz RC OSC frequency will be returned.
 *
 * @param osc   OSC type to get frequency.
 *
 * @return  Clock frequency; If the clock is invalid, returns 0.
 */
static inline uint32_t CLOCK_GetOscFreq(void)
{
    return (PMU->LOWPWR_CTRL & PMU_LOWPWR_CTRL_OSC_SEL_MASK) ? 24000000UL : g_xtalFreq;
}

/*!
 * @brief Gets the RTC clock frequency.
 *
 * @return  Clock frequency; If the clock is invalid, returns 0.
 */
static inline uint32_t CLOCK_GetRtcFreq(void)
{
    return 32768U;
}

/*!
 * @brief Set the XTAL (24M OSC) frequency based on board setting.
 *
 * @param freq The XTAL input clock frequency in Hz.
 */
static inline void CLOCK_SetXtalFreq(uint32_t freq)
{
    g_xtalFreq = freq;
}

/*!
 * @brief Set the RTC XTAL (32K OSC) frequency based on board setting.
 *
 * @param freq The RTC XTAL input clock frequency in Hz.
 */
static inline void CLOCK_SetRtcXtalFreq(uint32_t freq)
{
    g_rtcXtalFreq = freq;
}

/*!
 * @brief Initialize the RC oscillator 24MHz clock.
 */
void CLOCK_InitRcOsc24M(void);

/*!
 * @brief Power down the RCOSC 24M clock.
 */
void CLOCK_DeinitRcOsc24M(void);


/*!
 * @brief Initialize the ARM PLL.
 *
 * This function initialize the ARM PLL with specific settings
 *
 * @param config   configuration to set to PLL.
 */
void CLOCK_InitArmPll(const clock_arm_pll_config_t *config);

/*!
 * @brief De-initialize the ARM PLL.
 */
void CLOCK_DeinitArmPll(void);

/*!
 * @brief Initialize the System PLL.
 *
 * This function initializes the System PLL with specific settings
 *
 * @param config Configuration to set to PLL.
 */
void CLOCK_InitSysPll(const clock_sys_pll_config_t *config);

/*!
 * @brief De-initialize the System PLL.
 */
void CLOCK_DeinitSysPll(void);

/*!
 * @brief Initialize the USB1 PLL.
 *
 * This function initializes the USB1 PLL with specific settings
 *
 * @param config Configuration to set to PLL.
 */
void CLOCK_InitUsb1Pll(const clock_usb_pll_config_t *config);

/*!
 * @brief Deinitialize the USB1 PLL.
 */
void CLOCK_DeinitUsb1Pll(void);

/*!
 * @brief Initialize the USB2 PLL.
 *
 * This function initializes the USB2 PLL with specific settings
 *
 * @param config Configuration to set to PLL.
 */
void CLOCK_InitUsb2Pll(const clock_usb_pll_config_t *config);

/*!
 * @brief Deinitialize the USB2 PLL.
 */
void CLOCK_DeinitUsb2Pll(void);

/*!
 * @brief Initializes the Audio PLL.
 *
 * This function initializes the Audio PLL with specific settings
 *
 * @param config Configuration to set to PLL.
 */
void CLOCK_InitAudioPll(const clock_audio_pll_config_t *config);

/*!
 * @brief De-initialize the Audio PLL.
 */
void CLOCK_DeinitAudioPll(void);

/*!
 * @brief Initialize the video PLL.
 *
 * This function configures the Video PLL with specific settings
 *
 * @param config   configuration to set to PLL.
 */
void CLOCK_InitVideoPll(const clock_video_pll_config_t *config);

/*!
 * @brief De-initialize the Video PLL.
 */
void CLOCK_DeinitVideoPll(void);

/*!
 * @brief Initialize the ENET PLL.
 *
 * This function initializes the ENET PLL with specific settings.
 *
 * @param config Configuration to set to PLL.
 */
void CLOCK_InitEnetPll(const clock_enet_pll_config_t *config);

/*!
 * @brief Deinitialize the ENET PLL.
 *
 * This function disables the ENET PLL.
 */
void CLOCK_DeinitEnetPll(void);

/*!
 * @brief Get current PLL output frequency.
 *
 * This function get current output frequency of specific PLL
 *
 * @param pll   pll name to get frequency.
 * @return The PLL output frequency in hertz.
 */
uint32_t CLOCK_GetPllFreq(clock_pll_t pll);

/*!
 * @brief Initialize the System PLL PFD.
 *
 * This function initializes the System PLL PFD. During new value setting,
 * the clock output is disabled to prevent glitch.
 *
 * @param pfd Which PFD clock to enable.
 * @param pfdFrac The PFD FRAC value. the pfd clock = 528*18/pfdFrac
 * @note It is recommended that PFD settings are kept between 12-35.
 */
void CLOCK_InitSysPfd(clock_pfd_t pfd, uint8_t pfdFrac);

/*!
 * @brief De-initialize the System PLL PFD.
 *
 * This function disables the System PLL PFD.
 *
 * @param pfd Which PFD clock to disable.
 */
void CLOCK_DeinitSysPfd(clock_pfd_t pfd);

/*!
 * @brief Initialize the USB1 PLL PFD.
 *
 * This function initializes the USB1 PLL PFD. During new value setting,
 * the clock output is disabled to prevent glitch.
 *
 * @param pfd Which PFD clock to enable.
 * @param pfdFrac The PFD FRAC value. the pfd clock = 18*480/frac
 * @note It is recommended that PFD settings are kept between 12-35.
 */
void CLOCK_InitUsb1Pfd(clock_pfd_t pfd, uint8_t pfdFrac);

/*!
 * @brief De-initialize the USB1 PLL PFD.
 *
 * This function disables the USB1 PLL PFD.
 *
 * @param pfd Which PFD clock to disable.
 */
void CLOCK_DeinitUsb1Pfd(clock_pfd_t pfd);

/*!
 * @brief Get current System PLL PFD output frequency.
 *
 * This function get current output frequency of specific System PLL PFD
 *
 * @param pfd   pfd name to get frequency.
 * @return The PFD output frequency in hertz.
 */
uint32_t CLOCK_GetSysPfdFreq(clock_pfd_t pfd);

/*!
 * @brief Get current USB1 PLL PFD output frequency.
 *
 * This function get current output frequency of specific USB1 PLL PFD
 *
 * @param pfd   pfd name to get frequency.
 * @return The PFD output frequency in hertz.
 */
uint32_t CLOCK_GetUsb1PfdFreq(clock_pfd_t pfd);

/*! @brief Enable USB HS clock.
 *
 * This function only enables the access to USB HS prepheral, upper layer
 * should first call the @ref CLOCK_EnableUsbhs0PhyPllClock to enable the PHY
 * clock to use USB HS.
 *
 * @param src  USB HS does not care about the clock source, here must be @ref kCLOCK_UsbSrcUnused.
 * @param freq USB HS does not care about the clock source, so this parameter is ignored.
 * @retval true The clock is set successfully.
 * @retval false The clock source is invalid to get proper USB HS clock.
 */
bool CLOCK_EnableUsbhs0Clock(clock_usb_src_t src, uint32_t freq);

/*! @brief Enable USB HS PHY PLL clock.
 *
 * This function enables the internal 480MHz USB PHY PLL clock.
 *
 * @param src  USB HS PHY PLL clock source.
 * @param freq The frequency specified by src.
 * @retval true The clock is set successfully.
 * @retval false The clock source is invalid to get proper USB HS clock.
 */
bool CLOCK_EnableUsbhs0PhyPllClock(clock_usb_phy_src_t src, uint32_t freq);

/*! @brief Disable USB HS PHY PLL clock.
 *
 * This function disables USB HS PHY PLL clock.
 */
void CLOCK_DisableUsbhs0PhyPllClock(void);

/*! @brief Enable USB HS clock.
 *
 * This function only enables the access to USB HS prepheral, upper layer
 * should first call the @ref CLOCK_EnableUsbhs0PhyPllClock to enable the PHY
 * clock to use USB HS.
 *
 * @param src  USB HS does not care about the clock source, here must be @ref kCLOCK_UsbSrcUnused.
 * @param freq USB HS does not care about the clock source, so this parameter is ignored.
 * @retval true The clock is set successfully.
 * @retval false The clock source is invalid to get proper USB HS clock.
 */
bool CLOCK_EnableUsbhs1Clock(clock_usb_src_t src, uint32_t freq);

/*! @brief Enable USB HS PHY PLL clock.
 *
 * This function enables the internal 480MHz USB PHY PLL clock.
 *
 * @param src  USB HS PHY PLL clock source.
 * @param freq The frequency specified by src.
 * @retval true The clock is set successfully.
 * @retval false The clock source is invalid to get proper USB HS clock.
 */
bool CLOCK_EnableUsbhs1PhyPllClock(clock_usb_phy_src_t src, uint32_t freq);

/*! @brief Disable USB HS PHY PLL clock.
 *
 * This function disables USB HS PHY PLL clock.
 */
void CLOCK_DisableUsbhs1PhyPllClock(void);


#endif
