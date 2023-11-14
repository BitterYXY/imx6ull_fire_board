#ifndef __USB_H__
#define __USB_H__

#include "common.h"
#include "gic.h"

/* ----------------------------------------------------------------------------
   -- USB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USB_Peripheral_Access_Layer USB Peripheral Access Layer
 * @{
 */

/** USB - Register Layout Typedef */
typedef struct {
  __I  uint32_t ID;                                /**< Identification register, offset: 0x0 */
  __I  uint32_t HWGENERAL;                         /**< Hardware General, offset: 0x4 */
  __I  uint32_t HWHOST;                            /**< Host Hardware Parameters, offset: 0x8 */
  __I  uint32_t HWDEVICE;                          /**< Device Hardware Parameters, offset: 0xC */
  __I  uint32_t HWTXBUF;                           /**< TX Buffer Hardware Parameters, offset: 0x10 */
  __I  uint32_t HWRXBUF;                           /**< RX Buffer Hardware Parameters, offset: 0x14 */
       uint8_t RESERVED_0[104];
  __IO uint32_t GPTIMER0LD;                        /**< General Purpose Timer #0 Load, offset: 0x80 */
  __IO uint32_t GPTIMER0CTRL;                      /**< General Purpose Timer #0 Controller, offset: 0x84 */
  __IO uint32_t GPTIMER1LD;                        /**< General Purpose Timer #1 Load, offset: 0x88 */
  __IO uint32_t GPTIMER1CTRL;                      /**< General Purpose Timer #1 Controller, offset: 0x8C */
  __IO uint32_t SBUSCFG;                           /**< System Bus Config, offset: 0x90 */
       uint8_t RESERVED_1[108];
  __I  uint8_t CAPLENGTH;                          /**< Capability Registers Length, offset: 0x100 */
       uint8_t RESERVED_2[1];
  __I  uint16_t HCIVERSION;                        /**< Host Controller Interface Version, offset: 0x102 */
  __I  uint32_t HCSPARAMS;                         /**< Host Controller Structural Parameters, offset: 0x104 */
  __I  uint32_t HCCPARAMS;                         /**< Host Controller Capability Parameters, offset: 0x108 */
       uint8_t RESERVED_3[20];
  __I  uint16_t DCIVERSION;                        /**< Device Controller Interface Version, offset: 0x120 */
       uint8_t RESERVED_4[2];
  __I  uint32_t DCCPARAMS;                         /**< Device Controller Capability Parameters, offset: 0x124 */
       uint8_t RESERVED_5[24];
  __IO uint32_t USBCMD;                            /**< USB Command Register, offset: 0x140 */
  __IO uint32_t USBSTS;                            /**< USB Status Register, offset: 0x144 */
  __IO uint32_t USBINTR;                           /**< Interrupt Enable Register, offset: 0x148 */
  __IO uint32_t FRINDEX;                           /**< USB Frame Index, offset: 0x14C */
       uint8_t RESERVED_6[4];
  union {                                          /* offset: 0x154 */
    __IO uint32_t DEVICEADDR;                        /**< Device Address, offset: 0x154 */
    __IO uint32_t PERIODICLISTBASE;                  /**< Frame List Base Address, offset: 0x154 */
  };
  union {                                          /* offset: 0x158 */
    __IO uint32_t ASYNCLISTADDR;                     /**< Next Asynch. Address, offset: 0x158 */
    __IO uint32_t ENDPTLISTADDR;                     /**< Endpoint List Address, offset: 0x158 */
  };
       uint8_t RESERVED_7[4];
  __IO uint32_t BURSTSIZE;                         /**< Programmable Burst Size, offset: 0x160 */
  __IO uint32_t TXFILLTUNING;                      /**< TX FIFO Fill Tuning, offset: 0x164 */
       uint8_t RESERVED_8[16];
  __IO uint32_t ENDPTNAK;                          /**< Endpoint NAK, offset: 0x178 */
  __IO uint32_t ENDPTNAKEN;                        /**< Endpoint NAK Enable, offset: 0x17C */
  __I  uint32_t CONFIGFLAG;                        /**< Configure Flag Register, offset: 0x180 */
  __IO uint32_t PORTSC1;                           /**< Port Status & Control, offset: 0x184 */
       uint8_t RESERVED_9[28];
  __IO uint32_t OTGSC;                             /**< On-The-Go Status & control, offset: 0x1A4 */
  __IO uint32_t USBMODE;                           /**< USB Device Mode, offset: 0x1A8 */
  __IO uint32_t ENDPTSETUPSTAT;                    /**< Endpoint Setup Status, offset: 0x1AC */
  __IO uint32_t ENDPTPRIME;                        /**< Endpoint Prime, offset: 0x1B0 */
  __IO uint32_t ENDPTFLUSH;                        /**< Endpoint Flush, offset: 0x1B4 */
  __I  uint32_t ENDPTSTAT;                         /**< Endpoint Status, offset: 0x1B8 */
  __IO uint32_t ENDPTCOMPLETE;                     /**< Endpoint Complete, offset: 0x1BC */
  __IO uint32_t ENDPTCTRL0;                        /**< Endpoint Control0, offset: 0x1C0 */
  __IO uint32_t ENDPTCTRL[7];                      /**< Endpoint Control 1..Endpoint Control 7, array offset: 0x1C4, array step: 0x4 */
} USB_Type;

/* ----------------------------------------------------------------------------
   -- USB Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USB_Register_Masks USB Register Masks
 * @{
 */

/*! @name ID - Identification register */
#define USB_ID_ID_MASK                           (0x3FU)
#define USB_ID_ID_SHIFT                          (0U)
#define USB_ID_ID(x)                             (((uint32_t)(((uint32_t)(x)) << USB_ID_ID_SHIFT)) & USB_ID_ID_MASK)
#define USB_ID_NID_MASK                          (0x3F00U)
#define USB_ID_NID_SHIFT                         (8U)
#define USB_ID_NID(x)                            (((uint32_t)(((uint32_t)(x)) << USB_ID_NID_SHIFT)) & USB_ID_NID_MASK)
#define USB_ID_REVISION_MASK                     (0xFF0000U)
#define USB_ID_REVISION_SHIFT                    (16U)
#define USB_ID_REVISION(x)                       (((uint32_t)(((uint32_t)(x)) << USB_ID_REVISION_SHIFT)) & USB_ID_REVISION_MASK)

/*! @name HWGENERAL - Hardware General */
#define USB_HWGENERAL_PHYW_MASK                  (0x30U)
#define USB_HWGENERAL_PHYW_SHIFT                 (4U)
#define USB_HWGENERAL_PHYW(x)                    (((uint32_t)(((uint32_t)(x)) << USB_HWGENERAL_PHYW_SHIFT)) & USB_HWGENERAL_PHYW_MASK)
#define USB_HWGENERAL_PHYM_MASK                  (0x1C0U)
#define USB_HWGENERAL_PHYM_SHIFT                 (6U)
#define USB_HWGENERAL_PHYM(x)                    (((uint32_t)(((uint32_t)(x)) << USB_HWGENERAL_PHYM_SHIFT)) & USB_HWGENERAL_PHYM_MASK)
#define USB_HWGENERAL_SM_MASK                    (0x600U)
#define USB_HWGENERAL_SM_SHIFT                   (9U)
#define USB_HWGENERAL_SM(x)                      (((uint32_t)(((uint32_t)(x)) << USB_HWGENERAL_SM_SHIFT)) & USB_HWGENERAL_SM_MASK)

/*! @name HWHOST - Host Hardware Parameters */
#define USB_HWHOST_HC_MASK                       (0x1U)
#define USB_HWHOST_HC_SHIFT                      (0U)
#define USB_HWHOST_HC(x)                         (((uint32_t)(((uint32_t)(x)) << USB_HWHOST_HC_SHIFT)) & USB_HWHOST_HC_MASK)
#define USB_HWHOST_NPORT_MASK                    (0xEU)
#define USB_HWHOST_NPORT_SHIFT                   (1U)
#define USB_HWHOST_NPORT(x)                      (((uint32_t)(((uint32_t)(x)) << USB_HWHOST_NPORT_SHIFT)) & USB_HWHOST_NPORT_MASK)

/*! @name HWDEVICE - Device Hardware Parameters */
#define USB_HWDEVICE_DC_MASK                     (0x1U)
#define USB_HWDEVICE_DC_SHIFT                    (0U)
#define USB_HWDEVICE_DC(x)                       (((uint32_t)(((uint32_t)(x)) << USB_HWDEVICE_DC_SHIFT)) & USB_HWDEVICE_DC_MASK)
#define USB_HWDEVICE_DEVEP_MASK                  (0x3EU)
#define USB_HWDEVICE_DEVEP_SHIFT                 (1U)
#define USB_HWDEVICE_DEVEP(x)                    (((uint32_t)(((uint32_t)(x)) << USB_HWDEVICE_DEVEP_SHIFT)) & USB_HWDEVICE_DEVEP_MASK)

/*! @name HWTXBUF - TX Buffer Hardware Parameters */
#define USB_HWTXBUF_TXBURST_MASK                 (0xFFU)
#define USB_HWTXBUF_TXBURST_SHIFT                (0U)
#define USB_HWTXBUF_TXBURST(x)                   (((uint32_t)(((uint32_t)(x)) << USB_HWTXBUF_TXBURST_SHIFT)) & USB_HWTXBUF_TXBURST_MASK)
#define USB_HWTXBUF_TXCHANADD_MASK               (0xFF0000U)
#define USB_HWTXBUF_TXCHANADD_SHIFT              (16U)
#define USB_HWTXBUF_TXCHANADD(x)                 (((uint32_t)(((uint32_t)(x)) << USB_HWTXBUF_TXCHANADD_SHIFT)) & USB_HWTXBUF_TXCHANADD_MASK)

/*! @name HWRXBUF - RX Buffer Hardware Parameters */
#define USB_HWRXBUF_RXBURST_MASK                 (0xFFU)
#define USB_HWRXBUF_RXBURST_SHIFT                (0U)
#define USB_HWRXBUF_RXBURST(x)                   (((uint32_t)(((uint32_t)(x)) << USB_HWRXBUF_RXBURST_SHIFT)) & USB_HWRXBUF_RXBURST_MASK)
#define USB_HWRXBUF_RXADD_MASK                   (0xFF00U)
#define USB_HWRXBUF_RXADD_SHIFT                  (8U)
#define USB_HWRXBUF_RXADD(x)                     (((uint32_t)(((uint32_t)(x)) << USB_HWRXBUF_RXADD_SHIFT)) & USB_HWRXBUF_RXADD_MASK)

/*! @name GPTIMER0LD - General Purpose Timer #0 Load */
#define USB_GPTIMER0LD_GPTLD_MASK                (0xFFFFFFU)
#define USB_GPTIMER0LD_GPTLD_SHIFT               (0U)
#define USB_GPTIMER0LD_GPTLD(x)                  (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER0LD_GPTLD_SHIFT)) & USB_GPTIMER0LD_GPTLD_MASK)

/*! @name GPTIMER0CTRL - General Purpose Timer #0 Controller */
#define USB_GPTIMER0CTRL_GPTCNT_MASK             (0xFFFFFFU)
#define USB_GPTIMER0CTRL_GPTCNT_SHIFT            (0U)
#define USB_GPTIMER0CTRL_GPTCNT(x)               (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER0CTRL_GPTCNT_SHIFT)) & USB_GPTIMER0CTRL_GPTCNT_MASK)
#define USB_GPTIMER0CTRL_GPTMODE_MASK            (0x1000000U)
#define USB_GPTIMER0CTRL_GPTMODE_SHIFT           (24U)
#define USB_GPTIMER0CTRL_GPTMODE(x)              (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER0CTRL_GPTMODE_SHIFT)) & USB_GPTIMER0CTRL_GPTMODE_MASK)
#define USB_GPTIMER0CTRL_GPTRST_MASK             (0x40000000U)
#define USB_GPTIMER0CTRL_GPTRST_SHIFT            (30U)
#define USB_GPTIMER0CTRL_GPTRST(x)               (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER0CTRL_GPTRST_SHIFT)) & USB_GPTIMER0CTRL_GPTRST_MASK)
#define USB_GPTIMER0CTRL_GPTRUN_MASK             (0x80000000U)
#define USB_GPTIMER0CTRL_GPTRUN_SHIFT            (31U)
#define USB_GPTIMER0CTRL_GPTRUN(x)               (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER0CTRL_GPTRUN_SHIFT)) & USB_GPTIMER0CTRL_GPTRUN_MASK)

/*! @name GPTIMER1LD - General Purpose Timer #1 Load */
#define USB_GPTIMER1LD_GPTLD_MASK                (0xFFFFFFU)
#define USB_GPTIMER1LD_GPTLD_SHIFT               (0U)
#define USB_GPTIMER1LD_GPTLD(x)                  (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER1LD_GPTLD_SHIFT)) & USB_GPTIMER1LD_GPTLD_MASK)

/*! @name GPTIMER1CTRL - General Purpose Timer #1 Controller */
#define USB_GPTIMER1CTRL_GPTCNT_MASK             (0xFFFFFFU)
#define USB_GPTIMER1CTRL_GPTCNT_SHIFT            (0U)
#define USB_GPTIMER1CTRL_GPTCNT(x)               (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER1CTRL_GPTCNT_SHIFT)) & USB_GPTIMER1CTRL_GPTCNT_MASK)
#define USB_GPTIMER1CTRL_GPTMODE_MASK            (0x1000000U)
#define USB_GPTIMER1CTRL_GPTMODE_SHIFT           (24U)
#define USB_GPTIMER1CTRL_GPTMODE(x)              (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER1CTRL_GPTMODE_SHIFT)) & USB_GPTIMER1CTRL_GPTMODE_MASK)
#define USB_GPTIMER1CTRL_GPTRST_MASK             (0x40000000U)
#define USB_GPTIMER1CTRL_GPTRST_SHIFT            (30U)
#define USB_GPTIMER1CTRL_GPTRST(x)               (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER1CTRL_GPTRST_SHIFT)) & USB_GPTIMER1CTRL_GPTRST_MASK)
#define USB_GPTIMER1CTRL_GPTRUN_MASK             (0x80000000U)
#define USB_GPTIMER1CTRL_GPTRUN_SHIFT            (31U)
#define USB_GPTIMER1CTRL_GPTRUN(x)               (((uint32_t)(((uint32_t)(x)) << USB_GPTIMER1CTRL_GPTRUN_SHIFT)) & USB_GPTIMER1CTRL_GPTRUN_MASK)

/*! @name SBUSCFG - System Bus Config */
#define USB_SBUSCFG_AHBBRST_MASK                 (0x7U)
#define USB_SBUSCFG_AHBBRST_SHIFT                (0U)
#define USB_SBUSCFG_AHBBRST(x)                   (((uint32_t)(((uint32_t)(x)) << USB_SBUSCFG_AHBBRST_SHIFT)) & USB_SBUSCFG_AHBBRST_MASK)

/*! @name CAPLENGTH - Capability Registers Length */
#define USB_CAPLENGTH_CAPLENGTH_MASK             (0xFFU)
#define USB_CAPLENGTH_CAPLENGTH_SHIFT            (0U)
#define USB_CAPLENGTH_CAPLENGTH(x)               (((uint8_t)(((uint8_t)(x)) << USB_CAPLENGTH_CAPLENGTH_SHIFT)) & USB_CAPLENGTH_CAPLENGTH_MASK)

/*! @name HCIVERSION - Host Controller Interface Version */
#define USB_HCIVERSION_HCIVERSION_MASK           (0xFFFFU)
#define USB_HCIVERSION_HCIVERSION_SHIFT          (0U)
#define USB_HCIVERSION_HCIVERSION(x)             (((uint16_t)(((uint16_t)(x)) << USB_HCIVERSION_HCIVERSION_SHIFT)) & USB_HCIVERSION_HCIVERSION_MASK)

/*! @name HCSPARAMS - Host Controller Structural Parameters */
#define USB_HCSPARAMS_N_PORTS_MASK               (0xFU)
#define USB_HCSPARAMS_N_PORTS_SHIFT              (0U)
#define USB_HCSPARAMS_N_PORTS(x)                 (((uint32_t)(((uint32_t)(x)) << USB_HCSPARAMS_N_PORTS_SHIFT)) & USB_HCSPARAMS_N_PORTS_MASK)
#define USB_HCSPARAMS_PPC_MASK                   (0x10U)
#define USB_HCSPARAMS_PPC_SHIFT                  (4U)
#define USB_HCSPARAMS_PPC(x)                     (((uint32_t)(((uint32_t)(x)) << USB_HCSPARAMS_PPC_SHIFT)) & USB_HCSPARAMS_PPC_MASK)
#define USB_HCSPARAMS_N_PCC_MASK                 (0xF00U)
#define USB_HCSPARAMS_N_PCC_SHIFT                (8U)
#define USB_HCSPARAMS_N_PCC(x)                   (((uint32_t)(((uint32_t)(x)) << USB_HCSPARAMS_N_PCC_SHIFT)) & USB_HCSPARAMS_N_PCC_MASK)
#define USB_HCSPARAMS_N_CC_MASK                  (0xF000U)
#define USB_HCSPARAMS_N_CC_SHIFT                 (12U)
#define USB_HCSPARAMS_N_CC(x)                    (((uint32_t)(((uint32_t)(x)) << USB_HCSPARAMS_N_CC_SHIFT)) & USB_HCSPARAMS_N_CC_MASK)
#define USB_HCSPARAMS_PI_MASK                    (0x10000U)
#define USB_HCSPARAMS_PI_SHIFT                   (16U)
#define USB_HCSPARAMS_PI(x)                      (((uint32_t)(((uint32_t)(x)) << USB_HCSPARAMS_PI_SHIFT)) & USB_HCSPARAMS_PI_MASK)
#define USB_HCSPARAMS_N_PTT_MASK                 (0xF00000U)
#define USB_HCSPARAMS_N_PTT_SHIFT                (20U)
#define USB_HCSPARAMS_N_PTT(x)                   (((uint32_t)(((uint32_t)(x)) << USB_HCSPARAMS_N_PTT_SHIFT)) & USB_HCSPARAMS_N_PTT_MASK)
#define USB_HCSPARAMS_N_TT_MASK                  (0xF000000U)
#define USB_HCSPARAMS_N_TT_SHIFT                 (24U)
#define USB_HCSPARAMS_N_TT(x)                    (((uint32_t)(((uint32_t)(x)) << USB_HCSPARAMS_N_TT_SHIFT)) & USB_HCSPARAMS_N_TT_MASK)

/*! @name HCCPARAMS - Host Controller Capability Parameters */
#define USB_HCCPARAMS_ADC_MASK                   (0x1U)
#define USB_HCCPARAMS_ADC_SHIFT                  (0U)
#define USB_HCCPARAMS_ADC(x)                     (((uint32_t)(((uint32_t)(x)) << USB_HCCPARAMS_ADC_SHIFT)) & USB_HCCPARAMS_ADC_MASK)
#define USB_HCCPARAMS_PFL_MASK                   (0x2U)
#define USB_HCCPARAMS_PFL_SHIFT                  (1U)
#define USB_HCCPARAMS_PFL(x)                     (((uint32_t)(((uint32_t)(x)) << USB_HCCPARAMS_PFL_SHIFT)) & USB_HCCPARAMS_PFL_MASK)
#define USB_HCCPARAMS_ASP_MASK                   (0x4U)
#define USB_HCCPARAMS_ASP_SHIFT                  (2U)
#define USB_HCCPARAMS_ASP(x)                     (((uint32_t)(((uint32_t)(x)) << USB_HCCPARAMS_ASP_SHIFT)) & USB_HCCPARAMS_ASP_MASK)
#define USB_HCCPARAMS_IST_MASK                   (0xF0U)
#define USB_HCCPARAMS_IST_SHIFT                  (4U)
#define USB_HCCPARAMS_IST(x)                     (((uint32_t)(((uint32_t)(x)) << USB_HCCPARAMS_IST_SHIFT)) & USB_HCCPARAMS_IST_MASK)
#define USB_HCCPARAMS_EECP_MASK                  (0xFF00U)
#define USB_HCCPARAMS_EECP_SHIFT                 (8U)
#define USB_HCCPARAMS_EECP(x)                    (((uint32_t)(((uint32_t)(x)) << USB_HCCPARAMS_EECP_SHIFT)) & USB_HCCPARAMS_EECP_MASK)

/*! @name DCIVERSION - Device Controller Interface Version */
#define USB_DCIVERSION_DCIVERSION_MASK           (0xFFFFU)
#define USB_DCIVERSION_DCIVERSION_SHIFT          (0U)
#define USB_DCIVERSION_DCIVERSION(x)             (((uint16_t)(((uint16_t)(x)) << USB_DCIVERSION_DCIVERSION_SHIFT)) & USB_DCIVERSION_DCIVERSION_MASK)

/*! @name DCCPARAMS - Device Controller Capability Parameters */
#define USB_DCCPARAMS_DEN_MASK                   (0x1FU)
#define USB_DCCPARAMS_DEN_SHIFT                  (0U)
#define USB_DCCPARAMS_DEN(x)                     (((uint32_t)(((uint32_t)(x)) << USB_DCCPARAMS_DEN_SHIFT)) & USB_DCCPARAMS_DEN_MASK)
#define USB_DCCPARAMS_DC_MASK                    (0x80U)
#define USB_DCCPARAMS_DC_SHIFT                   (7U)
#define USB_DCCPARAMS_DC(x)                      (((uint32_t)(((uint32_t)(x)) << USB_DCCPARAMS_DC_SHIFT)) & USB_DCCPARAMS_DC_MASK)
#define USB_DCCPARAMS_HC_MASK                    (0x100U)
#define USB_DCCPARAMS_HC_SHIFT                   (8U)
#define USB_DCCPARAMS_HC(x)                      (((uint32_t)(((uint32_t)(x)) << USB_DCCPARAMS_HC_SHIFT)) & USB_DCCPARAMS_HC_MASK)

/*! @name USBCMD - USB Command Register */
#define USB_USBCMD_RS_MASK                       (0x1U)
#define USB_USBCMD_RS_SHIFT                      (0U)
#define USB_USBCMD_RS(x)                         (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_RS_SHIFT)) & USB_USBCMD_RS_MASK)
#define USB_USBCMD_RST_MASK                      (0x2U)
#define USB_USBCMD_RST_SHIFT                     (1U)
#define USB_USBCMD_RST(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_RST_SHIFT)) & USB_USBCMD_RST_MASK)
#define USB_USBCMD_FS_1_MASK                     (0xCU)
#define USB_USBCMD_FS_1_SHIFT                    (2U)
#define USB_USBCMD_FS_1(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_FS_1_SHIFT)) & USB_USBCMD_FS_1_MASK)
#define USB_USBCMD_PSE_MASK                      (0x10U)
#define USB_USBCMD_PSE_SHIFT                     (4U)
#define USB_USBCMD_PSE(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_PSE_SHIFT)) & USB_USBCMD_PSE_MASK)
#define USB_USBCMD_ASE_MASK                      (0x20U)
#define USB_USBCMD_ASE_SHIFT                     (5U)
#define USB_USBCMD_ASE(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_ASE_SHIFT)) & USB_USBCMD_ASE_MASK)
#define USB_USBCMD_IAA_MASK                      (0x40U)
#define USB_USBCMD_IAA_SHIFT                     (6U)
#define USB_USBCMD_IAA(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_IAA_SHIFT)) & USB_USBCMD_IAA_MASK)
#define USB_USBCMD_ASP_MASK                      (0x300U)
#define USB_USBCMD_ASP_SHIFT                     (8U)
#define USB_USBCMD_ASP(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_ASP_SHIFT)) & USB_USBCMD_ASP_MASK)
#define USB_USBCMD_ASPE_MASK                     (0x800U)
#define USB_USBCMD_ASPE_SHIFT                    (11U)
#define USB_USBCMD_ASPE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_ASPE_SHIFT)) & USB_USBCMD_ASPE_MASK)
#define USB_USBCMD_ATDTW_MASK                    (0x1000U)
#define USB_USBCMD_ATDTW_SHIFT                   (12U)
#define USB_USBCMD_ATDTW(x)                      (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_ATDTW_SHIFT)) & USB_USBCMD_ATDTW_MASK)
#define USB_USBCMD_SUTW_MASK                     (0x2000U)
#define USB_USBCMD_SUTW_SHIFT                    (13U)
#define USB_USBCMD_SUTW(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_SUTW_SHIFT)) & USB_USBCMD_SUTW_MASK)
#define USB_USBCMD_FS_2_MASK                     (0x8000U)
#define USB_USBCMD_FS_2_SHIFT                    (15U)
#define USB_USBCMD_FS_2(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_FS_2_SHIFT)) & USB_USBCMD_FS_2_MASK)
#define USB_USBCMD_ITC_MASK                      (0xFF0000U)
#define USB_USBCMD_ITC_SHIFT                     (16U)
#define USB_USBCMD_ITC(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBCMD_ITC_SHIFT)) & USB_USBCMD_ITC_MASK)

/*! @name USBSTS - USB Status Register */
#define USB_USBSTS_UI_MASK                       (0x1U)
#define USB_USBSTS_UI_SHIFT                      (0U)
#define USB_USBSTS_UI(x)                         (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_UI_SHIFT)) & USB_USBSTS_UI_MASK)
#define USB_USBSTS_UEI_MASK                      (0x2U)
#define USB_USBSTS_UEI_SHIFT                     (1U)
#define USB_USBSTS_UEI(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_UEI_SHIFT)) & USB_USBSTS_UEI_MASK)
#define USB_USBSTS_PCI_MASK                      (0x4U)
#define USB_USBSTS_PCI_SHIFT                     (2U)
#define USB_USBSTS_PCI(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_PCI_SHIFT)) & USB_USBSTS_PCI_MASK)
#define USB_USBSTS_FRI_MASK                      (0x8U)
#define USB_USBSTS_FRI_SHIFT                     (3U)
#define USB_USBSTS_FRI(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_FRI_SHIFT)) & USB_USBSTS_FRI_MASK)
#define USB_USBSTS_SEI_MASK                      (0x10U)
#define USB_USBSTS_SEI_SHIFT                     (4U)
#define USB_USBSTS_SEI(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_SEI_SHIFT)) & USB_USBSTS_SEI_MASK)
#define USB_USBSTS_AAI_MASK                      (0x20U)
#define USB_USBSTS_AAI_SHIFT                     (5U)
#define USB_USBSTS_AAI(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_AAI_SHIFT)) & USB_USBSTS_AAI_MASK)
#define USB_USBSTS_URI_MASK                      (0x40U)
#define USB_USBSTS_URI_SHIFT                     (6U)
#define USB_USBSTS_URI(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_URI_SHIFT)) & USB_USBSTS_URI_MASK)
#define USB_USBSTS_SRI_MASK                      (0x80U)
#define USB_USBSTS_SRI_SHIFT                     (7U)
#define USB_USBSTS_SRI(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_SRI_SHIFT)) & USB_USBSTS_SRI_MASK)
#define USB_USBSTS_SLI_MASK                      (0x100U)
#define USB_USBSTS_SLI_SHIFT                     (8U)
#define USB_USBSTS_SLI(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_SLI_SHIFT)) & USB_USBSTS_SLI_MASK)
#define USB_USBSTS_ULPII_MASK                    (0x400U)
#define USB_USBSTS_ULPII_SHIFT                   (10U)
#define USB_USBSTS_ULPII(x)                      (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_ULPII_SHIFT)) & USB_USBSTS_ULPII_MASK)
#define USB_USBSTS_HCH_MASK                      (0x1000U)
#define USB_USBSTS_HCH_SHIFT                     (12U)
#define USB_USBSTS_HCH(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_HCH_SHIFT)) & USB_USBSTS_HCH_MASK)
#define USB_USBSTS_RCL_MASK                      (0x2000U)
#define USB_USBSTS_RCL_SHIFT                     (13U)
#define USB_USBSTS_RCL(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_RCL_SHIFT)) & USB_USBSTS_RCL_MASK)
#define USB_USBSTS_PS_MASK                       (0x4000U)
#define USB_USBSTS_PS_SHIFT                      (14U)
#define USB_USBSTS_PS(x)                         (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_PS_SHIFT)) & USB_USBSTS_PS_MASK)
#define USB_USBSTS_AS_MASK                       (0x8000U)
#define USB_USBSTS_AS_SHIFT                      (15U)
#define USB_USBSTS_AS(x)                         (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_AS_SHIFT)) & USB_USBSTS_AS_MASK)
#define USB_USBSTS_NAKI_MASK                     (0x10000U)
#define USB_USBSTS_NAKI_SHIFT                    (16U)
#define USB_USBSTS_NAKI(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_NAKI_SHIFT)) & USB_USBSTS_NAKI_MASK)
#define USB_USBSTS_TI0_MASK                      (0x1000000U)
#define USB_USBSTS_TI0_SHIFT                     (24U)
#define USB_USBSTS_TI0(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_TI0_SHIFT)) & USB_USBSTS_TI0_MASK)
#define USB_USBSTS_TI1_MASK                      (0x2000000U)
#define USB_USBSTS_TI1_SHIFT                     (25U)
#define USB_USBSTS_TI1(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBSTS_TI1_SHIFT)) & USB_USBSTS_TI1_MASK)

/*! @name USBINTR - Interrupt Enable Register */
#define USB_USBINTR_UE_MASK                      (0x1U)
#define USB_USBINTR_UE_SHIFT                     (0U)
#define USB_USBINTR_UE(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_UE_SHIFT)) & USB_USBINTR_UE_MASK)
#define USB_USBINTR_UEE_MASK                     (0x2U)
#define USB_USBINTR_UEE_SHIFT                    (1U)
#define USB_USBINTR_UEE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_UEE_SHIFT)) & USB_USBINTR_UEE_MASK)
#define USB_USBINTR_PCE_MASK                     (0x4U)
#define USB_USBINTR_PCE_SHIFT                    (2U)
#define USB_USBINTR_PCE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_PCE_SHIFT)) & USB_USBINTR_PCE_MASK)
#define USB_USBINTR_FRE_MASK                     (0x8U)
#define USB_USBINTR_FRE_SHIFT                    (3U)
#define USB_USBINTR_FRE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_FRE_SHIFT)) & USB_USBINTR_FRE_MASK)
#define USB_USBINTR_SEE_MASK                     (0x10U)
#define USB_USBINTR_SEE_SHIFT                    (4U)
#define USB_USBINTR_SEE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_SEE_SHIFT)) & USB_USBINTR_SEE_MASK)
#define USB_USBINTR_AAE_MASK                     (0x20U)
#define USB_USBINTR_AAE_SHIFT                    (5U)
#define USB_USBINTR_AAE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_AAE_SHIFT)) & USB_USBINTR_AAE_MASK)
#define USB_USBINTR_URE_MASK                     (0x40U)
#define USB_USBINTR_URE_SHIFT                    (6U)
#define USB_USBINTR_URE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_URE_SHIFT)) & USB_USBINTR_URE_MASK)
#define USB_USBINTR_SRE_MASK                     (0x80U)
#define USB_USBINTR_SRE_SHIFT                    (7U)
#define USB_USBINTR_SRE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_SRE_SHIFT)) & USB_USBINTR_SRE_MASK)
#define USB_USBINTR_SLE_MASK                     (0x100U)
#define USB_USBINTR_SLE_SHIFT                    (8U)
#define USB_USBINTR_SLE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_SLE_SHIFT)) & USB_USBINTR_SLE_MASK)
#define USB_USBINTR_ULPIE_MASK                   (0x400U)
#define USB_USBINTR_ULPIE_SHIFT                  (10U)
#define USB_USBINTR_ULPIE(x)                     (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_ULPIE_SHIFT)) & USB_USBINTR_ULPIE_MASK)
#define USB_USBINTR_NAKE_MASK                    (0x10000U)
#define USB_USBINTR_NAKE_SHIFT                   (16U)
#define USB_USBINTR_NAKE(x)                      (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_NAKE_SHIFT)) & USB_USBINTR_NAKE_MASK)
#define USB_USBINTR_UAIE_MASK                    (0x40000U)
#define USB_USBINTR_UAIE_SHIFT                   (18U)
#define USB_USBINTR_UAIE(x)                      (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_UAIE_SHIFT)) & USB_USBINTR_UAIE_MASK)
#define USB_USBINTR_UPIE_MASK                    (0x80000U)
#define USB_USBINTR_UPIE_SHIFT                   (19U)
#define USB_USBINTR_UPIE(x)                      (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_UPIE_SHIFT)) & USB_USBINTR_UPIE_MASK)
#define USB_USBINTR_TIE0_MASK                    (0x1000000U)
#define USB_USBINTR_TIE0_SHIFT                   (24U)
#define USB_USBINTR_TIE0(x)                      (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_TIE0_SHIFT)) & USB_USBINTR_TIE0_MASK)
#define USB_USBINTR_TIE1_MASK                    (0x2000000U)
#define USB_USBINTR_TIE1_SHIFT                   (25U)
#define USB_USBINTR_TIE1(x)                      (((uint32_t)(((uint32_t)(x)) << USB_USBINTR_TIE1_SHIFT)) & USB_USBINTR_TIE1_MASK)

/*! @name FRINDEX - USB Frame Index */
#define USB_FRINDEX_FRINDEX_MASK                 (0x3FFFU)
#define USB_FRINDEX_FRINDEX_SHIFT                (0U)
#define USB_FRINDEX_FRINDEX(x)                   (((uint32_t)(((uint32_t)(x)) << USB_FRINDEX_FRINDEX_SHIFT)) & USB_FRINDEX_FRINDEX_MASK)

/*! @name DEVICEADDR - Device Address */
#define USB_DEVICEADDR_USBADRA_MASK              (0x1000000U)
#define USB_DEVICEADDR_USBADRA_SHIFT             (24U)
#define USB_DEVICEADDR_USBADRA(x)                (((uint32_t)(((uint32_t)(x)) << USB_DEVICEADDR_USBADRA_SHIFT)) & USB_DEVICEADDR_USBADRA_MASK)
#define USB_DEVICEADDR_USBADR_MASK               (0xFE000000U)
#define USB_DEVICEADDR_USBADR_SHIFT              (25U)
#define USB_DEVICEADDR_USBADR(x)                 (((uint32_t)(((uint32_t)(x)) << USB_DEVICEADDR_USBADR_SHIFT)) & USB_DEVICEADDR_USBADR_MASK)

/*! @name PERIODICLISTBASE - Frame List Base Address */
#define USB_PERIODICLISTBASE_BASEADR_MASK        (0xFFFFF000U)
#define USB_PERIODICLISTBASE_BASEADR_SHIFT       (12U)
#define USB_PERIODICLISTBASE_BASEADR(x)          (((uint32_t)(((uint32_t)(x)) << USB_PERIODICLISTBASE_BASEADR_SHIFT)) & USB_PERIODICLISTBASE_BASEADR_MASK)

/*! @name ASYNCLISTADDR - Next Asynch. Address */
#define USB_ASYNCLISTADDR_ASYBASE_MASK           (0xFFFFFFE0U)
#define USB_ASYNCLISTADDR_ASYBASE_SHIFT          (5U)
#define USB_ASYNCLISTADDR_ASYBASE(x)             (((uint32_t)(((uint32_t)(x)) << USB_ASYNCLISTADDR_ASYBASE_SHIFT)) & USB_ASYNCLISTADDR_ASYBASE_MASK)

/*! @name ENDPTLISTADDR - Endpoint List Address */
#define USB_ENDPTLISTADDR_EPBASE_MASK            (0xFFFFF800U)
#define USB_ENDPTLISTADDR_EPBASE_SHIFT           (11U)
#define USB_ENDPTLISTADDR_EPBASE(x)              (((uint32_t)(((uint32_t)(x)) << USB_ENDPTLISTADDR_EPBASE_SHIFT)) & USB_ENDPTLISTADDR_EPBASE_MASK)

/*! @name BURSTSIZE - Programmable Burst Size */
#define USB_BURSTSIZE_RXPBURST_MASK              (0xFFU)
#define USB_BURSTSIZE_RXPBURST_SHIFT             (0U)
#define USB_BURSTSIZE_RXPBURST(x)                (((uint32_t)(((uint32_t)(x)) << USB_BURSTSIZE_RXPBURST_SHIFT)) & USB_BURSTSIZE_RXPBURST_MASK)
#define USB_BURSTSIZE_TXPBURST_MASK              (0x1FF00U)
#define USB_BURSTSIZE_TXPBURST_SHIFT             (8U)
#define USB_BURSTSIZE_TXPBURST(x)                (((uint32_t)(((uint32_t)(x)) << USB_BURSTSIZE_TXPBURST_SHIFT)) & USB_BURSTSIZE_TXPBURST_MASK)

/*! @name TXFILLTUNING - TX FIFO Fill Tuning */
#define USB_TXFILLTUNING_TXSCHOH_MASK            (0xFFU)
#define USB_TXFILLTUNING_TXSCHOH_SHIFT           (0U)
#define USB_TXFILLTUNING_TXSCHOH(x)              (((uint32_t)(((uint32_t)(x)) << USB_TXFILLTUNING_TXSCHOH_SHIFT)) & USB_TXFILLTUNING_TXSCHOH_MASK)
#define USB_TXFILLTUNING_TXSCHHEALTH_MASK        (0x1F00U)
#define USB_TXFILLTUNING_TXSCHHEALTH_SHIFT       (8U)
#define USB_TXFILLTUNING_TXSCHHEALTH(x)          (((uint32_t)(((uint32_t)(x)) << USB_TXFILLTUNING_TXSCHHEALTH_SHIFT)) & USB_TXFILLTUNING_TXSCHHEALTH_MASK)
#define USB_TXFILLTUNING_TXFIFOTHRES_MASK        (0x3F0000U)
#define USB_TXFILLTUNING_TXFIFOTHRES_SHIFT       (16U)
#define USB_TXFILLTUNING_TXFIFOTHRES(x)          (((uint32_t)(((uint32_t)(x)) << USB_TXFILLTUNING_TXFIFOTHRES_SHIFT)) & USB_TXFILLTUNING_TXFIFOTHRES_MASK)

/*! @name ENDPTNAK - Endpoint NAK */
#define USB_ENDPTNAK_EPRN_MASK                   (0xFFU)
#define USB_ENDPTNAK_EPRN_SHIFT                  (0U)
#define USB_ENDPTNAK_EPRN(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTNAK_EPRN_SHIFT)) & USB_ENDPTNAK_EPRN_MASK)
#define USB_ENDPTNAK_EPTN_MASK                   (0xFF0000U)
#define USB_ENDPTNAK_EPTN_SHIFT                  (16U)
#define USB_ENDPTNAK_EPTN(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTNAK_EPTN_SHIFT)) & USB_ENDPTNAK_EPTN_MASK)

/*! @name ENDPTNAKEN - Endpoint NAK Enable */
#define USB_ENDPTNAKEN_EPRNE_MASK                (0xFFU)
#define USB_ENDPTNAKEN_EPRNE_SHIFT               (0U)
#define USB_ENDPTNAKEN_EPRNE(x)                  (((uint32_t)(((uint32_t)(x)) << USB_ENDPTNAKEN_EPRNE_SHIFT)) & USB_ENDPTNAKEN_EPRNE_MASK)
#define USB_ENDPTNAKEN_EPTNE_MASK                (0xFF0000U)
#define USB_ENDPTNAKEN_EPTNE_SHIFT               (16U)
#define USB_ENDPTNAKEN_EPTNE(x)                  (((uint32_t)(((uint32_t)(x)) << USB_ENDPTNAKEN_EPTNE_SHIFT)) & USB_ENDPTNAKEN_EPTNE_MASK)

/*! @name CONFIGFLAG - Configure Flag Register */
#define USB_CONFIGFLAG_CF_MASK                   (0x1U)
#define USB_CONFIGFLAG_CF_SHIFT                  (0U)
#define USB_CONFIGFLAG_CF(x)                     (((uint32_t)(((uint32_t)(x)) << USB_CONFIGFLAG_CF_SHIFT)) & USB_CONFIGFLAG_CF_MASK)

/*! @name PORTSC1 - Port Status & Control */
#define USB_PORTSC1_CCS_MASK                     (0x1U)
#define USB_PORTSC1_CCS_SHIFT                    (0U)
#define USB_PORTSC1_CCS(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_CCS_SHIFT)) & USB_PORTSC1_CCS_MASK)
#define USB_PORTSC1_CSC_MASK                     (0x2U)
#define USB_PORTSC1_CSC_SHIFT                    (1U)
#define USB_PORTSC1_CSC(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_CSC_SHIFT)) & USB_PORTSC1_CSC_MASK)
#define USB_PORTSC1_PE_MASK                      (0x4U)
#define USB_PORTSC1_PE_SHIFT                     (2U)
#define USB_PORTSC1_PE(x)                        (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PE_SHIFT)) & USB_PORTSC1_PE_MASK)
#define USB_PORTSC1_PEC_MASK                     (0x8U)
#define USB_PORTSC1_PEC_SHIFT                    (3U)
#define USB_PORTSC1_PEC(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PEC_SHIFT)) & USB_PORTSC1_PEC_MASK)
#define USB_PORTSC1_OCA_MASK                     (0x10U)
#define USB_PORTSC1_OCA_SHIFT                    (4U)
#define USB_PORTSC1_OCA(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_OCA_SHIFT)) & USB_PORTSC1_OCA_MASK)
#define USB_PORTSC1_OCC_MASK                     (0x20U)
#define USB_PORTSC1_OCC_SHIFT                    (5U)
#define USB_PORTSC1_OCC(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_OCC_SHIFT)) & USB_PORTSC1_OCC_MASK)
#define USB_PORTSC1_FPR_MASK                     (0x40U)
#define USB_PORTSC1_FPR_SHIFT                    (6U)
#define USB_PORTSC1_FPR(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_FPR_SHIFT)) & USB_PORTSC1_FPR_MASK)
#define USB_PORTSC1_SUSP_MASK                    (0x80U)
#define USB_PORTSC1_SUSP_SHIFT                   (7U)
#define USB_PORTSC1_SUSP(x)                      (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_SUSP_SHIFT)) & USB_PORTSC1_SUSP_MASK)
#define USB_PORTSC1_PR_MASK                      (0x100U)
#define USB_PORTSC1_PR_SHIFT                     (8U)
#define USB_PORTSC1_PR(x)                        (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PR_SHIFT)) & USB_PORTSC1_PR_MASK)
#define USB_PORTSC1_HSP_MASK                     (0x200U)
#define USB_PORTSC1_HSP_SHIFT                    (9U)
#define USB_PORTSC1_HSP(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_HSP_SHIFT)) & USB_PORTSC1_HSP_MASK)
#define USB_PORTSC1_LS_MASK                      (0xC00U)
#define USB_PORTSC1_LS_SHIFT                     (10U)
#define USB_PORTSC1_LS(x)                        (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_LS_SHIFT)) & USB_PORTSC1_LS_MASK)
#define USB_PORTSC1_PP_MASK                      (0x1000U)
#define USB_PORTSC1_PP_SHIFT                     (12U)
#define USB_PORTSC1_PP(x)                        (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PP_SHIFT)) & USB_PORTSC1_PP_MASK)
#define USB_PORTSC1_PO_MASK                      (0x2000U)
#define USB_PORTSC1_PO_SHIFT                     (13U)
#define USB_PORTSC1_PO(x)                        (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PO_SHIFT)) & USB_PORTSC1_PO_MASK)
#define USB_PORTSC1_PIC_MASK                     (0xC000U)
#define USB_PORTSC1_PIC_SHIFT                    (14U)
#define USB_PORTSC1_PIC(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PIC_SHIFT)) & USB_PORTSC1_PIC_MASK)
#define USB_PORTSC1_PTC_MASK                     (0xF0000U)
#define USB_PORTSC1_PTC_SHIFT                    (16U)
#define USB_PORTSC1_PTC(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PTC_SHIFT)) & USB_PORTSC1_PTC_MASK)
#define USB_PORTSC1_WKCN_MASK                    (0x100000U)
#define USB_PORTSC1_WKCN_SHIFT                   (20U)
#define USB_PORTSC1_WKCN(x)                      (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_WKCN_SHIFT)) & USB_PORTSC1_WKCN_MASK)
#define USB_PORTSC1_WKDC_MASK                    (0x200000U)
#define USB_PORTSC1_WKDC_SHIFT                   (21U)
#define USB_PORTSC1_WKDC(x)                      (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_WKDC_SHIFT)) & USB_PORTSC1_WKDC_MASK)
#define USB_PORTSC1_WKOC_MASK                    (0x400000U)
#define USB_PORTSC1_WKOC_SHIFT                   (22U)
#define USB_PORTSC1_WKOC(x)                      (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_WKOC_SHIFT)) & USB_PORTSC1_WKOC_MASK)
#define USB_PORTSC1_PHCD_MASK                    (0x800000U)
#define USB_PORTSC1_PHCD_SHIFT                   (23U)
#define USB_PORTSC1_PHCD(x)                      (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PHCD_SHIFT)) & USB_PORTSC1_PHCD_MASK)
#define USB_PORTSC1_PFSC_MASK                    (0x1000000U)
#define USB_PORTSC1_PFSC_SHIFT                   (24U)
#define USB_PORTSC1_PFSC(x)                      (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PFSC_SHIFT)) & USB_PORTSC1_PFSC_MASK)
#define USB_PORTSC1_PTS_2_MASK                   (0x2000000U)
#define USB_PORTSC1_PTS_2_SHIFT                  (25U)
#define USB_PORTSC1_PTS_2(x)                     (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PTS_2_SHIFT)) & USB_PORTSC1_PTS_2_MASK)
#define USB_PORTSC1_PSPD_MASK                    (0xC000000U)
#define USB_PORTSC1_PSPD_SHIFT                   (26U)
#define USB_PORTSC1_PSPD(x)                      (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PSPD_SHIFT)) & USB_PORTSC1_PSPD_MASK)
#define USB_PORTSC1_PTW_MASK                     (0x10000000U)
#define USB_PORTSC1_PTW_SHIFT                    (28U)
#define USB_PORTSC1_PTW(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PTW_SHIFT)) & USB_PORTSC1_PTW_MASK)
#define USB_PORTSC1_STS_MASK                     (0x20000000U)
#define USB_PORTSC1_STS_SHIFT                    (29U)
#define USB_PORTSC1_STS(x)                       (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_STS_SHIFT)) & USB_PORTSC1_STS_MASK)
#define USB_PORTSC1_PTS_1_MASK                   (0xC0000000U)
#define USB_PORTSC1_PTS_1_SHIFT                  (30U)
#define USB_PORTSC1_PTS_1(x)                     (((uint32_t)(((uint32_t)(x)) << USB_PORTSC1_PTS_1_SHIFT)) & USB_PORTSC1_PTS_1_MASK)

/*! @name OTGSC - On-The-Go Status & control */
#define USB_OTGSC_VD_MASK                        (0x1U)
#define USB_OTGSC_VD_SHIFT                       (0U)
#define USB_OTGSC_VD(x)                          (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_VD_SHIFT)) & USB_OTGSC_VD_MASK)
#define USB_OTGSC_VC_MASK                        (0x2U)
#define USB_OTGSC_VC_SHIFT                       (1U)
#define USB_OTGSC_VC(x)                          (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_VC_SHIFT)) & USB_OTGSC_VC_MASK)
#define USB_OTGSC_OT_MASK                        (0x8U)
#define USB_OTGSC_OT_SHIFT                       (3U)
#define USB_OTGSC_OT(x)                          (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_OT_SHIFT)) & USB_OTGSC_OT_MASK)
#define USB_OTGSC_DP_MASK                        (0x10U)
#define USB_OTGSC_DP_SHIFT                       (4U)
#define USB_OTGSC_DP(x)                          (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_DP_SHIFT)) & USB_OTGSC_DP_MASK)
#define USB_OTGSC_IDPU_MASK                      (0x20U)
#define USB_OTGSC_IDPU_SHIFT                     (5U)
#define USB_OTGSC_IDPU(x)                        (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_IDPU_SHIFT)) & USB_OTGSC_IDPU_MASK)
#define USB_OTGSC_ID_MASK                        (0x100U)
#define USB_OTGSC_ID_SHIFT                       (8U)
#define USB_OTGSC_ID(x)                          (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_ID_SHIFT)) & USB_OTGSC_ID_MASK)
#define USB_OTGSC_AVV_MASK                       (0x200U)
#define USB_OTGSC_AVV_SHIFT                      (9U)
#define USB_OTGSC_AVV(x)                         (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_AVV_SHIFT)) & USB_OTGSC_AVV_MASK)
#define USB_OTGSC_ASV_MASK                       (0x400U)
#define USB_OTGSC_ASV_SHIFT                      (10U)
#define USB_OTGSC_ASV(x)                         (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_ASV_SHIFT)) & USB_OTGSC_ASV_MASK)
#define USB_OTGSC_BSV_MASK                       (0x800U)
#define USB_OTGSC_BSV_SHIFT                      (11U)
#define USB_OTGSC_BSV(x)                         (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_BSV_SHIFT)) & USB_OTGSC_BSV_MASK)
#define USB_OTGSC_BSE_MASK                       (0x1000U)
#define USB_OTGSC_BSE_SHIFT                      (12U)
#define USB_OTGSC_BSE(x)                         (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_BSE_SHIFT)) & USB_OTGSC_BSE_MASK)
#define USB_OTGSC_TOG_1MS_MASK                   (0x2000U)
#define USB_OTGSC_TOG_1MS_SHIFT                  (13U)
#define USB_OTGSC_TOG_1MS(x)                     (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_TOG_1MS_SHIFT)) & USB_OTGSC_TOG_1MS_MASK)
#define USB_OTGSC_DPS_MASK                       (0x4000U)
#define USB_OTGSC_DPS_SHIFT                      (14U)
#define USB_OTGSC_DPS(x)                         (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_DPS_SHIFT)) & USB_OTGSC_DPS_MASK)
#define USB_OTGSC_IDIS_MASK                      (0x10000U)
#define USB_OTGSC_IDIS_SHIFT                     (16U)
#define USB_OTGSC_IDIS(x)                        (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_IDIS_SHIFT)) & USB_OTGSC_IDIS_MASK)
#define USB_OTGSC_AVVIS_MASK                     (0x20000U)
#define USB_OTGSC_AVVIS_SHIFT                    (17U)
#define USB_OTGSC_AVVIS(x)                       (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_AVVIS_SHIFT)) & USB_OTGSC_AVVIS_MASK)
#define USB_OTGSC_ASVIS_MASK                     (0x40000U)
#define USB_OTGSC_ASVIS_SHIFT                    (18U)
#define USB_OTGSC_ASVIS(x)                       (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_ASVIS_SHIFT)) & USB_OTGSC_ASVIS_MASK)
#define USB_OTGSC_BSVIS_MASK                     (0x80000U)
#define USB_OTGSC_BSVIS_SHIFT                    (19U)
#define USB_OTGSC_BSVIS(x)                       (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_BSVIS_SHIFT)) & USB_OTGSC_BSVIS_MASK)
#define USB_OTGSC_BSEIS_MASK                     (0x100000U)
#define USB_OTGSC_BSEIS_SHIFT                    (20U)
#define USB_OTGSC_BSEIS(x)                       (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_BSEIS_SHIFT)) & USB_OTGSC_BSEIS_MASK)
#define USB_OTGSC_STATUS_1MS_MASK                (0x200000U)
#define USB_OTGSC_STATUS_1MS_SHIFT               (21U)
#define USB_OTGSC_STATUS_1MS(x)                  (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_STATUS_1MS_SHIFT)) & USB_OTGSC_STATUS_1MS_MASK)
#define USB_OTGSC_DPIS_MASK                      (0x400000U)
#define USB_OTGSC_DPIS_SHIFT                     (22U)
#define USB_OTGSC_DPIS(x)                        (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_DPIS_SHIFT)) & USB_OTGSC_DPIS_MASK)
#define USB_OTGSC_IDIE_MASK                      (0x1000000U)
#define USB_OTGSC_IDIE_SHIFT                     (24U)
#define USB_OTGSC_IDIE(x)                        (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_IDIE_SHIFT)) & USB_OTGSC_IDIE_MASK)
#define USB_OTGSC_AVVIE_MASK                     (0x2000000U)
#define USB_OTGSC_AVVIE_SHIFT                    (25U)
#define USB_OTGSC_AVVIE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_AVVIE_SHIFT)) & USB_OTGSC_AVVIE_MASK)
#define USB_OTGSC_ASVIE_MASK                     (0x4000000U)
#define USB_OTGSC_ASVIE_SHIFT                    (26U)
#define USB_OTGSC_ASVIE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_ASVIE_SHIFT)) & USB_OTGSC_ASVIE_MASK)
#define USB_OTGSC_BSVIE_MASK                     (0x8000000U)
#define USB_OTGSC_BSVIE_SHIFT                    (27U)
#define USB_OTGSC_BSVIE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_BSVIE_SHIFT)) & USB_OTGSC_BSVIE_MASK)
#define USB_OTGSC_BSEIE_MASK                     (0x10000000U)
#define USB_OTGSC_BSEIE_SHIFT                    (28U)
#define USB_OTGSC_BSEIE(x)                       (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_BSEIE_SHIFT)) & USB_OTGSC_BSEIE_MASK)
#define USB_OTGSC_EN_1MS_MASK                    (0x20000000U)
#define USB_OTGSC_EN_1MS_SHIFT                   (29U)
#define USB_OTGSC_EN_1MS(x)                      (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_EN_1MS_SHIFT)) & USB_OTGSC_EN_1MS_MASK)
#define USB_OTGSC_DPIE_MASK                      (0x40000000U)
#define USB_OTGSC_DPIE_SHIFT                     (30U)
#define USB_OTGSC_DPIE(x)                        (((uint32_t)(((uint32_t)(x)) << USB_OTGSC_DPIE_SHIFT)) & USB_OTGSC_DPIE_MASK)

/*! @name USBMODE - USB Device Mode */
#define USB_USBMODE_CM_MASK                      (0x3U)
#define USB_USBMODE_CM_SHIFT                     (0U)
#define USB_USBMODE_CM(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBMODE_CM_SHIFT)) & USB_USBMODE_CM_MASK)
#define USB_USBMODE_ES_MASK                      (0x4U)
#define USB_USBMODE_ES_SHIFT                     (2U)
#define USB_USBMODE_ES(x)                        (((uint32_t)(((uint32_t)(x)) << USB_USBMODE_ES_SHIFT)) & USB_USBMODE_ES_MASK)
#define USB_USBMODE_SLOM_MASK                    (0x8U)
#define USB_USBMODE_SLOM_SHIFT                   (3U)
#define USB_USBMODE_SLOM(x)                      (((uint32_t)(((uint32_t)(x)) << USB_USBMODE_SLOM_SHIFT)) & USB_USBMODE_SLOM_MASK)
#define USB_USBMODE_SDIS_MASK                    (0x10U)
#define USB_USBMODE_SDIS_SHIFT                   (4U)
#define USB_USBMODE_SDIS(x)                      (((uint32_t)(((uint32_t)(x)) << USB_USBMODE_SDIS_SHIFT)) & USB_USBMODE_SDIS_MASK)

/*! @name ENDPTSETUPSTAT - Endpoint Setup Status */
#define USB_ENDPTSETUPSTAT_ENDPTSETUPSTAT_MASK   (0xFFFFU)
#define USB_ENDPTSETUPSTAT_ENDPTSETUPSTAT_SHIFT  (0U)
#define USB_ENDPTSETUPSTAT_ENDPTSETUPSTAT(x)     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTSETUPSTAT_ENDPTSETUPSTAT_SHIFT)) & USB_ENDPTSETUPSTAT_ENDPTSETUPSTAT_MASK)

/*! @name ENDPTPRIME - Endpoint Prime */
#define USB_ENDPTPRIME_PERB_MASK                 (0xFFU)
#define USB_ENDPTPRIME_PERB_SHIFT                (0U)
#define USB_ENDPTPRIME_PERB(x)                   (((uint32_t)(((uint32_t)(x)) << USB_ENDPTPRIME_PERB_SHIFT)) & USB_ENDPTPRIME_PERB_MASK)
#define USB_ENDPTPRIME_PETB_MASK                 (0xFF0000U)
#define USB_ENDPTPRIME_PETB_SHIFT                (16U)
#define USB_ENDPTPRIME_PETB(x)                   (((uint32_t)(((uint32_t)(x)) << USB_ENDPTPRIME_PETB_SHIFT)) & USB_ENDPTPRIME_PETB_MASK)

/*! @name ENDPTFLUSH - Endpoint Flush */
#define USB_ENDPTFLUSH_FERB_MASK                 (0xFFU)
#define USB_ENDPTFLUSH_FERB_SHIFT                (0U)
#define USB_ENDPTFLUSH_FERB(x)                   (((uint32_t)(((uint32_t)(x)) << USB_ENDPTFLUSH_FERB_SHIFT)) & USB_ENDPTFLUSH_FERB_MASK)
#define USB_ENDPTFLUSH_FETB_MASK                 (0xFF0000U)
#define USB_ENDPTFLUSH_FETB_SHIFT                (16U)
#define USB_ENDPTFLUSH_FETB(x)                   (((uint32_t)(((uint32_t)(x)) << USB_ENDPTFLUSH_FETB_SHIFT)) & USB_ENDPTFLUSH_FETB_MASK)

/*! @name ENDPTSTAT - Endpoint Status */
#define USB_ENDPTSTAT_ERBR_MASK                  (0xFFU)
#define USB_ENDPTSTAT_ERBR_SHIFT                 (0U)
#define USB_ENDPTSTAT_ERBR(x)                    (((uint32_t)(((uint32_t)(x)) << USB_ENDPTSTAT_ERBR_SHIFT)) & USB_ENDPTSTAT_ERBR_MASK)
#define USB_ENDPTSTAT_ETBR_MASK                  (0xFF0000U)
#define USB_ENDPTSTAT_ETBR_SHIFT                 (16U)
#define USB_ENDPTSTAT_ETBR(x)                    (((uint32_t)(((uint32_t)(x)) << USB_ENDPTSTAT_ETBR_SHIFT)) & USB_ENDPTSTAT_ETBR_MASK)

/*! @name ENDPTCOMPLETE - Endpoint Complete */
#define USB_ENDPTCOMPLETE_ERCE_MASK              (0xFFU)
#define USB_ENDPTCOMPLETE_ERCE_SHIFT             (0U)
#define USB_ENDPTCOMPLETE_ERCE(x)                (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCOMPLETE_ERCE_SHIFT)) & USB_ENDPTCOMPLETE_ERCE_MASK)
#define USB_ENDPTCOMPLETE_ETCE_MASK              (0xFF0000U)
#define USB_ENDPTCOMPLETE_ETCE_SHIFT             (16U)
#define USB_ENDPTCOMPLETE_ETCE(x)                (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCOMPLETE_ETCE_SHIFT)) & USB_ENDPTCOMPLETE_ETCE_MASK)

/*! @name ENDPTCTRL0 - Endpoint Control0 */
#define USB_ENDPTCTRL0_RXS_MASK                  (0x1U)
#define USB_ENDPTCTRL0_RXS_SHIFT                 (0U)
#define USB_ENDPTCTRL0_RXS(x)                    (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL0_RXS_SHIFT)) & USB_ENDPTCTRL0_RXS_MASK)
#define USB_ENDPTCTRL0_RXT_MASK                  (0xCU)
#define USB_ENDPTCTRL0_RXT_SHIFT                 (2U)
#define USB_ENDPTCTRL0_RXT(x)                    (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL0_RXT_SHIFT)) & USB_ENDPTCTRL0_RXT_MASK)
#define USB_ENDPTCTRL0_RXE_MASK                  (0x80U)
#define USB_ENDPTCTRL0_RXE_SHIFT                 (7U)
#define USB_ENDPTCTRL0_RXE(x)                    (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL0_RXE_SHIFT)) & USB_ENDPTCTRL0_RXE_MASK)
#define USB_ENDPTCTRL0_TXS_MASK                  (0x10000U)
#define USB_ENDPTCTRL0_TXS_SHIFT                 (16U)
#define USB_ENDPTCTRL0_TXS(x)                    (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL0_TXS_SHIFT)) & USB_ENDPTCTRL0_TXS_MASK)
#define USB_ENDPTCTRL0_TXT_MASK                  (0xC0000U)
#define USB_ENDPTCTRL0_TXT_SHIFT                 (18U)
#define USB_ENDPTCTRL0_TXT(x)                    (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL0_TXT_SHIFT)) & USB_ENDPTCTRL0_TXT_MASK)
#define USB_ENDPTCTRL0_TXE_MASK                  (0x800000U)
#define USB_ENDPTCTRL0_TXE_SHIFT                 (23U)
#define USB_ENDPTCTRL0_TXE(x)                    (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL0_TXE_SHIFT)) & USB_ENDPTCTRL0_TXE_MASK)

/*! @name ENDPTCTRL - Endpoint Control 1..Endpoint Control 7 */
#define USB_ENDPTCTRL_RXS_MASK                   (0x1U)
#define USB_ENDPTCTRL_RXS_SHIFT                  (0U)
#define USB_ENDPTCTRL_RXS(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_RXS_SHIFT)) & USB_ENDPTCTRL_RXS_MASK)
#define USB_ENDPTCTRL_RXD_MASK                   (0x2U)
#define USB_ENDPTCTRL_RXD_SHIFT                  (1U)
#define USB_ENDPTCTRL_RXD(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_RXD_SHIFT)) & USB_ENDPTCTRL_RXD_MASK)
#define USB_ENDPTCTRL_RXT_MASK                   (0xCU)
#define USB_ENDPTCTRL_RXT_SHIFT                  (2U)
#define USB_ENDPTCTRL_RXT(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_RXT_SHIFT)) & USB_ENDPTCTRL_RXT_MASK)
#define USB_ENDPTCTRL_RXI_MASK                   (0x20U)
#define USB_ENDPTCTRL_RXI_SHIFT                  (5U)
#define USB_ENDPTCTRL_RXI(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_RXI_SHIFT)) & USB_ENDPTCTRL_RXI_MASK)
#define USB_ENDPTCTRL_RXR_MASK                   (0x40U)
#define USB_ENDPTCTRL_RXR_SHIFT                  (6U)
#define USB_ENDPTCTRL_RXR(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_RXR_SHIFT)) & USB_ENDPTCTRL_RXR_MASK)
#define USB_ENDPTCTRL_RXE_MASK                   (0x80U)
#define USB_ENDPTCTRL_RXE_SHIFT                  (7U)
#define USB_ENDPTCTRL_RXE(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_RXE_SHIFT)) & USB_ENDPTCTRL_RXE_MASK)
#define USB_ENDPTCTRL_TXS_MASK                   (0x10000U)
#define USB_ENDPTCTRL_TXS_SHIFT                  (16U)
#define USB_ENDPTCTRL_TXS(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_TXS_SHIFT)) & USB_ENDPTCTRL_TXS_MASK)
#define USB_ENDPTCTRL_TXD_MASK                   (0x20000U)
#define USB_ENDPTCTRL_TXD_SHIFT                  (17U)
#define USB_ENDPTCTRL_TXD(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_TXD_SHIFT)) & USB_ENDPTCTRL_TXD_MASK)
#define USB_ENDPTCTRL_TXT_MASK                   (0xC0000U)
#define USB_ENDPTCTRL_TXT_SHIFT                  (18U)
#define USB_ENDPTCTRL_TXT(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_TXT_SHIFT)) & USB_ENDPTCTRL_TXT_MASK)
#define USB_ENDPTCTRL_TXI_MASK                   (0x200000U)
#define USB_ENDPTCTRL_TXI_SHIFT                  (21U)
#define USB_ENDPTCTRL_TXI(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_TXI_SHIFT)) & USB_ENDPTCTRL_TXI_MASK)
#define USB_ENDPTCTRL_TXR_MASK                   (0x400000U)
#define USB_ENDPTCTRL_TXR_SHIFT                  (22U)
#define USB_ENDPTCTRL_TXR(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_TXR_SHIFT)) & USB_ENDPTCTRL_TXR_MASK)
#define USB_ENDPTCTRL_TXE_MASK                   (0x800000U)
#define USB_ENDPTCTRL_TXE_SHIFT                  (23U)
#define USB_ENDPTCTRL_TXE(x)                     (((uint32_t)(((uint32_t)(x)) << USB_ENDPTCTRL_TXE_SHIFT)) & USB_ENDPTCTRL_TXE_MASK)

/* The count of USB_ENDPTCTRL */
#define USB_ENDPTCTRL_COUNT                      (7U)


/*!
 * @}
 */ /* end of group USB_Register_Masks */


/* USB - Peripheral instance base addresses */
/** Peripheral USB1 base address */
#define USB1_BASE                                (0x2184000u)
/** Peripheral USB1 base pointer */
#define USB1                                     ((USB_Type *)USB1_BASE)
/** Peripheral USB2 base address */
#define USB2_BASE                                (0x2184200u)
/** Peripheral USB2 base pointer */
#define USB2                                     ((USB_Type *)USB2_BASE)
/** Array initializer of USB peripheral base addresses */
#define USB_BASE_ADDRS                           { 0u, USB1_BASE, USB2_BASE }
/** Array initializer of USB peripheral base pointers */
#define USB_BASE_PTRS                            { (USB_Type *)0u, USB1, USB2 }
/** Interrupt vectors for the USB peripheral type */
#define USB_IRQS                                 { NotAvail_IRQn, USB_OTG1_IRQn, USB_OTG2_IRQn }
/* Backward compatibility */
#define GPTIMER0CTL                              GPTIMER0CTRL
#define GPTIMER1CTL                              GPTIMER1CTRL
#define USB_SBUSCFG                              SBUSCFG
#define EPLISTADDR                               ENDPTLISTADDR
#define EPSETUPSR                                ENDPTSETUPSTAT
#define EPPRIME                                  ENDPTPRIME
#define EPFLUSH                                  ENDPTFLUSH
#define EPSR                                     ENDPTSTAT
#define EPCOMPLETE                               ENDPTCOMPLETE
#define EPCR                                     ENDPTCTRL
#define EPCR0                                    ENDPTCTRL0
#define USBHS_ID_ID_MASK                         USB_ID_ID_MASK
#define USBHS_ID_ID_SHIFT                        USB_ID_ID_SHIFT
#define USBHS_ID_ID(x)                           USB_ID_ID(x)
#define USBHS_ID_NID_MASK                        USB_ID_NID_MASK
#define USBHS_ID_NID_SHIFT                       USB_ID_NID_SHIFT
#define USBHS_ID_NID(x)                          USB_ID_NID(x)
#define USBHS_ID_REVISION_MASK                   USB_ID_REVISION_MASK
#define USBHS_ID_REVISION_SHIFT                  USB_ID_REVISION_SHIFT
#define USBHS_ID_REVISION(x)                     USB_ID_REVISION(x)
#define USBHS_HWGENERAL_PHYW_MASK                USB_HWGENERAL_PHYW_MASK
#define USBHS_HWGENERAL_PHYW_SHIFT               USB_HWGENERAL_PHYW_SHIFT
#define USBHS_HWGENERAL_PHYW(x)                  USB_HWGENERAL_PHYW(x)
#define USBHS_HWGENERAL_PHYM_MASK                USB_HWGENERAL_PHYM_MASK
#define USBHS_HWGENERAL_PHYM_SHIFT               USB_HWGENERAL_PHYM_SHIFT
#define USBHS_HWGENERAL_PHYM(x)                  USB_HWGENERAL_PHYM(x)
#define USBHS_HWGENERAL_SM_MASK                  USB_HWGENERAL_SM_MASK
#define USBHS_HWGENERAL_SM_SHIFT                 USB_HWGENERAL_SM_SHIFT
#define USBHS_HWGENERAL_SM(x)                    USB_HWGENERAL_SM(x)
#define USBHS_HWHOST_HC_MASK                     USB_HWHOST_HC_MASK
#define USBHS_HWHOST_HC_SHIFT                    USB_HWHOST_HC_SHIFT
#define USBHS_HWHOST_HC(x)                       USB_HWHOST_HC(x)
#define USBHS_HWHOST_NPORT_MASK                  USB_HWHOST_NPORT_MASK
#define USBHS_HWHOST_NPORT_SHIFT                 USB_HWHOST_NPORT_SHIFT
#define USBHS_HWHOST_NPORT(x)                    USB_HWHOST_NPORT(x)
#define USBHS_HWDEVICE_DC_MASK                   USB_HWDEVICE_DC_MASK
#define USBHS_HWDEVICE_DC_SHIFT                  USB_HWDEVICE_DC_SHIFT
#define USBHS_HWDEVICE_DC(x)                     USB_HWDEVICE_DC(x)
#define USBHS_HWDEVICE_DEVEP_MASK                USB_HWDEVICE_DEVEP_MASK
#define USBHS_HWDEVICE_DEVEP_SHIFT               USB_HWDEVICE_DEVEP_SHIFT
#define USBHS_HWDEVICE_DEVEP(x)                  USB_HWDEVICE_DEVEP(x)
#define USBHS_HWTXBUF_TXBURST_MASK               USB_HWTXBUF_TXBURST_MASK
#define USBHS_HWTXBUF_TXBURST_SHIFT              USB_HWTXBUF_TXBURST_SHIFT
#define USBHS_HWTXBUF_TXBURST(x)                 USB_HWTXBUF_TXBURST(x)
#define USBHS_HWTXBUF_TXCHANADD_MASK             USB_HWTXBUF_TXCHANADD_MASK
#define USBHS_HWTXBUF_TXCHANADD_SHIFT            USB_HWTXBUF_TXCHANADD_SHIFT
#define USBHS_HWTXBUF_TXCHANADD(x)               USB_HWTXBUF_TXCHANADD(x)
#define USBHS_HWRXBUF_RXBURST_MASK               USB_HWRXBUF_RXBURST_MASK
#define USBHS_HWRXBUF_RXBURST_SHIFT              USB_HWRXBUF_RXBURST_SHIFT
#define USBHS_HWRXBUF_RXBURST(x)                 USB_HWRXBUF_RXBURST(x)
#define USBHS_HWRXBUF_RXADD_MASK                 USB_HWRXBUF_RXADD_MASK
#define USBHS_HWRXBUF_RXADD_SHIFT                USB_HWRXBUF_RXADD_SHIFT
#define USBHS_HWRXBUF_RXADD(x)                   USB_HWRXBUF_RXADD(x)
#define USBHS_GPTIMER0LD_GPTLD_MASK              USB_GPTIMER0LD_GPTLD_MASK
#define USBHS_GPTIMER0LD_GPTLD_SHIFT             USB_GPTIMER0LD_GPTLD_SHIFT
#define USBHS_GPTIMER0LD_GPTLD(x)                USB_GPTIMER0LD_GPTLD(x)
#define USBHS_GPTIMER0CTL_GPTCNT_MASK            USB_GPTIMER0CTRL_GPTCNT_MASK
#define USBHS_GPTIMER0CTL_GPTCNT_SHIFT           USB_GPTIMER0CTRL_GPTCNT_SHIFT
#define USBHS_GPTIMER0CTL_GPTCNT(x)              USB_GPTIMER0CTRL_GPTCNT(x)
#define USBHS_GPTIMER0CTL_MODE_MASK              USB_GPTIMER0CTRL_GPTMODE_MASK
#define USBHS_GPTIMER0CTL_MODE_SHIFT             USB_GPTIMER0CTRL_GPTMODE_SHIFT
#define USBHS_GPTIMER0CTL_MODE(x)                USB_GPTIMER0CTRL_GPTMODE(x)
#define USBHS_GPTIMER0CTL_RST_MASK               USB_GPTIMER0CTRL_GPTRST_MASK
#define USBHS_GPTIMER0CTL_RST_SHIFT              USB_GPTIMER0CTRL_GPTRST_SHIFT
#define USBHS_GPTIMER0CTL_RST(x)                 USB_GPTIMER0CTRL_GPTRST(x)
#define USBHS_GPTIMER0CTL_RUN_MASK               USB_GPTIMER0CTRL_GPTRUN_MASK
#define USBHS_GPTIMER0CTL_RUN_SHIFT              USB_GPTIMER0CTRL_GPTRUN_SHIFT
#define USBHS_GPTIMER0CTL_RUN(x)                 USB_GPTIMER0CTRL_GPTRUN(x)
#define USBHS_GPTIMER1LD_GPTLD_MASK              USB_GPTIMER1LD_GPTLD_MASK
#define USBHS_GPTIMER1LD_GPTLD_SHIFT             USB_GPTIMER1LD_GPTLD_SHIFT
#define USBHS_GPTIMER1LD_GPTLD(x)                USB_GPTIMER1LD_GPTLD(x)
#define USBHS_GPTIMER1CTL_GPTCNT_MASK            USB_GPTIMER1CTRL_GPTCNT_MASK
#define USBHS_GPTIMER1CTL_GPTCNT_SHIFT           USB_GPTIMER1CTRL_GPTCNT_SHIFT
#define USBHS_GPTIMER1CTL_GPTCNT(x)              USB_GPTIMER1CTRL_GPTCNT(x)
#define USBHS_GPTIMER1CTL_MODE_MASK              USB_GPTIMER1CTRL_GPTMODE_MASK
#define USBHS_GPTIMER1CTL_MODE_SHIFT             USB_GPTIMER1CTRL_GPTMODE_SHIFT
#define USBHS_GPTIMER1CTL_MODE(x)                USB_GPTIMER1CTRL_GPTMODE(x)
#define USBHS_GPTIMER1CTL_RST_MASK               USB_GPTIMER1CTRL_GPTRST_MASK
#define USBHS_GPTIMER1CTL_RST_SHIFT              USB_GPTIMER1CTRL_GPTRST_SHIFT
#define USBHS_GPTIMER1CTL_RST(x)                 USB_GPTIMER1CTRL_GPTRST(x)
#define USBHS_GPTIMER1CTL_RUN_MASK               USB_GPTIMER1CTRL_GPTRUN_MASK
#define USBHS_GPTIMER1CTL_RUN_SHIFT              USB_GPTIMER1CTRL_GPTRUN_SHIFT
#define USBHS_GPTIMER1CTL_RUN(x)                 USB_GPTIMER1CTRL_GPTRUN(x)
#define USBHS_USB_SBUSCFG_BURSTMODE_MASK         USB_SBUSCFG_AHBBRST_MASK
#define USBHS_USB_SBUSCFG_BURSTMODE_SHIFT        USB_SBUSCFG_AHBBRST_SHIFT
#define USBHS_USB_SBUSCFG_BURSTMODE(x)           USB_SBUSCFG_AHBBRST(x)
#define USBHS_HCIVERSION_CAPLENGTH(x)            USB_HCIVERSION_CAPLENGTH(x)
#define USBHS_HCIVERSION_HCIVERSION_MASK         USB_HCIVERSION_HCIVERSION_MASK
#define USBHS_HCIVERSION_HCIVERSION_SHIFT        USB_HCIVERSION_HCIVERSION_SHIFT
#define USBHS_HCIVERSION_HCIVERSION(x)           USB_HCIVERSION_HCIVERSION(x)
#define USBHS_HCSPARAMS_N_PORTS_MASK             USB_HCSPARAMS_N_PORTS_MASK
#define USBHS_HCSPARAMS_N_PORTS_SHIFT            USB_HCSPARAMS_N_PORTS_SHIFT
#define USBHS_HCSPARAMS_N_PORTS(x)               USB_HCSPARAMS_N_PORTS(x)
#define USBHS_HCSPARAMS_PPC_MASK                 USB_HCSPARAMS_PPC_MASK
#define USBHS_HCSPARAMS_PPC_SHIFT                USB_HCSPARAMS_PPC_SHIFT
#define USBHS_HCSPARAMS_PPC(x)                   USB_HCSPARAMS_PPC(x)
#define USBHS_HCSPARAMS_N_PCC_MASK               USB_HCSPARAMS_N_PCC_MASK
#define USBHS_HCSPARAMS_N_PCC_SHIFT              USB_HCSPARAMS_N_PCC_SHIFT
#define USBHS_HCSPARAMS_N_PCC(x)                 USB_HCSPARAMS_N_PCC(x)
#define USBHS_HCSPARAMS_N_CC_MASK                USB_HCSPARAMS_N_CC_MASK
#define USBHS_HCSPARAMS_N_CC_SHIFT               USB_HCSPARAMS_N_CC_SHIFT
#define USBHS_HCSPARAMS_N_CC(x)                  USB_HCSPARAMS_N_CC(x)
#define USBHS_HCSPARAMS_PI_MASK                  USB_HCSPARAMS_PI_MASK
#define USBHS_HCSPARAMS_PI_SHIFT                 USB_HCSPARAMS_PI_SHIFT
#define USBHS_HCSPARAMS_PI(x)                    USB_HCSPARAMS_PI(x)
#define USBHS_HCSPARAMS_N_PTT_MASK               USB_HCSPARAMS_N_PTT_MASK
#define USBHS_HCSPARAMS_N_PTT_SHIFT              USB_HCSPARAMS_N_PTT_SHIFT
#define USBHS_HCSPARAMS_N_PTT(x)                 USB_HCSPARAMS_N_PTT(x)
#define USBHS_HCSPARAMS_N_TT_MASK                USB_HCSPARAMS_N_TT_MASK
#define USBHS_HCSPARAMS_N_TT_SHIFT               USB_HCSPARAMS_N_TT_SHIFT
#define USBHS_HCSPARAMS_N_TT(x)                  USB_HCSPARAMS_N_TT(x)
#define USBHS_HCCPARAMS_ADC_MASK                 USB_HCCPARAMS_ADC_MASK
#define USBHS_HCCPARAMS_ADC_SHIFT                USB_HCCPARAMS_ADC_SHIFT
#define USBHS_HCCPARAMS_ADC(x)                   USB_HCCPARAMS_ADC(x)
#define USBHS_HCCPARAMS_PFL_MASK                 USB_HCCPARAMS_PFL_MASK
#define USBHS_HCCPARAMS_PFL_SHIFT                USB_HCCPARAMS_PFL_SHIFT
#define USBHS_HCCPARAMS_PFL(x)                   USB_HCCPARAMS_PFL(x)
#define USBHS_HCCPARAMS_ASP_MASK                 USB_HCCPARAMS_ASP_MASK
#define USBHS_HCCPARAMS_ASP_SHIFT                USB_HCCPARAMS_ASP_SHIFT
#define USBHS_HCCPARAMS_ASP(x)                   USB_HCCPARAMS_ASP(x)
#define USBHS_HCCPARAMS_IST_MASK                 USB_HCCPARAMS_IST_MASK
#define USBHS_HCCPARAMS_IST_SHIFT                USB_HCCPARAMS_IST_SHIFT
#define USBHS_HCCPARAMS_IST(x)                   USB_HCCPARAMS_IST(x)
#define USBHS_HCCPARAMS_EECP_MASK                USB_HCCPARAMS_EECP_MASK
#define USBHS_HCCPARAMS_EECP_SHIFT               USB_HCCPARAMS_EECP_SHIFT
#define USBHS_HCCPARAMS_EECP(x)                  USB_HCCPARAMS_EECP(x)
#define USBHS_DCIVERSION_DCIVERSION_MASK         USB_DCIVERSION_DCIVERSION_MASK
#define USBHS_DCIVERSION_DCIVERSION_SHIFT        USB_DCIVERSION_DCIVERSION_SHIFT
#define USBHS_DCIVERSION_DCIVERSION(x)           USB_DCIVERSION_DCIVERSION(x)
#define USBHS_DCCPARAMS_DEN_MASK                 USB_DCCPARAMS_DEN_MASK
#define USBHS_DCCPARAMS_DEN_SHIFT                USB_DCCPARAMS_DEN_SHIFT
#define USBHS_DCCPARAMS_DEN(x)                   USB_DCCPARAMS_DEN(x)
#define USBHS_DCCPARAMS_DC_MASK                  USB_DCCPARAMS_DC_MASK
#define USBHS_DCCPARAMS_DC_SHIFT                 USB_DCCPARAMS_DC_SHIFT
#define USBHS_DCCPARAMS_DC(x)                    USB_DCCPARAMS_DC(x)
#define USBHS_DCCPARAMS_HC_MASK                  USB_DCCPARAMS_HC_MASK
#define USBHS_DCCPARAMS_HC_SHIFT                 USB_DCCPARAMS_HC_SHIFT
#define USBHS_DCCPARAMS_HC(x)                    USB_DCCPARAMS_HC(x)
#define USBHS_USBCMD_RS_MASK                     USB_USBCMD_RS_MASK
#define USBHS_USBCMD_RS_SHIFT                    USB_USBCMD_RS_SHIFT
#define USBHS_USBCMD_RS(x)                       USB_USBCMD_RS(x)
#define USBHS_USBCMD_RST_MASK                    USB_USBCMD_RST_MASK
#define USBHS_USBCMD_RST_SHIFT                   USB_USBCMD_RST_SHIFT
#define USBHS_USBCMD_RST(x)                      USB_USBCMD_RST(x)
#define USBHS_USBCMD_FS_MASK                     USB_USBCMD_FS_1_MASK
#define USBHS_USBCMD_FS_SHIFT                    USB_USBCMD_FS_1_SHIFT
#define USBHS_USBCMD_FS(x)                       USB_USBCMD_FS_1(x)
#define USBHS_USBCMD_PSE_MASK                    USB_USBCMD_PSE_MASK
#define USBHS_USBCMD_PSE_SHIFT                   USB_USBCMD_PSE_SHIFT
#define USBHS_USBCMD_PSE(x)                      USB_USBCMD_PSE(x)
#define USBHS_USBCMD_ASE_MASK                    USB_USBCMD_ASE_MASK
#define USBHS_USBCMD_ASE_SHIFT                   USB_USBCMD_ASE_SHIFT
#define USBHS_USBCMD_ASE(x)                      USB_USBCMD_ASE(x)
#define USBHS_USBCMD_IAA_MASK                    USB_USBCMD_IAA_MASK
#define USBHS_USBCMD_IAA_SHIFT                   USB_USBCMD_IAA_SHIFT
#define USBHS_USBCMD_IAA(x)                      USB_USBCMD_IAA(x)
#define USBHS_USBCMD_ASP_MASK                    USB_USBCMD_ASP_MASK
#define USBHS_USBCMD_ASP_SHIFT                   USB_USBCMD_ASP_SHIFT
#define USBHS_USBCMD_ASP(x)                      USB_USBCMD_ASP(x)
#define USBHS_USBCMD_ASPE_MASK                   USB_USBCMD_ASPE_MASK
#define USBHS_USBCMD_ASPE_SHIFT                  USB_USBCMD_ASPE_SHIFT
#define USBHS_USBCMD_ASPE(x)                     USB_USBCMD_ASPE(x)
#define USBHS_USBCMD_ATDTW_MASK                  USB_USBCMD_ATDTW_MASK
#define USBHS_USBCMD_ATDTW_SHIFT                 USB_USBCMD_ATDTW_SHIFT
#define USBHS_USBCMD_ATDTW(x)                    USB_USBCMD_ATDTW(x)
#define USBHS_USBCMD_SUTW_MASK                   USB_USBCMD_SUTW_MASK
#define USBHS_USBCMD_SUTW_SHIFT                  USB_USBCMD_SUTW_SHIFT
#define USBHS_USBCMD_SUTW(x)                     USB_USBCMD_SUTW(x)
#define USBHS_USBCMD_FS2_MASK                    USB_USBCMD_FS_2_MASK
#define USBHS_USBCMD_FS2_SHIFT                   USB_USBCMD_FS_2_SHIFT
#define USBHS_USBCMD_FS2(x)                      USB_USBCMD_FS_2(x)
#define USBHS_USBCMD_ITC_MASK                    USB_USBCMD_ITC_MASK
#define USBHS_USBCMD_ITC_SHIFT                   USB_USBCMD_ITC_SHIFT
#define USBHS_USBCMD_ITC(x)                      USB_USBCMD_ITC(x)
#define USBHS_USBSTS_UI_MASK                     USB_USBSTS_UI_MASK
#define USBHS_USBSTS_UI_SHIFT                    USB_USBSTS_UI_SHIFT
#define USBHS_USBSTS_UI(x)                       USB_USBSTS_UI(x)
#define USBHS_USBSTS_UEI_MASK                    USB_USBSTS_UEI_MASK
#define USBHS_USBSTS_UEI_SHIFT                   USB_USBSTS_UEI_SHIFT
#define USBHS_USBSTS_UEI(x)                      USB_USBSTS_UEI(x)
#define USBHS_USBSTS_PCI_MASK                    USB_USBSTS_PCI_MASK
#define USBHS_USBSTS_PCI_SHIFT                   USB_USBSTS_PCI_SHIFT
#define USBHS_USBSTS_PCI(x)                      USB_USBSTS_PCI(x)
#define USBHS_USBSTS_FRI_MASK                    USB_USBSTS_FRI_MASK
#define USBHS_USBSTS_FRI_SHIFT                   USB_USBSTS_FRI_SHIFT
#define USBHS_USBSTS_FRI(x)                      USB_USBSTS_FRI(x)
#define USBHS_USBSTS_SEI_MASK                    USB_USBSTS_SEI_MASK
#define USBHS_USBSTS_SEI_SHIFT                   USB_USBSTS_SEI_SHIFT
#define USBHS_USBSTS_SEI(x)                      USB_USBSTS_SEI(x)
#define USBHS_USBSTS_AAI_MASK                    USB_USBSTS_AAI_MASK
#define USBHS_USBSTS_AAI_SHIFT                   USB_USBSTS_AAI_SHIFT
#define USBHS_USBSTS_AAI(x)                      USB_USBSTS_AAI(x)
#define USBHS_USBSTS_URI_MASK                    USB_USBSTS_URI_MASK
#define USBHS_USBSTS_URI_SHIFT                   USB_USBSTS_URI_SHIFT
#define USBHS_USBSTS_URI(x)                      USB_USBSTS_URI(x)
#define USBHS_USBSTS_SRI_MASK                    USB_USBSTS_SRI_MASK
#define USBHS_USBSTS_SRI_SHIFT                   USB_USBSTS_SRI_SHIFT
#define USBHS_USBSTS_SRI(x)                      USB_USBSTS_SRI(x)
#define USBHS_USBSTS_SLI_MASK                    USB_USBSTS_SLI_MASK
#define USBHS_USBSTS_SLI_SHIFT                   USB_USBSTS_SLI_SHIFT
#define USBHS_USBSTS_SLI(x)                      USB_USBSTS_SLI(x)
#define USBHS_USBSTS_ULPII_MASK                  USB_USBSTS_ULPII_MASK
#define USBHS_USBSTS_ULPII_SHIFT                 USB_USBSTS_ULPII_SHIFT
#define USBHS_USBSTS_ULPII(x)                    USB_USBSTS_ULPII(x)
#define USBHS_USBSTS_HCH_MASK                    USB_USBSTS_HCH_MASK
#define USBHS_USBSTS_HCH_SHIFT                   USB_USBSTS_HCH_SHIFT
#define USBHS_USBSTS_HCH(x)                      USB_USBSTS_HCH(x)
#define USBHS_USBSTS_RCL_MASK                    USB_USBSTS_RCL_MASK
#define USBHS_USBSTS_RCL_SHIFT                   USB_USBSTS_RCL_SHIFT
#define USBHS_USBSTS_RCL(x)                      USB_USBSTS_RCL(x)
#define USBHS_USBSTS_PS_MASK                     USB_USBSTS_PS_MASK
#define USBHS_USBSTS_PS_SHIFT                    USB_USBSTS_PS_SHIFT
#define USBHS_USBSTS_PS(x)                       USB_USBSTS_PS(x)
#define USBHS_USBSTS_AS_MASK                     USB_USBSTS_AS_MASK
#define USBHS_USBSTS_AS_SHIFT                    USB_USBSTS_AS_SHIFT
#define USBHS_USBSTS_AS(x)                       USB_USBSTS_AS(x)
#define USBHS_USBSTS_NAKI_MASK                   USB_USBSTS_NAKI_MASK
#define USBHS_USBSTS_NAKI_SHIFT                  USB_USBSTS_NAKI_SHIFT
#define USBHS_USBSTS_NAKI(x)                     USB_USBSTS_NAKI(x)
#define USBHS_USBSTS_TI0_MASK                    USB_USBSTS_TI0_MASK
#define USBHS_USBSTS_TI0_SHIFT                   USB_USBSTS_TI0_SHIFT
#define USBHS_USBSTS_TI0(x)                      USB_USBSTS_TI0(x)
#define USBHS_USBSTS_TI1_MASK                    USB_USBSTS_TI1_MASK
#define USBHS_USBSTS_TI1_SHIFT                   USB_USBSTS_TI1_SHIFT
#define USBHS_USBSTS_TI1(x)                      USB_USBSTS_TI1(x)
#define USBHS_USBINTR_UE_MASK                    USB_USBINTR_UE_MASK
#define USBHS_USBINTR_UE_SHIFT                   USB_USBINTR_UE_SHIFT
#define USBHS_USBINTR_UE(x)                      USB_USBINTR_UE(x)
#define USBHS_USBINTR_UEE_MASK                   USB_USBINTR_UEE_MASK
#define USBHS_USBINTR_UEE_SHIFT                  USB_USBINTR_UEE_SHIFT
#define USBHS_USBINTR_UEE(x)                     USB_USBINTR_UEE(x)
#define USBHS_USBINTR_PCE_MASK                   USB_USBINTR_PCE_MASK
#define USBHS_USBINTR_PCE_SHIFT                  USB_USBINTR_PCE_SHIFT
#define USBHS_USBINTR_PCE(x)                     USB_USBINTR_PCE(x)
#define USBHS_USBINTR_FRE_MASK                   USB_USBINTR_FRE_MASK
#define USBHS_USBINTR_FRE_SHIFT                  USB_USBINTR_FRE_SHIFT
#define USBHS_USBINTR_FRE(x)                     USB_USBINTR_FRE(x)
#define USBHS_USBINTR_SEE_MASK                   USB_USBINTR_SEE_MASK
#define USBHS_USBINTR_SEE_SHIFT                  USB_USBINTR_SEE_SHIFT
#define USBHS_USBINTR_SEE(x)                     USB_USBINTR_SEE(x)
#define USBHS_USBINTR_AAE_MASK                   USB_USBINTR_AAE_MASK
#define USBHS_USBINTR_AAE_SHIFT                  USB_USBINTR_AAE_SHIFT
#define USBHS_USBINTR_AAE(x)                     USB_USBINTR_AAE(x)
#define USBHS_USBINTR_URE_MASK                   USB_USBINTR_URE_MASK
#define USBHS_USBINTR_URE_SHIFT                  USB_USBINTR_URE_SHIFT
#define USBHS_USBINTR_URE(x)                     USB_USBINTR_URE(x)
#define USBHS_USBINTR_SRE_MASK                   USB_USBINTR_SRE_MASK
#define USBHS_USBINTR_SRE_SHIFT                  USB_USBINTR_SRE_SHIFT
#define USBHS_USBINTR_SRE(x)                     USB_USBINTR_SRE(x)
#define USBHS_USBINTR_SLE_MASK                   USB_USBINTR_SLE_MASK
#define USBHS_USBINTR_SLE_SHIFT                  USB_USBINTR_SLE_SHIFT
#define USBHS_USBINTR_SLE(x)                     USB_USBINTR_SLE(x)
#define USBHS_USBINTR_ULPIE_MASK                 USB_USBINTR_ULPIE_MASK
#define USBHS_USBINTR_ULPIE_SHIFT                USB_USBINTR_ULPIE_SHIFT
#define USBHS_USBINTR_ULPIE(x)                   USB_USBINTR_ULPIE(x)
#define USBHS_USBINTR_NAKE_MASK                  USB_USBINTR_NAKE_MASK
#define USBHS_USBINTR_NAKE_SHIFT                 USB_USBINTR_NAKE_SHIFT
#define USBHS_USBINTR_NAKE(x)                    USB_USBINTR_NAKE(x)
#define USBHS_USBINTR_UAIE_MASK                  USB_USBINTR_UAIE_MASK
#define USBHS_USBINTR_UAIE_SHIFT                 USB_USBINTR_UAIE_SHIFT
#define USBHS_USBINTR_UAIE(x)                    USB_USBINTR_UAIE(x)
#define USBHS_USBINTR_UPIE_MASK                  USB_USBINTR_UPIE_MASK
#define USBHS_USBINTR_UPIE_SHIFT                 USB_USBINTR_UPIE_SHIFT
#define USBHS_USBINTR_UPIE(x)                    USB_USBINTR_UPIE(x)
#define USBHS_USBINTR_TIE0_MASK                  USB_USBINTR_TIE0_MASK
#define USBHS_USBINTR_TIE0_SHIFT                 USB_USBINTR_TIE0_SHIFT
#define USBHS_USBINTR_TIE0(x)                    USB_USBINTR_TIE0(x)
#define USBHS_USBINTR_TIE1_MASK                  USB_USBINTR_TIE1_MASK
#define USBHS_USBINTR_TIE1_SHIFT                 USB_USBINTR_TIE1_SHIFT
#define USBHS_USBINTR_TIE1(x)                    USB_USBINTR_TIE1(x)
#define USBHS_FRINDEX_FRINDEX_MASK               USB_FRINDEX_FRINDEX_MASK
#define USBHS_FRINDEX_FRINDEX_SHIFT              USB_FRINDEX_FRINDEX_SHIFT
#define USBHS_FRINDEX_FRINDEX(x)                 USB_FRINDEX_FRINDEX(x)
#define USBHS_DEVICEADDR_USBADRA_MASK            USB_DEVICEADDR_USBADRA_MASK
#define USBHS_DEVICEADDR_USBADRA_SHIFT           USB_DEVICEADDR_USBADRA_SHIFT
#define USBHS_DEVICEADDR_USBADRA(x)              USB_DEVICEADDR_USBADRA(x)
#define USBHS_DEVICEADDR_USBADR_MASK             USB_DEVICEADDR_USBADR_MASK
#define USBHS_DEVICEADDR_USBADR_SHIFT            USB_DEVICEADDR_USBADR_SHIFT
#define USBHS_DEVICEADDR_USBADR(x)               USB_DEVICEADDR_USBADR(x)
#define USBHS_PERIODICLISTBASE_PERBASE_MASK      USB_PERIODICLISTBASE_BASEADR_MASK
#define USBHS_PERIODICLISTBASE_PERBASE_SHIFT     USB_PERIODICLISTBASE_BASEADR_SHIFT
#define USBHS_PERIODICLISTBASE_PERBASE(x)        USB_PERIODICLISTBASE_BASEADR(x)
#define USBHS_ASYNCLISTADDR_ASYBASE_MASK         USB_ASYNCLISTADDR_ASYBASE_MASK
#define USBHS_ASYNCLISTADDR_ASYBASE_SHIFT        USB_ASYNCLISTADDR_ASYBASE_SHIFT
#define USBHS_ASYNCLISTADDR_ASYBASE(x)           USB_ASYNCLISTADDR_ASYBASE(x)
#define USBHS_EPLISTADDR_EPBASE_MASK             USB_ENDPTLISTADDR_EPBASE_MASK
#define USBHS_EPLISTADDR_EPBASE_SHIFT            USB_ENDPTLISTADDR_EPBASE_SHIFT
#define USBHS_EPLISTADDR_EPBASE(x)               USB_ENDPTLISTADDR_EPBASE(x)
#define USBHS_BURSTSIZE_RXPBURST_MASK            USB_BURSTSIZE_RXPBURST_MASK
#define USBHS_BURSTSIZE_RXPBURST_SHIFT           USB_BURSTSIZE_RXPBURST_SHIFT
#define USBHS_BURSTSIZE_RXPBURST(x)              USB_BURSTSIZE_RXPBURST(x)
#define USBHS_BURSTSIZE_TXPBURST_MASK            USB_BURSTSIZE_TXPBURST_MASK
#define USBHS_BURSTSIZE_TXPBURST_SHIFT           USB_BURSTSIZE_TXPBURST_SHIFT
#define USBHS_BURSTSIZE_TXPBURST(x)              USB_BURSTSIZE_TXPBURST(x)
#define USBHS_TXFILLTUNING_TXSCHOH_MASK          USB_TXFILLTUNING_TXSCHOH_MASK
#define USBHS_TXFILLTUNING_TXSCHOH_SHIFT         USB_TXFILLTUNING_TXSCHOH_SHIFT
#define USBHS_TXFILLTUNING_TXSCHOH(x)            USB_TXFILLTUNING_TXSCHOH(x)
#define USBHS_TXFILLTUNING_TXSCHHEALTH_MASK      USB_TXFILLTUNING_TXSCHHEALTH_MASK
#define USBHS_TXFILLTUNING_TXSCHHEALTH_SHIFT     USB_TXFILLTUNING_TXSCHHEALTH_SHIFT
#define USBHS_TXFILLTUNING_TXSCHHEALTH(x)        USB_TXFILLTUNING_TXSCHHEALTH(x)
#define USBHS_TXFILLTUNING_TXFIFOTHRES_MASK      USB_TXFILLTUNING_TXFIFOTHRES_MASK
#define USBHS_TXFILLTUNING_TXFIFOTHRES_SHIFT     USB_TXFILLTUNING_TXFIFOTHRES_SHIFT
#define USBHS_TXFILLTUNING_TXFIFOTHRES(x)        USB_TXFILLTUNING_TXFIFOTHRES(x)
#define USBHS_ENDPTNAK_EPRN_MASK                 USB_ENDPTNAK_EPRN_MASK
#define USBHS_ENDPTNAK_EPRN_SHIFT                USB_ENDPTNAK_EPRN_SHIFT
#define USBHS_ENDPTNAK_EPRN(x)                   USB_ENDPTNAK_EPRN(x)
#define USBHS_ENDPTNAK_EPTN_MASK                 USB_ENDPTNAK_EPTN_MASK
#define USBHS_ENDPTNAK_EPTN_SHIFT                USB_ENDPTNAK_EPTN_SHIFT
#define USBHS_ENDPTNAK_EPTN(x)                   USB_ENDPTNAK_EPTN(x)
#define USBHS_ENDPTNAKEN_EPRNE_MASK              USB_ENDPTNAKEN_EPRNE_MASK
#define USBHS_ENDPTNAKEN_EPRNE_SHIFT             USB_ENDPTNAKEN_EPRNE_SHIFT
#define USBHS_ENDPTNAKEN_EPRNE(x)                USB_ENDPTNAKEN_EPRNE(x)
#define USBHS_ENDPTNAKEN_EPTNE_MASK              USB_ENDPTNAKEN_EPTNE_MASK
#define USBHS_ENDPTNAKEN_EPTNE_SHIFT             USB_ENDPTNAKEN_EPTNE_SHIFT
#define USBHS_ENDPTNAKEN_EPTNE(x)                USB_ENDPTNAKEN_EPTNE(x)
#define USBHS_CONFIGFLAG_CF_MASK                 USB_CONFIGFLAG_CF_MASK
#define USBHS_CONFIGFLAG_CF_SHIFT                USB_CONFIGFLAG_CF_SHIFT
#define USBHS_CONFIGFLAG_CF(x)                   USB_CONFIGFLAG_CF(x)
#define USBHS_PORTSC1_CCS_MASK                   USB_PORTSC1_CCS_MASK
#define USBHS_PORTSC1_CCS_SHIFT                  USB_PORTSC1_CCS_SHIFT
#define USBHS_PORTSC1_CCS(x)                     USB_PORTSC1_CCS(x)
#define USBHS_PORTSC1_CSC_MASK                   USB_PORTSC1_CSC_MASK
#define USBHS_PORTSC1_CSC_SHIFT                  USB_PORTSC1_CSC_SHIFT
#define USBHS_PORTSC1_CSC(x)                     USB_PORTSC1_CSC(x)
#define USBHS_PORTSC1_PE_MASK                    USB_PORTSC1_PE_MASK
#define USBHS_PORTSC1_PE_SHIFT                   USB_PORTSC1_PE_SHIFT
#define USBHS_PORTSC1_PE(x)                      USB_PORTSC1_PE(x)
#define USBHS_PORTSC1_PEC_MASK                   USB_PORTSC1_PEC_MASK
#define USBHS_PORTSC1_PEC_SHIFT                  USB_PORTSC1_PEC_SHIFT
#define USBHS_PORTSC1_PEC(x)                     USB_PORTSC1_PEC(x)
#define USBHS_PORTSC1_OCA_MASK                   USB_PORTSC1_OCA_MASK
#define USBHS_PORTSC1_OCA_SHIFT                  USB_PORTSC1_OCA_SHIFT
#define USBHS_PORTSC1_OCA(x)                     USB_PORTSC1_OCA(x)
#define USBHS_PORTSC1_OCC_MASK                   USB_PORTSC1_OCC_MASK
#define USBHS_PORTSC1_OCC_SHIFT                  USB_PORTSC1_OCC_SHIFT
#define USBHS_PORTSC1_OCC(x)                     USB_PORTSC1_OCC(x)
#define USBHS_PORTSC1_FPR_MASK                   USB_PORTSC1_FPR_MASK
#define USBHS_PORTSC1_FPR_SHIFT                  USB_PORTSC1_FPR_SHIFT
#define USBHS_PORTSC1_FPR(x)                     USB_PORTSC1_FPR(x)
#define USBHS_PORTSC1_SUSP_MASK                  USB_PORTSC1_SUSP_MASK
#define USBHS_PORTSC1_SUSP_SHIFT                 USB_PORTSC1_SUSP_SHIFT
#define USBHS_PORTSC1_SUSP(x)                    USB_PORTSC1_SUSP(x)
#define USBHS_PORTSC1_PR_MASK                    USB_PORTSC1_PR_MASK
#define USBHS_PORTSC1_PR_SHIFT                   USB_PORTSC1_PR_SHIFT
#define USBHS_PORTSC1_PR(x)                      USB_PORTSC1_PR(x)
#define USBHS_PORTSC1_HSP_MASK                   USB_PORTSC1_HSP_MASK
#define USBHS_PORTSC1_HSP_SHIFT                  USB_PORTSC1_HSP_SHIFT
#define USBHS_PORTSC1_HSP(x)                     USB_PORTSC1_HSP(x)
#define USBHS_PORTSC1_LS_MASK                    USB_PORTSC1_LS_MASK
#define USBHS_PORTSC1_LS_SHIFT                   USB_PORTSC1_LS_SHIFT
#define USBHS_PORTSC1_LS(x)                      USB_PORTSC1_LS(x)
#define USBHS_PORTSC1_PP_MASK                    USB_PORTSC1_PP_MASK
#define USBHS_PORTSC1_PP_SHIFT                   USB_PORTSC1_PP_SHIFT
#define USBHS_PORTSC1_PP(x)                      USB_PORTSC1_PP(x)
#define USBHS_PORTSC1_PO_MASK                    USB_PORTSC1_PO_MASK
#define USBHS_PORTSC1_PO_SHIFT                   USB_PORTSC1_PO_SHIFT
#define USBHS_PORTSC1_PO(x)                      USB_PORTSC1_PO(x)
#define USBHS_PORTSC1_PIC_MASK                   USB_PORTSC1_PIC_MASK
#define USBHS_PORTSC1_PIC_SHIFT                  USB_PORTSC1_PIC_SHIFT
#define USBHS_PORTSC1_PIC(x)                     USB_PORTSC1_PIC(x)
#define USBHS_PORTSC1_PTC_MASK                   USB_PORTSC1_PTC_MASK
#define USBHS_PORTSC1_PTC_SHIFT                  USB_PORTSC1_PTC_SHIFT
#define USBHS_PORTSC1_PTC(x)                     USB_PORTSC1_PTC(x)
#define USBHS_PORTSC1_WKCN_MASK                  USB_PORTSC1_WKCN_MASK
#define USBHS_PORTSC1_WKCN_SHIFT                 USB_PORTSC1_WKCN_SHIFT
#define USBHS_PORTSC1_WKCN(x)                    USB_PORTSC1_WKCN(x)
#define USBHS_PORTSC1_WKDS_MASK                  USB_PORTSC1_WKDC_MASK
#define USBHS_PORTSC1_WKDS_SHIFT                 USB_PORTSC1_WKDC_SHIFT
#define USBHS_PORTSC1_WKDS(x)                    USB_PORTSC1_WKDC(x)
#define USBHS_PORTSC1_WKOC_MASK                  USB_PORTSC1_WKOC_MASK
#define USBHS_PORTSC1_WKOC_SHIFT                 USB_PORTSC1_WKOC_SHIFT
#define USBHS_PORTSC1_WKOC(x)                    USB_PORTSC1_WKOC(x)
#define USBHS_PORTSC1_PHCD_MASK                  USB_PORTSC1_PHCD_MASK
#define USBHS_PORTSC1_PHCD_SHIFT                 USB_PORTSC1_PHCD_SHIFT
#define USBHS_PORTSC1_PHCD(x)                    USB_PORTSC1_PHCD(x)
#define USBHS_PORTSC1_PFSC_MASK                  USB_PORTSC1_PFSC_MASK
#define USBHS_PORTSC1_PFSC_SHIFT                 USB_PORTSC1_PFSC_SHIFT
#define USBHS_PORTSC1_PFSC(x)                    USB_PORTSC1_PFSC(x)
#define USBHS_PORTSC1_PTS2_MASK                  USB_PORTSC1_PTS_2_MASK
#define USBHS_PORTSC1_PTS2_SHIFT                 USB_PORTSC1_PTS_2_SHIFT
#define USBHS_PORTSC1_PTS2(x)                    USB_PORTSC1_PTS_2(x)
#define USBHS_PORTSC1_PSPD_MASK                  USB_PORTSC1_PSPD_MASK
#define USBHS_PORTSC1_PSPD_SHIFT                 USB_PORTSC1_PSPD_SHIFT
#define USBHS_PORTSC1_PSPD(x)                    USB_PORTSC1_PSPD(x)
#define USBHS_PORTSC1_PTW_MASK                   USB_PORTSC1_PTW_MASK
#define USBHS_PORTSC1_PTW_SHIFT                  USB_PORTSC1_PTW_SHIFT
#define USBHS_PORTSC1_PTW(x)                     USB_PORTSC1_PTW(x)
#define USBHS_PORTSC1_STS_MASK                   USB_PORTSC1_STS_MASK
#define USBHS_PORTSC1_STS_SHIFT                  USB_PORTSC1_STS_SHIFT
#define USBHS_PORTSC1_STS(x)                     USB_PORTSC1_STS(x)
#define USBHS_PORTSC1_PTS_MASK                   USB_PORTSC1_PTS_1_MASK
#define USBHS_PORTSC1_PTS_SHIFT                  USB_PORTSC1_PTS_1_SHIFT
#define USBHS_PORTSC1_PTS(x)                     USB_PORTSC1_PTS_1(x)
#define USBHS_OTGSC_VD_MASK                      USB_OTGSC_VD_MASK
#define USBHS_OTGSC_VD_SHIFT                     USB_OTGSC_VD_SHIFT
#define USBHS_OTGSC_VD(x)                        USB_OTGSC_VD(x)
#define USBHS_OTGSC_VC_MASK                      USB_OTGSC_VC_MASK
#define USBHS_OTGSC_VC_SHIFT                     USB_OTGSC_VC_SHIFT
#define USBHS_OTGSC_VC(x)                        USB_OTGSC_VC(x)
#define USBHS_OTGSC_OT_MASK                      USB_OTGSC_OT_MASK
#define USBHS_OTGSC_OT_SHIFT                     USB_OTGSC_OT_SHIFT
#define USBHS_OTGSC_OT(x)                        USB_OTGSC_OT(x)
#define USBHS_OTGSC_DP_MASK                      USB_OTGSC_DP_MASK
#define USBHS_OTGSC_DP_SHIFT                     USB_OTGSC_DP_SHIFT
#define USBHS_OTGSC_DP(x)                        USB_OTGSC_DP(x)
#define USBHS_OTGSC_IDPU_MASK                    USB_OTGSC_IDPU_MASK
#define USBHS_OTGSC_IDPU_SHIFT                   USB_OTGSC_IDPU_SHIFT
#define USBHS_OTGSC_IDPU(x)                      USB_OTGSC_IDPU(x)
#define USBHS_OTGSC_ID_MASK                      USB_OTGSC_ID_MASK
#define USBHS_OTGSC_ID_SHIFT                     USB_OTGSC_ID_SHIFT
#define USBHS_OTGSC_ID(x)                        USB_OTGSC_ID(x)
#define USBHS_OTGSC_AVV_MASK                     USB_OTGSC_AVV_MASK
#define USBHS_OTGSC_AVV_SHIFT                    USB_OTGSC_AVV_SHIFT
#define USBHS_OTGSC_AVV(x)                       USB_OTGSC_AVV(x)
#define USBHS_OTGSC_ASV_MASK                     USB_OTGSC_ASV_MASK
#define USBHS_OTGSC_ASV_SHIFT                    USB_OTGSC_ASV_SHIFT
#define USBHS_OTGSC_ASV(x)                       USB_OTGSC_ASV(x)
#define USBHS_OTGSC_BSV_MASK                     USB_OTGSC_BSV_MASK
#define USBHS_OTGSC_BSV_SHIFT                    USB_OTGSC_BSV_SHIFT
#define USBHS_OTGSC_BSV(x)                       USB_OTGSC_BSV(x)
#define USBHS_OTGSC_BSE_MASK                     USB_OTGSC_BSE_MASK
#define USBHS_OTGSC_BSE_SHIFT                    USB_OTGSC_BSE_SHIFT
#define USBHS_OTGSC_BSE(x)                       USB_OTGSC_BSE(x)
#define USBHS_OTGSC_MST_MASK                     USB_OTGSC_TOG_1MS_MASK
#define USBHS_OTGSC_MST_SHIFT                    USB_OTGSC_TOG_1MS_SHIFT
#define USBHS_OTGSC_MST(x)                       USB_OTGSC_TOG_1MS(x)
#define USBHS_OTGSC_DPS_MASK                     USB_OTGSC_DPS_MASK
#define USBHS_OTGSC_DPS_SHIFT                    USB_OTGSC_DPS_SHIFT
#define USBHS_OTGSC_DPS(x)                       USB_OTGSC_DPS(x)
#define USBHS_OTGSC_IDIS_MASK                    USB_OTGSC_IDIS_MASK
#define USBHS_OTGSC_IDIS_SHIFT                   USB_OTGSC_IDIS_SHIFT
#define USBHS_OTGSC_IDIS(x)                      USB_OTGSC_IDIS(x)
#define USBHS_OTGSC_AVVIS_MASK                   USB_OTGSC_AVVIS_MASK
#define USBHS_OTGSC_AVVIS_SHIFT                  USB_OTGSC_AVVIS_SHIFT
#define USBHS_OTGSC_AVVIS(x)                     USB_OTGSC_AVVIS(x)
#define USBHS_OTGSC_ASVIS_MASK                   USB_OTGSC_ASVIS_MASK
#define USBHS_OTGSC_ASVIS_SHIFT                  USB_OTGSC_ASVIS_SHIFT
#define USBHS_OTGSC_ASVIS(x)                     USB_OTGSC_ASVIS(x)
#define USBHS_OTGSC_BSVIS_MASK                   USB_OTGSC_BSVIS_MASK
#define USBHS_OTGSC_BSVIS_SHIFT                  USB_OTGSC_BSVIS_SHIFT
#define USBHS_OTGSC_BSVIS(x)                     USB_OTGSC_BSVIS(x)
#define USBHS_OTGSC_BSEIS_MASK                   USB_OTGSC_BSEIS_MASK
#define USBHS_OTGSC_BSEIS_SHIFT                  USB_OTGSC_BSEIS_SHIFT
#define USBHS_OTGSC_BSEIS(x)                     USB_OTGSC_BSEIS(x)
#define USBHS_OTGSC_MSS_MASK                     USB_OTGSC_STATUS_1MS_MASK
#define USBHS_OTGSC_MSS_SHIFT                    USB_OTGSC_STATUS_1MS_SHIFT
#define USBHS_OTGSC_MSS(x)                       USB_OTGSC_STATUS_1MS(x)
#define USBHS_OTGSC_DPIS_MASK                    USB_OTGSC_DPIS_MASK
#define USBHS_OTGSC_DPIS_SHIFT                   USB_OTGSC_DPIS_SHIFT
#define USBHS_OTGSC_DPIS(x)                      USB_OTGSC_DPIS(x)
#define USBHS_OTGSC_IDIE_MASK                    USB_OTGSC_IDIE_MASK
#define USBHS_OTGSC_IDIE_SHIFT                   USB_OTGSC_IDIE_SHIFT
#define USBHS_OTGSC_IDIE(x)                      USB_OTGSC_IDIE(x)
#define USBHS_OTGSC_AVVIE_MASK                   USB_OTGSC_AVVIE_MASK
#define USBHS_OTGSC_AVVIE_SHIFT                  USB_OTGSC_AVVIE_SHIFT
#define USBHS_OTGSC_AVVIE(x)                     USB_OTGSC_AVVIE(x)
#define USBHS_OTGSC_ASVIE_MASK                   USB_OTGSC_ASVIE_MASK
#define USBHS_OTGSC_ASVIE_SHIFT                  USB_OTGSC_ASVIE_SHIFT
#define USBHS_OTGSC_ASVIE(x)                     USB_OTGSC_ASVIE(x)
#define USBHS_OTGSC_BSVIE_MASK                   USB_OTGSC_BSVIE_MASK
#define USBHS_OTGSC_BSVIE_SHIFT                  USB_OTGSC_BSVIE_SHIFT
#define USBHS_OTGSC_BSVIE(x)                     USB_OTGSC_BSVIE(x)
#define USBHS_OTGSC_BSEIE_MASK                   USB_OTGSC_BSEIE_MASK
#define USBHS_OTGSC_BSEIE_SHIFT                  USB_OTGSC_BSEIE_SHIFT
#define USBHS_OTGSC_BSEIE(x)                     USB_OTGSC_BSEIE(x)
#define USBHS_OTGSC_MSE_MASK                     USB_OTGSC_EN_1MS_MASK
#define USBHS_OTGSC_MSE_SHIFT                    USB_OTGSC_EN_1MS_SHIFT
#define USBHS_OTGSC_MSE(x)                       USB_OTGSC_EN_1MS(x)
#define USBHS_OTGSC_DPIE_MASK                    USB_OTGSC_DPIE_MASK
#define USBHS_OTGSC_DPIE_SHIFT                   USB_OTGSC_DPIE_SHIFT
#define USBHS_OTGSC_DPIE(x)                      USB_OTGSC_DPIE(x)
#define USBHS_USBMODE_CM_MASK                    USB_USBMODE_CM_MASK
#define USBHS_USBMODE_CM_SHIFT                   USB_USBMODE_CM_SHIFT
#define USBHS_USBMODE_CM(x)                      USB_USBMODE_CM(x)
#define USBHS_USBMODE_ES_MASK                    USB_USBMODE_ES_MASK
#define USBHS_USBMODE_ES_SHIFT                   USB_USBMODE_ES_SHIFT
#define USBHS_USBMODE_ES(x)                      USB_USBMODE_ES(x)
#define USBHS_USBMODE_SLOM_MASK                  USB_USBMODE_SLOM_MASK
#define USBHS_USBMODE_SLOM_SHIFT                 USB_USBMODE_SLOM_SHIFT
#define USBHS_USBMODE_SLOM(x)                    USB_USBMODE_SLOM(x)
#define USBHS_USBMODE_SDIS_MASK                  USB_USBMODE_SDIS_MASK
#define USBHS_USBMODE_SDIS_SHIFT                 USB_USBMODE_SDIS_SHIFT
#define USBHS_USBMODE_SDIS(x)                    USB_USBMODE_SDIS(x)
#define USBHS_EPSETUPSR_EPSETUPSTAT_MASK         USB_ENDPTSETUPSTAT_ENDPTSETUPSTAT_MASK
#define USBHS_EPSETUPSR_EPSETUPSTAT_SHIFT        USB_ENDPTSETUPSTAT_ENDPTSETUPSTAT_SHIFT
#define USBHS_EPSETUPSR_EPSETUPSTAT(x)           USB_ENDPTSETUPSTAT_ENDPTSETUPSTAT(x)
#define USBHS_EPPRIME_PERB_MASK                  USB_ENDPTPRIME_PERB_MASK
#define USBHS_EPPRIME_PERB_SHIFT                 USB_ENDPTPRIME_PERB_SHIFT
#define USBHS_EPPRIME_PERB(x)                    USB_ENDPTPRIME_PERB(x)
#define USBHS_EPPRIME_PETB_MASK                  USB_ENDPTPRIME_PETB_MASK
#define USBHS_EPPRIME_PETB_SHIFT                 USB_ENDPTPRIME_PETB_SHIFT
#define USBHS_EPPRIME_PETB(x)                    USB_ENDPTPRIME_PETB(x)
#define USBHS_EPFLUSH_FERB_MASK                  USB_ENDPTFLUSH_FERB_MASK
#define USBHS_EPFLUSH_FERB_SHIFT                 USB_ENDPTFLUSH_FERB_SHIFT
#define USBHS_EPFLUSH_FERB(x)                    USB_ENDPTFLUSH_FERB(x)
#define USBHS_EPFLUSH_FETB_MASK                  USB_ENDPTFLUSH_FETB_MASK
#define USBHS_EPFLUSH_FETB_SHIFT                 USB_ENDPTFLUSH_FETB_SHIFT
#define USBHS_EPFLUSH_FETB(x)                    USB_ENDPTFLUSH_FETB(x)
#define USBHS_EPSR_ERBR_MASK                     USB_ENDPTSTAT_ERBR_MASK
#define USBHS_EPSR_ERBR_SHIFT                    USB_ENDPTSTAT_ERBR_SHIFT
#define USBHS_EPSR_ERBR(x)                       USB_ENDPTSTAT_ERBR(x)
#define USBHS_EPSR_ETBR_MASK                     USB_ENDPTSTAT_ETBR_MASK
#define USBHS_EPSR_ETBR_SHIFT                    USB_ENDPTSTAT_ETBR_SHIFT
#define USBHS_EPSR_ETBR(x)                       USB_ENDPTSTAT_ETBR(x)
#define USBHS_EPCOMPLETE_ERCE_MASK               USB_ENDPTCOMPLETE_ERCE_MASK
#define USBHS_EPCOMPLETE_ERCE_SHIFT              USB_ENDPTCOMPLETE_ERCE_SHIFT
#define USBHS_EPCOMPLETE_ERCE(x)                 USB_ENDPTCOMPLETE_ERCE(x)
#define USBHS_EPCOMPLETE_ETCE_MASK               USB_ENDPTCOMPLETE_ETCE_MASK
#define USBHS_EPCOMPLETE_ETCE_SHIFT              USB_ENDPTCOMPLETE_ETCE_SHIFT
#define USBHS_EPCOMPLETE_ETCE(x)                 USB_ENDPTCOMPLETE_ETCE(x)
#define USBHS_EPCR0_RXS_MASK                     USB_ENDPTCTRL0_RXS_MASK
#define USBHS_EPCR0_RXS_SHIFT                    USB_ENDPTCTRL0_RXS_SHIFT
#define USBHS_EPCR0_RXS(x)                       USB_ENDPTCTRL0_RXS(x)
#define USBHS_EPCR0_RXT_MASK                     USB_ENDPTCTRL0_RXT_MASK
#define USBHS_EPCR0_RXT_SHIFT                    USB_ENDPTCTRL0_RXT_SHIFT
#define USBHS_EPCR0_RXT(x)                       USB_ENDPTCTRL0_RXT(x)
#define USBHS_EPCR0_RXE_MASK                     USB_ENDPTCTRL0_RXE_MASK
#define USBHS_EPCR0_RXE_SHIFT                    USB_ENDPTCTRL0_RXE_SHIFT
#define USBHS_EPCR0_RXE(x)                       USB_ENDPTCTRL0_RXE(x)
#define USBHS_EPCR0_TXS_MASK                     USB_ENDPTCTRL0_TXS_MASK
#define USBHS_EPCR0_TXS_SHIFT                    USB_ENDPTCTRL0_TXS_SHIFT
#define USBHS_EPCR0_TXS(x)                       USB_ENDPTCTRL0_TXS(x)
#define USBHS_EPCR0_TXT_MASK                     USB_ENDPTCTRL0_TXT_MASK
#define USBHS_EPCR0_TXT_SHIFT                    USB_ENDPTCTRL0_TXT_SHIFT
#define USBHS_EPCR0_TXT(x)                       USB_ENDPTCTRL0_TXT(x)
#define USBHS_EPCR0_TXE_MASK                     USB_ENDPTCTRL0_TXE_MASK
#define USBHS_EPCR0_TXE_SHIFT                    USB_ENDPTCTRL0_TXE_SHIFT
#define USBHS_EPCR0_TXE(x)                       USB_ENDPTCTRL0_TXE(x)
#define USBHS_EPCR_RXS_MASK                      USB_ENDPTCTRL_RXS_MASK
#define USBHS_EPCR_RXS_SHIFT                     USB_ENDPTCTRL_RXS_SHIFT
#define USBHS_EPCR_RXS(x)                        USB_ENDPTCTRL_RXS(x)
#define USBHS_EPCR_RXD_MASK                      USB_ENDPTCTRL_RXD_MASK
#define USBHS_EPCR_RXD_SHIFT                     USB_ENDPTCTRL_RXD_SHIFT
#define USBHS_EPCR_RXD(x)                        USB_ENDPTCTRL_RXD(x)
#define USBHS_EPCR_RXT_MASK                      USB_ENDPTCTRL_RXT_MASK
#define USBHS_EPCR_RXT_SHIFT                     USB_ENDPTCTRL_RXT_SHIFT
#define USBHS_EPCR_RXT(x)                        USB_ENDPTCTRL_RXT(x)
#define USBHS_EPCR_RXI_MASK                      USB_ENDPTCTRL_RXI_MASK
#define USBHS_EPCR_RXI_SHIFT                     USB_ENDPTCTRL_RXI_SHIFT
#define USBHS_EPCR_RXI(x)                        USB_ENDPTCTRL_RXI(x)
#define USBHS_EPCR_RXR_MASK                      USB_ENDPTCTRL_RXR_MASK
#define USBHS_EPCR_RXR_SHIFT                     USB_ENDPTCTRL_RXR_SHIFT
#define USBHS_EPCR_RXR(x)                        USB_ENDPTCTRL_RXR(x)
#define USBHS_EPCR_RXE_MASK                      USB_ENDPTCTRL_RXE_MASK
#define USBHS_EPCR_RXE_SHIFT                     USB_ENDPTCTRL_RXE_SHIFT
#define USBHS_EPCR_RXE(x)                        USB_ENDPTCTRL_RXE(x)
#define USBHS_EPCR_TXS_MASK                      USB_ENDPTCTRL_TXS_MASK
#define USBHS_EPCR_TXS_SHIFT                     USB_ENDPTCTRL_TXS_SHIFT
#define USBHS_EPCR_TXS(x)                        USB_ENDPTCTRL_TXS(x)
#define USBHS_EPCR_TXD_MASK                      USB_ENDPTCTRL_TXD_MASK
#define USBHS_EPCR_TXD_SHIFT                     USB_ENDPTCTRL_TXD_SHIFT
#define USBHS_EPCR_TXD(x)                        USB_ENDPTCTRL_TXD(x)
#define USBHS_EPCR_TXT_MASK                      USB_ENDPTCTRL_TXT_MASK
#define USBHS_EPCR_TXT_SHIFT                     USB_ENDPTCTRL_TXT_SHIFT
#define USBHS_EPCR_TXT(x)                        USB_ENDPTCTRL_TXT(x)
#define USBHS_EPCR_TXI_MASK                      USB_ENDPTCTRL_TXI_MASK
#define USBHS_EPCR_TXI_SHIFT                     USB_ENDPTCTRL_TXI_SHIFT
#define USBHS_EPCR_TXI(x)                        USB_ENDPTCTRL_TXI(x)
#define USBHS_EPCR_TXR_MASK                      USB_ENDPTCTRL_TXR_MASK
#define USBHS_EPCR_TXR_SHIFT                     USB_ENDPTCTRL_TXR_SHIFT
#define USBHS_EPCR_TXR(x)                        USB_ENDPTCTRL_TXR(x)
#define USBHS_EPCR_TXE_MASK                      USB_ENDPTCTRL_TXE_MASK
#define USBHS_EPCR_TXE_SHIFT                     USB_ENDPTCTRL_TXE_SHIFT
#define USBHS_EPCR_TXE(x)                        USB_ENDPTCTRL_TXE(x)
#define USBHS_EPCR_COUNT                         USB_ENDPTCTRL_COUNT
#define USBHS_Type                               USB_Type
#define USBHS_BASE_ADDRS                         { USB1_BASE, USB2_BASE }
#define USBHS_IRQS                               { USB_OTG1_IRQn, USB_OTG2_IRQn }


/*!
 * @}
 */ /* end of group USB_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- USBNC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USBNC_Peripheral_Access_Layer USBNC Peripheral Access Layer
 * @{
 */

/** USBNC - Register Layout Typedef */
typedef struct {
  __IO uint32_t USB_OTGn_CTRL;                     /**< USB OTGn Control Register, offset: 0x0 */
       uint8_t RESERVED_0[20];
  __IO uint32_t USB_OTGn_PHY_CTRL_0;               /**< OTGn UTMI PHY Control 0 Register, offset: 0x18 */
} USBNC_Type;

/* ----------------------------------------------------------------------------
   -- USBNC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USBNC_Register_Masks USBNC Register Masks
 * @{
 */

/*! @name USB_OTGn_CTRL - USB OTGn Control Register */
#define USBNC_USB_OTGn_CTRL_OVER_CUR_DIS_MASK    (0x80U)
#define USBNC_USB_OTGn_CTRL_OVER_CUR_DIS_SHIFT   (7U)
#define USBNC_USB_OTGn_CTRL_OVER_CUR_DIS(x)      (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_OVER_CUR_DIS_SHIFT)) & USBNC_USB_OTGn_CTRL_OVER_CUR_DIS_MASK)
#define USBNC_USB_OTGn_CTRL_OVER_CUR_POL_MASK    (0x100U)
#define USBNC_USB_OTGn_CTRL_OVER_CUR_POL_SHIFT   (8U)
#define USBNC_USB_OTGn_CTRL_OVER_CUR_POL(x)      (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_OVER_CUR_POL_SHIFT)) & USBNC_USB_OTGn_CTRL_OVER_CUR_POL_MASK)
#define USBNC_USB_OTGn_CTRL_PWR_POL_MASK         (0x200U)
#define USBNC_USB_OTGn_CTRL_PWR_POL_SHIFT        (9U)
#define USBNC_USB_OTGn_CTRL_PWR_POL(x)           (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_PWR_POL_SHIFT)) & USBNC_USB_OTGn_CTRL_PWR_POL_MASK)
#define USBNC_USB_OTGn_CTRL_WIE_MASK             (0x400U)
#define USBNC_USB_OTGn_CTRL_WIE_SHIFT            (10U)
#define USBNC_USB_OTGn_CTRL_WIE(x)               (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_WIE_SHIFT)) & USBNC_USB_OTGn_CTRL_WIE_MASK)
#define USBNC_USB_OTGn_CTRL_WKUP_SW_EN_MASK      (0x4000U)
#define USBNC_USB_OTGn_CTRL_WKUP_SW_EN_SHIFT     (14U)
#define USBNC_USB_OTGn_CTRL_WKUP_SW_EN(x)        (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_WKUP_SW_EN_SHIFT)) & USBNC_USB_OTGn_CTRL_WKUP_SW_EN_MASK)
#define USBNC_USB_OTGn_CTRL_WKUP_SW_MASK         (0x8000U)
#define USBNC_USB_OTGn_CTRL_WKUP_SW_SHIFT        (15U)
#define USBNC_USB_OTGn_CTRL_WKUP_SW(x)           (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_WKUP_SW_SHIFT)) & USBNC_USB_OTGn_CTRL_WKUP_SW_MASK)
#define USBNC_USB_OTGn_CTRL_WKUP_ID_EN_MASK      (0x10000U)
#define USBNC_USB_OTGn_CTRL_WKUP_ID_EN_SHIFT     (16U)
#define USBNC_USB_OTGn_CTRL_WKUP_ID_EN(x)        (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_WKUP_ID_EN_SHIFT)) & USBNC_USB_OTGn_CTRL_WKUP_ID_EN_MASK)
#define USBNC_USB_OTGn_CTRL_WKUP_VBUS_EN_MASK    (0x20000U)
#define USBNC_USB_OTGn_CTRL_WKUP_VBUS_EN_SHIFT   (17U)
#define USBNC_USB_OTGn_CTRL_WKUP_VBUS_EN(x)      (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_WKUP_VBUS_EN_SHIFT)) & USBNC_USB_OTGn_CTRL_WKUP_VBUS_EN_MASK)
#define USBNC_USB_OTGn_CTRL_WKUP_DPDM_EN_MASK    (0x20000000U)
#define USBNC_USB_OTGn_CTRL_WKUP_DPDM_EN_SHIFT   (29U)
#define USBNC_USB_OTGn_CTRL_WKUP_DPDM_EN(x)      (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_WKUP_DPDM_EN_SHIFT)) & USBNC_USB_OTGn_CTRL_WKUP_DPDM_EN_MASK)
#define USBNC_USB_OTGn_CTRL_WIR_MASK             (0x80000000U)
#define USBNC_USB_OTGn_CTRL_WIR_SHIFT            (31U)
#define USBNC_USB_OTGn_CTRL_WIR(x)               (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_CTRL_WIR_SHIFT)) & USBNC_USB_OTGn_CTRL_WIR_MASK)

/*! @name USB_OTGn_PHY_CTRL_0 - OTGn UTMI PHY Control 0 Register */
#define USBNC_USB_OTGn_PHY_CTRL_0_UTMI_CLK_VLD_MASK (0x80000000U)
#define USBNC_USB_OTGn_PHY_CTRL_0_UTMI_CLK_VLD_SHIFT (31U)
#define USBNC_USB_OTGn_PHY_CTRL_0_UTMI_CLK_VLD(x) (((uint32_t)(((uint32_t)(x)) << USBNC_USB_OTGn_PHY_CTRL_0_UTMI_CLK_VLD_SHIFT)) & USBNC_USB_OTGn_PHY_CTRL_0_UTMI_CLK_VLD_MASK)


/*!
 * @}
 */ /* end of group USBNC_Register_Masks */


/* USBNC - Peripheral instance base addresses */
/** Peripheral USBNC1 base address */
#define USBNC1_BASE                              (0x2184800u)
/** Peripheral USBNC1 base pointer */
#define USBNC1                                   ((USBNC_Type *)USBNC1_BASE)
/** Peripheral USBNC2 base address */
#define USBNC2_BASE                              (0x2184804u)
/** Peripheral USBNC2 base pointer */
#define USBNC2                                   ((USBNC_Type *)USBNC2_BASE)
/** Array initializer of USBNC peripheral base addresses */
#define USBNC_BASE_ADDRS                         { 0u, USBNC1_BASE, USBNC2_BASE }
/** Array initializer of USBNC peripheral base pointers */
#define USBNC_BASE_PTRS                          { (USBNC_Type *)0u, USBNC1, USBNC2 }

/*!
 * @}
 */ /* end of group USBNC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- USBPHY Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USBPHY_Peripheral_Access_Layer USBPHY Peripheral Access Layer
 * @{
 */

/** USBPHY - Register Layout Typedef */
typedef struct {
  __IO uint32_t PWD;                               /**< USB PHY Power-Down Register, offset: 0x0 */
  __IO uint32_t PWD_SET;                           /**< USB PHY Power-Down Register, offset: 0x4 */
  __IO uint32_t PWD_CLR;                           /**< USB PHY Power-Down Register, offset: 0x8 */
  __IO uint32_t PWD_TOG;                           /**< USB PHY Power-Down Register, offset: 0xC */
  __IO uint32_t TX;                                /**< USB PHY Transmitter Control Register, offset: 0x10 */
  __IO uint32_t TX_SET;                            /**< USB PHY Transmitter Control Register, offset: 0x14 */
  __IO uint32_t TX_CLR;                            /**< USB PHY Transmitter Control Register, offset: 0x18 */
  __IO uint32_t TX_TOG;                            /**< USB PHY Transmitter Control Register, offset: 0x1C */
  __IO uint32_t RX;                                /**< USB PHY Receiver Control Register, offset: 0x20 */
  __IO uint32_t RX_SET;                            /**< USB PHY Receiver Control Register, offset: 0x24 */
  __IO uint32_t RX_CLR;                            /**< USB PHY Receiver Control Register, offset: 0x28 */
  __IO uint32_t RX_TOG;                            /**< USB PHY Receiver Control Register, offset: 0x2C */
  __IO uint32_t CTRL;                              /**< USB PHY General Control Register, offset: 0x30 */
  __IO uint32_t CTRL_SET;                          /**< USB PHY General Control Register, offset: 0x34 */
  __IO uint32_t CTRL_CLR;                          /**< USB PHY General Control Register, offset: 0x38 */
  __IO uint32_t CTRL_TOG;                          /**< USB PHY General Control Register, offset: 0x3C */
  __IO uint32_t STATUS;                            /**< USB PHY Status Register, offset: 0x40 */
       uint8_t RESERVED_0[12];
  __IO uint32_t DEBUGr;                            /**< USB PHY Debug Register, offset: 0x50 */
  __IO uint32_t DEBUG_SET;                         /**< USB PHY Debug Register, offset: 0x54 */
  __IO uint32_t DEBUG_CLR;                         /**< USB PHY Debug Register, offset: 0x58 */
  __IO uint32_t DEBUG_TOG;                         /**< USB PHY Debug Register, offset: 0x5C */
  __I  uint32_t DEBUG0_STATUS;                     /**< UTMI Debug Status Register 0, offset: 0x60 */
       uint8_t RESERVED_1[12];
  __IO uint32_t DEBUG1;                            /**< UTMI Debug Status Register 1, offset: 0x70 */
  __IO uint32_t DEBUG1_SET;                        /**< UTMI Debug Status Register 1, offset: 0x74 */
  __IO uint32_t DEBUG1_CLR;                        /**< UTMI Debug Status Register 1, offset: 0x78 */
  __IO uint32_t DEBUG1_TOG;                        /**< UTMI Debug Status Register 1, offset: 0x7C */
  __I  uint32_t VERSION;                           /**< UTMI RTL Version, offset: 0x80 */
} USBPHY_Type;

/* ----------------------------------------------------------------------------
   -- USBPHY Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USBPHY_Register_Masks USBPHY Register Masks
 * @{
 */

/*! @name PWD - USB PHY Power-Down Register */
#define USBPHY_PWD_RSVD0_MASK                    (0x3FFU)
#define USBPHY_PWD_RSVD0_SHIFT                   (0U)
#define USBPHY_PWD_RSVD0(x)                      (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_RSVD0_SHIFT)) & USBPHY_PWD_RSVD0_MASK)
#define USBPHY_PWD_TXPWDFS_MASK                  (0x400U)
#define USBPHY_PWD_TXPWDFS_SHIFT                 (10U)
#define USBPHY_PWD_TXPWDFS(x)                    (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TXPWDFS_SHIFT)) & USBPHY_PWD_TXPWDFS_MASK)
#define USBPHY_PWD_TXPWDIBIAS_MASK               (0x800U)
#define USBPHY_PWD_TXPWDIBIAS_SHIFT              (11U)
#define USBPHY_PWD_TXPWDIBIAS(x)                 (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TXPWDIBIAS_SHIFT)) & USBPHY_PWD_TXPWDIBIAS_MASK)
#define USBPHY_PWD_TXPWDV2I_MASK                 (0x1000U)
#define USBPHY_PWD_TXPWDV2I_SHIFT                (12U)
#define USBPHY_PWD_TXPWDV2I(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TXPWDV2I_SHIFT)) & USBPHY_PWD_TXPWDV2I_MASK)
#define USBPHY_PWD_RSVD1_MASK                    (0x1E000U)
#define USBPHY_PWD_RSVD1_SHIFT                   (13U)
#define USBPHY_PWD_RSVD1(x)                      (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_RSVD1_SHIFT)) & USBPHY_PWD_RSVD1_MASK)
#define USBPHY_PWD_RXPWDENV_MASK                 (0x20000U)
#define USBPHY_PWD_RXPWDENV_SHIFT                (17U)
#define USBPHY_PWD_RXPWDENV(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_RXPWDENV_SHIFT)) & USBPHY_PWD_RXPWDENV_MASK)
#define USBPHY_PWD_RXPWD1PT1_MASK                (0x40000U)
#define USBPHY_PWD_RXPWD1PT1_SHIFT               (18U)
#define USBPHY_PWD_RXPWD1PT1(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_RXPWD1PT1_SHIFT)) & USBPHY_PWD_RXPWD1PT1_MASK)
#define USBPHY_PWD_RXPWDDIFF_MASK                (0x80000U)
#define USBPHY_PWD_RXPWDDIFF_SHIFT               (19U)
#define USBPHY_PWD_RXPWDDIFF(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_RXPWDDIFF_SHIFT)) & USBPHY_PWD_RXPWDDIFF_MASK)
#define USBPHY_PWD_RXPWDRX_MASK                  (0x100000U)
#define USBPHY_PWD_RXPWDRX_SHIFT                 (20U)
#define USBPHY_PWD_RXPWDRX(x)                    (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_RXPWDRX_SHIFT)) & USBPHY_PWD_RXPWDRX_MASK)
#define USBPHY_PWD_RSVD2_MASK                    (0xFFE00000U)
#define USBPHY_PWD_RSVD2_SHIFT                   (21U)
#define USBPHY_PWD_RSVD2(x)                      (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_RSVD2_SHIFT)) & USBPHY_PWD_RSVD2_MASK)

/*! @name PWD_SET - USB PHY Power-Down Register */
#define USBPHY_PWD_SET_RSVD0_MASK                (0x3FFU)
#define USBPHY_PWD_SET_RSVD0_SHIFT               (0U)
#define USBPHY_PWD_SET_RSVD0(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_RSVD0_SHIFT)) & USBPHY_PWD_SET_RSVD0_MASK)
#define USBPHY_PWD_SET_TXPWDFS_MASK              (0x400U)
#define USBPHY_PWD_SET_TXPWDFS_SHIFT             (10U)
#define USBPHY_PWD_SET_TXPWDFS(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_TXPWDFS_SHIFT)) & USBPHY_PWD_SET_TXPWDFS_MASK)
#define USBPHY_PWD_SET_TXPWDIBIAS_MASK           (0x800U)
#define USBPHY_PWD_SET_TXPWDIBIAS_SHIFT          (11U)
#define USBPHY_PWD_SET_TXPWDIBIAS(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_TXPWDIBIAS_SHIFT)) & USBPHY_PWD_SET_TXPWDIBIAS_MASK)
#define USBPHY_PWD_SET_TXPWDV2I_MASK             (0x1000U)
#define USBPHY_PWD_SET_TXPWDV2I_SHIFT            (12U)
#define USBPHY_PWD_SET_TXPWDV2I(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_TXPWDV2I_SHIFT)) & USBPHY_PWD_SET_TXPWDV2I_MASK)
#define USBPHY_PWD_SET_RSVD1_MASK                (0x1E000U)
#define USBPHY_PWD_SET_RSVD1_SHIFT               (13U)
#define USBPHY_PWD_SET_RSVD1(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_RSVD1_SHIFT)) & USBPHY_PWD_SET_RSVD1_MASK)
#define USBPHY_PWD_SET_RXPWDENV_MASK             (0x20000U)
#define USBPHY_PWD_SET_RXPWDENV_SHIFT            (17U)
#define USBPHY_PWD_SET_RXPWDENV(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_RXPWDENV_SHIFT)) & USBPHY_PWD_SET_RXPWDENV_MASK)
#define USBPHY_PWD_SET_RXPWD1PT1_MASK            (0x40000U)
#define USBPHY_PWD_SET_RXPWD1PT1_SHIFT           (18U)
#define USBPHY_PWD_SET_RXPWD1PT1(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_RXPWD1PT1_SHIFT)) & USBPHY_PWD_SET_RXPWD1PT1_MASK)
#define USBPHY_PWD_SET_RXPWDDIFF_MASK            (0x80000U)
#define USBPHY_PWD_SET_RXPWDDIFF_SHIFT           (19U)
#define USBPHY_PWD_SET_RXPWDDIFF(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_RXPWDDIFF_SHIFT)) & USBPHY_PWD_SET_RXPWDDIFF_MASK)
#define USBPHY_PWD_SET_RXPWDRX_MASK              (0x100000U)
#define USBPHY_PWD_SET_RXPWDRX_SHIFT             (20U)
#define USBPHY_PWD_SET_RXPWDRX(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_RXPWDRX_SHIFT)) & USBPHY_PWD_SET_RXPWDRX_MASK)
#define USBPHY_PWD_SET_RSVD2_MASK                (0xFFE00000U)
#define USBPHY_PWD_SET_RSVD2_SHIFT               (21U)
#define USBPHY_PWD_SET_RSVD2(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_SET_RSVD2_SHIFT)) & USBPHY_PWD_SET_RSVD2_MASK)

/*! @name PWD_CLR - USB PHY Power-Down Register */
#define USBPHY_PWD_CLR_RSVD0_MASK                (0x3FFU)
#define USBPHY_PWD_CLR_RSVD0_SHIFT               (0U)
#define USBPHY_PWD_CLR_RSVD0(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_RSVD0_SHIFT)) & USBPHY_PWD_CLR_RSVD0_MASK)
#define USBPHY_PWD_CLR_TXPWDFS_MASK              (0x400U)
#define USBPHY_PWD_CLR_TXPWDFS_SHIFT             (10U)
#define USBPHY_PWD_CLR_TXPWDFS(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_TXPWDFS_SHIFT)) & USBPHY_PWD_CLR_TXPWDFS_MASK)
#define USBPHY_PWD_CLR_TXPWDIBIAS_MASK           (0x800U)
#define USBPHY_PWD_CLR_TXPWDIBIAS_SHIFT          (11U)
#define USBPHY_PWD_CLR_TXPWDIBIAS(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_TXPWDIBIAS_SHIFT)) & USBPHY_PWD_CLR_TXPWDIBIAS_MASK)
#define USBPHY_PWD_CLR_TXPWDV2I_MASK             (0x1000U)
#define USBPHY_PWD_CLR_TXPWDV2I_SHIFT            (12U)
#define USBPHY_PWD_CLR_TXPWDV2I(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_TXPWDV2I_SHIFT)) & USBPHY_PWD_CLR_TXPWDV2I_MASK)
#define USBPHY_PWD_CLR_RSVD1_MASK                (0x1E000U)
#define USBPHY_PWD_CLR_RSVD1_SHIFT               (13U)
#define USBPHY_PWD_CLR_RSVD1(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_RSVD1_SHIFT)) & USBPHY_PWD_CLR_RSVD1_MASK)
#define USBPHY_PWD_CLR_RXPWDENV_MASK             (0x20000U)
#define USBPHY_PWD_CLR_RXPWDENV_SHIFT            (17U)
#define USBPHY_PWD_CLR_RXPWDENV(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_RXPWDENV_SHIFT)) & USBPHY_PWD_CLR_RXPWDENV_MASK)
#define USBPHY_PWD_CLR_RXPWD1PT1_MASK            (0x40000U)
#define USBPHY_PWD_CLR_RXPWD1PT1_SHIFT           (18U)
#define USBPHY_PWD_CLR_RXPWD1PT1(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_RXPWD1PT1_SHIFT)) & USBPHY_PWD_CLR_RXPWD1PT1_MASK)
#define USBPHY_PWD_CLR_RXPWDDIFF_MASK            (0x80000U)
#define USBPHY_PWD_CLR_RXPWDDIFF_SHIFT           (19U)
#define USBPHY_PWD_CLR_RXPWDDIFF(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_RXPWDDIFF_SHIFT)) & USBPHY_PWD_CLR_RXPWDDIFF_MASK)
#define USBPHY_PWD_CLR_RXPWDRX_MASK              (0x100000U)
#define USBPHY_PWD_CLR_RXPWDRX_SHIFT             (20U)
#define USBPHY_PWD_CLR_RXPWDRX(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_RXPWDRX_SHIFT)) & USBPHY_PWD_CLR_RXPWDRX_MASK)
#define USBPHY_PWD_CLR_RSVD2_MASK                (0xFFE00000U)
#define USBPHY_PWD_CLR_RSVD2_SHIFT               (21U)
#define USBPHY_PWD_CLR_RSVD2(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_CLR_RSVD2_SHIFT)) & USBPHY_PWD_CLR_RSVD2_MASK)

/*! @name PWD_TOG - USB PHY Power-Down Register */
#define USBPHY_PWD_TOG_RSVD0_MASK                (0x3FFU)
#define USBPHY_PWD_TOG_RSVD0_SHIFT               (0U)
#define USBPHY_PWD_TOG_RSVD0(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_RSVD0_SHIFT)) & USBPHY_PWD_TOG_RSVD0_MASK)
#define USBPHY_PWD_TOG_TXPWDFS_MASK              (0x400U)
#define USBPHY_PWD_TOG_TXPWDFS_SHIFT             (10U)
#define USBPHY_PWD_TOG_TXPWDFS(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_TXPWDFS_SHIFT)) & USBPHY_PWD_TOG_TXPWDFS_MASK)
#define USBPHY_PWD_TOG_TXPWDIBIAS_MASK           (0x800U)
#define USBPHY_PWD_TOG_TXPWDIBIAS_SHIFT          (11U)
#define USBPHY_PWD_TOG_TXPWDIBIAS(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_TXPWDIBIAS_SHIFT)) & USBPHY_PWD_TOG_TXPWDIBIAS_MASK)
#define USBPHY_PWD_TOG_TXPWDV2I_MASK             (0x1000U)
#define USBPHY_PWD_TOG_TXPWDV2I_SHIFT            (12U)
#define USBPHY_PWD_TOG_TXPWDV2I(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_TXPWDV2I_SHIFT)) & USBPHY_PWD_TOG_TXPWDV2I_MASK)
#define USBPHY_PWD_TOG_RSVD1_MASK                (0x1E000U)
#define USBPHY_PWD_TOG_RSVD1_SHIFT               (13U)
#define USBPHY_PWD_TOG_RSVD1(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_RSVD1_SHIFT)) & USBPHY_PWD_TOG_RSVD1_MASK)
#define USBPHY_PWD_TOG_RXPWDENV_MASK             (0x20000U)
#define USBPHY_PWD_TOG_RXPWDENV_SHIFT            (17U)
#define USBPHY_PWD_TOG_RXPWDENV(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_RXPWDENV_SHIFT)) & USBPHY_PWD_TOG_RXPWDENV_MASK)
#define USBPHY_PWD_TOG_RXPWD1PT1_MASK            (0x40000U)
#define USBPHY_PWD_TOG_RXPWD1PT1_SHIFT           (18U)
#define USBPHY_PWD_TOG_RXPWD1PT1(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_RXPWD1PT1_SHIFT)) & USBPHY_PWD_TOG_RXPWD1PT1_MASK)
#define USBPHY_PWD_TOG_RXPWDDIFF_MASK            (0x80000U)
#define USBPHY_PWD_TOG_RXPWDDIFF_SHIFT           (19U)
#define USBPHY_PWD_TOG_RXPWDDIFF(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_RXPWDDIFF_SHIFT)) & USBPHY_PWD_TOG_RXPWDDIFF_MASK)
#define USBPHY_PWD_TOG_RXPWDRX_MASK              (0x100000U)
#define USBPHY_PWD_TOG_RXPWDRX_SHIFT             (20U)
#define USBPHY_PWD_TOG_RXPWDRX(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_RXPWDRX_SHIFT)) & USBPHY_PWD_TOG_RXPWDRX_MASK)
#define USBPHY_PWD_TOG_RSVD2_MASK                (0xFFE00000U)
#define USBPHY_PWD_TOG_RSVD2_SHIFT               (21U)
#define USBPHY_PWD_TOG_RSVD2(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_PWD_TOG_RSVD2_SHIFT)) & USBPHY_PWD_TOG_RSVD2_MASK)

/*! @name TX - USB PHY Transmitter Control Register */
#define USBPHY_TX_D_CAL_MASK                     (0xFU)
#define USBPHY_TX_D_CAL_SHIFT                    (0U)
#define USBPHY_TX_D_CAL(x)                       (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_D_CAL_SHIFT)) & USBPHY_TX_D_CAL_MASK)
#define USBPHY_TX_RSVD0_MASK                     (0xF0U)
#define USBPHY_TX_RSVD0_SHIFT                    (4U)
#define USBPHY_TX_RSVD0(x)                       (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_RSVD0_SHIFT)) & USBPHY_TX_RSVD0_MASK)
#define USBPHY_TX_TXCAL45DN_MASK                 (0xF00U)
#define USBPHY_TX_TXCAL45DN_SHIFT                (8U)
#define USBPHY_TX_TXCAL45DN(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TXCAL45DN_SHIFT)) & USBPHY_TX_TXCAL45DN_MASK)
#define USBPHY_TX_RSVD1_MASK                     (0xF000U)
#define USBPHY_TX_RSVD1_SHIFT                    (12U)
#define USBPHY_TX_RSVD1(x)                       (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_RSVD1_SHIFT)) & USBPHY_TX_RSVD1_MASK)
#define USBPHY_TX_TXCAL45DP_MASK                 (0xF0000U)
#define USBPHY_TX_TXCAL45DP_SHIFT                (16U)
#define USBPHY_TX_TXCAL45DP(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TXCAL45DP_SHIFT)) & USBPHY_TX_TXCAL45DP_MASK)
#define USBPHY_TX_RSVD2_MASK                     (0x3F00000U)
#define USBPHY_TX_RSVD2_SHIFT                    (20U)
#define USBPHY_TX_RSVD2(x)                       (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_RSVD2_SHIFT)) & USBPHY_TX_RSVD2_MASK)
#define USBPHY_TX_USBPHY_TX_EDGECTRL_MASK        (0x1C000000U)
#define USBPHY_TX_USBPHY_TX_EDGECTRL_SHIFT       (26U)
#define USBPHY_TX_USBPHY_TX_EDGECTRL(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_USBPHY_TX_EDGECTRL_SHIFT)) & USBPHY_TX_USBPHY_TX_EDGECTRL_MASK)
#define USBPHY_TX_RSVD5_MASK                     (0xE0000000U)
#define USBPHY_TX_RSVD5_SHIFT                    (29U)
#define USBPHY_TX_RSVD5(x)                       (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_RSVD5_SHIFT)) & USBPHY_TX_RSVD5_MASK)

/*! @name TX_SET - USB PHY Transmitter Control Register */
#define USBPHY_TX_SET_D_CAL_MASK                 (0xFU)
#define USBPHY_TX_SET_D_CAL_SHIFT                (0U)
#define USBPHY_TX_SET_D_CAL(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_SET_D_CAL_SHIFT)) & USBPHY_TX_SET_D_CAL_MASK)
#define USBPHY_TX_SET_RSVD0_MASK                 (0xF0U)
#define USBPHY_TX_SET_RSVD0_SHIFT                (4U)
#define USBPHY_TX_SET_RSVD0(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_SET_RSVD0_SHIFT)) & USBPHY_TX_SET_RSVD0_MASK)
#define USBPHY_TX_SET_TXCAL45DN_MASK             (0xF00U)
#define USBPHY_TX_SET_TXCAL45DN_SHIFT            (8U)
#define USBPHY_TX_SET_TXCAL45DN(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_SET_TXCAL45DN_SHIFT)) & USBPHY_TX_SET_TXCAL45DN_MASK)
#define USBPHY_TX_SET_RSVD1_MASK                 (0xF000U)
#define USBPHY_TX_SET_RSVD1_SHIFT                (12U)
#define USBPHY_TX_SET_RSVD1(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_SET_RSVD1_SHIFT)) & USBPHY_TX_SET_RSVD1_MASK)
#define USBPHY_TX_SET_TXCAL45DP_MASK             (0xF0000U)
#define USBPHY_TX_SET_TXCAL45DP_SHIFT            (16U)
#define USBPHY_TX_SET_TXCAL45DP(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_SET_TXCAL45DP_SHIFT)) & USBPHY_TX_SET_TXCAL45DP_MASK)
#define USBPHY_TX_SET_RSVD2_MASK                 (0x3F00000U)
#define USBPHY_TX_SET_RSVD2_SHIFT                (20U)
#define USBPHY_TX_SET_RSVD2(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_SET_RSVD2_SHIFT)) & USBPHY_TX_SET_RSVD2_MASK)
#define USBPHY_TX_SET_USBPHY_TX_EDGECTRL_MASK    (0x1C000000U)
#define USBPHY_TX_SET_USBPHY_TX_EDGECTRL_SHIFT   (26U)
#define USBPHY_TX_SET_USBPHY_TX_EDGECTRL(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_SET_USBPHY_TX_EDGECTRL_SHIFT)) & USBPHY_TX_SET_USBPHY_TX_EDGECTRL_MASK)
#define USBPHY_TX_SET_RSVD5_MASK                 (0xE0000000U)
#define USBPHY_TX_SET_RSVD5_SHIFT                (29U)
#define USBPHY_TX_SET_RSVD5(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_SET_RSVD5_SHIFT)) & USBPHY_TX_SET_RSVD5_MASK)

/*! @name TX_CLR - USB PHY Transmitter Control Register */
#define USBPHY_TX_CLR_D_CAL_MASK                 (0xFU)
#define USBPHY_TX_CLR_D_CAL_SHIFT                (0U)
#define USBPHY_TX_CLR_D_CAL(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_CLR_D_CAL_SHIFT)) & USBPHY_TX_CLR_D_CAL_MASK)
#define USBPHY_TX_CLR_RSVD0_MASK                 (0xF0U)
#define USBPHY_TX_CLR_RSVD0_SHIFT                (4U)
#define USBPHY_TX_CLR_RSVD0(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_CLR_RSVD0_SHIFT)) & USBPHY_TX_CLR_RSVD0_MASK)
#define USBPHY_TX_CLR_TXCAL45DN_MASK             (0xF00U)
#define USBPHY_TX_CLR_TXCAL45DN_SHIFT            (8U)
#define USBPHY_TX_CLR_TXCAL45DN(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_CLR_TXCAL45DN_SHIFT)) & USBPHY_TX_CLR_TXCAL45DN_MASK)
#define USBPHY_TX_CLR_RSVD1_MASK                 (0xF000U)
#define USBPHY_TX_CLR_RSVD1_SHIFT                (12U)
#define USBPHY_TX_CLR_RSVD1(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_CLR_RSVD1_SHIFT)) & USBPHY_TX_CLR_RSVD1_MASK)
#define USBPHY_TX_CLR_TXCAL45DP_MASK             (0xF0000U)
#define USBPHY_TX_CLR_TXCAL45DP_SHIFT            (16U)
#define USBPHY_TX_CLR_TXCAL45DP(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_CLR_TXCAL45DP_SHIFT)) & USBPHY_TX_CLR_TXCAL45DP_MASK)
#define USBPHY_TX_CLR_RSVD2_MASK                 (0x3F00000U)
#define USBPHY_TX_CLR_RSVD2_SHIFT                (20U)
#define USBPHY_TX_CLR_RSVD2(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_CLR_RSVD2_SHIFT)) & USBPHY_TX_CLR_RSVD2_MASK)
#define USBPHY_TX_CLR_USBPHY_TX_EDGECTRL_MASK    (0x1C000000U)
#define USBPHY_TX_CLR_USBPHY_TX_EDGECTRL_SHIFT   (26U)
#define USBPHY_TX_CLR_USBPHY_TX_EDGECTRL(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_CLR_USBPHY_TX_EDGECTRL_SHIFT)) & USBPHY_TX_CLR_USBPHY_TX_EDGECTRL_MASK)
#define USBPHY_TX_CLR_RSVD5_MASK                 (0xE0000000U)
#define USBPHY_TX_CLR_RSVD5_SHIFT                (29U)
#define USBPHY_TX_CLR_RSVD5(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_CLR_RSVD5_SHIFT)) & USBPHY_TX_CLR_RSVD5_MASK)

/*! @name TX_TOG - USB PHY Transmitter Control Register */
#define USBPHY_TX_TOG_D_CAL_MASK                 (0xFU)
#define USBPHY_TX_TOG_D_CAL_SHIFT                (0U)
#define USBPHY_TX_TOG_D_CAL(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TOG_D_CAL_SHIFT)) & USBPHY_TX_TOG_D_CAL_MASK)
#define USBPHY_TX_TOG_RSVD0_MASK                 (0xF0U)
#define USBPHY_TX_TOG_RSVD0_SHIFT                (4U)
#define USBPHY_TX_TOG_RSVD0(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TOG_RSVD0_SHIFT)) & USBPHY_TX_TOG_RSVD0_MASK)
#define USBPHY_TX_TOG_TXCAL45DN_MASK             (0xF00U)
#define USBPHY_TX_TOG_TXCAL45DN_SHIFT            (8U)
#define USBPHY_TX_TOG_TXCAL45DN(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TOG_TXCAL45DN_SHIFT)) & USBPHY_TX_TOG_TXCAL45DN_MASK)
#define USBPHY_TX_TOG_RSVD1_MASK                 (0xF000U)
#define USBPHY_TX_TOG_RSVD1_SHIFT                (12U)
#define USBPHY_TX_TOG_RSVD1(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TOG_RSVD1_SHIFT)) & USBPHY_TX_TOG_RSVD1_MASK)
#define USBPHY_TX_TOG_TXCAL45DP_MASK             (0xF0000U)
#define USBPHY_TX_TOG_TXCAL45DP_SHIFT            (16U)
#define USBPHY_TX_TOG_TXCAL45DP(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TOG_TXCAL45DP_SHIFT)) & USBPHY_TX_TOG_TXCAL45DP_MASK)
#define USBPHY_TX_TOG_RSVD2_MASK                 (0x3F00000U)
#define USBPHY_TX_TOG_RSVD2_SHIFT                (20U)
#define USBPHY_TX_TOG_RSVD2(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TOG_RSVD2_SHIFT)) & USBPHY_TX_TOG_RSVD2_MASK)
#define USBPHY_TX_TOG_USBPHY_TX_EDGECTRL_MASK    (0x1C000000U)
#define USBPHY_TX_TOG_USBPHY_TX_EDGECTRL_SHIFT   (26U)
#define USBPHY_TX_TOG_USBPHY_TX_EDGECTRL(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TOG_USBPHY_TX_EDGECTRL_SHIFT)) & USBPHY_TX_TOG_USBPHY_TX_EDGECTRL_MASK)
#define USBPHY_TX_TOG_RSVD5_MASK                 (0xE0000000U)
#define USBPHY_TX_TOG_RSVD5_SHIFT                (29U)
#define USBPHY_TX_TOG_RSVD5(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_TX_TOG_RSVD5_SHIFT)) & USBPHY_TX_TOG_RSVD5_MASK)

/*! @name RX - USB PHY Receiver Control Register */
#define USBPHY_RX_ENVADJ_MASK                    (0x7U)
#define USBPHY_RX_ENVADJ_SHIFT                   (0U)
#define USBPHY_RX_ENVADJ(x)                      (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_ENVADJ_SHIFT)) & USBPHY_RX_ENVADJ_MASK)
#define USBPHY_RX_RSVD0_MASK                     (0x8U)
#define USBPHY_RX_RSVD0_SHIFT                    (3U)
#define USBPHY_RX_RSVD0(x)                       (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_RSVD0_SHIFT)) & USBPHY_RX_RSVD0_MASK)
#define USBPHY_RX_DISCONADJ_MASK                 (0x70U)
#define USBPHY_RX_DISCONADJ_SHIFT                (4U)
#define USBPHY_RX_DISCONADJ(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_DISCONADJ_SHIFT)) & USBPHY_RX_DISCONADJ_MASK)
#define USBPHY_RX_RSVD1_MASK                     (0x3FFF80U)
#define USBPHY_RX_RSVD1_SHIFT                    (7U)
#define USBPHY_RX_RSVD1(x)                       (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_RSVD1_SHIFT)) & USBPHY_RX_RSVD1_MASK)
#define USBPHY_RX_RXDBYPASS_MASK                 (0x400000U)
#define USBPHY_RX_RXDBYPASS_SHIFT                (22U)
#define USBPHY_RX_RXDBYPASS(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_RXDBYPASS_SHIFT)) & USBPHY_RX_RXDBYPASS_MASK)
#define USBPHY_RX_RSVD2_MASK                     (0xFF800000U)
#define USBPHY_RX_RSVD2_SHIFT                    (23U)
#define USBPHY_RX_RSVD2(x)                       (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_RSVD2_SHIFT)) & USBPHY_RX_RSVD2_MASK)

/*! @name RX_SET - USB PHY Receiver Control Register */
#define USBPHY_RX_SET_ENVADJ_MASK                (0x7U)
#define USBPHY_RX_SET_ENVADJ_SHIFT               (0U)
#define USBPHY_RX_SET_ENVADJ(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_SET_ENVADJ_SHIFT)) & USBPHY_RX_SET_ENVADJ_MASK)
#define USBPHY_RX_SET_RSVD0_MASK                 (0x8U)
#define USBPHY_RX_SET_RSVD0_SHIFT                (3U)
#define USBPHY_RX_SET_RSVD0(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_SET_RSVD0_SHIFT)) & USBPHY_RX_SET_RSVD0_MASK)
#define USBPHY_RX_SET_DISCONADJ_MASK             (0x70U)
#define USBPHY_RX_SET_DISCONADJ_SHIFT            (4U)
#define USBPHY_RX_SET_DISCONADJ(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_SET_DISCONADJ_SHIFT)) & USBPHY_RX_SET_DISCONADJ_MASK)
#define USBPHY_RX_SET_RSVD1_MASK                 (0x3FFF80U)
#define USBPHY_RX_SET_RSVD1_SHIFT                (7U)
#define USBPHY_RX_SET_RSVD1(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_SET_RSVD1_SHIFT)) & USBPHY_RX_SET_RSVD1_MASK)
#define USBPHY_RX_SET_RXDBYPASS_MASK             (0x400000U)
#define USBPHY_RX_SET_RXDBYPASS_SHIFT            (22U)
#define USBPHY_RX_SET_RXDBYPASS(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_SET_RXDBYPASS_SHIFT)) & USBPHY_RX_SET_RXDBYPASS_MASK)
#define USBPHY_RX_SET_RSVD2_MASK                 (0xFF800000U)
#define USBPHY_RX_SET_RSVD2_SHIFT                (23U)
#define USBPHY_RX_SET_RSVD2(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_SET_RSVD2_SHIFT)) & USBPHY_RX_SET_RSVD2_MASK)

/*! @name RX_CLR - USB PHY Receiver Control Register */
#define USBPHY_RX_CLR_ENVADJ_MASK                (0x7U)
#define USBPHY_RX_CLR_ENVADJ_SHIFT               (0U)
#define USBPHY_RX_CLR_ENVADJ(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_CLR_ENVADJ_SHIFT)) & USBPHY_RX_CLR_ENVADJ_MASK)
#define USBPHY_RX_CLR_RSVD0_MASK                 (0x8U)
#define USBPHY_RX_CLR_RSVD0_SHIFT                (3U)
#define USBPHY_RX_CLR_RSVD0(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_CLR_RSVD0_SHIFT)) & USBPHY_RX_CLR_RSVD0_MASK)
#define USBPHY_RX_CLR_DISCONADJ_MASK             (0x70U)
#define USBPHY_RX_CLR_DISCONADJ_SHIFT            (4U)
#define USBPHY_RX_CLR_DISCONADJ(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_CLR_DISCONADJ_SHIFT)) & USBPHY_RX_CLR_DISCONADJ_MASK)
#define USBPHY_RX_CLR_RSVD1_MASK                 (0x3FFF80U)
#define USBPHY_RX_CLR_RSVD1_SHIFT                (7U)
#define USBPHY_RX_CLR_RSVD1(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_CLR_RSVD1_SHIFT)) & USBPHY_RX_CLR_RSVD1_MASK)
#define USBPHY_RX_CLR_RXDBYPASS_MASK             (0x400000U)
#define USBPHY_RX_CLR_RXDBYPASS_SHIFT            (22U)
#define USBPHY_RX_CLR_RXDBYPASS(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_CLR_RXDBYPASS_SHIFT)) & USBPHY_RX_CLR_RXDBYPASS_MASK)
#define USBPHY_RX_CLR_RSVD2_MASK                 (0xFF800000U)
#define USBPHY_RX_CLR_RSVD2_SHIFT                (23U)
#define USBPHY_RX_CLR_RSVD2(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_CLR_RSVD2_SHIFT)) & USBPHY_RX_CLR_RSVD2_MASK)

/*! @name RX_TOG - USB PHY Receiver Control Register */
#define USBPHY_RX_TOG_ENVADJ_MASK                (0x7U)
#define USBPHY_RX_TOG_ENVADJ_SHIFT               (0U)
#define USBPHY_RX_TOG_ENVADJ(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_TOG_ENVADJ_SHIFT)) & USBPHY_RX_TOG_ENVADJ_MASK)
#define USBPHY_RX_TOG_RSVD0_MASK                 (0x8U)
#define USBPHY_RX_TOG_RSVD0_SHIFT                (3U)
#define USBPHY_RX_TOG_RSVD0(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_TOG_RSVD0_SHIFT)) & USBPHY_RX_TOG_RSVD0_MASK)
#define USBPHY_RX_TOG_DISCONADJ_MASK             (0x70U)
#define USBPHY_RX_TOG_DISCONADJ_SHIFT            (4U)
#define USBPHY_RX_TOG_DISCONADJ(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_TOG_DISCONADJ_SHIFT)) & USBPHY_RX_TOG_DISCONADJ_MASK)
#define USBPHY_RX_TOG_RSVD1_MASK                 (0x3FFF80U)
#define USBPHY_RX_TOG_RSVD1_SHIFT                (7U)
#define USBPHY_RX_TOG_RSVD1(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_TOG_RSVD1_SHIFT)) & USBPHY_RX_TOG_RSVD1_MASK)
#define USBPHY_RX_TOG_RXDBYPASS_MASK             (0x400000U)
#define USBPHY_RX_TOG_RXDBYPASS_SHIFT            (22U)
#define USBPHY_RX_TOG_RXDBYPASS(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_TOG_RXDBYPASS_SHIFT)) & USBPHY_RX_TOG_RXDBYPASS_MASK)
#define USBPHY_RX_TOG_RSVD2_MASK                 (0xFF800000U)
#define USBPHY_RX_TOG_RSVD2_SHIFT                (23U)
#define USBPHY_RX_TOG_RSVD2(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_RX_TOG_RSVD2_SHIFT)) & USBPHY_RX_TOG_RSVD2_MASK)

/*! @name CTRL - USB PHY General Control Register */
#define USBPHY_CTRL_ENOTG_ID_CHG_IRQ_MASK        (0x1U)
#define USBPHY_CTRL_ENOTG_ID_CHG_IRQ_SHIFT       (0U)
#define USBPHY_CTRL_ENOTG_ID_CHG_IRQ(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENOTG_ID_CHG_IRQ_SHIFT)) & USBPHY_CTRL_ENOTG_ID_CHG_IRQ_MASK)
#define USBPHY_CTRL_ENHOSTDISCONDETECT_MASK      (0x2U)
#define USBPHY_CTRL_ENHOSTDISCONDETECT_SHIFT     (1U)
#define USBPHY_CTRL_ENHOSTDISCONDETECT(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENHOSTDISCONDETECT_SHIFT)) & USBPHY_CTRL_ENHOSTDISCONDETECT_MASK)
#define USBPHY_CTRL_ENIRQHOSTDISCON_MASK         (0x4U)
#define USBPHY_CTRL_ENIRQHOSTDISCON_SHIFT        (2U)
#define USBPHY_CTRL_ENIRQHOSTDISCON(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENIRQHOSTDISCON_SHIFT)) & USBPHY_CTRL_ENIRQHOSTDISCON_MASK)
#define USBPHY_CTRL_HOSTDISCONDETECT_IRQ_MASK    (0x8U)
#define USBPHY_CTRL_HOSTDISCONDETECT_IRQ_SHIFT   (3U)
#define USBPHY_CTRL_HOSTDISCONDETECT_IRQ(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_HOSTDISCONDETECT_IRQ_SHIFT)) & USBPHY_CTRL_HOSTDISCONDETECT_IRQ_MASK)
#define USBPHY_CTRL_ENDEVPLUGINDETECT_MASK       (0x10U)
#define USBPHY_CTRL_ENDEVPLUGINDETECT_SHIFT      (4U)
#define USBPHY_CTRL_ENDEVPLUGINDETECT(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENDEVPLUGINDETECT_SHIFT)) & USBPHY_CTRL_ENDEVPLUGINDETECT_MASK)
#define USBPHY_CTRL_DEVPLUGIN_POLARITY_MASK      (0x20U)
#define USBPHY_CTRL_DEVPLUGIN_POLARITY_SHIFT     (5U)
#define USBPHY_CTRL_DEVPLUGIN_POLARITY(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_DEVPLUGIN_POLARITY_SHIFT)) & USBPHY_CTRL_DEVPLUGIN_POLARITY_MASK)
#define USBPHY_CTRL_OTG_ID_CHG_IRQ_MASK          (0x40U)
#define USBPHY_CTRL_OTG_ID_CHG_IRQ_SHIFT         (6U)
#define USBPHY_CTRL_OTG_ID_CHG_IRQ(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_OTG_ID_CHG_IRQ_SHIFT)) & USBPHY_CTRL_OTG_ID_CHG_IRQ_MASK)
#define USBPHY_CTRL_ENOTGIDDETECT_MASK           (0x80U)
#define USBPHY_CTRL_ENOTGIDDETECT_SHIFT          (7U)
#define USBPHY_CTRL_ENOTGIDDETECT(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENOTGIDDETECT_SHIFT)) & USBPHY_CTRL_ENOTGIDDETECT_MASK)
#define USBPHY_CTRL_RESUMEIRQSTICKY_MASK         (0x100U)
#define USBPHY_CTRL_RESUMEIRQSTICKY_SHIFT        (8U)
#define USBPHY_CTRL_RESUMEIRQSTICKY(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_RESUMEIRQSTICKY_SHIFT)) & USBPHY_CTRL_RESUMEIRQSTICKY_MASK)
#define USBPHY_CTRL_ENIRQRESUMEDETECT_MASK       (0x200U)
#define USBPHY_CTRL_ENIRQRESUMEDETECT_SHIFT      (9U)
#define USBPHY_CTRL_ENIRQRESUMEDETECT(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENIRQRESUMEDETECT_SHIFT)) & USBPHY_CTRL_ENIRQRESUMEDETECT_MASK)
#define USBPHY_CTRL_RESUME_IRQ_MASK              (0x400U)
#define USBPHY_CTRL_RESUME_IRQ_SHIFT             (10U)
#define USBPHY_CTRL_RESUME_IRQ(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_RESUME_IRQ_SHIFT)) & USBPHY_CTRL_RESUME_IRQ_MASK)
#define USBPHY_CTRL_ENIRQDEVPLUGIN_MASK          (0x800U)
#define USBPHY_CTRL_ENIRQDEVPLUGIN_SHIFT         (11U)
#define USBPHY_CTRL_ENIRQDEVPLUGIN(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENIRQDEVPLUGIN_SHIFT)) & USBPHY_CTRL_ENIRQDEVPLUGIN_MASK)
#define USBPHY_CTRL_DEVPLUGIN_IRQ_MASK           (0x1000U)
#define USBPHY_CTRL_DEVPLUGIN_IRQ_SHIFT          (12U)
#define USBPHY_CTRL_DEVPLUGIN_IRQ(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_DEVPLUGIN_IRQ_SHIFT)) & USBPHY_CTRL_DEVPLUGIN_IRQ_MASK)
#define USBPHY_CTRL_DATA_ON_LRADC_MASK           (0x2000U)
#define USBPHY_CTRL_DATA_ON_LRADC_SHIFT          (13U)
#define USBPHY_CTRL_DATA_ON_LRADC(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_DATA_ON_LRADC_SHIFT)) & USBPHY_CTRL_DATA_ON_LRADC_MASK)
#define USBPHY_CTRL_ENUTMILEVEL2_MASK            (0x4000U)
#define USBPHY_CTRL_ENUTMILEVEL2_SHIFT           (14U)
#define USBPHY_CTRL_ENUTMILEVEL2(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENUTMILEVEL2_SHIFT)) & USBPHY_CTRL_ENUTMILEVEL2_MASK)
#define USBPHY_CTRL_ENUTMILEVEL3_MASK            (0x8000U)
#define USBPHY_CTRL_ENUTMILEVEL3_SHIFT           (15U)
#define USBPHY_CTRL_ENUTMILEVEL3(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENUTMILEVEL3_SHIFT)) & USBPHY_CTRL_ENUTMILEVEL3_MASK)
#define USBPHY_CTRL_ENIRQWAKEUP_MASK             (0x10000U)
#define USBPHY_CTRL_ENIRQWAKEUP_SHIFT            (16U)
#define USBPHY_CTRL_ENIRQWAKEUP(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENIRQWAKEUP_SHIFT)) & USBPHY_CTRL_ENIRQWAKEUP_MASK)
#define USBPHY_CTRL_WAKEUP_IRQ_MASK              (0x20000U)
#define USBPHY_CTRL_WAKEUP_IRQ_SHIFT             (17U)
#define USBPHY_CTRL_WAKEUP_IRQ(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_WAKEUP_IRQ_SHIFT)) & USBPHY_CTRL_WAKEUP_IRQ_MASK)
#define USBPHY_CTRL_ENAUTO_PWRON_PLL_MASK        (0x40000U)
#define USBPHY_CTRL_ENAUTO_PWRON_PLL_SHIFT       (18U)
#define USBPHY_CTRL_ENAUTO_PWRON_PLL(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENAUTO_PWRON_PLL_SHIFT)) & USBPHY_CTRL_ENAUTO_PWRON_PLL_MASK)
#define USBPHY_CTRL_ENAUTOCLR_CLKGATE_MASK       (0x80000U)
#define USBPHY_CTRL_ENAUTOCLR_CLKGATE_SHIFT      (19U)
#define USBPHY_CTRL_ENAUTOCLR_CLKGATE(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENAUTOCLR_CLKGATE_SHIFT)) & USBPHY_CTRL_ENAUTOCLR_CLKGATE_MASK)
#define USBPHY_CTRL_ENAUTOCLR_PHY_PWD_MASK       (0x100000U)
#define USBPHY_CTRL_ENAUTOCLR_PHY_PWD_SHIFT      (20U)
#define USBPHY_CTRL_ENAUTOCLR_PHY_PWD(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENAUTOCLR_PHY_PWD_SHIFT)) & USBPHY_CTRL_ENAUTOCLR_PHY_PWD_MASK)
#define USBPHY_CTRL_ENDPDMCHG_WKUP_MASK          (0x200000U)
#define USBPHY_CTRL_ENDPDMCHG_WKUP_SHIFT         (21U)
#define USBPHY_CTRL_ENDPDMCHG_WKUP(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENDPDMCHG_WKUP_SHIFT)) & USBPHY_CTRL_ENDPDMCHG_WKUP_MASK)
#define USBPHY_CTRL_ENIDCHG_WKUP_MASK            (0x400000U)
#define USBPHY_CTRL_ENIDCHG_WKUP_SHIFT           (22U)
#define USBPHY_CTRL_ENIDCHG_WKUP(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENIDCHG_WKUP_SHIFT)) & USBPHY_CTRL_ENIDCHG_WKUP_MASK)
#define USBPHY_CTRL_ENVBUSCHG_WKUP_MASK          (0x800000U)
#define USBPHY_CTRL_ENVBUSCHG_WKUP_SHIFT         (23U)
#define USBPHY_CTRL_ENVBUSCHG_WKUP(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_ENVBUSCHG_WKUP_SHIFT)) & USBPHY_CTRL_ENVBUSCHG_WKUP_MASK)
#define USBPHY_CTRL_FSDLL_RST_EN_MASK            (0x1000000U)
#define USBPHY_CTRL_FSDLL_RST_EN_SHIFT           (24U)
#define USBPHY_CTRL_FSDLL_RST_EN(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_FSDLL_RST_EN_SHIFT)) & USBPHY_CTRL_FSDLL_RST_EN_MASK)
#define USBPHY_CTRL_RSVD1_MASK                   (0x6000000U)
#define USBPHY_CTRL_RSVD1_SHIFT                  (25U)
#define USBPHY_CTRL_RSVD1(x)                     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_RSVD1_SHIFT)) & USBPHY_CTRL_RSVD1_MASK)
#define USBPHY_CTRL_OTG_ID_VALUE_MASK            (0x8000000U)
#define USBPHY_CTRL_OTG_ID_VALUE_SHIFT           (27U)
#define USBPHY_CTRL_OTG_ID_VALUE(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_OTG_ID_VALUE_SHIFT)) & USBPHY_CTRL_OTG_ID_VALUE_MASK)
#define USBPHY_CTRL_HOST_FORCE_LS_SE0_MASK       (0x10000000U)
#define USBPHY_CTRL_HOST_FORCE_LS_SE0_SHIFT      (28U)
#define USBPHY_CTRL_HOST_FORCE_LS_SE0(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_HOST_FORCE_LS_SE0_SHIFT)) & USBPHY_CTRL_HOST_FORCE_LS_SE0_MASK)
#define USBPHY_CTRL_UTMI_SUSPENDM_MASK           (0x20000000U)
#define USBPHY_CTRL_UTMI_SUSPENDM_SHIFT          (29U)
#define USBPHY_CTRL_UTMI_SUSPENDM(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_UTMI_SUSPENDM_SHIFT)) & USBPHY_CTRL_UTMI_SUSPENDM_MASK)
#define USBPHY_CTRL_CLKGATE_MASK                 (0x40000000U)
#define USBPHY_CTRL_CLKGATE_SHIFT                (30U)
#define USBPHY_CTRL_CLKGATE(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLKGATE_SHIFT)) & USBPHY_CTRL_CLKGATE_MASK)
#define USBPHY_CTRL_SFTRST_MASK                  (0x80000000U)
#define USBPHY_CTRL_SFTRST_SHIFT                 (31U)
#define USBPHY_CTRL_SFTRST(x)                    (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SFTRST_SHIFT)) & USBPHY_CTRL_SFTRST_MASK)

/*! @name CTRL_SET - USB PHY General Control Register */
#define USBPHY_CTRL_SET_ENOTG_ID_CHG_IRQ_MASK    (0x1U)
#define USBPHY_CTRL_SET_ENOTG_ID_CHG_IRQ_SHIFT   (0U)
#define USBPHY_CTRL_SET_ENOTG_ID_CHG_IRQ(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENOTG_ID_CHG_IRQ_SHIFT)) & USBPHY_CTRL_SET_ENOTG_ID_CHG_IRQ_MASK)
#define USBPHY_CTRL_SET_ENHOSTDISCONDETECT_MASK  (0x2U)
#define USBPHY_CTRL_SET_ENHOSTDISCONDETECT_SHIFT (1U)
#define USBPHY_CTRL_SET_ENHOSTDISCONDETECT(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENHOSTDISCONDETECT_SHIFT)) & USBPHY_CTRL_SET_ENHOSTDISCONDETECT_MASK)
#define USBPHY_CTRL_SET_ENIRQHOSTDISCON_MASK     (0x4U)
#define USBPHY_CTRL_SET_ENIRQHOSTDISCON_SHIFT    (2U)
#define USBPHY_CTRL_SET_ENIRQHOSTDISCON(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENIRQHOSTDISCON_SHIFT)) & USBPHY_CTRL_SET_ENIRQHOSTDISCON_MASK)
#define USBPHY_CTRL_SET_HOSTDISCONDETECT_IRQ_MASK (0x8U)
#define USBPHY_CTRL_SET_HOSTDISCONDETECT_IRQ_SHIFT (3U)
#define USBPHY_CTRL_SET_HOSTDISCONDETECT_IRQ(x)  (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_HOSTDISCONDETECT_IRQ_SHIFT)) & USBPHY_CTRL_SET_HOSTDISCONDETECT_IRQ_MASK)
#define USBPHY_CTRL_SET_ENDEVPLUGINDETECT_MASK   (0x10U)
#define USBPHY_CTRL_SET_ENDEVPLUGINDETECT_SHIFT  (4U)
#define USBPHY_CTRL_SET_ENDEVPLUGINDETECT(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENDEVPLUGINDETECT_SHIFT)) & USBPHY_CTRL_SET_ENDEVPLUGINDETECT_MASK)
#define USBPHY_CTRL_SET_DEVPLUGIN_POLARITY_MASK  (0x20U)
#define USBPHY_CTRL_SET_DEVPLUGIN_POLARITY_SHIFT (5U)
#define USBPHY_CTRL_SET_DEVPLUGIN_POLARITY(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_DEVPLUGIN_POLARITY_SHIFT)) & USBPHY_CTRL_SET_DEVPLUGIN_POLARITY_MASK)
#define USBPHY_CTRL_SET_OTG_ID_CHG_IRQ_MASK      (0x40U)
#define USBPHY_CTRL_SET_OTG_ID_CHG_IRQ_SHIFT     (6U)
#define USBPHY_CTRL_SET_OTG_ID_CHG_IRQ(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_OTG_ID_CHG_IRQ_SHIFT)) & USBPHY_CTRL_SET_OTG_ID_CHG_IRQ_MASK)
#define USBPHY_CTRL_SET_ENOTGIDDETECT_MASK       (0x80U)
#define USBPHY_CTRL_SET_ENOTGIDDETECT_SHIFT      (7U)
#define USBPHY_CTRL_SET_ENOTGIDDETECT(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENOTGIDDETECT_SHIFT)) & USBPHY_CTRL_SET_ENOTGIDDETECT_MASK)
#define USBPHY_CTRL_SET_RESUMEIRQSTICKY_MASK     (0x100U)
#define USBPHY_CTRL_SET_RESUMEIRQSTICKY_SHIFT    (8U)
#define USBPHY_CTRL_SET_RESUMEIRQSTICKY(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_RESUMEIRQSTICKY_SHIFT)) & USBPHY_CTRL_SET_RESUMEIRQSTICKY_MASK)
#define USBPHY_CTRL_SET_ENIRQRESUMEDETECT_MASK   (0x200U)
#define USBPHY_CTRL_SET_ENIRQRESUMEDETECT_SHIFT  (9U)
#define USBPHY_CTRL_SET_ENIRQRESUMEDETECT(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENIRQRESUMEDETECT_SHIFT)) & USBPHY_CTRL_SET_ENIRQRESUMEDETECT_MASK)
#define USBPHY_CTRL_SET_RESUME_IRQ_MASK          (0x400U)
#define USBPHY_CTRL_SET_RESUME_IRQ_SHIFT         (10U)
#define USBPHY_CTRL_SET_RESUME_IRQ(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_RESUME_IRQ_SHIFT)) & USBPHY_CTRL_SET_RESUME_IRQ_MASK)
#define USBPHY_CTRL_SET_ENIRQDEVPLUGIN_MASK      (0x800U)
#define USBPHY_CTRL_SET_ENIRQDEVPLUGIN_SHIFT     (11U)
#define USBPHY_CTRL_SET_ENIRQDEVPLUGIN(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENIRQDEVPLUGIN_SHIFT)) & USBPHY_CTRL_SET_ENIRQDEVPLUGIN_MASK)
#define USBPHY_CTRL_SET_DEVPLUGIN_IRQ_MASK       (0x1000U)
#define USBPHY_CTRL_SET_DEVPLUGIN_IRQ_SHIFT      (12U)
#define USBPHY_CTRL_SET_DEVPLUGIN_IRQ(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_DEVPLUGIN_IRQ_SHIFT)) & USBPHY_CTRL_SET_DEVPLUGIN_IRQ_MASK)
#define USBPHY_CTRL_SET_DATA_ON_LRADC_MASK       (0x2000U)
#define USBPHY_CTRL_SET_DATA_ON_LRADC_SHIFT      (13U)
#define USBPHY_CTRL_SET_DATA_ON_LRADC(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_DATA_ON_LRADC_SHIFT)) & USBPHY_CTRL_SET_DATA_ON_LRADC_MASK)
#define USBPHY_CTRL_SET_ENUTMILEVEL2_MASK        (0x4000U)
#define USBPHY_CTRL_SET_ENUTMILEVEL2_SHIFT       (14U)
#define USBPHY_CTRL_SET_ENUTMILEVEL2(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENUTMILEVEL2_SHIFT)) & USBPHY_CTRL_SET_ENUTMILEVEL2_MASK)
#define USBPHY_CTRL_SET_ENUTMILEVEL3_MASK        (0x8000U)
#define USBPHY_CTRL_SET_ENUTMILEVEL3_SHIFT       (15U)
#define USBPHY_CTRL_SET_ENUTMILEVEL3(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENUTMILEVEL3_SHIFT)) & USBPHY_CTRL_SET_ENUTMILEVEL3_MASK)
#define USBPHY_CTRL_SET_ENIRQWAKEUP_MASK         (0x10000U)
#define USBPHY_CTRL_SET_ENIRQWAKEUP_SHIFT        (16U)
#define USBPHY_CTRL_SET_ENIRQWAKEUP(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENIRQWAKEUP_SHIFT)) & USBPHY_CTRL_SET_ENIRQWAKEUP_MASK)
#define USBPHY_CTRL_SET_WAKEUP_IRQ_MASK          (0x20000U)
#define USBPHY_CTRL_SET_WAKEUP_IRQ_SHIFT         (17U)
#define USBPHY_CTRL_SET_WAKEUP_IRQ(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_WAKEUP_IRQ_SHIFT)) & USBPHY_CTRL_SET_WAKEUP_IRQ_MASK)
#define USBPHY_CTRL_SET_ENAUTO_PWRON_PLL_MASK    (0x40000U)
#define USBPHY_CTRL_SET_ENAUTO_PWRON_PLL_SHIFT   (18U)
#define USBPHY_CTRL_SET_ENAUTO_PWRON_PLL(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENAUTO_PWRON_PLL_SHIFT)) & USBPHY_CTRL_SET_ENAUTO_PWRON_PLL_MASK)
#define USBPHY_CTRL_SET_ENAUTOCLR_CLKGATE_MASK   (0x80000U)
#define USBPHY_CTRL_SET_ENAUTOCLR_CLKGATE_SHIFT  (19U)
#define USBPHY_CTRL_SET_ENAUTOCLR_CLKGATE(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENAUTOCLR_CLKGATE_SHIFT)) & USBPHY_CTRL_SET_ENAUTOCLR_CLKGATE_MASK)
#define USBPHY_CTRL_SET_ENAUTOCLR_PHY_PWD_MASK   (0x100000U)
#define USBPHY_CTRL_SET_ENAUTOCLR_PHY_PWD_SHIFT  (20U)
#define USBPHY_CTRL_SET_ENAUTOCLR_PHY_PWD(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENAUTOCLR_PHY_PWD_SHIFT)) & USBPHY_CTRL_SET_ENAUTOCLR_PHY_PWD_MASK)
#define USBPHY_CTRL_SET_ENDPDMCHG_WKUP_MASK      (0x200000U)
#define USBPHY_CTRL_SET_ENDPDMCHG_WKUP_SHIFT     (21U)
#define USBPHY_CTRL_SET_ENDPDMCHG_WKUP(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENDPDMCHG_WKUP_SHIFT)) & USBPHY_CTRL_SET_ENDPDMCHG_WKUP_MASK)
#define USBPHY_CTRL_SET_ENIDCHG_WKUP_MASK        (0x400000U)
#define USBPHY_CTRL_SET_ENIDCHG_WKUP_SHIFT       (22U)
#define USBPHY_CTRL_SET_ENIDCHG_WKUP(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENIDCHG_WKUP_SHIFT)) & USBPHY_CTRL_SET_ENIDCHG_WKUP_MASK)
#define USBPHY_CTRL_SET_ENVBUSCHG_WKUP_MASK      (0x800000U)
#define USBPHY_CTRL_SET_ENVBUSCHG_WKUP_SHIFT     (23U)
#define USBPHY_CTRL_SET_ENVBUSCHG_WKUP(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_ENVBUSCHG_WKUP_SHIFT)) & USBPHY_CTRL_SET_ENVBUSCHG_WKUP_MASK)
#define USBPHY_CTRL_SET_FSDLL_RST_EN_MASK        (0x1000000U)
#define USBPHY_CTRL_SET_FSDLL_RST_EN_SHIFT       (24U)
#define USBPHY_CTRL_SET_FSDLL_RST_EN(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_FSDLL_RST_EN_SHIFT)) & USBPHY_CTRL_SET_FSDLL_RST_EN_MASK)
#define USBPHY_CTRL_SET_RSVD1_MASK               (0x6000000U)
#define USBPHY_CTRL_SET_RSVD1_SHIFT              (25U)
#define USBPHY_CTRL_SET_RSVD1(x)                 (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_RSVD1_SHIFT)) & USBPHY_CTRL_SET_RSVD1_MASK)
#define USBPHY_CTRL_SET_OTG_ID_VALUE_MASK        (0x8000000U)
#define USBPHY_CTRL_SET_OTG_ID_VALUE_SHIFT       (27U)
#define USBPHY_CTRL_SET_OTG_ID_VALUE(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_OTG_ID_VALUE_SHIFT)) & USBPHY_CTRL_SET_OTG_ID_VALUE_MASK)
#define USBPHY_CTRL_SET_HOST_FORCE_LS_SE0_MASK   (0x10000000U)
#define USBPHY_CTRL_SET_HOST_FORCE_LS_SE0_SHIFT  (28U)
#define USBPHY_CTRL_SET_HOST_FORCE_LS_SE0(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_HOST_FORCE_LS_SE0_SHIFT)) & USBPHY_CTRL_SET_HOST_FORCE_LS_SE0_MASK)
#define USBPHY_CTRL_SET_UTMI_SUSPENDM_MASK       (0x20000000U)
#define USBPHY_CTRL_SET_UTMI_SUSPENDM_SHIFT      (29U)
#define USBPHY_CTRL_SET_UTMI_SUSPENDM(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_UTMI_SUSPENDM_SHIFT)) & USBPHY_CTRL_SET_UTMI_SUSPENDM_MASK)
#define USBPHY_CTRL_SET_CLKGATE_MASK             (0x40000000U)
#define USBPHY_CTRL_SET_CLKGATE_SHIFT            (30U)
#define USBPHY_CTRL_SET_CLKGATE(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_CLKGATE_SHIFT)) & USBPHY_CTRL_SET_CLKGATE_MASK)
#define USBPHY_CTRL_SET_SFTRST_MASK              (0x80000000U)
#define USBPHY_CTRL_SET_SFTRST_SHIFT             (31U)
#define USBPHY_CTRL_SET_SFTRST(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_SET_SFTRST_SHIFT)) & USBPHY_CTRL_SET_SFTRST_MASK)

/*! @name CTRL_CLR - USB PHY General Control Register */
#define USBPHY_CTRL_CLR_ENOTG_ID_CHG_IRQ_MASK    (0x1U)
#define USBPHY_CTRL_CLR_ENOTG_ID_CHG_IRQ_SHIFT   (0U)
#define USBPHY_CTRL_CLR_ENOTG_ID_CHG_IRQ(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENOTG_ID_CHG_IRQ_SHIFT)) & USBPHY_CTRL_CLR_ENOTG_ID_CHG_IRQ_MASK)
#define USBPHY_CTRL_CLR_ENHOSTDISCONDETECT_MASK  (0x2U)
#define USBPHY_CTRL_CLR_ENHOSTDISCONDETECT_SHIFT (1U)
#define USBPHY_CTRL_CLR_ENHOSTDISCONDETECT(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENHOSTDISCONDETECT_SHIFT)) & USBPHY_CTRL_CLR_ENHOSTDISCONDETECT_MASK)
#define USBPHY_CTRL_CLR_ENIRQHOSTDISCON_MASK     (0x4U)
#define USBPHY_CTRL_CLR_ENIRQHOSTDISCON_SHIFT    (2U)
#define USBPHY_CTRL_CLR_ENIRQHOSTDISCON(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENIRQHOSTDISCON_SHIFT)) & USBPHY_CTRL_CLR_ENIRQHOSTDISCON_MASK)
#define USBPHY_CTRL_CLR_HOSTDISCONDETECT_IRQ_MASK (0x8U)
#define USBPHY_CTRL_CLR_HOSTDISCONDETECT_IRQ_SHIFT (3U)
#define USBPHY_CTRL_CLR_HOSTDISCONDETECT_IRQ(x)  (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_HOSTDISCONDETECT_IRQ_SHIFT)) & USBPHY_CTRL_CLR_HOSTDISCONDETECT_IRQ_MASK)
#define USBPHY_CTRL_CLR_ENDEVPLUGINDETECT_MASK   (0x10U)
#define USBPHY_CTRL_CLR_ENDEVPLUGINDETECT_SHIFT  (4U)
#define USBPHY_CTRL_CLR_ENDEVPLUGINDETECT(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENDEVPLUGINDETECT_SHIFT)) & USBPHY_CTRL_CLR_ENDEVPLUGINDETECT_MASK)
#define USBPHY_CTRL_CLR_DEVPLUGIN_POLARITY_MASK  (0x20U)
#define USBPHY_CTRL_CLR_DEVPLUGIN_POLARITY_SHIFT (5U)
#define USBPHY_CTRL_CLR_DEVPLUGIN_POLARITY(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_DEVPLUGIN_POLARITY_SHIFT)) & USBPHY_CTRL_CLR_DEVPLUGIN_POLARITY_MASK)
#define USBPHY_CTRL_CLR_OTG_ID_CHG_IRQ_MASK      (0x40U)
#define USBPHY_CTRL_CLR_OTG_ID_CHG_IRQ_SHIFT     (6U)
#define USBPHY_CTRL_CLR_OTG_ID_CHG_IRQ(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_OTG_ID_CHG_IRQ_SHIFT)) & USBPHY_CTRL_CLR_OTG_ID_CHG_IRQ_MASK)
#define USBPHY_CTRL_CLR_ENOTGIDDETECT_MASK       (0x80U)
#define USBPHY_CTRL_CLR_ENOTGIDDETECT_SHIFT      (7U)
#define USBPHY_CTRL_CLR_ENOTGIDDETECT(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENOTGIDDETECT_SHIFT)) & USBPHY_CTRL_CLR_ENOTGIDDETECT_MASK)
#define USBPHY_CTRL_CLR_RESUMEIRQSTICKY_MASK     (0x100U)
#define USBPHY_CTRL_CLR_RESUMEIRQSTICKY_SHIFT    (8U)
#define USBPHY_CTRL_CLR_RESUMEIRQSTICKY(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_RESUMEIRQSTICKY_SHIFT)) & USBPHY_CTRL_CLR_RESUMEIRQSTICKY_MASK)
#define USBPHY_CTRL_CLR_ENIRQRESUMEDETECT_MASK   (0x200U)
#define USBPHY_CTRL_CLR_ENIRQRESUMEDETECT_SHIFT  (9U)
#define USBPHY_CTRL_CLR_ENIRQRESUMEDETECT(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENIRQRESUMEDETECT_SHIFT)) & USBPHY_CTRL_CLR_ENIRQRESUMEDETECT_MASK)
#define USBPHY_CTRL_CLR_RESUME_IRQ_MASK          (0x400U)
#define USBPHY_CTRL_CLR_RESUME_IRQ_SHIFT         (10U)
#define USBPHY_CTRL_CLR_RESUME_IRQ(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_RESUME_IRQ_SHIFT)) & USBPHY_CTRL_CLR_RESUME_IRQ_MASK)
#define USBPHY_CTRL_CLR_ENIRQDEVPLUGIN_MASK      (0x800U)
#define USBPHY_CTRL_CLR_ENIRQDEVPLUGIN_SHIFT     (11U)
#define USBPHY_CTRL_CLR_ENIRQDEVPLUGIN(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENIRQDEVPLUGIN_SHIFT)) & USBPHY_CTRL_CLR_ENIRQDEVPLUGIN_MASK)
#define USBPHY_CTRL_CLR_DEVPLUGIN_IRQ_MASK       (0x1000U)
#define USBPHY_CTRL_CLR_DEVPLUGIN_IRQ_SHIFT      (12U)
#define USBPHY_CTRL_CLR_DEVPLUGIN_IRQ(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_DEVPLUGIN_IRQ_SHIFT)) & USBPHY_CTRL_CLR_DEVPLUGIN_IRQ_MASK)
#define USBPHY_CTRL_CLR_DATA_ON_LRADC_MASK       (0x2000U)
#define USBPHY_CTRL_CLR_DATA_ON_LRADC_SHIFT      (13U)
#define USBPHY_CTRL_CLR_DATA_ON_LRADC(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_DATA_ON_LRADC_SHIFT)) & USBPHY_CTRL_CLR_DATA_ON_LRADC_MASK)
#define USBPHY_CTRL_CLR_ENUTMILEVEL2_MASK        (0x4000U)
#define USBPHY_CTRL_CLR_ENUTMILEVEL2_SHIFT       (14U)
#define USBPHY_CTRL_CLR_ENUTMILEVEL2(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENUTMILEVEL2_SHIFT)) & USBPHY_CTRL_CLR_ENUTMILEVEL2_MASK)
#define USBPHY_CTRL_CLR_ENUTMILEVEL3_MASK        (0x8000U)
#define USBPHY_CTRL_CLR_ENUTMILEVEL3_SHIFT       (15U)
#define USBPHY_CTRL_CLR_ENUTMILEVEL3(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENUTMILEVEL3_SHIFT)) & USBPHY_CTRL_CLR_ENUTMILEVEL3_MASK)
#define USBPHY_CTRL_CLR_ENIRQWAKEUP_MASK         (0x10000U)
#define USBPHY_CTRL_CLR_ENIRQWAKEUP_SHIFT        (16U)
#define USBPHY_CTRL_CLR_ENIRQWAKEUP(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENIRQWAKEUP_SHIFT)) & USBPHY_CTRL_CLR_ENIRQWAKEUP_MASK)
#define USBPHY_CTRL_CLR_WAKEUP_IRQ_MASK          (0x20000U)
#define USBPHY_CTRL_CLR_WAKEUP_IRQ_SHIFT         (17U)
#define USBPHY_CTRL_CLR_WAKEUP_IRQ(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_WAKEUP_IRQ_SHIFT)) & USBPHY_CTRL_CLR_WAKEUP_IRQ_MASK)
#define USBPHY_CTRL_CLR_ENAUTO_PWRON_PLL_MASK    (0x40000U)
#define USBPHY_CTRL_CLR_ENAUTO_PWRON_PLL_SHIFT   (18U)
#define USBPHY_CTRL_CLR_ENAUTO_PWRON_PLL(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENAUTO_PWRON_PLL_SHIFT)) & USBPHY_CTRL_CLR_ENAUTO_PWRON_PLL_MASK)
#define USBPHY_CTRL_CLR_ENAUTOCLR_CLKGATE_MASK   (0x80000U)
#define USBPHY_CTRL_CLR_ENAUTOCLR_CLKGATE_SHIFT  (19U)
#define USBPHY_CTRL_CLR_ENAUTOCLR_CLKGATE(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENAUTOCLR_CLKGATE_SHIFT)) & USBPHY_CTRL_CLR_ENAUTOCLR_CLKGATE_MASK)
#define USBPHY_CTRL_CLR_ENAUTOCLR_PHY_PWD_MASK   (0x100000U)
#define USBPHY_CTRL_CLR_ENAUTOCLR_PHY_PWD_SHIFT  (20U)
#define USBPHY_CTRL_CLR_ENAUTOCLR_PHY_PWD(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENAUTOCLR_PHY_PWD_SHIFT)) & USBPHY_CTRL_CLR_ENAUTOCLR_PHY_PWD_MASK)
#define USBPHY_CTRL_CLR_ENDPDMCHG_WKUP_MASK      (0x200000U)
#define USBPHY_CTRL_CLR_ENDPDMCHG_WKUP_SHIFT     (21U)
#define USBPHY_CTRL_CLR_ENDPDMCHG_WKUP(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENDPDMCHG_WKUP_SHIFT)) & USBPHY_CTRL_CLR_ENDPDMCHG_WKUP_MASK)
#define USBPHY_CTRL_CLR_ENIDCHG_WKUP_MASK        (0x400000U)
#define USBPHY_CTRL_CLR_ENIDCHG_WKUP_SHIFT       (22U)
#define USBPHY_CTRL_CLR_ENIDCHG_WKUP(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENIDCHG_WKUP_SHIFT)) & USBPHY_CTRL_CLR_ENIDCHG_WKUP_MASK)
#define USBPHY_CTRL_CLR_ENVBUSCHG_WKUP_MASK      (0x800000U)
#define USBPHY_CTRL_CLR_ENVBUSCHG_WKUP_SHIFT     (23U)
#define USBPHY_CTRL_CLR_ENVBUSCHG_WKUP(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_ENVBUSCHG_WKUP_SHIFT)) & USBPHY_CTRL_CLR_ENVBUSCHG_WKUP_MASK)
#define USBPHY_CTRL_CLR_FSDLL_RST_EN_MASK        (0x1000000U)
#define USBPHY_CTRL_CLR_FSDLL_RST_EN_SHIFT       (24U)
#define USBPHY_CTRL_CLR_FSDLL_RST_EN(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_FSDLL_RST_EN_SHIFT)) & USBPHY_CTRL_CLR_FSDLL_RST_EN_MASK)
#define USBPHY_CTRL_CLR_RSVD1_MASK               (0x6000000U)
#define USBPHY_CTRL_CLR_RSVD1_SHIFT              (25U)
#define USBPHY_CTRL_CLR_RSVD1(x)                 (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_RSVD1_SHIFT)) & USBPHY_CTRL_CLR_RSVD1_MASK)
#define USBPHY_CTRL_CLR_OTG_ID_VALUE_MASK        (0x8000000U)
#define USBPHY_CTRL_CLR_OTG_ID_VALUE_SHIFT       (27U)
#define USBPHY_CTRL_CLR_OTG_ID_VALUE(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_OTG_ID_VALUE_SHIFT)) & USBPHY_CTRL_CLR_OTG_ID_VALUE_MASK)
#define USBPHY_CTRL_CLR_HOST_FORCE_LS_SE0_MASK   (0x10000000U)
#define USBPHY_CTRL_CLR_HOST_FORCE_LS_SE0_SHIFT  (28U)
#define USBPHY_CTRL_CLR_HOST_FORCE_LS_SE0(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_HOST_FORCE_LS_SE0_SHIFT)) & USBPHY_CTRL_CLR_HOST_FORCE_LS_SE0_MASK)
#define USBPHY_CTRL_CLR_UTMI_SUSPENDM_MASK       (0x20000000U)
#define USBPHY_CTRL_CLR_UTMI_SUSPENDM_SHIFT      (29U)
#define USBPHY_CTRL_CLR_UTMI_SUSPENDM(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_UTMI_SUSPENDM_SHIFT)) & USBPHY_CTRL_CLR_UTMI_SUSPENDM_MASK)
#define USBPHY_CTRL_CLR_CLKGATE_MASK             (0x40000000U)
#define USBPHY_CTRL_CLR_CLKGATE_SHIFT            (30U)
#define USBPHY_CTRL_CLR_CLKGATE(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_CLKGATE_SHIFT)) & USBPHY_CTRL_CLR_CLKGATE_MASK)
#define USBPHY_CTRL_CLR_SFTRST_MASK              (0x80000000U)
#define USBPHY_CTRL_CLR_SFTRST_SHIFT             (31U)
#define USBPHY_CTRL_CLR_SFTRST(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_CLR_SFTRST_SHIFT)) & USBPHY_CTRL_CLR_SFTRST_MASK)

/*! @name CTRL_TOG - USB PHY General Control Register */
#define USBPHY_CTRL_TOG_ENOTG_ID_CHG_IRQ_MASK    (0x1U)
#define USBPHY_CTRL_TOG_ENOTG_ID_CHG_IRQ_SHIFT   (0U)
#define USBPHY_CTRL_TOG_ENOTG_ID_CHG_IRQ(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENOTG_ID_CHG_IRQ_SHIFT)) & USBPHY_CTRL_TOG_ENOTG_ID_CHG_IRQ_MASK)
#define USBPHY_CTRL_TOG_ENHOSTDISCONDETECT_MASK  (0x2U)
#define USBPHY_CTRL_TOG_ENHOSTDISCONDETECT_SHIFT (1U)
#define USBPHY_CTRL_TOG_ENHOSTDISCONDETECT(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENHOSTDISCONDETECT_SHIFT)) & USBPHY_CTRL_TOG_ENHOSTDISCONDETECT_MASK)
#define USBPHY_CTRL_TOG_ENIRQHOSTDISCON_MASK     (0x4U)
#define USBPHY_CTRL_TOG_ENIRQHOSTDISCON_SHIFT    (2U)
#define USBPHY_CTRL_TOG_ENIRQHOSTDISCON(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENIRQHOSTDISCON_SHIFT)) & USBPHY_CTRL_TOG_ENIRQHOSTDISCON_MASK)
#define USBPHY_CTRL_TOG_HOSTDISCONDETECT_IRQ_MASK (0x8U)
#define USBPHY_CTRL_TOG_HOSTDISCONDETECT_IRQ_SHIFT (3U)
#define USBPHY_CTRL_TOG_HOSTDISCONDETECT_IRQ(x)  (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_HOSTDISCONDETECT_IRQ_SHIFT)) & USBPHY_CTRL_TOG_HOSTDISCONDETECT_IRQ_MASK)
#define USBPHY_CTRL_TOG_ENDEVPLUGINDETECT_MASK   (0x10U)
#define USBPHY_CTRL_TOG_ENDEVPLUGINDETECT_SHIFT  (4U)
#define USBPHY_CTRL_TOG_ENDEVPLUGINDETECT(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENDEVPLUGINDETECT_SHIFT)) & USBPHY_CTRL_TOG_ENDEVPLUGINDETECT_MASK)
#define USBPHY_CTRL_TOG_DEVPLUGIN_POLARITY_MASK  (0x20U)
#define USBPHY_CTRL_TOG_DEVPLUGIN_POLARITY_SHIFT (5U)
#define USBPHY_CTRL_TOG_DEVPLUGIN_POLARITY(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_DEVPLUGIN_POLARITY_SHIFT)) & USBPHY_CTRL_TOG_DEVPLUGIN_POLARITY_MASK)
#define USBPHY_CTRL_TOG_OTG_ID_CHG_IRQ_MASK      (0x40U)
#define USBPHY_CTRL_TOG_OTG_ID_CHG_IRQ_SHIFT     (6U)
#define USBPHY_CTRL_TOG_OTG_ID_CHG_IRQ(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_OTG_ID_CHG_IRQ_SHIFT)) & USBPHY_CTRL_TOG_OTG_ID_CHG_IRQ_MASK)
#define USBPHY_CTRL_TOG_ENOTGIDDETECT_MASK       (0x80U)
#define USBPHY_CTRL_TOG_ENOTGIDDETECT_SHIFT      (7U)
#define USBPHY_CTRL_TOG_ENOTGIDDETECT(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENOTGIDDETECT_SHIFT)) & USBPHY_CTRL_TOG_ENOTGIDDETECT_MASK)
#define USBPHY_CTRL_TOG_RESUMEIRQSTICKY_MASK     (0x100U)
#define USBPHY_CTRL_TOG_RESUMEIRQSTICKY_SHIFT    (8U)
#define USBPHY_CTRL_TOG_RESUMEIRQSTICKY(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_RESUMEIRQSTICKY_SHIFT)) & USBPHY_CTRL_TOG_RESUMEIRQSTICKY_MASK)
#define USBPHY_CTRL_TOG_ENIRQRESUMEDETECT_MASK   (0x200U)
#define USBPHY_CTRL_TOG_ENIRQRESUMEDETECT_SHIFT  (9U)
#define USBPHY_CTRL_TOG_ENIRQRESUMEDETECT(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENIRQRESUMEDETECT_SHIFT)) & USBPHY_CTRL_TOG_ENIRQRESUMEDETECT_MASK)
#define USBPHY_CTRL_TOG_RESUME_IRQ_MASK          (0x400U)
#define USBPHY_CTRL_TOG_RESUME_IRQ_SHIFT         (10U)
#define USBPHY_CTRL_TOG_RESUME_IRQ(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_RESUME_IRQ_SHIFT)) & USBPHY_CTRL_TOG_RESUME_IRQ_MASK)
#define USBPHY_CTRL_TOG_ENIRQDEVPLUGIN_MASK      (0x800U)
#define USBPHY_CTRL_TOG_ENIRQDEVPLUGIN_SHIFT     (11U)
#define USBPHY_CTRL_TOG_ENIRQDEVPLUGIN(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENIRQDEVPLUGIN_SHIFT)) & USBPHY_CTRL_TOG_ENIRQDEVPLUGIN_MASK)
#define USBPHY_CTRL_TOG_DEVPLUGIN_IRQ_MASK       (0x1000U)
#define USBPHY_CTRL_TOG_DEVPLUGIN_IRQ_SHIFT      (12U)
#define USBPHY_CTRL_TOG_DEVPLUGIN_IRQ(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_DEVPLUGIN_IRQ_SHIFT)) & USBPHY_CTRL_TOG_DEVPLUGIN_IRQ_MASK)
#define USBPHY_CTRL_TOG_DATA_ON_LRADC_MASK       (0x2000U)
#define USBPHY_CTRL_TOG_DATA_ON_LRADC_SHIFT      (13U)
#define USBPHY_CTRL_TOG_DATA_ON_LRADC(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_DATA_ON_LRADC_SHIFT)) & USBPHY_CTRL_TOG_DATA_ON_LRADC_MASK)
#define USBPHY_CTRL_TOG_ENUTMILEVEL2_MASK        (0x4000U)
#define USBPHY_CTRL_TOG_ENUTMILEVEL2_SHIFT       (14U)
#define USBPHY_CTRL_TOG_ENUTMILEVEL2(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENUTMILEVEL2_SHIFT)) & USBPHY_CTRL_TOG_ENUTMILEVEL2_MASK)
#define USBPHY_CTRL_TOG_ENUTMILEVEL3_MASK        (0x8000U)
#define USBPHY_CTRL_TOG_ENUTMILEVEL3_SHIFT       (15U)
#define USBPHY_CTRL_TOG_ENUTMILEVEL3(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENUTMILEVEL3_SHIFT)) & USBPHY_CTRL_TOG_ENUTMILEVEL3_MASK)
#define USBPHY_CTRL_TOG_ENIRQWAKEUP_MASK         (0x10000U)
#define USBPHY_CTRL_TOG_ENIRQWAKEUP_SHIFT        (16U)
#define USBPHY_CTRL_TOG_ENIRQWAKEUP(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENIRQWAKEUP_SHIFT)) & USBPHY_CTRL_TOG_ENIRQWAKEUP_MASK)
#define USBPHY_CTRL_TOG_WAKEUP_IRQ_MASK          (0x20000U)
#define USBPHY_CTRL_TOG_WAKEUP_IRQ_SHIFT         (17U)
#define USBPHY_CTRL_TOG_WAKEUP_IRQ(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_WAKEUP_IRQ_SHIFT)) & USBPHY_CTRL_TOG_WAKEUP_IRQ_MASK)
#define USBPHY_CTRL_TOG_ENAUTO_PWRON_PLL_MASK    (0x40000U)
#define USBPHY_CTRL_TOG_ENAUTO_PWRON_PLL_SHIFT   (18U)
#define USBPHY_CTRL_TOG_ENAUTO_PWRON_PLL(x)      (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENAUTO_PWRON_PLL_SHIFT)) & USBPHY_CTRL_TOG_ENAUTO_PWRON_PLL_MASK)
#define USBPHY_CTRL_TOG_ENAUTOCLR_CLKGATE_MASK   (0x80000U)
#define USBPHY_CTRL_TOG_ENAUTOCLR_CLKGATE_SHIFT  (19U)
#define USBPHY_CTRL_TOG_ENAUTOCLR_CLKGATE(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENAUTOCLR_CLKGATE_SHIFT)) & USBPHY_CTRL_TOG_ENAUTOCLR_CLKGATE_MASK)
#define USBPHY_CTRL_TOG_ENAUTOCLR_PHY_PWD_MASK   (0x100000U)
#define USBPHY_CTRL_TOG_ENAUTOCLR_PHY_PWD_SHIFT  (20U)
#define USBPHY_CTRL_TOG_ENAUTOCLR_PHY_PWD(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENAUTOCLR_PHY_PWD_SHIFT)) & USBPHY_CTRL_TOG_ENAUTOCLR_PHY_PWD_MASK)
#define USBPHY_CTRL_TOG_ENDPDMCHG_WKUP_MASK      (0x200000U)
#define USBPHY_CTRL_TOG_ENDPDMCHG_WKUP_SHIFT     (21U)
#define USBPHY_CTRL_TOG_ENDPDMCHG_WKUP(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENDPDMCHG_WKUP_SHIFT)) & USBPHY_CTRL_TOG_ENDPDMCHG_WKUP_MASK)
#define USBPHY_CTRL_TOG_ENIDCHG_WKUP_MASK        (0x400000U)
#define USBPHY_CTRL_TOG_ENIDCHG_WKUP_SHIFT       (22U)
#define USBPHY_CTRL_TOG_ENIDCHG_WKUP(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENIDCHG_WKUP_SHIFT)) & USBPHY_CTRL_TOG_ENIDCHG_WKUP_MASK)
#define USBPHY_CTRL_TOG_ENVBUSCHG_WKUP_MASK      (0x800000U)
#define USBPHY_CTRL_TOG_ENVBUSCHG_WKUP_SHIFT     (23U)
#define USBPHY_CTRL_TOG_ENVBUSCHG_WKUP(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_ENVBUSCHG_WKUP_SHIFT)) & USBPHY_CTRL_TOG_ENVBUSCHG_WKUP_MASK)
#define USBPHY_CTRL_TOG_FSDLL_RST_EN_MASK        (0x1000000U)
#define USBPHY_CTRL_TOG_FSDLL_RST_EN_SHIFT       (24U)
#define USBPHY_CTRL_TOG_FSDLL_RST_EN(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_FSDLL_RST_EN_SHIFT)) & USBPHY_CTRL_TOG_FSDLL_RST_EN_MASK)
#define USBPHY_CTRL_TOG_RSVD1_MASK               (0x6000000U)
#define USBPHY_CTRL_TOG_RSVD1_SHIFT              (25U)
#define USBPHY_CTRL_TOG_RSVD1(x)                 (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_RSVD1_SHIFT)) & USBPHY_CTRL_TOG_RSVD1_MASK)
#define USBPHY_CTRL_TOG_OTG_ID_VALUE_MASK        (0x8000000U)
#define USBPHY_CTRL_TOG_OTG_ID_VALUE_SHIFT       (27U)
#define USBPHY_CTRL_TOG_OTG_ID_VALUE(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_OTG_ID_VALUE_SHIFT)) & USBPHY_CTRL_TOG_OTG_ID_VALUE_MASK)
#define USBPHY_CTRL_TOG_HOST_FORCE_LS_SE0_MASK   (0x10000000U)
#define USBPHY_CTRL_TOG_HOST_FORCE_LS_SE0_SHIFT  (28U)
#define USBPHY_CTRL_TOG_HOST_FORCE_LS_SE0(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_HOST_FORCE_LS_SE0_SHIFT)) & USBPHY_CTRL_TOG_HOST_FORCE_LS_SE0_MASK)
#define USBPHY_CTRL_TOG_UTMI_SUSPENDM_MASK       (0x20000000U)
#define USBPHY_CTRL_TOG_UTMI_SUSPENDM_SHIFT      (29U)
#define USBPHY_CTRL_TOG_UTMI_SUSPENDM(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_UTMI_SUSPENDM_SHIFT)) & USBPHY_CTRL_TOG_UTMI_SUSPENDM_MASK)
#define USBPHY_CTRL_TOG_CLKGATE_MASK             (0x40000000U)
#define USBPHY_CTRL_TOG_CLKGATE_SHIFT            (30U)
#define USBPHY_CTRL_TOG_CLKGATE(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_CLKGATE_SHIFT)) & USBPHY_CTRL_TOG_CLKGATE_MASK)
#define USBPHY_CTRL_TOG_SFTRST_MASK              (0x80000000U)
#define USBPHY_CTRL_TOG_SFTRST_SHIFT             (31U)
#define USBPHY_CTRL_TOG_SFTRST(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_CTRL_TOG_SFTRST_SHIFT)) & USBPHY_CTRL_TOG_SFTRST_MASK)

/*! @name STATUS - USB PHY Status Register */
#define USBPHY_STATUS_RSVD0_MASK                 (0x7U)
#define USBPHY_STATUS_RSVD0_SHIFT                (0U)
#define USBPHY_STATUS_RSVD0(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_STATUS_RSVD0_SHIFT)) & USBPHY_STATUS_RSVD0_MASK)
#define USBPHY_STATUS_HOSTDISCONDETECT_STATUS_MASK (0x8U)
#define USBPHY_STATUS_HOSTDISCONDETECT_STATUS_SHIFT (3U)
#define USBPHY_STATUS_HOSTDISCONDETECT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << USBPHY_STATUS_HOSTDISCONDETECT_STATUS_SHIFT)) & USBPHY_STATUS_HOSTDISCONDETECT_STATUS_MASK)
#define USBPHY_STATUS_RSVD1_MASK                 (0x30U)
#define USBPHY_STATUS_RSVD1_SHIFT                (4U)
#define USBPHY_STATUS_RSVD1(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_STATUS_RSVD1_SHIFT)) & USBPHY_STATUS_RSVD1_MASK)
#define USBPHY_STATUS_DEVPLUGIN_STATUS_MASK      (0x40U)
#define USBPHY_STATUS_DEVPLUGIN_STATUS_SHIFT     (6U)
#define USBPHY_STATUS_DEVPLUGIN_STATUS(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_STATUS_DEVPLUGIN_STATUS_SHIFT)) & USBPHY_STATUS_DEVPLUGIN_STATUS_MASK)
#define USBPHY_STATUS_RSVD2_MASK                 (0x80U)
#define USBPHY_STATUS_RSVD2_SHIFT                (7U)
#define USBPHY_STATUS_RSVD2(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_STATUS_RSVD2_SHIFT)) & USBPHY_STATUS_RSVD2_MASK)
#define USBPHY_STATUS_OTGID_STATUS_MASK          (0x100U)
#define USBPHY_STATUS_OTGID_STATUS_SHIFT         (8U)
#define USBPHY_STATUS_OTGID_STATUS(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_STATUS_OTGID_STATUS_SHIFT)) & USBPHY_STATUS_OTGID_STATUS_MASK)
#define USBPHY_STATUS_RSVD3_MASK                 (0x200U)
#define USBPHY_STATUS_RSVD3_SHIFT                (9U)
#define USBPHY_STATUS_RSVD3(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_STATUS_RSVD3_SHIFT)) & USBPHY_STATUS_RSVD3_MASK)
#define USBPHY_STATUS_RESUME_STATUS_MASK         (0x400U)
#define USBPHY_STATUS_RESUME_STATUS_SHIFT        (10U)
#define USBPHY_STATUS_RESUME_STATUS(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_STATUS_RESUME_STATUS_SHIFT)) & USBPHY_STATUS_RESUME_STATUS_MASK)
#define USBPHY_STATUS_RSVD4_MASK                 (0xFFFFF800U)
#define USBPHY_STATUS_RSVD4_SHIFT                (11U)
#define USBPHY_STATUS_RSVD4(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_STATUS_RSVD4_SHIFT)) & USBPHY_STATUS_RSVD4_MASK)

/*! @name DEBUG - USB PHY Debug Register */
#define USBPHY_DEBUG_OTGIDPIOLOCK_MASK           (0x1U)
#define USBPHY_DEBUG_OTGIDPIOLOCK_SHIFT          (0U)
#define USBPHY_DEBUG_OTGIDPIOLOCK(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_OTGIDPIOLOCK_SHIFT)) & USBPHY_DEBUG_OTGIDPIOLOCK_MASK)
#define USBPHY_DEBUG_DEBUG_INTERFACE_HOLD_MASK   (0x2U)
#define USBPHY_DEBUG_DEBUG_INTERFACE_HOLD_SHIFT  (1U)
#define USBPHY_DEBUG_DEBUG_INTERFACE_HOLD(x)     (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_DEBUG_INTERFACE_HOLD_SHIFT)) & USBPHY_DEBUG_DEBUG_INTERFACE_HOLD_MASK)
#define USBPHY_DEBUG_HSTPULLDOWN_MASK            (0xCU)
#define USBPHY_DEBUG_HSTPULLDOWN_SHIFT           (2U)
#define USBPHY_DEBUG_HSTPULLDOWN(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_HSTPULLDOWN_SHIFT)) & USBPHY_DEBUG_HSTPULLDOWN_MASK)
#define USBPHY_DEBUG_ENHSTPULLDOWN_MASK          (0x30U)
#define USBPHY_DEBUG_ENHSTPULLDOWN_SHIFT         (4U)
#define USBPHY_DEBUG_ENHSTPULLDOWN(x)            (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_ENHSTPULLDOWN_SHIFT)) & USBPHY_DEBUG_ENHSTPULLDOWN_MASK)
#define USBPHY_DEBUG_RSVD0_MASK                  (0xC0U)
#define USBPHY_DEBUG_RSVD0_SHIFT                 (6U)
#define USBPHY_DEBUG_RSVD0(x)                    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_RSVD0_SHIFT)) & USBPHY_DEBUG_RSVD0_MASK)
#define USBPHY_DEBUG_TX2RXCOUNT_MASK             (0xF00U)
#define USBPHY_DEBUG_TX2RXCOUNT_SHIFT            (8U)
#define USBPHY_DEBUG_TX2RXCOUNT(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TX2RXCOUNT_SHIFT)) & USBPHY_DEBUG_TX2RXCOUNT_MASK)
#define USBPHY_DEBUG_ENTX2RXCOUNT_MASK           (0x1000U)
#define USBPHY_DEBUG_ENTX2RXCOUNT_SHIFT          (12U)
#define USBPHY_DEBUG_ENTX2RXCOUNT(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_ENTX2RXCOUNT_SHIFT)) & USBPHY_DEBUG_ENTX2RXCOUNT_MASK)
#define USBPHY_DEBUG_RSVD1_MASK                  (0xE000U)
#define USBPHY_DEBUG_RSVD1_SHIFT                 (13U)
#define USBPHY_DEBUG_RSVD1(x)                    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_RSVD1_SHIFT)) & USBPHY_DEBUG_RSVD1_MASK)
#define USBPHY_DEBUG_SQUELCHRESETCOUNT_MASK      (0x1F0000U)
#define USBPHY_DEBUG_SQUELCHRESETCOUNT_SHIFT     (16U)
#define USBPHY_DEBUG_SQUELCHRESETCOUNT(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SQUELCHRESETCOUNT_SHIFT)) & USBPHY_DEBUG_SQUELCHRESETCOUNT_MASK)
#define USBPHY_DEBUG_RSVD2_MASK                  (0xE00000U)
#define USBPHY_DEBUG_RSVD2_SHIFT                 (21U)
#define USBPHY_DEBUG_RSVD2(x)                    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_RSVD2_SHIFT)) & USBPHY_DEBUG_RSVD2_MASK)
#define USBPHY_DEBUG_ENSQUELCHRESET_MASK         (0x1000000U)
#define USBPHY_DEBUG_ENSQUELCHRESET_SHIFT        (24U)
#define USBPHY_DEBUG_ENSQUELCHRESET(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_ENSQUELCHRESET_SHIFT)) & USBPHY_DEBUG_ENSQUELCHRESET_MASK)
#define USBPHY_DEBUG_SQUELCHRESETLENGTH_MASK     (0x1E000000U)
#define USBPHY_DEBUG_SQUELCHRESETLENGTH_SHIFT    (25U)
#define USBPHY_DEBUG_SQUELCHRESETLENGTH(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SQUELCHRESETLENGTH_SHIFT)) & USBPHY_DEBUG_SQUELCHRESETLENGTH_MASK)
#define USBPHY_DEBUG_HOST_RESUME_DEBUG_MASK      (0x20000000U)
#define USBPHY_DEBUG_HOST_RESUME_DEBUG_SHIFT     (29U)
#define USBPHY_DEBUG_HOST_RESUME_DEBUG(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_HOST_RESUME_DEBUG_SHIFT)) & USBPHY_DEBUG_HOST_RESUME_DEBUG_MASK)
#define USBPHY_DEBUG_CLKGATE_MASK                (0x40000000U)
#define USBPHY_DEBUG_CLKGATE_SHIFT               (30U)
#define USBPHY_DEBUG_CLKGATE(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLKGATE_SHIFT)) & USBPHY_DEBUG_CLKGATE_MASK)
#define USBPHY_DEBUG_RSVD3_MASK                  (0x80000000U)
#define USBPHY_DEBUG_RSVD3_SHIFT                 (31U)
#define USBPHY_DEBUG_RSVD3(x)                    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_RSVD3_SHIFT)) & USBPHY_DEBUG_RSVD3_MASK)

/*! @name DEBUG_SET - USB PHY Debug Register */
#define USBPHY_DEBUG_SET_OTGIDPIOLOCK_MASK       (0x1U)
#define USBPHY_DEBUG_SET_OTGIDPIOLOCK_SHIFT      (0U)
#define USBPHY_DEBUG_SET_OTGIDPIOLOCK(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_OTGIDPIOLOCK_SHIFT)) & USBPHY_DEBUG_SET_OTGIDPIOLOCK_MASK)
#define USBPHY_DEBUG_SET_DEBUG_INTERFACE_HOLD_MASK (0x2U)
#define USBPHY_DEBUG_SET_DEBUG_INTERFACE_HOLD_SHIFT (1U)
#define USBPHY_DEBUG_SET_DEBUG_INTERFACE_HOLD(x) (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_DEBUG_INTERFACE_HOLD_SHIFT)) & USBPHY_DEBUG_SET_DEBUG_INTERFACE_HOLD_MASK)
#define USBPHY_DEBUG_SET_HSTPULLDOWN_MASK        (0xCU)
#define USBPHY_DEBUG_SET_HSTPULLDOWN_SHIFT       (2U)
#define USBPHY_DEBUG_SET_HSTPULLDOWN(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_HSTPULLDOWN_SHIFT)) & USBPHY_DEBUG_SET_HSTPULLDOWN_MASK)
#define USBPHY_DEBUG_SET_ENHSTPULLDOWN_MASK      (0x30U)
#define USBPHY_DEBUG_SET_ENHSTPULLDOWN_SHIFT     (4U)
#define USBPHY_DEBUG_SET_ENHSTPULLDOWN(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_ENHSTPULLDOWN_SHIFT)) & USBPHY_DEBUG_SET_ENHSTPULLDOWN_MASK)
#define USBPHY_DEBUG_SET_RSVD0_MASK              (0xC0U)
#define USBPHY_DEBUG_SET_RSVD0_SHIFT             (6U)
#define USBPHY_DEBUG_SET_RSVD0(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_RSVD0_SHIFT)) & USBPHY_DEBUG_SET_RSVD0_MASK)
#define USBPHY_DEBUG_SET_TX2RXCOUNT_MASK         (0xF00U)
#define USBPHY_DEBUG_SET_TX2RXCOUNT_SHIFT        (8U)
#define USBPHY_DEBUG_SET_TX2RXCOUNT(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_TX2RXCOUNT_SHIFT)) & USBPHY_DEBUG_SET_TX2RXCOUNT_MASK)
#define USBPHY_DEBUG_SET_ENTX2RXCOUNT_MASK       (0x1000U)
#define USBPHY_DEBUG_SET_ENTX2RXCOUNT_SHIFT      (12U)
#define USBPHY_DEBUG_SET_ENTX2RXCOUNT(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_ENTX2RXCOUNT_SHIFT)) & USBPHY_DEBUG_SET_ENTX2RXCOUNT_MASK)
#define USBPHY_DEBUG_SET_RSVD1_MASK              (0xE000U)
#define USBPHY_DEBUG_SET_RSVD1_SHIFT             (13U)
#define USBPHY_DEBUG_SET_RSVD1(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_RSVD1_SHIFT)) & USBPHY_DEBUG_SET_RSVD1_MASK)
#define USBPHY_DEBUG_SET_SQUELCHRESETCOUNT_MASK  (0x1F0000U)
#define USBPHY_DEBUG_SET_SQUELCHRESETCOUNT_SHIFT (16U)
#define USBPHY_DEBUG_SET_SQUELCHRESETCOUNT(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_SQUELCHRESETCOUNT_SHIFT)) & USBPHY_DEBUG_SET_SQUELCHRESETCOUNT_MASK)
#define USBPHY_DEBUG_SET_RSVD2_MASK              (0xE00000U)
#define USBPHY_DEBUG_SET_RSVD2_SHIFT             (21U)
#define USBPHY_DEBUG_SET_RSVD2(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_RSVD2_SHIFT)) & USBPHY_DEBUG_SET_RSVD2_MASK)
#define USBPHY_DEBUG_SET_ENSQUELCHRESET_MASK     (0x1000000U)
#define USBPHY_DEBUG_SET_ENSQUELCHRESET_SHIFT    (24U)
#define USBPHY_DEBUG_SET_ENSQUELCHRESET(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_ENSQUELCHRESET_SHIFT)) & USBPHY_DEBUG_SET_ENSQUELCHRESET_MASK)
#define USBPHY_DEBUG_SET_SQUELCHRESETLENGTH_MASK (0x1E000000U)
#define USBPHY_DEBUG_SET_SQUELCHRESETLENGTH_SHIFT (25U)
#define USBPHY_DEBUG_SET_SQUELCHRESETLENGTH(x)   (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_SQUELCHRESETLENGTH_SHIFT)) & USBPHY_DEBUG_SET_SQUELCHRESETLENGTH_MASK)
#define USBPHY_DEBUG_SET_HOST_RESUME_DEBUG_MASK  (0x20000000U)
#define USBPHY_DEBUG_SET_HOST_RESUME_DEBUG_SHIFT (29U)
#define USBPHY_DEBUG_SET_HOST_RESUME_DEBUG(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_HOST_RESUME_DEBUG_SHIFT)) & USBPHY_DEBUG_SET_HOST_RESUME_DEBUG_MASK)
#define USBPHY_DEBUG_SET_CLKGATE_MASK            (0x40000000U)
#define USBPHY_DEBUG_SET_CLKGATE_SHIFT           (30U)
#define USBPHY_DEBUG_SET_CLKGATE(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_CLKGATE_SHIFT)) & USBPHY_DEBUG_SET_CLKGATE_MASK)
#define USBPHY_DEBUG_SET_RSVD3_MASK              (0x80000000U)
#define USBPHY_DEBUG_SET_RSVD3_SHIFT             (31U)
#define USBPHY_DEBUG_SET_RSVD3(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_SET_RSVD3_SHIFT)) & USBPHY_DEBUG_SET_RSVD3_MASK)

/*! @name DEBUG_CLR - USB PHY Debug Register */
#define USBPHY_DEBUG_CLR_OTGIDPIOLOCK_MASK       (0x1U)
#define USBPHY_DEBUG_CLR_OTGIDPIOLOCK_SHIFT      (0U)
#define USBPHY_DEBUG_CLR_OTGIDPIOLOCK(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_OTGIDPIOLOCK_SHIFT)) & USBPHY_DEBUG_CLR_OTGIDPIOLOCK_MASK)
#define USBPHY_DEBUG_CLR_DEBUG_INTERFACE_HOLD_MASK (0x2U)
#define USBPHY_DEBUG_CLR_DEBUG_INTERFACE_HOLD_SHIFT (1U)
#define USBPHY_DEBUG_CLR_DEBUG_INTERFACE_HOLD(x) (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_DEBUG_INTERFACE_HOLD_SHIFT)) & USBPHY_DEBUG_CLR_DEBUG_INTERFACE_HOLD_MASK)
#define USBPHY_DEBUG_CLR_HSTPULLDOWN_MASK        (0xCU)
#define USBPHY_DEBUG_CLR_HSTPULLDOWN_SHIFT       (2U)
#define USBPHY_DEBUG_CLR_HSTPULLDOWN(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_HSTPULLDOWN_SHIFT)) & USBPHY_DEBUG_CLR_HSTPULLDOWN_MASK)
#define USBPHY_DEBUG_CLR_ENHSTPULLDOWN_MASK      (0x30U)
#define USBPHY_DEBUG_CLR_ENHSTPULLDOWN_SHIFT     (4U)
#define USBPHY_DEBUG_CLR_ENHSTPULLDOWN(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_ENHSTPULLDOWN_SHIFT)) & USBPHY_DEBUG_CLR_ENHSTPULLDOWN_MASK)
#define USBPHY_DEBUG_CLR_RSVD0_MASK              (0xC0U)
#define USBPHY_DEBUG_CLR_RSVD0_SHIFT             (6U)
#define USBPHY_DEBUG_CLR_RSVD0(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_RSVD0_SHIFT)) & USBPHY_DEBUG_CLR_RSVD0_MASK)
#define USBPHY_DEBUG_CLR_TX2RXCOUNT_MASK         (0xF00U)
#define USBPHY_DEBUG_CLR_TX2RXCOUNT_SHIFT        (8U)
#define USBPHY_DEBUG_CLR_TX2RXCOUNT(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_TX2RXCOUNT_SHIFT)) & USBPHY_DEBUG_CLR_TX2RXCOUNT_MASK)
#define USBPHY_DEBUG_CLR_ENTX2RXCOUNT_MASK       (0x1000U)
#define USBPHY_DEBUG_CLR_ENTX2RXCOUNT_SHIFT      (12U)
#define USBPHY_DEBUG_CLR_ENTX2RXCOUNT(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_ENTX2RXCOUNT_SHIFT)) & USBPHY_DEBUG_CLR_ENTX2RXCOUNT_MASK)
#define USBPHY_DEBUG_CLR_RSVD1_MASK              (0xE000U)
#define USBPHY_DEBUG_CLR_RSVD1_SHIFT             (13U)
#define USBPHY_DEBUG_CLR_RSVD1(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_RSVD1_SHIFT)) & USBPHY_DEBUG_CLR_RSVD1_MASK)
#define USBPHY_DEBUG_CLR_SQUELCHRESETCOUNT_MASK  (0x1F0000U)
#define USBPHY_DEBUG_CLR_SQUELCHRESETCOUNT_SHIFT (16U)
#define USBPHY_DEBUG_CLR_SQUELCHRESETCOUNT(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_SQUELCHRESETCOUNT_SHIFT)) & USBPHY_DEBUG_CLR_SQUELCHRESETCOUNT_MASK)
#define USBPHY_DEBUG_CLR_RSVD2_MASK              (0xE00000U)
#define USBPHY_DEBUG_CLR_RSVD2_SHIFT             (21U)
#define USBPHY_DEBUG_CLR_RSVD2(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_RSVD2_SHIFT)) & USBPHY_DEBUG_CLR_RSVD2_MASK)
#define USBPHY_DEBUG_CLR_ENSQUELCHRESET_MASK     (0x1000000U)
#define USBPHY_DEBUG_CLR_ENSQUELCHRESET_SHIFT    (24U)
#define USBPHY_DEBUG_CLR_ENSQUELCHRESET(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_ENSQUELCHRESET_SHIFT)) & USBPHY_DEBUG_CLR_ENSQUELCHRESET_MASK)
#define USBPHY_DEBUG_CLR_SQUELCHRESETLENGTH_MASK (0x1E000000U)
#define USBPHY_DEBUG_CLR_SQUELCHRESETLENGTH_SHIFT (25U)
#define USBPHY_DEBUG_CLR_SQUELCHRESETLENGTH(x)   (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_SQUELCHRESETLENGTH_SHIFT)) & USBPHY_DEBUG_CLR_SQUELCHRESETLENGTH_MASK)
#define USBPHY_DEBUG_CLR_HOST_RESUME_DEBUG_MASK  (0x20000000U)
#define USBPHY_DEBUG_CLR_HOST_RESUME_DEBUG_SHIFT (29U)
#define USBPHY_DEBUG_CLR_HOST_RESUME_DEBUG(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_HOST_RESUME_DEBUG_SHIFT)) & USBPHY_DEBUG_CLR_HOST_RESUME_DEBUG_MASK)
#define USBPHY_DEBUG_CLR_CLKGATE_MASK            (0x40000000U)
#define USBPHY_DEBUG_CLR_CLKGATE_SHIFT           (30U)
#define USBPHY_DEBUG_CLR_CLKGATE(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_CLKGATE_SHIFT)) & USBPHY_DEBUG_CLR_CLKGATE_MASK)
#define USBPHY_DEBUG_CLR_RSVD3_MASK              (0x80000000U)
#define USBPHY_DEBUG_CLR_RSVD3_SHIFT             (31U)
#define USBPHY_DEBUG_CLR_RSVD3(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_CLR_RSVD3_SHIFT)) & USBPHY_DEBUG_CLR_RSVD3_MASK)

/*! @name DEBUG_TOG - USB PHY Debug Register */
#define USBPHY_DEBUG_TOG_OTGIDPIOLOCK_MASK       (0x1U)
#define USBPHY_DEBUG_TOG_OTGIDPIOLOCK_SHIFT      (0U)
#define USBPHY_DEBUG_TOG_OTGIDPIOLOCK(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_OTGIDPIOLOCK_SHIFT)) & USBPHY_DEBUG_TOG_OTGIDPIOLOCK_MASK)
#define USBPHY_DEBUG_TOG_DEBUG_INTERFACE_HOLD_MASK (0x2U)
#define USBPHY_DEBUG_TOG_DEBUG_INTERFACE_HOLD_SHIFT (1U)
#define USBPHY_DEBUG_TOG_DEBUG_INTERFACE_HOLD(x) (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_DEBUG_INTERFACE_HOLD_SHIFT)) & USBPHY_DEBUG_TOG_DEBUG_INTERFACE_HOLD_MASK)
#define USBPHY_DEBUG_TOG_HSTPULLDOWN_MASK        (0xCU)
#define USBPHY_DEBUG_TOG_HSTPULLDOWN_SHIFT       (2U)
#define USBPHY_DEBUG_TOG_HSTPULLDOWN(x)          (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_HSTPULLDOWN_SHIFT)) & USBPHY_DEBUG_TOG_HSTPULLDOWN_MASK)
#define USBPHY_DEBUG_TOG_ENHSTPULLDOWN_MASK      (0x30U)
#define USBPHY_DEBUG_TOG_ENHSTPULLDOWN_SHIFT     (4U)
#define USBPHY_DEBUG_TOG_ENHSTPULLDOWN(x)        (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_ENHSTPULLDOWN_SHIFT)) & USBPHY_DEBUG_TOG_ENHSTPULLDOWN_MASK)
#define USBPHY_DEBUG_TOG_RSVD0_MASK              (0xC0U)
#define USBPHY_DEBUG_TOG_RSVD0_SHIFT             (6U)
#define USBPHY_DEBUG_TOG_RSVD0(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_RSVD0_SHIFT)) & USBPHY_DEBUG_TOG_RSVD0_MASK)
#define USBPHY_DEBUG_TOG_TX2RXCOUNT_MASK         (0xF00U)
#define USBPHY_DEBUG_TOG_TX2RXCOUNT_SHIFT        (8U)
#define USBPHY_DEBUG_TOG_TX2RXCOUNT(x)           (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_TX2RXCOUNT_SHIFT)) & USBPHY_DEBUG_TOG_TX2RXCOUNT_MASK)
#define USBPHY_DEBUG_TOG_ENTX2RXCOUNT_MASK       (0x1000U)
#define USBPHY_DEBUG_TOG_ENTX2RXCOUNT_SHIFT      (12U)
#define USBPHY_DEBUG_TOG_ENTX2RXCOUNT(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_ENTX2RXCOUNT_SHIFT)) & USBPHY_DEBUG_TOG_ENTX2RXCOUNT_MASK)
#define USBPHY_DEBUG_TOG_RSVD1_MASK              (0xE000U)
#define USBPHY_DEBUG_TOG_RSVD1_SHIFT             (13U)
#define USBPHY_DEBUG_TOG_RSVD1(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_RSVD1_SHIFT)) & USBPHY_DEBUG_TOG_RSVD1_MASK)
#define USBPHY_DEBUG_TOG_SQUELCHRESETCOUNT_MASK  (0x1F0000U)
#define USBPHY_DEBUG_TOG_SQUELCHRESETCOUNT_SHIFT (16U)
#define USBPHY_DEBUG_TOG_SQUELCHRESETCOUNT(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_SQUELCHRESETCOUNT_SHIFT)) & USBPHY_DEBUG_TOG_SQUELCHRESETCOUNT_MASK)
#define USBPHY_DEBUG_TOG_RSVD2_MASK              (0xE00000U)
#define USBPHY_DEBUG_TOG_RSVD2_SHIFT             (21U)
#define USBPHY_DEBUG_TOG_RSVD2(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_RSVD2_SHIFT)) & USBPHY_DEBUG_TOG_RSVD2_MASK)
#define USBPHY_DEBUG_TOG_ENSQUELCHRESET_MASK     (0x1000000U)
#define USBPHY_DEBUG_TOG_ENSQUELCHRESET_SHIFT    (24U)
#define USBPHY_DEBUG_TOG_ENSQUELCHRESET(x)       (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_ENSQUELCHRESET_SHIFT)) & USBPHY_DEBUG_TOG_ENSQUELCHRESET_MASK)
#define USBPHY_DEBUG_TOG_SQUELCHRESETLENGTH_MASK (0x1E000000U)
#define USBPHY_DEBUG_TOG_SQUELCHRESETLENGTH_SHIFT (25U)
#define USBPHY_DEBUG_TOG_SQUELCHRESETLENGTH(x)   (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_SQUELCHRESETLENGTH_SHIFT)) & USBPHY_DEBUG_TOG_SQUELCHRESETLENGTH_MASK)
#define USBPHY_DEBUG_TOG_HOST_RESUME_DEBUG_MASK  (0x20000000U)
#define USBPHY_DEBUG_TOG_HOST_RESUME_DEBUG_SHIFT (29U)
#define USBPHY_DEBUG_TOG_HOST_RESUME_DEBUG(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_HOST_RESUME_DEBUG_SHIFT)) & USBPHY_DEBUG_TOG_HOST_RESUME_DEBUG_MASK)
#define USBPHY_DEBUG_TOG_CLKGATE_MASK            (0x40000000U)
#define USBPHY_DEBUG_TOG_CLKGATE_SHIFT           (30U)
#define USBPHY_DEBUG_TOG_CLKGATE(x)              (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_CLKGATE_SHIFT)) & USBPHY_DEBUG_TOG_CLKGATE_MASK)
#define USBPHY_DEBUG_TOG_RSVD3_MASK              (0x80000000U)
#define USBPHY_DEBUG_TOG_RSVD3_SHIFT             (31U)
#define USBPHY_DEBUG_TOG_RSVD3(x)                (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG_TOG_RSVD3_SHIFT)) & USBPHY_DEBUG_TOG_RSVD3_MASK)

/*! @name DEBUG0_STATUS - UTMI Debug Status Register 0 */
#define USBPHY_DEBUG0_STATUS_LOOP_BACK_FAIL_COUNT_MASK (0xFFFFU)
#define USBPHY_DEBUG0_STATUS_LOOP_BACK_FAIL_COUNT_SHIFT (0U)
#define USBPHY_DEBUG0_STATUS_LOOP_BACK_FAIL_COUNT(x) (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG0_STATUS_LOOP_BACK_FAIL_COUNT_SHIFT)) & USBPHY_DEBUG0_STATUS_LOOP_BACK_FAIL_COUNT_MASK)
#define USBPHY_DEBUG0_STATUS_UTMI_RXERROR_FAIL_COUNT_MASK (0x3FF0000U)
#define USBPHY_DEBUG0_STATUS_UTMI_RXERROR_FAIL_COUNT_SHIFT (16U)
#define USBPHY_DEBUG0_STATUS_UTMI_RXERROR_FAIL_COUNT(x) (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG0_STATUS_UTMI_RXERROR_FAIL_COUNT_SHIFT)) & USBPHY_DEBUG0_STATUS_UTMI_RXERROR_FAIL_COUNT_MASK)
#define USBPHY_DEBUG0_STATUS_SQUELCH_COUNT_MASK  (0xFC000000U)
#define USBPHY_DEBUG0_STATUS_SQUELCH_COUNT_SHIFT (26U)
#define USBPHY_DEBUG0_STATUS_SQUELCH_COUNT(x)    (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG0_STATUS_SQUELCH_COUNT_SHIFT)) & USBPHY_DEBUG0_STATUS_SQUELCH_COUNT_MASK)

/*! @name DEBUG1 - UTMI Debug Status Register 1 */
#define USBPHY_DEBUG1_RSVD0_MASK                 (0x1FFFU)
#define USBPHY_DEBUG1_RSVD0_SHIFT                (0U)
#define USBPHY_DEBUG1_RSVD0(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_RSVD0_SHIFT)) & USBPHY_DEBUG1_RSVD0_MASK)
#define USBPHY_DEBUG1_ENTAILADJVD_MASK           (0x6000U)
#define USBPHY_DEBUG1_ENTAILADJVD_SHIFT          (13U)
#define USBPHY_DEBUG1_ENTAILADJVD(x)             (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_ENTAILADJVD_SHIFT)) & USBPHY_DEBUG1_ENTAILADJVD_MASK)
#define USBPHY_DEBUG1_RSVD1_MASK                 (0xFFFF8000U)
#define USBPHY_DEBUG1_RSVD1_SHIFT                (15U)
#define USBPHY_DEBUG1_RSVD1(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_RSVD1_SHIFT)) & USBPHY_DEBUG1_RSVD1_MASK)

/*! @name DEBUG1_SET - UTMI Debug Status Register 1 */
#define USBPHY_DEBUG1_SET_RSVD0_MASK             (0x1FFFU)
#define USBPHY_DEBUG1_SET_RSVD0_SHIFT            (0U)
#define USBPHY_DEBUG1_SET_RSVD0(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_SET_RSVD0_SHIFT)) & USBPHY_DEBUG1_SET_RSVD0_MASK)
#define USBPHY_DEBUG1_SET_ENTAILADJVD_MASK       (0x6000U)
#define USBPHY_DEBUG1_SET_ENTAILADJVD_SHIFT      (13U)
#define USBPHY_DEBUG1_SET_ENTAILADJVD(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_SET_ENTAILADJVD_SHIFT)) & USBPHY_DEBUG1_SET_ENTAILADJVD_MASK)
#define USBPHY_DEBUG1_SET_RSVD1_MASK             (0xFFFF8000U)
#define USBPHY_DEBUG1_SET_RSVD1_SHIFT            (15U)
#define USBPHY_DEBUG1_SET_RSVD1(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_SET_RSVD1_SHIFT)) & USBPHY_DEBUG1_SET_RSVD1_MASK)

/*! @name DEBUG1_CLR - UTMI Debug Status Register 1 */
#define USBPHY_DEBUG1_CLR_RSVD0_MASK             (0x1FFFU)
#define USBPHY_DEBUG1_CLR_RSVD0_SHIFT            (0U)
#define USBPHY_DEBUG1_CLR_RSVD0(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_CLR_RSVD0_SHIFT)) & USBPHY_DEBUG1_CLR_RSVD0_MASK)
#define USBPHY_DEBUG1_CLR_ENTAILADJVD_MASK       (0x6000U)
#define USBPHY_DEBUG1_CLR_ENTAILADJVD_SHIFT      (13U)
#define USBPHY_DEBUG1_CLR_ENTAILADJVD(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_CLR_ENTAILADJVD_SHIFT)) & USBPHY_DEBUG1_CLR_ENTAILADJVD_MASK)
#define USBPHY_DEBUG1_CLR_RSVD1_MASK             (0xFFFF8000U)
#define USBPHY_DEBUG1_CLR_RSVD1_SHIFT            (15U)
#define USBPHY_DEBUG1_CLR_RSVD1(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_CLR_RSVD1_SHIFT)) & USBPHY_DEBUG1_CLR_RSVD1_MASK)

/*! @name DEBUG1_TOG - UTMI Debug Status Register 1 */
#define USBPHY_DEBUG1_TOG_RSVD0_MASK             (0x1FFFU)
#define USBPHY_DEBUG1_TOG_RSVD0_SHIFT            (0U)
#define USBPHY_DEBUG1_TOG_RSVD0(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_TOG_RSVD0_SHIFT)) & USBPHY_DEBUG1_TOG_RSVD0_MASK)
#define USBPHY_DEBUG1_TOG_ENTAILADJVD_MASK       (0x6000U)
#define USBPHY_DEBUG1_TOG_ENTAILADJVD_SHIFT      (13U)
#define USBPHY_DEBUG1_TOG_ENTAILADJVD(x)         (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_TOG_ENTAILADJVD_SHIFT)) & USBPHY_DEBUG1_TOG_ENTAILADJVD_MASK)
#define USBPHY_DEBUG1_TOG_RSVD1_MASK             (0xFFFF8000U)
#define USBPHY_DEBUG1_TOG_RSVD1_SHIFT            (15U)
#define USBPHY_DEBUG1_TOG_RSVD1(x)               (((uint32_t)(((uint32_t)(x)) << USBPHY_DEBUG1_TOG_RSVD1_SHIFT)) & USBPHY_DEBUG1_TOG_RSVD1_MASK)

/*! @name VERSION - UTMI RTL Version */
#define USBPHY_VERSION_STEP_MASK                 (0xFFFFU)
#define USBPHY_VERSION_STEP_SHIFT                (0U)
#define USBPHY_VERSION_STEP(x)                   (((uint32_t)(((uint32_t)(x)) << USBPHY_VERSION_STEP_SHIFT)) & USBPHY_VERSION_STEP_MASK)
#define USBPHY_VERSION_MINOR_MASK                (0xFF0000U)
#define USBPHY_VERSION_MINOR_SHIFT               (16U)
#define USBPHY_VERSION_MINOR(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_VERSION_MINOR_SHIFT)) & USBPHY_VERSION_MINOR_MASK)
#define USBPHY_VERSION_MAJOR_MASK                (0xFF000000U)
#define USBPHY_VERSION_MAJOR_SHIFT               (24U)
#define USBPHY_VERSION_MAJOR(x)                  (((uint32_t)(((uint32_t)(x)) << USBPHY_VERSION_MAJOR_SHIFT)) & USBPHY_VERSION_MAJOR_MASK)


/*!
 * @}
 */ /* end of group USBPHY_Register_Masks */


/* USBPHY - Peripheral instance base addresses */
/** Peripheral USBPHY1 base address */
#define USBPHY1_BASE                             (0x20C9000u)
/** Peripheral USBPHY1 base pointer */
#define USBPHY1                                  ((USBPHY_Type *)USBPHY1_BASE)
/** Peripheral USBPHY2 base address */
#define USBPHY2_BASE                             (0x20CA000u)
/** Peripheral USBPHY2 base pointer */
#define USBPHY2                                  ((USBPHY_Type *)USBPHY2_BASE)
/** Array initializer of USBPHY peripheral base addresses */
#define USBPHY_BASE_ADDRS                        { 0u, USBPHY1_BASE, USBPHY2_BASE }
/** Array initializer of USBPHY peripheral base pointers */
#define USBPHY_BASE_PTRS                         { (USBPHY_Type *)0u, USBPHY1, USBPHY2 }
/** Interrupt vectors for the USBPHY peripheral type */
#define USBPHY_IRQS                              { NotAvail_IRQn, USB_PHY1_IRQn, USB_PHY2_IRQn }
/* Backward compatibility */
#define USBPHY_CTRL_ENDEVPLUGINDET_MASK     USBPHY_CTRL_ENDEVPLUGINDETECT_MASK
#define USBPHY_CTRL_ENDEVPLUGINDET_SHIFT    USBPHY_CTRL_ENDEVPLUGINDETECT_SHIFT
#define USBPHY_CTRL_ENDEVPLUGINDET(x)       USBPHY_CTRL_ENDEVPLUGINDETECT(x)
#define USBPHY_TX_TXCAL45DM_MASK            USBPHY_TX_TXCAL45DN_MASK
#define USBPHY_TX_TXCAL45DM_SHIFT           USBPHY_TX_TXCAL45DN_SHIFT
#define USBPHY_TX_TXCAL45DM(x)              USBPHY_TX_TXCAL45DN(x)


/*!
 * @}
 */ /* end of group USBPHY_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- USB_ANALOG Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USB_ANALOG_Peripheral_Access_Layer USB_ANALOG Peripheral Access Layer
 * @{
 */

/** USB_ANALOG - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x60 */
    __IO uint32_t VBUS_DETECT;                       /**< USB VBUS Detect Register, array offset: 0x0, array step: 0x60 */
    __IO uint32_t VBUS_DETECT_SET;                   /**< USB VBUS Detect Register, array offset: 0x4, array step: 0x60 */
    __IO uint32_t VBUS_DETECT_CLR;                   /**< USB VBUS Detect Register, array offset: 0x8, array step: 0x60 */
    __IO uint32_t VBUS_DETECT_TOG;                   /**< USB VBUS Detect Register, array offset: 0xC, array step: 0x60 */
    __IO uint32_t CHRG_DETECT;                       /**< USB Charger Detect Register, array offset: 0x10, array step: 0x60 */
    __IO uint32_t CHRG_DETECT_SET;                   /**< USB Charger Detect Register, array offset: 0x14, array step: 0x60 */
    __IO uint32_t CHRG_DETECT_CLR;                   /**< USB Charger Detect Register, array offset: 0x18, array step: 0x60 */
    __IO uint32_t CHRG_DETECT_TOG;                   /**< USB Charger Detect Register, array offset: 0x1C, array step: 0x60 */
    __I  uint32_t VBUS_DETECT_STAT;                  /**< USB VBUS Detect Status Register, array offset: 0x20, array step: 0x60 */
         uint8_t RESERVED_0[12];
    __I  uint32_t CHRG_DETECT_STAT;                  /**< USB Charger Detect Status Register, array offset: 0x30, array step: 0x60 */
         uint8_t RESERVED_1[28];
    __IO uint32_t MISC;                              /**< USB Misc Register, array offset: 0x50, array step: 0x60 */
    __IO uint32_t MISC_SET;                          /**< USB Misc Register, array offset: 0x54, array step: 0x60 */
    __IO uint32_t MISC_CLR;                          /**< USB Misc Register, array offset: 0x58, array step: 0x60 */
    __IO uint32_t MISC_TOG;                          /**< USB Misc Register, array offset: 0x5C, array step: 0x60 */
  } INSTANCE[2];
  __I  uint32_t DIGPROG;                           /**< Chip Silicon Version, offset: 0xC0 */
} USB_ANALOG_Type;

/* ----------------------------------------------------------------------------
   -- USB_ANALOG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USB_ANALOG_Register_Masks USB_ANALOG Register Masks
 * @{
 */

/*! @name VBUS_DETECT - USB VBUS Detect Register */
#define USB_ANALOG_VBUS_DETECT_VBUSVALID_THRESH_MASK (0x7U)
#define USB_ANALOG_VBUS_DETECT_VBUSVALID_THRESH_SHIFT (0U)
#define USB_ANALOG_VBUS_DETECT_VBUSVALID_THRESH(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_VBUSVALID_THRESH_SHIFT)) & USB_ANALOG_VBUS_DETECT_VBUSVALID_THRESH_MASK)
#define USB_ANALOG_VBUS_DETECT_VBUSVALID_PWRUP_CMPS_MASK (0x100000U)
#define USB_ANALOG_VBUS_DETECT_VBUSVALID_PWRUP_CMPS_SHIFT (20U)
#define USB_ANALOG_VBUS_DETECT_VBUSVALID_PWRUP_CMPS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_VBUSVALID_PWRUP_CMPS_SHIFT)) & USB_ANALOG_VBUS_DETECT_VBUSVALID_PWRUP_CMPS_MASK)
#define USB_ANALOG_VBUS_DETECT_DISCHARGE_VBUS_MASK (0x4000000U)
#define USB_ANALOG_VBUS_DETECT_DISCHARGE_VBUS_SHIFT (26U)
#define USB_ANALOG_VBUS_DETECT_DISCHARGE_VBUS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_DISCHARGE_VBUS_SHIFT)) & USB_ANALOG_VBUS_DETECT_DISCHARGE_VBUS_MASK)
#define USB_ANALOG_VBUS_DETECT_CHARGE_VBUS_MASK  (0x8000000U)
#define USB_ANALOG_VBUS_DETECT_CHARGE_VBUS_SHIFT (27U)
#define USB_ANALOG_VBUS_DETECT_CHARGE_VBUS(x)    (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_CHARGE_VBUS_SHIFT)) & USB_ANALOG_VBUS_DETECT_CHARGE_VBUS_MASK)

/* The count of USB_ANALOG_VBUS_DETECT */
#define USB_ANALOG_VBUS_DETECT_COUNT             (2U)

/*! @name VBUS_DETECT_SET - USB VBUS Detect Register */
#define USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_THRESH_MASK (0x7U)
#define USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_THRESH_SHIFT (0U)
#define USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_THRESH(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_THRESH_SHIFT)) & USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_THRESH_MASK)
#define USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_PWRUP_CMPS_MASK (0x100000U)
#define USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_PWRUP_CMPS_SHIFT (20U)
#define USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_PWRUP_CMPS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_PWRUP_CMPS_SHIFT)) & USB_ANALOG_VBUS_DETECT_SET_VBUSVALID_PWRUP_CMPS_MASK)
#define USB_ANALOG_VBUS_DETECT_SET_DISCHARGE_VBUS_MASK (0x4000000U)
#define USB_ANALOG_VBUS_DETECT_SET_DISCHARGE_VBUS_SHIFT (26U)
#define USB_ANALOG_VBUS_DETECT_SET_DISCHARGE_VBUS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_SET_DISCHARGE_VBUS_SHIFT)) & USB_ANALOG_VBUS_DETECT_SET_DISCHARGE_VBUS_MASK)
#define USB_ANALOG_VBUS_DETECT_SET_CHARGE_VBUS_MASK (0x8000000U)
#define USB_ANALOG_VBUS_DETECT_SET_CHARGE_VBUS_SHIFT (27U)
#define USB_ANALOG_VBUS_DETECT_SET_CHARGE_VBUS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_SET_CHARGE_VBUS_SHIFT)) & USB_ANALOG_VBUS_DETECT_SET_CHARGE_VBUS_MASK)

/* The count of USB_ANALOG_VBUS_DETECT_SET */
#define USB_ANALOG_VBUS_DETECT_SET_COUNT         (2U)

/*! @name VBUS_DETECT_CLR - USB VBUS Detect Register */
#define USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_THRESH_MASK (0x7U)
#define USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_THRESH_SHIFT (0U)
#define USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_THRESH(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_THRESH_SHIFT)) & USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_THRESH_MASK)
#define USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_PWRUP_CMPS_MASK (0x100000U)
#define USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_PWRUP_CMPS_SHIFT (20U)
#define USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_PWRUP_CMPS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_PWRUP_CMPS_SHIFT)) & USB_ANALOG_VBUS_DETECT_CLR_VBUSVALID_PWRUP_CMPS_MASK)
#define USB_ANALOG_VBUS_DETECT_CLR_DISCHARGE_VBUS_MASK (0x4000000U)
#define USB_ANALOG_VBUS_DETECT_CLR_DISCHARGE_VBUS_SHIFT (26U)
#define USB_ANALOG_VBUS_DETECT_CLR_DISCHARGE_VBUS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_CLR_DISCHARGE_VBUS_SHIFT)) & USB_ANALOG_VBUS_DETECT_CLR_DISCHARGE_VBUS_MASK)
#define USB_ANALOG_VBUS_DETECT_CLR_CHARGE_VBUS_MASK (0x8000000U)
#define USB_ANALOG_VBUS_DETECT_CLR_CHARGE_VBUS_SHIFT (27U)
#define USB_ANALOG_VBUS_DETECT_CLR_CHARGE_VBUS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_CLR_CHARGE_VBUS_SHIFT)) & USB_ANALOG_VBUS_DETECT_CLR_CHARGE_VBUS_MASK)

/* The count of USB_ANALOG_VBUS_DETECT_CLR */
#define USB_ANALOG_VBUS_DETECT_CLR_COUNT         (2U)

/*! @name VBUS_DETECT_TOG - USB VBUS Detect Register */
#define USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_THRESH_MASK (0x7U)
#define USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_THRESH_SHIFT (0U)
#define USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_THRESH(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_THRESH_SHIFT)) & USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_THRESH_MASK)
#define USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_PWRUP_CMPS_MASK (0x100000U)
#define USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_PWRUP_CMPS_SHIFT (20U)
#define USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_PWRUP_CMPS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_PWRUP_CMPS_SHIFT)) & USB_ANALOG_VBUS_DETECT_TOG_VBUSVALID_PWRUP_CMPS_MASK)
#define USB_ANALOG_VBUS_DETECT_TOG_DISCHARGE_VBUS_MASK (0x4000000U)
#define USB_ANALOG_VBUS_DETECT_TOG_DISCHARGE_VBUS_SHIFT (26U)
#define USB_ANALOG_VBUS_DETECT_TOG_DISCHARGE_VBUS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_TOG_DISCHARGE_VBUS_SHIFT)) & USB_ANALOG_VBUS_DETECT_TOG_DISCHARGE_VBUS_MASK)
#define USB_ANALOG_VBUS_DETECT_TOG_CHARGE_VBUS_MASK (0x8000000U)
#define USB_ANALOG_VBUS_DETECT_TOG_CHARGE_VBUS_SHIFT (27U)
#define USB_ANALOG_VBUS_DETECT_TOG_CHARGE_VBUS(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_TOG_CHARGE_VBUS_SHIFT)) & USB_ANALOG_VBUS_DETECT_TOG_CHARGE_VBUS_MASK)

/* The count of USB_ANALOG_VBUS_DETECT_TOG */
#define USB_ANALOG_VBUS_DETECT_TOG_COUNT         (2U)

/*! @name CHRG_DETECT - USB Charger Detect Register */
#define USB_ANALOG_CHRG_DETECT_CHK_CONTACT_MASK  (0x40000U)
#define USB_ANALOG_CHRG_DETECT_CHK_CONTACT_SHIFT (18U)
#define USB_ANALOG_CHRG_DETECT_CHK_CONTACT(x)    (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_CHK_CONTACT_SHIFT)) & USB_ANALOG_CHRG_DETECT_CHK_CONTACT_MASK)
#define USB_ANALOG_CHRG_DETECT_CHK_CHRG_B_MASK   (0x80000U)
#define USB_ANALOG_CHRG_DETECT_CHK_CHRG_B_SHIFT  (19U)
#define USB_ANALOG_CHRG_DETECT_CHK_CHRG_B(x)     (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_CHK_CHRG_B_SHIFT)) & USB_ANALOG_CHRG_DETECT_CHK_CHRG_B_MASK)
#define USB_ANALOG_CHRG_DETECT_EN_B_MASK         (0x100000U)
#define USB_ANALOG_CHRG_DETECT_EN_B_SHIFT        (20U)
#define USB_ANALOG_CHRG_DETECT_EN_B(x)           (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_EN_B_SHIFT)) & USB_ANALOG_CHRG_DETECT_EN_B_MASK)

/* The count of USB_ANALOG_CHRG_DETECT */
#define USB_ANALOG_CHRG_DETECT_COUNT             (2U)

/*! @name CHRG_DETECT_SET - USB Charger Detect Register */
#define USB_ANALOG_CHRG_DETECT_SET_CHK_CONTACT_MASK (0x40000U)
#define USB_ANALOG_CHRG_DETECT_SET_CHK_CONTACT_SHIFT (18U)
#define USB_ANALOG_CHRG_DETECT_SET_CHK_CONTACT(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_SET_CHK_CONTACT_SHIFT)) & USB_ANALOG_CHRG_DETECT_SET_CHK_CONTACT_MASK)
#define USB_ANALOG_CHRG_DETECT_SET_CHK_CHRG_B_MASK (0x80000U)
#define USB_ANALOG_CHRG_DETECT_SET_CHK_CHRG_B_SHIFT (19U)
#define USB_ANALOG_CHRG_DETECT_SET_CHK_CHRG_B(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_SET_CHK_CHRG_B_SHIFT)) & USB_ANALOG_CHRG_DETECT_SET_CHK_CHRG_B_MASK)
#define USB_ANALOG_CHRG_DETECT_SET_EN_B_MASK     (0x100000U)
#define USB_ANALOG_CHRG_DETECT_SET_EN_B_SHIFT    (20U)
#define USB_ANALOG_CHRG_DETECT_SET_EN_B(x)       (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_SET_EN_B_SHIFT)) & USB_ANALOG_CHRG_DETECT_SET_EN_B_MASK)

/* The count of USB_ANALOG_CHRG_DETECT_SET */
#define USB_ANALOG_CHRG_DETECT_SET_COUNT         (2U)

/*! @name CHRG_DETECT_CLR - USB Charger Detect Register */
#define USB_ANALOG_CHRG_DETECT_CLR_CHK_CONTACT_MASK (0x40000U)
#define USB_ANALOG_CHRG_DETECT_CLR_CHK_CONTACT_SHIFT (18U)
#define USB_ANALOG_CHRG_DETECT_CLR_CHK_CONTACT(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_CLR_CHK_CONTACT_SHIFT)) & USB_ANALOG_CHRG_DETECT_CLR_CHK_CONTACT_MASK)
#define USB_ANALOG_CHRG_DETECT_CLR_CHK_CHRG_B_MASK (0x80000U)
#define USB_ANALOG_CHRG_DETECT_CLR_CHK_CHRG_B_SHIFT (19U)
#define USB_ANALOG_CHRG_DETECT_CLR_CHK_CHRG_B(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_CLR_CHK_CHRG_B_SHIFT)) & USB_ANALOG_CHRG_DETECT_CLR_CHK_CHRG_B_MASK)
#define USB_ANALOG_CHRG_DETECT_CLR_EN_B_MASK     (0x100000U)
#define USB_ANALOG_CHRG_DETECT_CLR_EN_B_SHIFT    (20U)
#define USB_ANALOG_CHRG_DETECT_CLR_EN_B(x)       (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_CLR_EN_B_SHIFT)) & USB_ANALOG_CHRG_DETECT_CLR_EN_B_MASK)

/* The count of USB_ANALOG_CHRG_DETECT_CLR */
#define USB_ANALOG_CHRG_DETECT_CLR_COUNT         (2U)

/*! @name CHRG_DETECT_TOG - USB Charger Detect Register */
#define USB_ANALOG_CHRG_DETECT_TOG_CHK_CONTACT_MASK (0x40000U)
#define USB_ANALOG_CHRG_DETECT_TOG_CHK_CONTACT_SHIFT (18U)
#define USB_ANALOG_CHRG_DETECT_TOG_CHK_CONTACT(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_TOG_CHK_CONTACT_SHIFT)) & USB_ANALOG_CHRG_DETECT_TOG_CHK_CONTACT_MASK)
#define USB_ANALOG_CHRG_DETECT_TOG_CHK_CHRG_B_MASK (0x80000U)
#define USB_ANALOG_CHRG_DETECT_TOG_CHK_CHRG_B_SHIFT (19U)
#define USB_ANALOG_CHRG_DETECT_TOG_CHK_CHRG_B(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_TOG_CHK_CHRG_B_SHIFT)) & USB_ANALOG_CHRG_DETECT_TOG_CHK_CHRG_B_MASK)
#define USB_ANALOG_CHRG_DETECT_TOG_EN_B_MASK     (0x100000U)
#define USB_ANALOG_CHRG_DETECT_TOG_EN_B_SHIFT    (20U)
#define USB_ANALOG_CHRG_DETECT_TOG_EN_B(x)       (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_TOG_EN_B_SHIFT)) & USB_ANALOG_CHRG_DETECT_TOG_EN_B_MASK)

/* The count of USB_ANALOG_CHRG_DETECT_TOG */
#define USB_ANALOG_CHRG_DETECT_TOG_COUNT         (2U)

/*! @name VBUS_DETECT_STAT - USB VBUS Detect Status Register */
#define USB_ANALOG_VBUS_DETECT_STAT_SESSEND_MASK (0x1U)
#define USB_ANALOG_VBUS_DETECT_STAT_SESSEND_SHIFT (0U)
#define USB_ANALOG_VBUS_DETECT_STAT_SESSEND(x)   (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_STAT_SESSEND_SHIFT)) & USB_ANALOG_VBUS_DETECT_STAT_SESSEND_MASK)
#define USB_ANALOG_VBUS_DETECT_STAT_BVALID_MASK  (0x2U)
#define USB_ANALOG_VBUS_DETECT_STAT_BVALID_SHIFT (1U)
#define USB_ANALOG_VBUS_DETECT_STAT_BVALID(x)    (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_STAT_BVALID_SHIFT)) & USB_ANALOG_VBUS_DETECT_STAT_BVALID_MASK)
#define USB_ANALOG_VBUS_DETECT_STAT_AVALID_MASK  (0x4U)
#define USB_ANALOG_VBUS_DETECT_STAT_AVALID_SHIFT (2U)
#define USB_ANALOG_VBUS_DETECT_STAT_AVALID(x)    (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_STAT_AVALID_SHIFT)) & USB_ANALOG_VBUS_DETECT_STAT_AVALID_MASK)
#define USB_ANALOG_VBUS_DETECT_STAT_VBUS_VALID_MASK (0x8U)
#define USB_ANALOG_VBUS_DETECT_STAT_VBUS_VALID_SHIFT (3U)
#define USB_ANALOG_VBUS_DETECT_STAT_VBUS_VALID(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_VBUS_DETECT_STAT_VBUS_VALID_SHIFT)) & USB_ANALOG_VBUS_DETECT_STAT_VBUS_VALID_MASK)

/* The count of USB_ANALOG_VBUS_DETECT_STAT */
#define USB_ANALOG_VBUS_DETECT_STAT_COUNT        (2U)

/*! @name CHRG_DETECT_STAT - USB Charger Detect Status Register */
#define USB_ANALOG_CHRG_DETECT_STAT_PLUG_CONTACT_MASK (0x1U)
#define USB_ANALOG_CHRG_DETECT_STAT_PLUG_CONTACT_SHIFT (0U)
#define USB_ANALOG_CHRG_DETECT_STAT_PLUG_CONTACT(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_STAT_PLUG_CONTACT_SHIFT)) & USB_ANALOG_CHRG_DETECT_STAT_PLUG_CONTACT_MASK)
#define USB_ANALOG_CHRG_DETECT_STAT_CHRG_DETECTED_MASK (0x2U)
#define USB_ANALOG_CHRG_DETECT_STAT_CHRG_DETECTED_SHIFT (1U)
#define USB_ANALOG_CHRG_DETECT_STAT_CHRG_DETECTED(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_STAT_CHRG_DETECTED_SHIFT)) & USB_ANALOG_CHRG_DETECT_STAT_CHRG_DETECTED_MASK)
#define USB_ANALOG_CHRG_DETECT_STAT_DM_STATE_MASK (0x4U)
#define USB_ANALOG_CHRG_DETECT_STAT_DM_STATE_SHIFT (2U)
#define USB_ANALOG_CHRG_DETECT_STAT_DM_STATE(x)  (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_STAT_DM_STATE_SHIFT)) & USB_ANALOG_CHRG_DETECT_STAT_DM_STATE_MASK)
#define USB_ANALOG_CHRG_DETECT_STAT_DP_STATE_MASK (0x8U)
#define USB_ANALOG_CHRG_DETECT_STAT_DP_STATE_SHIFT (3U)
#define USB_ANALOG_CHRG_DETECT_STAT_DP_STATE(x)  (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_CHRG_DETECT_STAT_DP_STATE_SHIFT)) & USB_ANALOG_CHRG_DETECT_STAT_DP_STATE_MASK)

/* The count of USB_ANALOG_CHRG_DETECT_STAT */
#define USB_ANALOG_CHRG_DETECT_STAT_COUNT        (2U)

/*! @name MISC - USB Misc Register */
#define USB_ANALOG_MISC_HS_USE_EXTERNAL_R_MASK   (0x1U)
#define USB_ANALOG_MISC_HS_USE_EXTERNAL_R_SHIFT  (0U)
#define USB_ANALOG_MISC_HS_USE_EXTERNAL_R(x)     (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_HS_USE_EXTERNAL_R_SHIFT)) & USB_ANALOG_MISC_HS_USE_EXTERNAL_R_MASK)
#define USB_ANALOG_MISC_EN_DEGLITCH_MASK         (0x2U)
#define USB_ANALOG_MISC_EN_DEGLITCH_SHIFT        (1U)
#define USB_ANALOG_MISC_EN_DEGLITCH(x)           (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_EN_DEGLITCH_SHIFT)) & USB_ANALOG_MISC_EN_DEGLITCH_MASK)
#define USB_ANALOG_MISC_EN_CLK_UTMI_MASK         (0x40000000U)
#define USB_ANALOG_MISC_EN_CLK_UTMI_SHIFT        (30U)
#define USB_ANALOG_MISC_EN_CLK_UTMI(x)           (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_EN_CLK_UTMI_SHIFT)) & USB_ANALOG_MISC_EN_CLK_UTMI_MASK)

/* The count of USB_ANALOG_MISC */
#define USB_ANALOG_MISC_COUNT                    (2U)

/*! @name MISC_SET - USB Misc Register */
#define USB_ANALOG_MISC_SET_HS_USE_EXTERNAL_R_MASK (0x1U)
#define USB_ANALOG_MISC_SET_HS_USE_EXTERNAL_R_SHIFT (0U)
#define USB_ANALOG_MISC_SET_HS_USE_EXTERNAL_R(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_SET_HS_USE_EXTERNAL_R_SHIFT)) & USB_ANALOG_MISC_SET_HS_USE_EXTERNAL_R_MASK)
#define USB_ANALOG_MISC_SET_EN_DEGLITCH_MASK     (0x2U)
#define USB_ANALOG_MISC_SET_EN_DEGLITCH_SHIFT    (1U)
#define USB_ANALOG_MISC_SET_EN_DEGLITCH(x)       (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_SET_EN_DEGLITCH_SHIFT)) & USB_ANALOG_MISC_SET_EN_DEGLITCH_MASK)
#define USB_ANALOG_MISC_SET_EN_CLK_UTMI_MASK     (0x40000000U)
#define USB_ANALOG_MISC_SET_EN_CLK_UTMI_SHIFT    (30U)
#define USB_ANALOG_MISC_SET_EN_CLK_UTMI(x)       (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_SET_EN_CLK_UTMI_SHIFT)) & USB_ANALOG_MISC_SET_EN_CLK_UTMI_MASK)

/* The count of USB_ANALOG_MISC_SET */
#define USB_ANALOG_MISC_SET_COUNT                (2U)

/*! @name MISC_CLR - USB Misc Register */
#define USB_ANALOG_MISC_CLR_HS_USE_EXTERNAL_R_MASK (0x1U)
#define USB_ANALOG_MISC_CLR_HS_USE_EXTERNAL_R_SHIFT (0U)
#define USB_ANALOG_MISC_CLR_HS_USE_EXTERNAL_R(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_CLR_HS_USE_EXTERNAL_R_SHIFT)) & USB_ANALOG_MISC_CLR_HS_USE_EXTERNAL_R_MASK)
#define USB_ANALOG_MISC_CLR_EN_DEGLITCH_MASK     (0x2U)
#define USB_ANALOG_MISC_CLR_EN_DEGLITCH_SHIFT    (1U)
#define USB_ANALOG_MISC_CLR_EN_DEGLITCH(x)       (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_CLR_EN_DEGLITCH_SHIFT)) & USB_ANALOG_MISC_CLR_EN_DEGLITCH_MASK)
#define USB_ANALOG_MISC_CLR_EN_CLK_UTMI_MASK     (0x40000000U)
#define USB_ANALOG_MISC_CLR_EN_CLK_UTMI_SHIFT    (30U)
#define USB_ANALOG_MISC_CLR_EN_CLK_UTMI(x)       (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_CLR_EN_CLK_UTMI_SHIFT)) & USB_ANALOG_MISC_CLR_EN_CLK_UTMI_MASK)

/* The count of USB_ANALOG_MISC_CLR */
#define USB_ANALOG_MISC_CLR_COUNT                (2U)

/*! @name MISC_TOG - USB Misc Register */
#define USB_ANALOG_MISC_TOG_HS_USE_EXTERNAL_R_MASK (0x1U)
#define USB_ANALOG_MISC_TOG_HS_USE_EXTERNAL_R_SHIFT (0U)
#define USB_ANALOG_MISC_TOG_HS_USE_EXTERNAL_R(x) (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_TOG_HS_USE_EXTERNAL_R_SHIFT)) & USB_ANALOG_MISC_TOG_HS_USE_EXTERNAL_R_MASK)
#define USB_ANALOG_MISC_TOG_EN_DEGLITCH_MASK     (0x2U)
#define USB_ANALOG_MISC_TOG_EN_DEGLITCH_SHIFT    (1U)
#define USB_ANALOG_MISC_TOG_EN_DEGLITCH(x)       (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_TOG_EN_DEGLITCH_SHIFT)) & USB_ANALOG_MISC_TOG_EN_DEGLITCH_MASK)
#define USB_ANALOG_MISC_TOG_EN_CLK_UTMI_MASK     (0x40000000U)
#define USB_ANALOG_MISC_TOG_EN_CLK_UTMI_SHIFT    (30U)
#define USB_ANALOG_MISC_TOG_EN_CLK_UTMI(x)       (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_MISC_TOG_EN_CLK_UTMI_SHIFT)) & USB_ANALOG_MISC_TOG_EN_CLK_UTMI_MASK)

/* The count of USB_ANALOG_MISC_TOG */
#define USB_ANALOG_MISC_TOG_COUNT                (2U)

/*! @name DIGPROG - Chip Silicon Version */
#define USB_ANALOG_DIGPROG_MINOR_MASK            (0xFFU)
#define USB_ANALOG_DIGPROG_MINOR_SHIFT           (0U)
#define USB_ANALOG_DIGPROG_MINOR(x)              (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_DIGPROG_MINOR_SHIFT)) & USB_ANALOG_DIGPROG_MINOR_MASK)
#define USB_ANALOG_DIGPROG_MAJOR_LOWER_MASK      (0xFF00U)
#define USB_ANALOG_DIGPROG_MAJOR_LOWER_SHIFT     (8U)
#define USB_ANALOG_DIGPROG_MAJOR_LOWER(x)        (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_DIGPROG_MAJOR_LOWER_SHIFT)) & USB_ANALOG_DIGPROG_MAJOR_LOWER_MASK)
#define USB_ANALOG_DIGPROG_MAJOR_UPPER_MASK      (0xFF0000U)
#define USB_ANALOG_DIGPROG_MAJOR_UPPER_SHIFT     (16U)
#define USB_ANALOG_DIGPROG_MAJOR_UPPER(x)        (((uint32_t)(((uint32_t)(x)) << USB_ANALOG_DIGPROG_MAJOR_UPPER_SHIFT)) & USB_ANALOG_DIGPROG_MAJOR_UPPER_MASK)


/*!
 * @}
 */ /* end of group USB_ANALOG_Register_Masks */


/* USB_ANALOG - Peripheral instance base addresses */
/** Peripheral USB_ANALOG base address */
#define USB_ANALOG_BASE                          (0x20C81A0u)
/** Peripheral USB_ANALOG base pointer */
#define USB_ANALOG                               ((USB_ANALOG_Type *)USB_ANALOG_BASE)
/** Array initializer of USB_ANALOG peripheral base addresses */
#define USB_ANALOG_BASE_ADDRS                    { USB_ANALOG_BASE }
/** Array initializer of USB_ANALOG peripheral base pointers */
#define USB_ANALOG_BASE_PTRS                     { USB_ANALOG }

/*!
 * @}
 */ /* end of group USB_ANALOG_Peripheral_Access_Layer */


#endif