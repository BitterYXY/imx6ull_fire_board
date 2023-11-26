#ifndef __UART_H__
#define __UART_H__

#include "common.h"
#include "bsp_common.h"
#include "string.h"
#include "gic.h"
#include "clock.h"

/** UART - Register Layout Typedef */
typedef struct {
  __I  uint32_t URXD;                              /**< UART Receiver Register, offset: 0x0 */
       uint8_t RESERVED_0[60];
  __IO uint32_t UTXD;                              /**< UART Transmitter Register, offset: 0x40 */
       uint8_t RESERVED_1[60];
  __IO uint32_t UCR1;                              /**< UART Control Register 1, offset: 0x80 */
  __IO uint32_t UCR2;                              /**< UART Control Register 2, offset: 0x84 */
  __IO uint32_t UCR3;                              /**< UART Control Register 3, offset: 0x88 */
  __IO uint32_t UCR4;                              /**< UART Control Register 4, offset: 0x8C */
  __IO uint32_t UFCR;                              /**< UART FIFO Control Register, offset: 0x90 */
  __IO uint32_t USR1;                              /**< UART Status Register 1, offset: 0x94 */
  __IO uint32_t USR2;                              /**< UART Status Register 2, offset: 0x98 */
  __IO uint32_t UESC;                              /**< UART Escape Character Register, offset: 0x9C */
  __IO uint32_t UTIM;                              /**< UART Escape Timer Register, offset: 0xA0 */
  __IO uint32_t UBIR;                              /**< UART BRM Incremental Register, offset: 0xA4 */
  __IO uint32_t UBMR;                              /**< UART BRM Modulator Register, offset: 0xA8 */
  __I  uint32_t UBRC;                              /**< UART Baud Rate Count Register, offset: 0xAC */
  __IO uint32_t ONEMS;                             /**< UART One Millisecond Register, offset: 0xB0 */
  __IO uint32_t UTS;                               /**< UART Test Register, offset: 0xB4 */
  __IO uint32_t UMCR;                              /**< UART RS-485 Mode Control Register, offset: 0xB8 */
} UART_Type;

/* ----------------------------------------------------------------------------
   -- UART Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UART_Register_Masks UART Register Masks
 * @{
 */

/*! @name URXD - UART Receiver Register */
#define UART_URXD_RX_DATA_MASK                   (0xFFU)
#define UART_URXD_RX_DATA_SHIFT                  (0U)
#define UART_URXD_RX_DATA(x)                     (((uint32_t)(((uint32_t)(x)) << UART_URXD_RX_DATA_SHIFT)) & UART_URXD_RX_DATA_MASK)
#define UART_URXD_PRERR_MASK                     (0x400U)
#define UART_URXD_PRERR_SHIFT                    (10U)
#define UART_URXD_PRERR(x)                       (((uint32_t)(((uint32_t)(x)) << UART_URXD_PRERR_SHIFT)) & UART_URXD_PRERR_MASK)
#define UART_URXD_BRK_MASK                       (0x800U)
#define UART_URXD_BRK_SHIFT                      (11U)
#define UART_URXD_BRK(x)                         (((uint32_t)(((uint32_t)(x)) << UART_URXD_BRK_SHIFT)) & UART_URXD_BRK_MASK)
#define UART_URXD_FRMERR_MASK                    (0x1000U)
#define UART_URXD_FRMERR_SHIFT                   (12U)
#define UART_URXD_FRMERR(x)                      (((uint32_t)(((uint32_t)(x)) << UART_URXD_FRMERR_SHIFT)) & UART_URXD_FRMERR_MASK)
#define UART_URXD_OVRRUN_MASK                    (0x2000U)
#define UART_URXD_OVRRUN_SHIFT                   (13U)
#define UART_URXD_OVRRUN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_URXD_OVRRUN_SHIFT)) & UART_URXD_OVRRUN_MASK)
#define UART_URXD_ERR_MASK                       (0x4000U)
#define UART_URXD_ERR_SHIFT                      (14U)
#define UART_URXD_ERR(x)                         (((uint32_t)(((uint32_t)(x)) << UART_URXD_ERR_SHIFT)) & UART_URXD_ERR_MASK)
#define UART_URXD_CHARRDY_MASK                   (0x8000U)
#define UART_URXD_CHARRDY_SHIFT                  (15U)
#define UART_URXD_CHARRDY(x)                     (((uint32_t)(((uint32_t)(x)) << UART_URXD_CHARRDY_SHIFT)) & UART_URXD_CHARRDY_MASK)

/*! @name UTXD - UART Transmitter Register */
#define UART_UTXD_TX_DATA_MASK                   (0xFFU)
#define UART_UTXD_TX_DATA_SHIFT                  (0U)
#define UART_UTXD_TX_DATA(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UTXD_TX_DATA_SHIFT)) & UART_UTXD_TX_DATA_MASK)

/*! @name UCR1 - UART Control Register 1 */
#define UART_UCR1_UARTEN_MASK                    (0x1U)
#define UART_UCR1_UARTEN_SHIFT                   (0U)
#define UART_UCR1_UARTEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_UARTEN_SHIFT)) & UART_UCR1_UARTEN_MASK)
#define UART_UCR1_DOZE_MASK                      (0x2U)
#define UART_UCR1_DOZE_SHIFT                     (1U)
#define UART_UCR1_DOZE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_DOZE_SHIFT)) & UART_UCR1_DOZE_MASK)
#define UART_UCR1_ATDMAEN_MASK                   (0x4U)
#define UART_UCR1_ATDMAEN_SHIFT                  (2U)
#define UART_UCR1_ATDMAEN(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UCR1_ATDMAEN_SHIFT)) & UART_UCR1_ATDMAEN_MASK)
#define UART_UCR1_TXDMAEN_MASK                   (0x8U)
#define UART_UCR1_TXDMAEN_SHIFT                  (3U)
#define UART_UCR1_TXDMAEN(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UCR1_TXDMAEN_SHIFT)) & UART_UCR1_TXDMAEN_MASK)
#define UART_UCR1_SNDBRK_MASK                    (0x10U)
#define UART_UCR1_SNDBRK_SHIFT                   (4U)
#define UART_UCR1_SNDBRK(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_SNDBRK_SHIFT)) & UART_UCR1_SNDBRK_MASK)
#define UART_UCR1_RTSDEN_MASK                    (0x20U)
#define UART_UCR1_RTSDEN_SHIFT                   (5U)
#define UART_UCR1_RTSDEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_RTSDEN_SHIFT)) & UART_UCR1_RTSDEN_MASK)
#define UART_UCR1_TXMPTYEN_MASK                  (0x40U)
#define UART_UCR1_TXMPTYEN_SHIFT                 (6U)
#define UART_UCR1_TXMPTYEN(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UCR1_TXMPTYEN_SHIFT)) & UART_UCR1_TXMPTYEN_MASK)
#define UART_UCR1_IREN_MASK                      (0x80U)
#define UART_UCR1_IREN_SHIFT                     (7U)
#define UART_UCR1_IREN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_IREN_SHIFT)) & UART_UCR1_IREN_MASK)
#define UART_UCR1_RXDMAEN_MASK                   (0x100U)
#define UART_UCR1_RXDMAEN_SHIFT                  (8U)
#define UART_UCR1_RXDMAEN(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UCR1_RXDMAEN_SHIFT)) & UART_UCR1_RXDMAEN_MASK)
#define UART_UCR1_RRDYEN_MASK                    (0x200U)
#define UART_UCR1_RRDYEN_SHIFT                   (9U)
#define UART_UCR1_RRDYEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_RRDYEN_SHIFT)) & UART_UCR1_RRDYEN_MASK)
#define UART_UCR1_ICD_MASK                       (0xC00U)
#define UART_UCR1_ICD_SHIFT                      (10U)
#define UART_UCR1_ICD(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UCR1_ICD_SHIFT)) & UART_UCR1_ICD_MASK)
#define UART_UCR1_IDEN_MASK                      (0x1000U)
#define UART_UCR1_IDEN_SHIFT                     (12U)
#define UART_UCR1_IDEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_IDEN_SHIFT)) & UART_UCR1_IDEN_MASK)
#define UART_UCR1_TRDYEN_MASK                    (0x2000U)
#define UART_UCR1_TRDYEN_SHIFT                   (13U)
#define UART_UCR1_TRDYEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR1_TRDYEN_SHIFT)) & UART_UCR1_TRDYEN_MASK)
#define UART_UCR1_ADBR_MASK                      (0x4000U)
#define UART_UCR1_ADBR_SHIFT                     (14U)
#define UART_UCR1_ADBR(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_ADBR_SHIFT)) & UART_UCR1_ADBR_MASK)
#define UART_UCR1_ADEN_MASK                      (0x8000U)
#define UART_UCR1_ADEN_SHIFT                     (15U)
#define UART_UCR1_ADEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR1_ADEN_SHIFT)) & UART_UCR1_ADEN_MASK)

/*! @name UCR2 - UART Control Register 2 */
#define UART_UCR2_SRST_MASK                      (0x1U)
#define UART_UCR2_SRST_SHIFT                     (0U)
#define UART_UCR2_SRST(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_SRST_SHIFT)) & UART_UCR2_SRST_MASK)
#define UART_UCR2_RXEN_MASK                      (0x2U)
#define UART_UCR2_RXEN_SHIFT                     (1U)
#define UART_UCR2_RXEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_RXEN_SHIFT)) & UART_UCR2_RXEN_MASK)
#define UART_UCR2_TXEN_MASK                      (0x4U)
#define UART_UCR2_TXEN_SHIFT                     (2U)
#define UART_UCR2_TXEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_TXEN_SHIFT)) & UART_UCR2_TXEN_MASK)
#define UART_UCR2_ATEN_MASK                      (0x8U)
#define UART_UCR2_ATEN_SHIFT                     (3U)
#define UART_UCR2_ATEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_ATEN_SHIFT)) & UART_UCR2_ATEN_MASK)
#define UART_UCR2_RTSEN_MASK                     (0x10U)
#define UART_UCR2_RTSEN_SHIFT                    (4U)
#define UART_UCR2_RTSEN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR2_RTSEN_SHIFT)) & UART_UCR2_RTSEN_MASK)
#define UART_UCR2_WS_MASK                        (0x20U)
#define UART_UCR2_WS_SHIFT                       (5U)
#define UART_UCR2_WS(x)                          (((uint32_t)(((uint32_t)(x)) << UART_UCR2_WS_SHIFT)) & UART_UCR2_WS_MASK)
#define UART_UCR2_STPB_MASK                      (0x40U)
#define UART_UCR2_STPB_SHIFT                     (6U)
#define UART_UCR2_STPB(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_STPB_SHIFT)) & UART_UCR2_STPB_MASK)
#define UART_UCR2_PROE_MASK                      (0x80U)
#define UART_UCR2_PROE_SHIFT                     (7U)
#define UART_UCR2_PROE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_PROE_SHIFT)) & UART_UCR2_PROE_MASK)
#define UART_UCR2_PREN_MASK                      (0x100U)
#define UART_UCR2_PREN_SHIFT                     (8U)
#define UART_UCR2_PREN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_PREN_SHIFT)) & UART_UCR2_PREN_MASK)
#define UART_UCR2_RTEC_MASK                      (0x600U)
#define UART_UCR2_RTEC_SHIFT                     (9U)
#define UART_UCR2_RTEC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_RTEC_SHIFT)) & UART_UCR2_RTEC_MASK)
#define UART_UCR2_ESCEN_MASK                     (0x800U)
#define UART_UCR2_ESCEN_SHIFT                    (11U)
#define UART_UCR2_ESCEN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR2_ESCEN_SHIFT)) & UART_UCR2_ESCEN_MASK)
#define UART_UCR2_CTS_MASK                       (0x1000U)
#define UART_UCR2_CTS_SHIFT                      (12U)
#define UART_UCR2_CTS(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UCR2_CTS_SHIFT)) & UART_UCR2_CTS_MASK)
#define UART_UCR2_CTSC_MASK                      (0x2000U)
#define UART_UCR2_CTSC_SHIFT                     (13U)
#define UART_UCR2_CTSC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_CTSC_SHIFT)) & UART_UCR2_CTSC_MASK)
#define UART_UCR2_IRTS_MASK                      (0x4000U)
#define UART_UCR2_IRTS_SHIFT                     (14U)
#define UART_UCR2_IRTS(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_IRTS_SHIFT)) & UART_UCR2_IRTS_MASK)
#define UART_UCR2_ESCI_MASK                      (0x8000U)
#define UART_UCR2_ESCI_SHIFT                     (15U)
#define UART_UCR2_ESCI(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR2_ESCI_SHIFT)) & UART_UCR2_ESCI_MASK)

/*! @name UCR3 - UART Control Register 3 */
#define UART_UCR3_ACIEN_MASK                     (0x1U)
#define UART_UCR3_ACIEN_SHIFT                    (0U)
#define UART_UCR3_ACIEN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR3_ACIEN_SHIFT)) & UART_UCR3_ACIEN_MASK)
#define UART_UCR3_INVT_MASK                      (0x2U)
#define UART_UCR3_INVT_SHIFT                     (1U)
#define UART_UCR3_INVT(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR3_INVT_SHIFT)) & UART_UCR3_INVT_MASK)
#define UART_UCR3_RXDMUXSEL_MASK                 (0x4U)
#define UART_UCR3_RXDMUXSEL_SHIFT                (2U)
#define UART_UCR3_RXDMUXSEL(x)                   (((uint32_t)(((uint32_t)(x)) << UART_UCR3_RXDMUXSEL_SHIFT)) & UART_UCR3_RXDMUXSEL_MASK)
#define UART_UCR3_DTRDEN_MASK                    (0x8U)
#define UART_UCR3_DTRDEN_SHIFT                   (3U)
#define UART_UCR3_DTRDEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DTRDEN_SHIFT)) & UART_UCR3_DTRDEN_MASK)
#define UART_UCR3_AWAKEN_MASK                    (0x10U)
#define UART_UCR3_AWAKEN_SHIFT                   (4U)
#define UART_UCR3_AWAKEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR3_AWAKEN_SHIFT)) & UART_UCR3_AWAKEN_MASK)
#define UART_UCR3_AIRINTEN_MASK                  (0x20U)
#define UART_UCR3_AIRINTEN_SHIFT                 (5U)
#define UART_UCR3_AIRINTEN(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UCR3_AIRINTEN_SHIFT)) & UART_UCR3_AIRINTEN_MASK)
#define UART_UCR3_RXDSEN_MASK                    (0x40U)
#define UART_UCR3_RXDSEN_SHIFT                   (6U)
#define UART_UCR3_RXDSEN(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR3_RXDSEN_SHIFT)) & UART_UCR3_RXDSEN_MASK)
#define UART_UCR3_ADNIMP_MASK                    (0x80U)
#define UART_UCR3_ADNIMP_SHIFT                   (7U)
#define UART_UCR3_ADNIMP(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UCR3_ADNIMP_SHIFT)) & UART_UCR3_ADNIMP_MASK)
#define UART_UCR3_RI_MASK                        (0x100U)
#define UART_UCR3_RI_SHIFT                       (8U)
#define UART_UCR3_RI(x)                          (((uint32_t)(((uint32_t)(x)) << UART_UCR3_RI_SHIFT)) & UART_UCR3_RI_MASK)
#define UART_UCR3_DCD_MASK                       (0x200U)
#define UART_UCR3_DCD_SHIFT                      (9U)
#define UART_UCR3_DCD(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DCD_SHIFT)) & UART_UCR3_DCD_MASK)
#define UART_UCR3_DSR_MASK                       (0x400U)
#define UART_UCR3_DSR_SHIFT                      (10U)
#define UART_UCR3_DSR(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DSR_SHIFT)) & UART_UCR3_DSR_MASK)
#define UART_UCR3_FRAERREN_MASK                  (0x800U)
#define UART_UCR3_FRAERREN_SHIFT                 (11U)
#define UART_UCR3_FRAERREN(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UCR3_FRAERREN_SHIFT)) & UART_UCR3_FRAERREN_MASK)
#define UART_UCR3_PARERREN_MASK                  (0x1000U)
#define UART_UCR3_PARERREN_SHIFT                 (12U)
#define UART_UCR3_PARERREN(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UCR3_PARERREN_SHIFT)) & UART_UCR3_PARERREN_MASK)
#define UART_UCR3_DTREN_MASK                     (0x2000U)
#define UART_UCR3_DTREN_SHIFT                    (13U)
#define UART_UCR3_DTREN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DTREN_SHIFT)) & UART_UCR3_DTREN_MASK)
#define UART_UCR3_DPEC_MASK                      (0xC000U)
#define UART_UCR3_DPEC_SHIFT                     (14U)
#define UART_UCR3_DPEC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR3_DPEC_SHIFT)) & UART_UCR3_DPEC_MASK)

/*! @name UCR4 - UART Control Register 4 */
#define UART_UCR4_DREN_MASK                      (0x1U)
#define UART_UCR4_DREN_SHIFT                     (0U)
#define UART_UCR4_DREN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_DREN_SHIFT)) & UART_UCR4_DREN_MASK)
#define UART_UCR4_OREN_MASK                      (0x2U)
#define UART_UCR4_OREN_SHIFT                     (1U)
#define UART_UCR4_OREN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_OREN_SHIFT)) & UART_UCR4_OREN_MASK)
#define UART_UCR4_BKEN_MASK                      (0x4U)
#define UART_UCR4_BKEN_SHIFT                     (2U)
#define UART_UCR4_BKEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_BKEN_SHIFT)) & UART_UCR4_BKEN_MASK)
#define UART_UCR4_TCEN_MASK                      (0x8U)
#define UART_UCR4_TCEN_SHIFT                     (3U)
#define UART_UCR4_TCEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_TCEN_SHIFT)) & UART_UCR4_TCEN_MASK)
#define UART_UCR4_LPBYP_MASK                     (0x10U)
#define UART_UCR4_LPBYP_SHIFT                    (4U)
#define UART_UCR4_LPBYP(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR4_LPBYP_SHIFT)) & UART_UCR4_LPBYP_MASK)
#define UART_UCR4_IRSC_MASK                      (0x20U)
#define UART_UCR4_IRSC_SHIFT                     (5U)
#define UART_UCR4_IRSC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_IRSC_SHIFT)) & UART_UCR4_IRSC_MASK)
#define UART_UCR4_IDDMAEN_MASK                   (0x40U)
#define UART_UCR4_IDDMAEN_SHIFT                  (6U)
#define UART_UCR4_IDDMAEN(x)                     (((uint32_t)(((uint32_t)(x)) << UART_UCR4_IDDMAEN_SHIFT)) & UART_UCR4_IDDMAEN_MASK)
#define UART_UCR4_WKEN_MASK                      (0x80U)
#define UART_UCR4_WKEN_SHIFT                     (7U)
#define UART_UCR4_WKEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_WKEN_SHIFT)) & UART_UCR4_WKEN_MASK)
#define UART_UCR4_ENIRI_MASK                     (0x100U)
#define UART_UCR4_ENIRI_SHIFT                    (8U)
#define UART_UCR4_ENIRI(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR4_ENIRI_SHIFT)) & UART_UCR4_ENIRI_MASK)
#define UART_UCR4_INVR_MASK                      (0x200U)
#define UART_UCR4_INVR_SHIFT                     (9U)
#define UART_UCR4_INVR(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UCR4_INVR_SHIFT)) & UART_UCR4_INVR_MASK)
#define UART_UCR4_CTSTL_MASK                     (0xFC00U)
#define UART_UCR4_CTSTL_SHIFT                    (10U)
#define UART_UCR4_CTSTL(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UCR4_CTSTL_SHIFT)) & UART_UCR4_CTSTL_MASK)

/*! @name UFCR - UART FIFO Control Register */
#define UART_UFCR_RXTL_MASK                      (0x3FU)
#define UART_UFCR_RXTL_SHIFT                     (0U)
#define UART_UFCR_RXTL(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UFCR_RXTL_SHIFT)) & UART_UFCR_RXTL_MASK)
#define UART_UFCR_DCEDTE_MASK                    (0x40U)
#define UART_UFCR_DCEDTE_SHIFT                   (6U)
#define UART_UFCR_DCEDTE(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UFCR_DCEDTE_SHIFT)) & UART_UFCR_DCEDTE_MASK)
#define UART_UFCR_RFDIV_MASK                     (0x380U)
#define UART_UFCR_RFDIV_SHIFT                    (7U)
#define UART_UFCR_RFDIV(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UFCR_RFDIV_SHIFT)) & UART_UFCR_RFDIV_MASK)
#define UART_UFCR_TXTL_MASK                      (0xFC00U)
#define UART_UFCR_TXTL_SHIFT                     (10U)
#define UART_UFCR_TXTL(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UFCR_TXTL_SHIFT)) & UART_UFCR_TXTL_MASK)

/*! @name USR1 - UART Status Register 1 */
#define UART_USR1_SAD_MASK                       (0x8U)
#define UART_USR1_SAD_SHIFT                      (3U)
#define UART_USR1_SAD(x)                         (((uint32_t)(((uint32_t)(x)) << UART_USR1_SAD_SHIFT)) & UART_USR1_SAD_MASK)
#define UART_USR1_AWAKE_MASK                     (0x10U)
#define UART_USR1_AWAKE_SHIFT                    (4U)
#define UART_USR1_AWAKE(x)                       (((uint32_t)(((uint32_t)(x)) << UART_USR1_AWAKE_SHIFT)) & UART_USR1_AWAKE_MASK)
#define UART_USR1_AIRINT_MASK                    (0x20U)
#define UART_USR1_AIRINT_SHIFT                   (5U)
#define UART_USR1_AIRINT(x)                      (((uint32_t)(((uint32_t)(x)) << UART_USR1_AIRINT_SHIFT)) & UART_USR1_AIRINT_MASK)
#define UART_USR1_RXDS_MASK                      (0x40U)
#define UART_USR1_RXDS_SHIFT                     (6U)
#define UART_USR1_RXDS(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_RXDS_SHIFT)) & UART_USR1_RXDS_MASK)
#define UART_USR1_DTRD_MASK                      (0x80U)
#define UART_USR1_DTRD_SHIFT                     (7U)
#define UART_USR1_DTRD(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_DTRD_SHIFT)) & UART_USR1_DTRD_MASK)
#define UART_USR1_AGTIM_MASK                     (0x100U)
#define UART_USR1_AGTIM_SHIFT                    (8U)
#define UART_USR1_AGTIM(x)                       (((uint32_t)(((uint32_t)(x)) << UART_USR1_AGTIM_SHIFT)) & UART_USR1_AGTIM_MASK)
#define UART_USR1_RRDY_MASK                      (0x200U)
#define UART_USR1_RRDY_SHIFT                     (9U)
#define UART_USR1_RRDY(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_RRDY_SHIFT)) & UART_USR1_RRDY_MASK)
#define UART_USR1_FRAMERR_MASK                   (0x400U)
#define UART_USR1_FRAMERR_SHIFT                  (10U)
#define UART_USR1_FRAMERR(x)                     (((uint32_t)(((uint32_t)(x)) << UART_USR1_FRAMERR_SHIFT)) & UART_USR1_FRAMERR_MASK)
#define UART_USR1_ESCF_MASK                      (0x800U)
#define UART_USR1_ESCF_SHIFT                     (11U)
#define UART_USR1_ESCF(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_ESCF_SHIFT)) & UART_USR1_ESCF_MASK)
#define UART_USR1_RTSD_MASK                      (0x1000U)
#define UART_USR1_RTSD_SHIFT                     (12U)
#define UART_USR1_RTSD(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_RTSD_SHIFT)) & UART_USR1_RTSD_MASK)
#define UART_USR1_TRDY_MASK                      (0x2000U)
#define UART_USR1_TRDY_SHIFT                     (13U)
#define UART_USR1_TRDY(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_TRDY_SHIFT)) & UART_USR1_TRDY_MASK)
#define UART_USR1_RTSS_MASK                      (0x4000U)
#define UART_USR1_RTSS_SHIFT                     (14U)
#define UART_USR1_RTSS(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR1_RTSS_SHIFT)) & UART_USR1_RTSS_MASK)
#define UART_USR1_PARITYERR_MASK                 (0x8000U)
#define UART_USR1_PARITYERR_SHIFT                (15U)
#define UART_USR1_PARITYERR(x)                   (((uint32_t)(((uint32_t)(x)) << UART_USR1_PARITYERR_SHIFT)) & UART_USR1_PARITYERR_MASK)

/*! @name USR2 - UART Status Register 2 */
#define UART_USR2_RDR_MASK                       (0x1U)
#define UART_USR2_RDR_SHIFT                      (0U)
#define UART_USR2_RDR(x)                         (((uint32_t)(((uint32_t)(x)) << UART_USR2_RDR_SHIFT)) & UART_USR2_RDR_MASK)
#define UART_USR2_ORE_MASK                       (0x2U)
#define UART_USR2_ORE_SHIFT                      (1U)
#define UART_USR2_ORE(x)                         (((uint32_t)(((uint32_t)(x)) << UART_USR2_ORE_SHIFT)) & UART_USR2_ORE_MASK)
#define UART_USR2_BRCD_MASK                      (0x4U)
#define UART_USR2_BRCD_SHIFT                     (2U)
#define UART_USR2_BRCD(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_BRCD_SHIFT)) & UART_USR2_BRCD_MASK)
#define UART_USR2_TXDC_MASK                      (0x8U)
#define UART_USR2_TXDC_SHIFT                     (3U)
#define UART_USR2_TXDC(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_TXDC_SHIFT)) & UART_USR2_TXDC_MASK)
#define UART_USR2_RTSF_MASK                      (0x10U)
#define UART_USR2_RTSF_SHIFT                     (4U)
#define UART_USR2_RTSF(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_RTSF_SHIFT)) & UART_USR2_RTSF_MASK)
#define UART_USR2_DCDIN_MASK                     (0x20U)
#define UART_USR2_DCDIN_SHIFT                    (5U)
#define UART_USR2_DCDIN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_USR2_DCDIN_SHIFT)) & UART_USR2_DCDIN_MASK)
#define UART_USR2_DCDDELT_MASK                   (0x40U)
#define UART_USR2_DCDDELT_SHIFT                  (6U)
#define UART_USR2_DCDDELT(x)                     (((uint32_t)(((uint32_t)(x)) << UART_USR2_DCDDELT_SHIFT)) & UART_USR2_DCDDELT_MASK)
#define UART_USR2_WAKE_MASK                      (0x80U)
#define UART_USR2_WAKE_SHIFT                     (7U)
#define UART_USR2_WAKE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_WAKE_SHIFT)) & UART_USR2_WAKE_MASK)
#define UART_USR2_IRINT_MASK                     (0x100U)
#define UART_USR2_IRINT_SHIFT                    (8U)
#define UART_USR2_IRINT(x)                       (((uint32_t)(((uint32_t)(x)) << UART_USR2_IRINT_SHIFT)) & UART_USR2_IRINT_MASK)
#define UART_USR2_RIIN_MASK                      (0x200U)
#define UART_USR2_RIIN_SHIFT                     (9U)
#define UART_USR2_RIIN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_RIIN_SHIFT)) & UART_USR2_RIIN_MASK)
#define UART_USR2_RIDELT_MASK                    (0x400U)
#define UART_USR2_RIDELT_SHIFT                   (10U)
#define UART_USR2_RIDELT(x)                      (((uint32_t)(((uint32_t)(x)) << UART_USR2_RIDELT_SHIFT)) & UART_USR2_RIDELT_MASK)
#define UART_USR2_ACST_MASK                      (0x800U)
#define UART_USR2_ACST_SHIFT                     (11U)
#define UART_USR2_ACST(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_ACST_SHIFT)) & UART_USR2_ACST_MASK)
#define UART_USR2_IDLE_MASK                      (0x1000U)
#define UART_USR2_IDLE_SHIFT                     (12U)
#define UART_USR2_IDLE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_IDLE_SHIFT)) & UART_USR2_IDLE_MASK)
#define UART_USR2_DTRF_MASK                      (0x2000U)
#define UART_USR2_DTRF_SHIFT                     (13U)
#define UART_USR2_DTRF(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_DTRF_SHIFT)) & UART_USR2_DTRF_MASK)
#define UART_USR2_TXFE_MASK                      (0x4000U)
#define UART_USR2_TXFE_SHIFT                     (14U)
#define UART_USR2_TXFE(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_TXFE_SHIFT)) & UART_USR2_TXFE_MASK)
#define UART_USR2_ADET_MASK                      (0x8000U)
#define UART_USR2_ADET_SHIFT                     (15U)
#define UART_USR2_ADET(x)                        (((uint32_t)(((uint32_t)(x)) << UART_USR2_ADET_SHIFT)) & UART_USR2_ADET_MASK)

/*! @name UESC - UART Escape Character Register */
#define UART_UESC_ESC_CHAR_MASK                  (0xFFU)
#define UART_UESC_ESC_CHAR_SHIFT                 (0U)
#define UART_UESC_ESC_CHAR(x)                    (((uint32_t)(((uint32_t)(x)) << UART_UESC_ESC_CHAR_SHIFT)) & UART_UESC_ESC_CHAR_MASK)

/*! @name UTIM - UART Escape Timer Register */
#define UART_UTIM_TIM_MASK                       (0xFFFU)
#define UART_UTIM_TIM_SHIFT                      (0U)
#define UART_UTIM_TIM(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UTIM_TIM_SHIFT)) & UART_UTIM_TIM_MASK)

/*! @name UBIR - UART BRM Incremental Register */
#define UART_UBIR_INC_MASK                       (0xFFFFU)
#define UART_UBIR_INC_SHIFT                      (0U)
#define UART_UBIR_INC(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UBIR_INC_SHIFT)) & UART_UBIR_INC_MASK)

/*! @name UBMR - UART BRM Modulator Register */
#define UART_UBMR_MOD_MASK                       (0xFFFFU)
#define UART_UBMR_MOD_SHIFT                      (0U)
#define UART_UBMR_MOD(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UBMR_MOD_SHIFT)) & UART_UBMR_MOD_MASK)

/*! @name UBRC - UART Baud Rate Count Register */
#define UART_UBRC_BCNT_MASK                      (0xFFFFU)
#define UART_UBRC_BCNT_SHIFT                     (0U)
#define UART_UBRC_BCNT(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UBRC_BCNT_SHIFT)) & UART_UBRC_BCNT_MASK)

/*! @name ONEMS - UART One Millisecond Register */
#define UART_ONEMS_ONEMS_MASK                    (0xFFFFFFU)
#define UART_ONEMS_ONEMS_SHIFT                   (0U)
#define UART_ONEMS_ONEMS(x)                      (((uint32_t)(((uint32_t)(x)) << UART_ONEMS_ONEMS_SHIFT)) & UART_ONEMS_ONEMS_MASK)

/*! @name UTS - UART Test Register */
#define UART_UTS_SOFTRST_MASK                    (0x1U)
#define UART_UTS_SOFTRST_SHIFT                   (0U)
#define UART_UTS_SOFTRST(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UTS_SOFTRST_SHIFT)) & UART_UTS_SOFTRST_MASK)
#define UART_UTS_RXFULL_MASK                     (0x8U)
#define UART_UTS_RXFULL_SHIFT                    (3U)
#define UART_UTS_RXFULL(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UTS_RXFULL_SHIFT)) & UART_UTS_RXFULL_MASK)
#define UART_UTS_TXFULL_MASK                     (0x10U)
#define UART_UTS_TXFULL_SHIFT                    (4U)
#define UART_UTS_TXFULL(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UTS_TXFULL_SHIFT)) & UART_UTS_TXFULL_MASK)
#define UART_UTS_RXEMPTY_MASK                    (0x20U)
#define UART_UTS_RXEMPTY_SHIFT                   (5U)
#define UART_UTS_RXEMPTY(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UTS_RXEMPTY_SHIFT)) & UART_UTS_RXEMPTY_MASK)
#define UART_UTS_TXEMPTY_MASK                    (0x40U)
#define UART_UTS_TXEMPTY_SHIFT                   (6U)
#define UART_UTS_TXEMPTY(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UTS_TXEMPTY_SHIFT)) & UART_UTS_TXEMPTY_MASK)
#define UART_UTS_RXDBG_MASK                      (0x200U)
#define UART_UTS_RXDBG_SHIFT                     (9U)
#define UART_UTS_RXDBG(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UTS_RXDBG_SHIFT)) & UART_UTS_RXDBG_MASK)
#define UART_UTS_LOOPIR_MASK                     (0x400U)
#define UART_UTS_LOOPIR_SHIFT                    (10U)
#define UART_UTS_LOOPIR(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UTS_LOOPIR_SHIFT)) & UART_UTS_LOOPIR_MASK)
#define UART_UTS_DBGEN_MASK                      (0x800U)
#define UART_UTS_DBGEN_SHIFT                     (11U)
#define UART_UTS_DBGEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UTS_DBGEN_SHIFT)) & UART_UTS_DBGEN_MASK)
#define UART_UTS_LOOP_MASK                       (0x1000U)
#define UART_UTS_LOOP_SHIFT                      (12U)
#define UART_UTS_LOOP(x)                         (((uint32_t)(((uint32_t)(x)) << UART_UTS_LOOP_SHIFT)) & UART_UTS_LOOP_MASK)
#define UART_UTS_FRCPERR_MASK                    (0x2000U)
#define UART_UTS_FRCPERR_SHIFT                   (13U)
#define UART_UTS_FRCPERR(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UTS_FRCPERR_SHIFT)) & UART_UTS_FRCPERR_MASK)

/*! @name UMCR - UART RS-485 Mode Control Register */
#define UART_UMCR_MDEN_MASK                      (0x1U)
#define UART_UMCR_MDEN_SHIFT                     (0U)
#define UART_UMCR_MDEN(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UMCR_MDEN_SHIFT)) & UART_UMCR_MDEN_MASK)
#define UART_UMCR_SLAM_MASK                      (0x2U)
#define UART_UMCR_SLAM_SHIFT                     (1U)
#define UART_UMCR_SLAM(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UMCR_SLAM_SHIFT)) & UART_UMCR_SLAM_MASK)
#define UART_UMCR_TXB8_MASK                      (0x4U)
#define UART_UMCR_TXB8_SHIFT                     (2U)
#define UART_UMCR_TXB8(x)                        (((uint32_t)(((uint32_t)(x)) << UART_UMCR_TXB8_SHIFT)) & UART_UMCR_TXB8_MASK)
#define UART_UMCR_SADEN_MASK                     (0x8U)
#define UART_UMCR_SADEN_SHIFT                    (3U)
#define UART_UMCR_SADEN(x)                       (((uint32_t)(((uint32_t)(x)) << UART_UMCR_SADEN_SHIFT)) & UART_UMCR_SADEN_MASK)
#define UART_UMCR_SLADDR_MASK                    (0xFF00U)
#define UART_UMCR_SLADDR_SHIFT                   (8U)
#define UART_UMCR_SLADDR(x)                      (((uint32_t)(((uint32_t)(x)) << UART_UMCR_SLADDR_SHIFT)) & UART_UMCR_SLADDR_MASK)


/*!
 * @}
 */ /* end of group UART_Register_Masks */


/* UART - Peripheral instance base addresses */
/** Peripheral UART1 base address */
#define UART1_BASE                               (0x2020000u)
/** Peripheral UART1 base pointer */
#define UART1                                    ((UART_Type *)UART1_BASE)
/** Peripheral UART2 base address */
#define UART2_BASE                               (0x21E8000u)
/** Peripheral UART2 base pointer */
#define UART2                                    ((UART_Type *)UART2_BASE)
/** Peripheral UART3 base address */
#define UART3_BASE                               (0x21EC000u)
/** Peripheral UART3 base pointer */
#define UART3                                    ((UART_Type *)UART3_BASE)
/** Peripheral UART4 base address */
#define UART4_BASE                               (0x21F0000u)
/** Peripheral UART4 base pointer */
#define UART4                                    ((UART_Type *)UART4_BASE)
/** Peripheral UART5 base address */
#define UART5_BASE                               (0x21F4000u)
/** Peripheral UART5 base pointer */
#define UART5                                    ((UART_Type *)UART5_BASE)
/** Peripheral UART6 base address */
#define UART6_BASE                               (0x21FC000u)
/** Peripheral UART6 base pointer */
#define UART6                                    ((UART_Type *)UART6_BASE)
/** Peripheral UART7 base address */
#define UART7_BASE                               (0x2018000u)
/** Peripheral UART7 base pointer */
#define UART7                                    ((UART_Type *)UART7_BASE)
/** Peripheral UART8 base address */
#define UART8_BASE                               (0x2288000u)
/** Peripheral UART8 base pointer */
#define UART8                                    ((UART_Type *)UART8_BASE)
/** Array initializer of UART peripheral base addresses */
#define UART_BASE_ADDRS                          { 0u, UART1_BASE, UART2_BASE, UART3_BASE, UART4_BASE, UART5_BASE, UART6_BASE, UART7_BASE, UART8_BASE }
/** Array initializer of UART peripheral base pointers */
#define UART_BASE_PTRS                           { (UART_Type *)0u, UART1, UART2, UART3, UART4, UART5, UART6, UART7, UART8 }
/** Interrupt vectors for the UART peripheral type */
#define UART_IRQS                                { NotAvail_IRQn, UART1_IRQn, UART2_IRQn, UART3_IRQn, UART4_IRQn, UART5_IRQn, UART6_IRQn, UART7_IRQn, UART8_IRQn }

/*!
 * @}
 */ /* end of group UART_Peripheral_Access_Layer */


/*! @brief Error codes for the UART driver. */
enum _uart_status
{
    kStatus_UART_TxBusy = MAKE_STATUS(kStatusGroup_IUART, 0),              /*!< Transmitter is busy. */
    kStatus_UART_RxBusy = MAKE_STATUS(kStatusGroup_IUART, 1),              /*!< Receiver is busy. */
    kStatus_UART_TxIdle = MAKE_STATUS(kStatusGroup_IUART, 2),              /*!< UART transmitter is idle. */
    kStatus_UART_RxIdle = MAKE_STATUS(kStatusGroup_IUART, 3),              /*!< UART receiver is idle. */
    kStatus_UART_TxWatermarkTooLarge = MAKE_STATUS(kStatusGroup_IUART, 4), /*!< TX FIFO watermark too large  */
    kStatus_UART_RxWatermarkTooLarge = MAKE_STATUS(kStatusGroup_IUART, 5), /*!< RX FIFO watermark too large  */
    kStatus_UART_FlagCannotClearManually =
        MAKE_STATUS(kStatusGroup_IUART, 6),                                /*!< UART flag can't be manually cleared. */
    kStatus_UART_Error = MAKE_STATUS(kStatusGroup_IUART, 7),               /*!< Error happens on UART. */
    kStatus_UART_RxRingBufferOverrun = MAKE_STATUS(kStatusGroup_IUART, 8), /*!< UART RX software ring buffer overrun. */
    kStatus_UART_RxHardwareOverrun = MAKE_STATUS(kStatusGroup_IUART, 9),   /*!< UART RX receiver overrun. */
    kStatus_UART_NoiseError = MAKE_STATUS(kStatusGroup_IUART, 10),         /*!< UART noise error. */
    kStatus_UART_FramingError = MAKE_STATUS(kStatusGroup_IUART, 11),       /*!< UART framing error. */
    kStatus_UART_ParityError = MAKE_STATUS(kStatusGroup_IUART, 12),        /*!< UART parity error. */
    kStatus_UART_BaudrateNotSupport =
        MAKE_STATUS(kStatusGroup_IUART, 13), /*!< Baudrate is not support in current clock source */
    kStatus_UART_BreakDetect = MAKE_STATUS(kStatusGroup_IUART, 14), /*!< Receiver detect BREAK signal */
};

/*! @brief UART data bits count. */
typedef enum _uart_data_bits
{
    kUART_SevenDataBits = 0x0U, /*!< Seven data bit */
    kUART_EightDataBits = 0x1U, /*!< Eight data bit */
} uart_data_bits_t;

/*! @brief UART parity mode. */
typedef enum _uart_parity_mode
{
    kUART_ParityDisabled = 0x0U, /*!< Parity disabled */
    kUART_ParityEven = 0x2U,     /*!< Even error check is selected */
    kUART_ParityOdd = 0x3U,      /*!< Odd error check is selected */
} uart_parity_mode_t;

/*! @brief UART stop bit count. */
typedef enum _uart_stop_bit_count
{
    kUART_OneStopBit = 0x0U, /*!< One stop bit */
    kUART_TwoStopBit = 0x1U, /*!< Two stop bits */
} uart_stop_bit_count_t;

/*! @brief This structure contains the settings for all of the UART interrupt configurations. */
typedef enum _uart_interrupt_enable
{
    kUART_AutoBaudEnable = 0x1U,            /* !< Automatic baud rate detection Interrupt Enable. */
    kUART_TxReadyEnable = (0X1U << 1),      /* !< transmitter ready Interrupt Enable. */
    kUART_IdleEnable = (0x1U << 2),         /* !< IDLE Interrupt Enable. */
    kUART_RxReadyEnable = (0x1U << 3),      /* !< Receiver Ready Interrupt Enable. */
    kUART_TxEmptyEnable = (0x1U << 4),      /* !< Transmitter Empty Interrupt Enable. */
    kUART_RtsDeltaEnable = (0x1U << 5),     /* !< RTS Delta Interrupt Enable. */
    kUART_EscapeEnable = (0x1U << 8),       /* !< Escape Sequence Interrupt Enable. */
    kUART_RtsEnable = (0x1U << 9),          /* !< Request to Send Interrupt Enable. */
    kUART_AgingTimerEnable = (0x1U << 10),  /* !< Aging Timer Interrupt Enable. */
    kUART_DtrEnable = (0x1U << 12),         /* !< Data Terminal Ready Interrupt Enable. */
    kUART_ParityErrorEnable = (0x1U << 13), /* !< Parity Error Interrupt Enable.  */
    kUART_FrameErrorEnable = (0x1U << 14),  /* !< Frame Error Interrupt Enable. */
    kUART_DcdEnable = (0x1U << 15),         /* !< Data Carrier Detect Interrupt Enable. */
    kUART_RiEnable = (0x1U << 16),          /* !< Ring Indicator Interrupt Enable. */
    kUART_RxDsEnable = (0x1U << 17),        /* !< Receive Status Interrupt Enable. */
    kUART_tAirWakeEnable = (0x1U << 18),    /* !< Asynchronous IR WAKE Interrupt Enable. */
    kUART_AwakeEnable = (0x1U << 19),       /* !< Asynchronous WAKE Interrupt Enable. */
    kUART_DtrDeltaEnable = (0x1U << 20),    /* !< Data Terminal Ready Delta Interrupt Enable. */
    kUART_AutoBaudCntEnable = (0x1U << 21), /* !< Auto-baud Counter Interrupt Enable. */
    kUART_IrEnable = (0X1U << 24),          /* !< Serial Infrared Interrupt Enable. */
    kUART_WakeEnable = (0X1U << 25),        /* !< WAKE Interrupt Enable. */
    kUART_TxCompleteEnable = (0X1U << 26),  /* !< TransmitComplete Interrupt Enable. */
    kUART_BreakDetectEnable = (0X1U << 27), /* !< BREAK Condition Detected Interrupt Enable. */
    kUART_RxOverrunEnable = (0X1U << 28),   /* !< Receiver Overrun Interrupt Enable. */
    kUART_RxDataReadyEnable = (0X1U << 29), /* !< Receive Data Ready Interrupt Enable. */
    kUART_AllInterruptsEnable = kUART_AutoBaudEnable | kUART_TxReadyEnable | kUART_IdleEnable | kUART_RxReadyEnable |
                                kUART_TxEmptyEnable | kUART_RtsDeltaEnable | kUART_EscapeEnable | kUART_RtsEnable |
                                kUART_AgingTimerEnable | kUART_DtrEnable | kUART_ParityErrorEnable |
                                kUART_FrameErrorEnable | kUART_DcdEnable | kUART_RiEnable | kUART_RxDsEnable |
                                kUART_tAirWakeEnable | kUART_AwakeEnable | kUART_DtrDeltaEnable |
                                kUART_AutoBaudCntEnable | kUART_IrEnable | kUART_WakeEnable | kUART_TxCompleteEnable |
                                kUART_BreakDetectEnable | kUART_RxOverrunEnable | kUART_RxDataReadyEnable,
} uart_interrupt_enable_t;

/*!
 * @brief UART status flags.
 *
 * This provides constants for the UART status flags for use in the UART functions.
 */
typedef enum _uart_flags
{
    kUART_RxCharReadyFlag = 0x0000000FU,         /*!< Rx Character Ready Flag. */
    kUART_RxErrorFlag = 0x0000000EU,             /*!< Rx Error Detect Flag. */
    kUART_RxOverrunErrorFlag = 0x0000000DU,      /*!< Rx Overrun Flag. */
    kUART_RxFrameErrorFlag = 0x0000000CU,        /*!< Rx Frame Error Flag. */
    kUART_RxBreakDetectFlag = 0x0000000BU,       /*!< Rx Break Detect Flag. */
    kUART_RxParityErrorFlag = 0x0000000AU,       /*!< Rx Parity Error Flag. */
    kUART_ParityErrorFlag = 0x0094000FU,         /*!< Parity Error Interrupt Flag. */
    kUART_RtsStatusFlag = 0x0094000EU,           /*!< RTS_B Pin Status Flag. */
    kUART_TxReadyFlag = 0x0094000DU,             /*!< Transmitter Ready Interrupt/DMA Flag. */
    kUART_RtsDeltaFlag = 0x0094000CU,            /*!< RTS Delta Flag. */
    kUART_EscapeFlag = 0x0094000BU,              /*!< Escape Sequence Interrupt Flag. */
    kUART_FrameErrorFlag = 0x0094000AU,          /*!< Frame Error Interrupt Flag. */
    kUART_RxReadyFlag = 0x00940009U,             /*!< Receiver Ready Interrupt/DMA Flag. */
    kUART_AgingTimerFlag = 0x00940008U,          /*!< Aging Timer Interrupt Flag. */
    kUART_DtrDeltaFlag = 0x00940007U,            /*!< DTR Delta Flag. */
    kUART_RxDsFlag = 0x00940006U,                /*!< Receiver IDLE Interrupt Flag. */
    kUART_tAirWakeFlag = 0x00940005U,            /*!< Asynchronous IR WAKE Interrupt Flag. */
    kUART_AwakeFlag = 0x00940004U,               /*!< Asynchronous WAKE Interrupt Flag. */
    kUART_Rs485SlaveAddrMatchFlag = 0x00940003U, /*!< RS-485 Slave Address Detected Interrupt Flag. */
    kUART_AutoBaudFlag = 0x0098000FU,            /*!< Automatic Baud Rate Detect Complete Flag. */
    kUART_TxEmptyFlag = 0x0098000EU,             /*!< Transmit Buffer FIFO Empty. */
    kUART_DtrFlag = 0x0098000DU,                 /*!< DTR edge triggered interrupt flag. */
    kUART_IdleFlag = 0x0098000CU,                /*!< Idle Condition Flag. */
    kUART_AutoBaudCntStopFlag = 0x0098000BU,     /*!< Auto-baud Counter Stopped Flag. */
    kUART_RiDeltaFlag = 0x0098000AU,             /*!< Ring Indicator Delta Flag. */
    kUART_RiFlag = 0x00980009U,                  /*!< Ring Indicator Input Flag. */
    kUART_IrFlag = 0x00980008U,                  /*!< Serial Infrared Interrupt Flag. */
    kUART_WakeFlag = 0x00980007U,                /*!< Wake Flag. */
    kUART_DcdDeltaFlag = 0x00980006U,            /*!< Data Carrier Detect Delta Flag. */
    kUART_DcdFlag = 0x00980005U,                 /*!< Data Carrier Detect Input Flag. */
    kUART_RtsFlag = 0x00980004U,                 /*!< RTS Edge Triggered Interrupt Flag. */
    kUART_TxCompleteFlag = 0x00980003U,          /*!< Transmitter Complete Flag. */
    kUART_BreakDetectFlag = 0x00980002U,         /*!< BREAK Condition Detected Flag. */
    kUART_RxOverrunFlag = 0x00980001U,           /*!< Overrun Error Flag. */
    kUART_RxDataReadyFlag = 0x00980000U,         /*!< Receive Data Ready Flag. */
} uart_status_flag_t;

/*! @brief UART configuration structure. */
typedef struct _uart_config
{
    uint32_t baudRate_Bps;              /*!< UART baud rate. */
    uart_parity_mode_t parityMode;      /*!< Parity error check mode of this module. */
    uart_data_bits_t dataBitsCount;     /*!< Data bits count, eight (default), seven */
    uart_stop_bit_count_t stopBitCount; /*!< Number of stop bits in one frame. */
    uint8_t txFifoWatermark;            /*!< TX FIFO watermark */
    uint8_t rxFifoWatermark;            /*!< RX FIFO watermark */
    bool enableAutoBaudRate;            /*!< Enable automatic baud rate detection */
    bool enableTx;                      /*!< Enable TX */
    bool enableRx;                      /*!< Enable RX */
} uart_config_t;

/*! @brief UART transfer structure. */
typedef struct _uart_transfer
{
    uint8_t *data;   /*!< The buffer of data to be transfer.*/
    size_t dataSize; /*!< The byte count to be transfer. */
} uart_transfer_t;

/* Forward declaration of the handle typedef. */
typedef struct _uart_handle uart_handle_t;

/*! @brief UART transfer callback function. */
typedef void (*uart_transfer_callback_t)(UART_Type *base, uart_handle_t *handle, status_t status, void *userData);

/*! @brief UART handle structure. */
struct _uart_handle
{
    uint8_t *volatile txData;   /*!< Address of remaining data to send. */
    volatile size_t txDataSize; /*!< Size of the remaining data to send. */
    size_t txDataSizeAll;       /*!< Size of the data to send out. */
    uint8_t *volatile rxData;   /*!< Address of remaining data to receive. */
    volatile size_t rxDataSize; /*!< Size of the remaining data to receive. */
    size_t rxDataSizeAll;       /*!< Size of the data to receive. */

    uint8_t *rxRingBuffer;              /*!< Start address of the receiver ring buffer. */
    size_t rxRingBufferSize;            /*!< Size of the ring buffer. */
    volatile uint16_t rxRingBufferHead; /*!< Index for the driver to store received data into ring buffer. */
    volatile uint16_t rxRingBufferTail; /*!< Index for the user to get data from the ring buffer. */

    uart_transfer_callback_t callback; /*!< Callback function. */
    void *userData;                    /*!< UART callback function parameter.*/

    volatile uint8_t txState; /*!< TX transfer state. */
    volatile uint8_t rxState; /*!< RX transfer state */
};

#define     FSL_FEATURE_IUART_FIFO_SIZEn(x)     (32)


/*******************************************************************************
 * API
 ******************************************************************************/

/*!
 * @brief Resets the UART using software.
 *
 * This function resets the transmit and receive state machines, all FIFOs and register
 * USR1, USR2, UBIR, UBMR, UBRC , URXD, UTXD and UTS[6-3]
 *
 * @param base UART peripheral base address.
 */
static inline void UART_SoftwareReset(UART_Type *base)
{
    base->UCR2 &= ~UART_UCR2_SRST_MASK;
    while ((base->UCR2 & UART_UCR2_SRST_MASK) == 0)
    {
    }
}

/*!
 * @brief Initializes an UART instance with the user configuration structure and the peripheral clock.
 *
 * This function configures the UART module with user-defined settings. Call the UART_GetDefaultConfig() function
 * to configure the configuration structure and get the default configuration.
 * The example below shows how to use this API to configure the UART.
 * @code
 *  uart_config_t uartConfig;
 *  uartConfig.baudRate_Bps = 115200U;
 *  uartConfig.parityMode = kUART_ParityDisabled;
 *  uartConfig.dataBitsCount = kUART_EightDataBits;
 *  uartConfig.stopBitCount = kUART_OneStopBit;
 *  uartConfig.txFifoWatermark = 2;
 *  uartConfig.rxFifoWatermark = 1;
 *  uartConfig.enableAutoBaudrate = false;
 *  uartConfig.enableTx = true;
 *  uartConfig.enableRx = true;
 *  UART_Init(UART1, &uartConfig, 24000000U);
 * @endcode
 *
 * @param base UART peripheral base address.
 * @param config Pointer to a user-defined configuration structure.
 * @param srcClock_Hz UART clock source frequency in HZ.
 * @retval kStatus_Success UART initialize succeed
 */
status_t UART_Init(UART_Type *base, const uart_config_t *config, uint32_t srcClock_Hz);

/*!
 * @brief Deinitializes a UART instance.
 *
 * This function waits for transmit to complete, disables TX and RX, and disables the UART clock.
 *
 * @param base UART peripheral base address.
 */
void UART_Deinit(UART_Type *base);

/*!
 * @brief Gets the default configuration structure.
 *
 * This function initializes the UART configuration structure to a default value. The default
 * values are:
 *   uartConfig->baudRate_Bps = 115200U;
 *   uartConfig->parityMode = kUART_ParityDisabled;
 *   uartConfig->dataBitsCount = kUART_EightDataBits;
 *   uartConfig->stopBitCount = kUART_OneStopBit;
 *   uartConfig->txFifoWatermark = 2;
 *   uartConfig->rxFifoWatermark = 1;
 *   uartConfig->enableAutoBaudrate = flase;
 *   uartConfig->enableTx = false;
 *   uartConfig->enableRx = false;
 *
 * @param config Pointer to a configuration structure.
 */
void UART_GetDefaultConfig(uart_config_t *config);

/*!
 * @brief Sets the UART instance baud rate.
 *
 * This function configures the UART module baud rate. This function is used to update
 * the UART module baud rate after the UART module is initialized by the UART_Init.
 * @code
 *  UART_SetBaudRate(UART1, 115200U, 24000000U);
 * @endcode
 *
 * @param base UART peripheral base address.
 * @param baudRate_Bps UART baudrate to be set.
 * @param srcClock_Hz UART clock source freqency in Hz.
 * @retval kStatus_UART_BaudrateNotSupport Baudrate is not support in the current clock source.
 * @retval kStatus_Success Set baudrate succeeded.
 */
status_t UART_SetBaudRate(UART_Type *base, uint32_t baudRate_Bps, uint32_t srcClock_Hz);

/*!
 * @brief This function is used to Enable the UART Module.
 *
 * @param base UART base pointer.
 */
static inline void UART_Enable(UART_Type *base)
{
    base->UCR1 |= UART_UCR1_UARTEN_MASK;
}

/*!
 * @brief This function is used to Disable the UART Module.
 *
 * @param base UART base pointer.
 */
static inline void UART_Disable(UART_Type *base)
{
    base->UCR1 &= ~UART_UCR1_UARTEN_MASK;
}

/*!
 * @brief This function is used to get the current status of specific
 *        UART status flag(including interrupt flag). The available
 *        status flag can be select from @ref uart_status_flag_t enumeration.
 *
 * @param base UART base pointer.
 * @param flag Status flag to check.
 * @retval current state of corresponding status flag.
 */
bool UART_GetStatusFlag(UART_Type *base, uart_status_flag_t flag);

/*!
 * @brief This function is used to clear the current status
 *        of specific UART status flag. The available status
 *        flag can be select from @ref uart_status_flag_t enumeration.
 *
 * @param base UART base pointer.
 * @param flag Status flag to clear.
 */
void UART_ClearStatusFlag(UART_Type *base, uart_status_flag_t flag);

/*!
 * @brief Enables UART interrupts according to the provided mask.
 *
 * This function enables the UART interrupts according to the provided mask. The mask
 * is a logical OR of enumeration members. See @ref _uart_interrupt_enable.
 * For example, to enable TX empty interrupt and RX data ready interrupt, do the following.
 * @code
 *     UART_EnableInterrupts(UART1,kUART_TxEmptyEnable | kUART_RxDataReadyEnable);
 * @endcode
 *
 * @param base UART peripheral base address.
 * @param mask The interrupts to enable. Logical OR of @ref _uart_interrupt_enable.
 */
void UART_EnableInterrupts(UART_Type *base, uart_interrupt_enable_t mask);

/*!
 * @brief Disables the UART interrupts according to the provided mask.
 *
 * This function disables the UART interrupts according to the provided mask. The mask
 * is a logical OR of enumeration members. See @ref _uart_interrupt_enable.
 * For example, to disable TX empty interrupt and RX data ready interrupt do the following.
 * @code
 *     UART_EnableInterrupts(UART1,kUART_TxEmptyEnable | kUART_RxDataReadyEnable);
 * @endcode
 *
 * @param base UART peripheral base address.
 * @param mask The interrupts to disable. Logical OR of @ref _uart_interrupt_enable.
 */
void UART_DisableInterrupts(UART_Type *base, uart_interrupt_enable_t mask);

/*!
 * @brief Gets enabled UART interrupts.
 *
 * This function gets the enabled UART interrupts. The enabled interrupts are returned
 * as the logical OR value of the enumerators @ref _uart_interrupt_enable. To check
 * a specific interrupt enable status, compare the return value with enumerators
 * in @ref _uart_interrupt_enable.
 * For example, to check whether the TX empty interrupt is enabled:
 * @code
 *     uint32_t enabledInterrupts = UART_GetEnabledInterrupts(UART1);
 *
 *     if (kUART_TxEmptyEnable & enabledInterrupts)
 *     {
 *         ...
 *     }
 * @endcode
 *
 * @param base UART peripheral base address.
 * @return UART interrupt flags which are logical OR of the enumerators in @ref _uart_interrupt_enable.
 */
uint32_t UART_GetEnabledInterrupts(UART_Type *base);

/*!
 * @brief Enables or disables the UART transmitter.
 *
 * This function enables or disables the UART transmitter.
 *
 * @param base UART peripheral base address.
 * @param enable True to enable, false to disable.
 */
static inline void UART_EnableTx(UART_Type *base, bool enable)
{
    if (enable)
    {
        base->UCR2 |= UART_UCR2_TXEN_MASK;
    }
    else
    {
        base->UCR2 &= ~UART_UCR2_TXEN_MASK;
    }
}

/*!
 * @brief Enables or disables the UART receiver.
 *
 * This function enables or disables the UART receiver.
 *
 * @param base UART peripheral base address.
 * @param enable True to enable, false to disable.
 */
static inline void UART_EnableRx(UART_Type *base, bool enable)
{
    if (enable)
    {
        base->UCR2 |= UART_UCR2_RXEN_MASK;
    }
    else
    {
        base->UCR2 &= ~UART_UCR2_RXEN_MASK;
    }
}

/*!
 * @brief Writes to the transmitter register.
 *
 * This function is used to write data to transmitter register.
 * The upper layer must ensure that the TX register is empty or that
 * the TX FIFO has room before calling this function.
 *
 * @param base UART peripheral base address.
 * @param data Data write to the TX register.
 */
static inline void UART_WriteByte(UART_Type *base, uint8_t data)
{
    base->UTXD = data & UART_UTXD_TX_DATA_MASK;
}

/*!
 * @brief Reads the receiver register.
 *
 * This function is used to read data from receiver register.
 * The upper layer must ensure that the receiver register is full or that
 * the RX FIFO has data before calling this function.
 *
 * @param base UART peripheral base address.
 * @return Data read from data register.
 */
static inline uint8_t UART_ReadByte(UART_Type *base)
{
    return (uint8_t)((base->URXD & UART_URXD_RX_DATA_MASK) >> UART_URXD_RX_DATA_SHIFT);
}

/*!
 * @brief Writes to the TX register using a blocking method.
 *
 * This function polls the TX register, waits for the TX register to be empty or for the TX FIFO
 * to have room and writes data to the TX buffer.
 *
 * @note This function does not check whether all data is sent out to the bus.
 * Before disabling the TX, check kUART_TransmissionCompleteFlag to ensure that the TX is
 * finished.
 *
 * @param base UART peripheral base address.
 * @param data Start address of the data to write.
 * @param length Size of the data to write.
 */
void UART_WriteBlocking(UART_Type *base, const uint8_t *data, size_t length);

/*!
 * @brief Read RX data register using a blocking method.
 *
 * This function polls the RX register, waits for the RX register to be full or for RX FIFO to
 * have data, and reads data from the TX register.
 *
 * @param base UART peripheral base address.
 * @param data Start address of the buffer to store the received data.
 * @param length Size of the buffer.
 * @retval kStatus_UART_RxHardwareOverrun Receiver overrun occurred while receiving data.
 * @retval kStatus_UART_NoiseError A noise error occurred while receiving data.
 * @retval kStatus_UART_FramingError A framing error occurred while receiving data.
 * @retval kStatus_UART_ParityError A parity error occurred while receiving data.
 * @retval kStatus_Success Successfully received all data.
 */
status_t UART_ReadBlocking(UART_Type *base, uint8_t *data, size_t length);

/*!
 * @brief Read RX register using non-blocking method.
 *
 * This function reads data from the RX register directly, upper layer must make
 * sure the RX register is full or RX FIFO has data before calling this function.
 *
 * @param base UART peripheral base address.
 * @param data Start addresss of the buffer to store the received data.
 * @param length Size of the buffer.
 */
static void UART_ReadNonBlocking(UART_Type *base, uint8_t *data, size_t length);

/*!
 * @brief Write to TX register using non-blocking method.
 *
 * This function writes data to the TX register directly, upper layer must make
 * sure the TX register is empty or TX FIFO has empty room before calling this function.
 *
 * @note This function does not check whether all the data has been sent out to bus,
 * so before disable TX, check kUART_TransmissionCompleteFlag to ensure the TX is
 * finished.
 *
 * @param base UART peripheral base address.
 * @param data Start addresss of the data to write.
 * @param length Size of the buffer to be sent.
 */
static void UART_WriteNonBlocking(UART_Type *base, const uint8_t *data, size_t length);

/*!
 * @brief Initializes the UART handle.
 *
 * This function initializes the UART handle which can be used for other UART
 * transactional APIs. Usually, for a specified UART instance,
 * call this API once to get the initialized handle.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 * @param callback The callback function.
 * @param userData The parameter of the callback function.
 */
void UART_TransferCreateHandle(UART_Type *base,
                               uart_handle_t *handle,
                               uart_transfer_callback_t callback,
                               void *userData);

/*!
 * @brief Sets up the RX ring buffer.
 *
 * This function sets up the RX ring buffer to a specific UART handle.
 *
 * When the RX ring buffer is used, data received are stored into the ring buffer even when the
 * user doesn't call the UART_TransferReceiveNonBlocking() API. If data is already received
 * in the ring buffer, the user can get the received data from the ring buffer directly.
 *
 * @note When using the RX ring buffer, one byte is reserved for internal use. In other
 * words, if @p ringBufferSize is 32, only 31 bytes are used for saving data.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 * @param ringBuffer Start address of the ring buffer for background receiving. Pass NULL to disable the ring buffer.
 * @param ringBufferSize Size of the ring buffer.
 */
void UART_TransferStartRingBuffer(UART_Type *base, uart_handle_t *handle, uint8_t *ringBuffer, size_t ringBufferSize);

/*!
 * @brief Aborts the background transfer and uninstalls the ring buffer.
 *
 * This function aborts the background transfer and uninstalls the ring buffer.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 */
void UART_TransferStopRingBuffer(UART_Type *base, uart_handle_t *handle);

/*!
 * @brief Get the length of received data in RX ring buffer.
 *
 * @param handle UART handle pointer.
 * @return Length of received data in RX ring buffer.
 */
size_t UART_TransferGetRxRingBufferLength(uart_handle_t *handle);

/*!
 * @brief Transmits a buffer of data using the interrupt method.
 *
 * This function sends data using an interrupt method. This is a non-blocking function, which
 * returns directly without waiting for all data to be written to the TX register. When
 * all data is written to the TX register in the ISR, the UART driver calls the callback
 * function and passes the @ref kStatus_UART_TxIdle as status parameter.
 *
 * @note The kStatus_UART_TxIdle is passed to the upper layer when all data is written
 * to the TX register. However, it does not ensure that all data is sent out. Before disabling the TX,
 * check the kUART_TransmissionCompleteFlag to ensure that the TX is finished.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 * @param xfer UART transfer structure. See  #uart_transfer_t.
 * @retval kStatus_Success Successfully start the data transmission.
 * @retval kStatus_UART_TxBusy Previous transmission still not finished; data not all written to TX register yet.
 * @retval kStatus_InvalidArgument Invalid argument.
 */
status_t UART_TransferSendNonBlocking(UART_Type *base, uart_handle_t *handle, uart_transfer_t *xfer);

/*!
 * @brief Aborts the interrupt-driven data transmit.
 *
 * This function aborts the interrupt-driven data sending. The user can get the remainBytes to find out
 * how many bytes are not sent out.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 */
void UART_TransferAbortSend(UART_Type *base, uart_handle_t *handle);

/*!
 * @brief Gets the number of bytes written to the UART TX register.
 *
 * This function gets the number of bytes written to the UART TX
 * register by using the interrupt method.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 * @param count Send bytes count.
 * @retval kStatus_NoTransferInProgress No send in progress.
 * @retval kStatus_InvalidArgument The parameter is invalid.
 * @retval kStatus_Success Get successfully through the parameter \p count;
 */
status_t UART_TransferGetSendCount(UART_Type *base, uart_handle_t *handle, uint32_t *count);

/*!
 * @brief Receives a buffer of data using an interrupt method.
 *
 * This function receives data using an interrupt method. This is a non-blocking function, which
 *  returns without waiting for all data to be received.
 * If the RX ring buffer is used and not empty, the data in the ring buffer is copied and
 * the parameter @p receivedBytes shows how many bytes are copied from the ring buffer.
 * After copying, if the data in the ring buffer is not enough to read, the receive
 * request is saved by the UART driver. When the new data arrives, the receive request
 * is serviced first. When all data is received, the UART driver notifies the upper layer
 * through a callback function and passes the status parameter @ref kStatus_UART_RxIdle.
 * For example, the upper layer needs 10 bytes but there are only 5 bytes in the ring buffer.
 * The 5 bytes are copied to the xfer->data and this function returns with the
 * parameter @p receivedBytes set to 5. For the left 5 bytes, newly arrived data is
 * saved from the xfer->data[5]. When 5 bytes are received, the UART driver notifies the upper layer.
 * If the RX ring buffer is not enabled, this function enables the RX and RX interrupt
 * to receive data to the xfer->data. When all data is received, the upper layer is notified.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 * @param xfer UART transfer structure, see #uart_transfer_t.
 * @param receivedBytes Bytes received from the ring buffer directly.
 * @retval kStatus_Success Successfully queue the transfer into transmit queue.
 * @retval kStatus_UART_RxBusy Previous receive request is not finished.
 * @retval kStatus_InvalidArgument Invalid argument.
 */
status_t UART_TransferReceiveNonBlocking(UART_Type *base,
                                         uart_handle_t *handle,
                                         uart_transfer_t *xfer,
                                         size_t *receivedBytes);


/*!
 * @brief Aborts the interrupt-driven data receiving.
 *
 * This function aborts the interrupt-driven data receiving. The user can get the remainBytes to know
 * how many bytes are not received yet.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 */
void UART_TransferAbortReceive(UART_Type *base, uart_handle_t *handle);

/*!
 * @brief Gets the number of bytes that have been received.
 *
 * This function gets the number of bytes that have been received.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 * @param count Receive bytes count.
 * @retval kStatus_NoTransferInProgress No receive in progress.
 * @retval kStatus_InvalidArgument Parameter is invalid.
 * @retval kStatus_Success Get successfully through the parameter \p count;
 */
status_t UART_TransferGetReceiveCount(UART_Type *base, uart_handle_t *handle, uint32_t *count);

/*!
 * @brief UART IRQ handle function.
 *
 * This function handles the UART transmit and receive IRQ request.
 *
 * @param base UART peripheral base address.
 * @param handle UART handle pointer.
 */
void UART_TransferHandleIRQ(UART_Type *base, uart_handle_t *handle);

/*!
 * @brief Enables or disables the UART transmitter DMA request.
 *
 * This function enables or disables the transmit request when the transmitter
 * has one or more slots available in the TxFIFO. The fill level in the TxFIFO
 * that generates the DMA request is controlled by the TXTL bits.
 *
 * @param base UART peripheral base address.
 * @param enable True to enable, false to disable.
 */
static inline void UART_EnableTxDMA(UART_Type *base, bool enable)
{
    //assert(base);

    if (enable)
    {
        base->UCR1 |= UART_UCR1_TXDMAEN_MASK;
    }
    else
    {
        base->UCR1 &= ~UART_UCR1_TXDMAEN_MASK;
    }
}

/*!
 * @brief Enables or disables the UART receiver DMA request.
 *
 * This function enables or disables the receive request when the receiver
 * has data in the RxFIFO. The fill level in the RxFIFO at which a DMA request
 * is generated is controlled by the RXTL bits .
 *
 * @param base UART peripheral base address.
 * @param enable True to enable, false to disable.
 */
static inline void UART_EnableRxDMA(UART_Type *base, bool enable)
{
    //assert(base);

    if (enable)
    {
        base->UCR1 |= UART_UCR1_RXDMAEN_MASK;
    }
    else
    {
        base->UCR1 &= ~UART_UCR1_RXDMAEN_MASK;
    }
}


void UART_EnableDMA(UART_Type *base, uint32_t dmaSource, bool enable)
{
    volatile uint32_t *uart_reg = 0;
    uint32_t uart_mask = 0;

    uart_reg = (uint32_t *)((uint32_t)base + (dmaSource >> 16));
    uart_mask = (1U << (dmaSource & 0x1FU));
    if (enable)
    {
        *uart_reg |= uart_mask;
    }
    else
    {
        *uart_reg &= ~uart_mask;
    }
}

/*!
 * @brief This function is used to set the watermark of UART Tx FIFO.
 *        A maskable interrupt is generated whenever the data level in
 *        the TxFIFO falls below the Tx FIFO watermark.
 *
 * @param base UART base pointer.
 * @param watermark The Tx FIFO watermark.
 */
static inline void UART_SetTxFifoWatermark(UART_Type *base, uint8_t watermark)
{
    //assert((watermark >= 2) && (watermark <= FSL_FEATURE_IUART_FIFO_SIZEn(base)));
    base->UFCR = (base->UFCR & ~UART_UFCR_TXTL_MASK) | UART_UFCR_TXTL(watermark);
}

/*!
 * @brief This function is used to set the watermark of UART Rx FIFO.
 *        A maskable interrupt is generated whenever the data level in
 *        the RxFIFO reaches the Rx FIFO watermark.
 *
 * @param base UART base pointer.
 * @param watermark The Rx FIFO watermark.
 */
static inline void UART_SetRxFifoWatermark(UART_Type *base, uint8_t watermark)
{
    //assert(watermark <= FSL_FEATURE_IUART_FIFO_SIZEn(base));
    base->UFCR = (base->UFCR & ~UART_UFCR_RXTL_MASK) | UART_UFCR_RXTL(watermark);
}

/*!
 * @name Auto baud rate detection.
 * @{
 */

/*!
 * @brief This function is used to set the enable condition of
 *        Automatic Baud Rate Detection feature.
 *
 * @param base UART base pointer.
 * @param enable Enable/Disable Automatic Baud Rate Detection feature.
 *               - true: Enable Automatic Baud Rate Detection feature.
 *               - false: Disable Automatic Baud Rate Detection feature.
 */
static inline void UART_EnableAutoBaudRate(UART_Type *base, bool enable)
{
    if (enable)
    {
        /* When ADET=0 and ADBR=1, automatic baud rate detection starts */
        /* Enable automatic baud rate detection */
        base->UCR1 |= UART_UCR1_ADBR_MASK;
        /* Clear ADET brfore start automatic baud rate detection*/
        base->USR2 |= UART_USR2_ADET_MASK;
    }
    else
    {
        /* Disable automatic baud rate detection */
        base->UCR1 &= ~UART_UCR1_ADBR_MASK;
    }
}

/*!
 * @brief This function is used to read if the automatic baud rate detection
 *        has finished.
 *
 * @param base UART base pointer.
 * @return - true: Automatic baud rate detection has finished.
 *         - false: Automatic baud rate detection has not finished.
 */
static inline bool UART_IsAutoBaudRateComplete(UART_Type *base)
{
    if (UART_USR2_ACST_MASK & base->USR2)
    {
        base->USR2 |= UART_USR2_ACST_MASK;
        return true;
    }
    else
    {
        return false;
    }
}


#endif