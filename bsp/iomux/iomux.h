#ifndef     __IOMUX_H__
#define     __IOMUX_H__

#include "common.h"

/* ----------------------------------------------------------------------------
   -- Mapping Information
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Mapping_Information Mapping Information
 * @{
 */

/** Mapping Information */
/*!
 * @addtogroup iomuxc_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC SW_MUX_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC SW_MUX_CTL_PAD collections.
 */
typedef enum _iomuxc_sw_mux_ctl_pad
{
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_MOD = 0U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TMS = 1U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TDO = 2U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TDI = 3U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TCK = 4U,          /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_JTAG_TRST_B = 5U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO00 = 6U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO01 = 7U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO02 = 8U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO03 = 9U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO04 = 10U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO05 = 11U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO06 = 12U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO07 = 13U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO08 = 14U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_GPIO1_IO09 = 15U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART1_TX_DATA = 16U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART1_RX_DATA = 17U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART1_CTS_B = 18U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART1_RTS_B = 19U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART2_TX_DATA = 20U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART2_RX_DATA = 21U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART2_CTS_B = 22U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART2_RTS_B = 23U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART3_TX_DATA = 24U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART3_RX_DATA = 25U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART3_CTS_B = 26U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART3_RTS_B = 27U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART4_TX_DATA = 28U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART4_RX_DATA = 29U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART5_TX_DATA = 30U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_UART5_RX_DATA = 31U,    /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_RX_DATA0 = 32U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_RX_DATA1 = 33U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_RX_EN = 34U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_TX_DATA0 = 35U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_TX_DATA1 = 36U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_TX_EN = 37U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_TX_CLK = 38U,     /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET1_RX_ER = 39U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_RX_DATA0 = 40U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_RX_DATA1 = 41U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_RX_EN = 42U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_TX_DATA0 = 43U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_TX_DATA1 = 44U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_TX_EN = 45U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_TX_CLK = 46U,     /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_ENET2_RX_ER = 47U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_CLK  = 48U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_ENABLE = 49U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_HSYNC = 50U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_VSYNC = 51U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_RESET = 52U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA00 = 53U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA01 = 54U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA02 = 55U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA03 = 56U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA04 = 57U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA05 = 58U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA06 = 59U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA07 = 60U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA08 = 61U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA09 = 62U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA10 = 63U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA11 = 64U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA12 = 65U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA13 = 66U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA14 = 67U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA15 = 68U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA16 = 69U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA17 = 70U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA18 = 71U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA19 = 72U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA20 = 73U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA21 = 74U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA22 = 75U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_LCD_DATA23 = 76U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_RE_B = 77U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_WE_B = 78U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA00 = 79U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA01 = 80U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA02 = 81U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA03 = 82U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA04 = 83U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA05 = 84U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA06 = 85U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DATA07 = 86U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_ALE = 87U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_WP_B = 88U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_READY_B = 89U,     /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_CE0_B = 90U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_CE1_B = 91U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_CLE = 92U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_NAND_DQS = 93U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_CMD  = 94U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_CLK  = 95U,         /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_DATA0 = 96U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_DATA1 = 97U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_DATA2 = 98U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_SD1_DATA3 = 99U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_MCLK = 100U,        /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_PIXCLK = 101U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_VSYNC = 102U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_HSYNC = 103U,       /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA00 = 104U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA01 = 105U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA02 = 106U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA03 = 107U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA04 = 108U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA05 = 109U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA06 = 110U,      /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SW_MUX_CTL_PAD_CSI_DATA07 = 111U,      /**< IOMUXC SW_MUX_CTL_PAD index */
} iomuxc_sw_mux_ctl_pad_t;

/*!
 * @addtogroup iomuxc_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC SW_PAD_CTL_PAD_DDR
 *
 * Defines the enumeration for the IOMUXC SW_PAD_CTL_PAD_DDR collections.
 */
typedef enum _iomuxc_sw_pad_ctl_pad_ddr
{
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR00 = 0U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR01 = 1U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR02 = 2U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR03 = 3U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR04 = 4U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR05 = 5U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR06 = 6U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR07 = 7U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR08 = 8U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR09 = 9U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR10 = 10U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR11 = 11U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR12 = 12U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR13 = 13U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR14 = 14U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ADDR15 = 15U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_DQM0 = 16U,        /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_DQM1 = 17U,        /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_RAS_B = 18U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_CAS_B = 19U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_CS0_B = 20U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_CS1_B = 21U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDWE_B = 22U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ODT0 = 23U,        /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_ODT1 = 24U,        /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDBA0 = 25U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDBA1 = 26U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDBA2 = 27U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDCKE0 = 28U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDCKE1 = 29U,      /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDCLK0_P = 30U,    /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS0_P = 31U,     /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS1_P = 32U,     /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
    kIOMUXC_SW_PAD_CTL_PAD_DRAM_RESET = 33U,       /**< IOMUXC SW_PAD_CTL_PAD_DDR index */
} iomuxc_sw_pad_ctl_pad_ddr_t;

/*!
 * @addtogroup iomuxc_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC SW_PAD_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC SW_PAD_CTL_PAD collections.
 */
typedef enum _iomuxc_sw_pad_ctl_pad
{
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_MOD = 0U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TMS = 1U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TDO = 2U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TDI = 3U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TCK = 4U,          /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_JTAG_TRST_B = 5U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO00 = 6U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO01 = 7U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO02 = 8U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO03 = 9U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO04 = 10U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO05 = 11U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO06 = 12U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO07 = 13U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO08 = 14U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_GPIO1_IO09 = 15U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA = 16U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA = 17U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART1_CTS_B = 18U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART1_RTS_B = 19U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART2_TX_DATA = 20U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART2_RX_DATA = 21U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART2_CTS_B = 22U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART2_RTS_B = 23U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART3_TX_DATA = 24U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART3_RX_DATA = 25U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART3_CTS_B = 26U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART3_RTS_B = 27U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART4_TX_DATA = 28U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART4_RX_DATA = 29U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART5_TX_DATA = 30U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_UART5_RX_DATA = 31U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_RX_DATA0 = 32U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_RX_DATA1 = 33U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_RX_EN = 34U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_TX_DATA0 = 35U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_TX_DATA1 = 36U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_TX_EN = 37U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_TX_CLK = 38U,     /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET1_RX_ER = 39U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_RX_DATA0 = 40U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_RX_DATA1 = 41U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_RX_EN = 42U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_TX_DATA0 = 43U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_TX_DATA1 = 44U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_TX_EN = 45U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_TX_CLK = 46U,     /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_ENET2_RX_ER = 47U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_CLK  = 48U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_ENABLE = 49U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_HSYNC = 50U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_VSYNC = 51U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_RESET = 52U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA00 = 53U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA01 = 54U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA02 = 55U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA03 = 56U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA04 = 57U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA05 = 58U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA06 = 59U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA07 = 60U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA08 = 61U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA09 = 62U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA10 = 63U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA11 = 64U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA12 = 65U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA13 = 66U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA14 = 67U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA15 = 68U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA16 = 69U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA17 = 70U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA18 = 71U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA19 = 72U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA20 = 73U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA21 = 74U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA22 = 75U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_LCD_DATA23 = 76U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_RE_B = 77U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_WE_B = 78U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA00 = 79U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA01 = 80U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA02 = 81U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA03 = 82U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA04 = 83U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA05 = 84U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA06 = 85U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DATA07 = 86U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_ALE = 87U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_WP_B = 88U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_READY_B = 89U,     /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_CE0_B = 90U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_CE1_B = 91U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_CLE = 92U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_NAND_DQS = 93U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_CMD  = 94U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_CLK  = 95U,         /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_DATA0 = 96U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_DATA1 = 97U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_DATA2 = 98U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_SD1_DATA3 = 99U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_MCLK = 100U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_PIXCLK = 101U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_VSYNC = 102U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_HSYNC = 103U,       /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA00 = 104U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA01 = 105U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA02 = 106U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA03 = 107U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA04 = 108U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA05 = 109U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA06 = 110U,      /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SW_PAD_CTL_PAD_CSI_DATA07 = 111U,      /**< IOMUXC SW_PAD_CTL_PAD index */
} iomuxc_sw_pad_ctl_pad_t;

/*!
 * @brief Enumeration for the IOMUXC select input
 *
 * Defines the enumeration for the IOMUXC select input collections.
 */
typedef enum _iomuxc_select_input
{
    kIOMUXC_ANATOP_USB_OTG_ID_SELECT_INPUT = 0U,   /**< IOMUXC select input index */
    kIOMUXC_USB_OTG2_ID_SELECT_INPUT = 1U,         /**< IOMUXC select input index */
    kIOMUXC_CCM_PMIC_READY_SELECT_INPUT = 2U,      /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA02_SELECT_INPUT = 3U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA03_SELECT_INPUT = 4U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA05_SELECT_INPUT = 5U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA00_SELECT_INPUT = 6U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA01_SELECT_INPUT = 7U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA04_SELECT_INPUT = 8U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA06_SELECT_INPUT = 9U,          /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA07_SELECT_INPUT = 10U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA08_SELECT_INPUT = 11U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA09_SELECT_INPUT = 12U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA10_SELECT_INPUT = 13U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA11_SELECT_INPUT = 14U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA12_SELECT_INPUT = 15U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA13_SELECT_INPUT = 16U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA14_SELECT_INPUT = 17U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA15_SELECT_INPUT = 18U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA16_SELECT_INPUT = 19U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA17_SELECT_INPUT = 20U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA18_SELECT_INPUT = 21U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA19_SELECT_INPUT = 22U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA20_SELECT_INPUT = 23U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA21_SELECT_INPUT = 24U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA22_SELECT_INPUT = 25U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_DATA23_SELECT_INPUT = 26U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_HSYNC_SELECT_INPUT  = 27U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_PIXCLK_SELECT_INPUT = 28U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_VSYNC_SELECT_INPUT  = 29U,         /**< IOMUXC select input index */
    kIOMUXC_CSI_FIELD_SELECT_INPUT  = 30U,         /**< IOMUXC select input index */
    kIOMUXC_ECSPI1_SCLK_SELECT_INPUT = 31U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI1_MISO_SELECT_INPUT = 32U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI1_MOSI_SELECT_INPUT = 33U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI1_SS0_B_SELECT_INPUT = 34U,       /**< IOMUXC select input index */
    kIOMUXC_ECSPI2_SCLK_SELECT_INPUT = 35U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI2_MISO_SELECT_INPUT = 36U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI2_MOSI_SELECT_INPUT = 37U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI2_SS0_B_SELECT_INPUT = 38U,       /**< IOMUXC select input index */
    kIOMUXC_ECSPI3_SCLK_SELECT_INPUT = 39U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI3_MISO_SELECT_INPUT = 40U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI3_MOSI_SELECT_INPUT = 41U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI3_SS0_B_SELECT_INPUT = 42U,       /**< IOMUXC select input index */
    kIOMUXC_ECSPI4_SCLK_SELECT_INPUT = 43U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI4_MISO_SELECT_INPUT = 44U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI4_MOSI_SELECT_INPUT = 45U,        /**< IOMUXC select input index */
    kIOMUXC_ECSPI4_SS0_B_SELECT_INPUT = 46U,       /**< IOMUXC select input index */
    kIOMUXC_ENET1_REF_CLK1_SELECT_INPUT = 47U,     /**< IOMUXC select input index */
    kIOMUXC_ENET1_MAC0_MDIO_SELECT_INPUT = 48U,    /**< IOMUXC select input index */
    kIOMUXC_ENET2_REF_CLK2_SELECT_INPUT = 49U,     /**< IOMUXC select input index */
    kIOMUXC_ENET2_MAC0_MDIO_SELECT_INPUT = 50U,    /**< IOMUXC select input index */
    kIOMUXC_FLEXCAN1_RX_SELECT_INPUT = 51U,        /**< IOMUXC select input index */
    kIOMUXC_FLEXCAN2_RX_SELECT_INPUT = 52U,        /**< IOMUXC select input index */
    kIOMUXC_GPT1_CAPTURE1_SELECT_INPUT = 53U,      /**< IOMUXC select input index */
    kIOMUXC_GPT1_CAPTURE2_SELECT_INPUT = 54U,      /**< IOMUXC select input index */
    kIOMUXC_GPT1_CLK_SELECT_INPUT   = 55U,         /**< IOMUXC select input index */
    kIOMUXC_GPT2_CAPTURE1_SELECT_INPUT = 56U,      /**< IOMUXC select input index */
    kIOMUXC_GPT2_CAPTURE2_SELECT_INPUT = 57U,      /**< IOMUXC select input index */
    kIOMUXC_GPT2_CLK_SELECT_INPUT   = 58U,         /**< IOMUXC select input index */
    kIOMUXC_I2C1_SCL_SELECT_INPUT   = 59U,         /**< IOMUXC select input index */
    kIOMUXC_I2C1_SDA_SELECT_INPUT   = 60U,         /**< IOMUXC select input index */
    kIOMUXC_I2C2_SCL_SELECT_INPUT   = 61U,         /**< IOMUXC select input index */
    kIOMUXC_I2C2_SDA_SELECT_INPUT   = 62U,         /**< IOMUXC select input index */
    kIOMUXC_I2C3_SCL_SELECT_INPUT   = 63U,         /**< IOMUXC select input index */
    kIOMUXC_I2C3_SDA_SELECT_INPUT   = 64U,         /**< IOMUXC select input index */
    kIOMUXC_I2C4_SCL_SELECT_INPUT   = 65U,         /**< IOMUXC select input index */
    kIOMUXC_I2C4_SDA_SELECT_INPUT   = 66U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_COL0_SELECT_INPUT   = 67U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_COL1_SELECT_INPUT   = 68U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_COL2_SELECT_INPUT   = 69U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_ROW0_SELECT_INPUT   = 70U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_ROW1_SELECT_INPUT   = 71U,         /**< IOMUXC select input index */
    kIOMUXC_KPP_ROW2_SELECT_INPUT   = 72U,         /**< IOMUXC select input index */
    kIOMUXC_LCD_BUSY_SELECT_INPUT   = 73U,         /**< IOMUXC select input index */
    kIOMUXC_SAI1_MCLK_SELECT_INPUT  = 74U,         /**< IOMUXC select input index */
    kIOMUXC_SAI1_RX_DATA_SELECT_INPUT = 75U,       /**< IOMUXC select input index */
    kIOMUXC_SAI1_TX_BCLK_SELECT_INPUT = 76U,       /**< IOMUXC select input index */
    kIOMUXC_SAI1_TX_SYNC_SELECT_INPUT = 77U,       /**< IOMUXC select input index */
    kIOMUXC_SAI2_MCLK_SELECT_INPUT  = 78U,         /**< IOMUXC select input index */
    kIOMUXC_SAI2_RX_DATA_SELECT_INPUT = 79U,       /**< IOMUXC select input index */
    kIOMUXC_SAI2_TX_BCLK_SELECT_INPUT = 80U,       /**< IOMUXC select input index */
    kIOMUXC_SAI2_TX_SYNC_SELECT_INPUT = 81U,       /**< IOMUXC select input index */
    kIOMUXC_SAI3_MCLK_SELECT_INPUT  = 82U,         /**< IOMUXC select input index */
    kIOMUXC_SAI3_RX_DATA_SELECT_INPUT = 83U,       /**< IOMUXC select input index */
    kIOMUXC_SAI3_TX_BCLK_SELECT_INPUT = 84U,       /**< IOMUXC select input index */
    kIOMUXC_SAI3_TX_SYNC_SELECT_INPUT = 85U,       /**< IOMUXC select input index */
    kIOMUXC_SDMA_EVENTS0_SELECT_INPUT = 86U,       /**< IOMUXC select input index */
    kIOMUXC_SDMA_EVENTS1_SELECT_INPUT = 87U,       /**< IOMUXC select input index */
    kIOMUXC_SPDIF_IN_SELECT_INPUT   = 88U,         /**< IOMUXC select input index */
    kIOMUXC_SPDIF_EXT_CLK_SELECT_INPUT = 89U,      /**< IOMUXC select input index */
    kIOMUXC_UART1_RTS_B_SELECT_INPUT = 90U,        /**< IOMUXC select input index */
    kIOMUXC_UART1_RX_DATA_SELECT_INPUT = 91U,      /**< IOMUXC select input index */
    kIOMUXC_UART2_RTS_B_SELECT_INPUT = 92U,        /**< IOMUXC select input index */
    kIOMUXC_UART2_RX_DATA_SELECT_INPUT = 93U,      /**< IOMUXC select input index */
    kIOMUXC_UART3_RTS_B_SELECT_INPUT = 94U,        /**< IOMUXC select input index */
    kIOMUXC_UART3_RX_DATA_SELECT_INPUT = 95U,      /**< IOMUXC select input index */
    kIOMUXC_UART4_RTS_B_SELECT_INPUT = 96U,        /**< IOMUXC select input index */
    kIOMUXC_UART4_RX_DATA_SELECT_INPUT = 97U,      /**< IOMUXC select input index */
    kIOMUXC_UART5_RTS_B_SELECT_INPUT = 98U,        /**< IOMUXC select input index */
    kIOMUXC_UART5_RX_DATA_SELECT_INPUT = 99U,      /**< IOMUXC select input index */
    kIOMUXC_UART6_RTS_B_SELECT_INPUT = 100U,       /**< IOMUXC select input index */
    kIOMUXC_UART6_RX_DATA_SELECT_INPUT = 101U,     /**< IOMUXC select input index */
    kIOMUXC_UART7_RTS_B_SELECT_INPUT = 102U,       /**< IOMUXC select input index */
    kIOMUXC_UART7_RX_DATA_SELECT_INPUT = 103U,     /**< IOMUXC select input index */
    kIOMUXC_UART8_RTS_B_SELECT_INPUT = 104U,       /**< IOMUXC select input index */
    kIOMUXC_UART8_RX_DATA_SELECT_INPUT = 105U,     /**< IOMUXC select input index */
    kIOMUXC_USB_OTG2_OC_SELECT_INPUT = 106U,       /**< IOMUXC select input index */
    kIOMUXC_USB_OTG_OC_SELECT_INPUT = 107U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC1_CD_B_SELECT_INPUT = 108U,       /**< IOMUXC select input index */
    kIOMUXC_USDHC1_WP_SELECT_INPUT  = 109U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC2_CLK_SELECT_INPUT = 110U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC2_CD_B_SELECT_INPUT = 111U,       /**< IOMUXC select input index */
    kIOMUXC_USDHC2_CMD_SELECT_INPUT = 112U,        /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA0_SELECT_INPUT = 113U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA1_SELECT_INPUT = 114U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA2_SELECT_INPUT = 115U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA3_SELECT_INPUT = 116U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA4_SELECT_INPUT = 117U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA5_SELECT_INPUT = 118U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA6_SELECT_INPUT = 119U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_DATA7_SELECT_INPUT = 120U,      /**< IOMUXC select input index */
    kIOMUXC_USDHC2_WP_SELECT_INPUT  = 121U,        /**< IOMUXC select input index */
} iomuxc_select_input_t;

/* @} */

/*!
 * @brief Enumeration for the IOMUXC group
 *
 * Defines the enumeration for the IOMUXC group collections.
 */
typedef enum _iomuxc_grp
{
    kIOMUXC_SW_PAD_CTL_GRP_ADDDS    = 0U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRMODE_CTL = 1U,       /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_B0DS     = 2U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRPK    = 3U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_CTLDS    = 4U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_B1DS     = 5U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRHYS   = 6U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRPKE   = 7U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDRMODE  = 8U,          /**< IOMUXC group index */
    kIOMUXC_SW_PAD_CTL_GRP_DDR_TYPE = 9U,          /**< IOMUXC group index */
} iomuxc_grp_t;

/* @} */

/*!
 * @addtogroup iomuxc_snvs_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC_SNVS SW_MUX_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC_SNVS SW_MUX_CTL_PAD collections.
 */
typedef enum _iomuxc_snvs_sw_mux_ctl_pad
{
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_BOOT_MODE0 = 0U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_BOOT_MODE1 = 1U,   /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER0 = 2U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER1 = 3U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER2 = 4U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER3 = 5U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER4 = 6U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER5 = 7U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER6 = 8U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER7 = 9U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER8 = 10U, /**< IOMUXC SW_MUX_CTL_PAD index */
    kIOMUXC_SNVS_SW_MUX_CTL_PAD_SNVS_TAMPER9 = 11U, /**< IOMUXC SW_MUX_CTL_PAD index */
} iomuxc_snvs_sw_mux_ctl_pad_t;

/*!
 * @addtogroup iomuxc_snvs_pads
 * @{ */

/*******************************************************************************
 * Definitions
*******************************************************************************/

/*!
 * @brief Enumeration for the IOMUXC_SNVS SW_PAD_CTL_PAD
 *
 * Defines the enumeration for the IOMUXC_SNVS SW_PAD_CTL_PAD collections.
 */
typedef enum _iomuxc_snvs_sw_pad_ctl_pad
{
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_TEST_MODE = 0U,    /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_POR_B = 1U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_ONOFF = 2U,        /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_PMIC_ON_REQ = 3U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_CCM_PMIC_STBY_REQ = 4U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_BOOT_MODE0 = 5U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_BOOT_MODE1 = 6U,   /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER0 = 7U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER1 = 8U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER2 = 9U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER3 = 10U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER4 = 11U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER5 = 12U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER6 = 13U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER7 = 14U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER8 = 15U, /**< IOMUXC SW_PAD_CTL_PAD index */
    kIOMUXC_SNVS_SW_PAD_CTL_PAD_SNVS_TAMPER9 = 16U, /**< IOMUXC SW_PAD_CTL_PAD index */
} iomuxc_snvs_sw_pad_ctl_pad_t;

/*!
 * @}
 */ /* end of group Mapping_Information */


/* ----------------------------------------------------------------------------
   -- IOMUXC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_Peripheral_Access_Layer IOMUXC Peripheral Access Layer
 * @{
 */

/** IOMUXC Memory Map/Register - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[68];
  __IO uint32_t SW_MUX_CTL_PAD[112];               /**< SW_MUX_CTL_PAD_JTAG_MOD SW MUX Control Register..SW_MUX_CTL_PAD_CSI_DATA07 SW MUX Control Register, array offset: 0x44, array step: 0x4 */
  __IO uint32_t SW_PAD_CTL_PAD_DDR[34];            /**< SW_PAD_CTL_PAD_DRAM_ADDR00 SW PAD Control Register..SW_PAD_CTL_PAD_DRAM_RESET SW PAD Control Register, array offset: 0x204, array step: 0x4 */
       uint8_t RESERVED_1[68];
  __IO uint32_t SW_PAD_CTL_PAD[112];               /**< SW_PAD_CTL_PAD_JTAG_MOD SW PAD Control Register..SW_PAD_CTL_PAD_CSI_DATA07 SW PAD Control Register, array offset: 0x2D0, array step: 0x4 */
  __IO uint32_t SW_PAD_CTL_GRP[10];                /**< SW_PAD_CTL_GRP_ADDDS SW GRP Register..SW_PAD_CTL_GRP_DDR_TYPE SW GRP Register, array offset: 0x490, array step: 0x4 */
  __IO uint32_t SELECT_INPUT[122];                 /**< USB_OTG1_ID_SELECT_INPUT DAISY Register..USDHC2_WP_SELECT_INPUT DAISY Register, array offset: 0x4B8, array step: 0x4 */
} IOMUXC_Type;

     /* ----------------------------------------------------------------------------
     -- IOMUXC Register Masks
     ---------------------------------------------------------------------------- */

     /*!
     * @addtogroup IOMUXC_Register_Masks IOMUXC Register Masks
     * @{
     */

     /*! @name SW_MUX_CTL_PAD - SW_MUX_CTL_PAD_JTAG_MOD SW MUX Control Register..SW_MUX_CTL_PAD_CSI_DATA07 SW MUX Control Register */
     #define IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK      (0xFU)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
     #define IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_SHIFT     (0U)
     #define IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_SHIFT)) & IOMUXC_SW_MUX_CTL_PAD_MUX_MODE_MASK)  /* Merged from fields with different position or width, of widths (3, 4), largest definition used */
     #define IOMUXC_SW_MUX_CTL_PAD_SION_MASK          (0x10U)
     #define IOMUXC_SW_MUX_CTL_PAD_SION_SHIFT         (4U)
     #define IOMUXC_SW_MUX_CTL_PAD_SION(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_MUX_CTL_PAD_SION_SHIFT)) & IOMUXC_SW_MUX_CTL_PAD_SION_MASK)

     /* The count of IOMUXC_SW_MUX_CTL_PAD */
     #define IOMUXC_SW_MUX_CTL_PAD_COUNT              (112U)

     /*! @name SW_PAD_CTL_PAD_DDR - SW_PAD_CTL_PAD_DRAM_ADDR00 SW PAD Control Register..SW_PAD_CTL_PAD_DRAM_RESET SW PAD Control Register */
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DSE_MASK       (0x38U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DSE_SHIFT      (3U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DSE(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_DSE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_DSE_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_ODT_MASK       (0x700U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_ODT_SHIFT      (8U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_ODT(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_ODT_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_ODT_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_PKE_MASK       (0x1000U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_PKE_SHIFT      (12U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_PKE(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_PKE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_PKE_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_PUE_MASK       (0x2000U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_PUE_SHIFT      (13U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_PUE(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_PUE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_PUE_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_PUS_MASK       (0xC000U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_PUS_SHIFT      (14U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_PUS(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_PUS_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_PUS_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_HYS_MASK       (0x10000U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_HYS_SHIFT      (16U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_HYS(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_HYS_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_HYS_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_INPUT_MASK (0x20000U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_INPUT_SHIFT (17U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_INPUT(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_INPUT_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_INPUT_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_SEL_MASK   (0xC0000U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_SEL_SHIFT  (18U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_SEL(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_SEL_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_DDR_SEL_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM_MASK   (0x300000U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM_SHIFT  (20U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM_PADN_MASK (0x3000000U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM_PADN_SHIFT (24U)
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM_PADN(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM_PADN_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DDR_DO_TRIM_PADN_MASK)

     /* The count of IOMUXC_SW_PAD_CTL_PAD_DDR */
     #define IOMUXC_SW_PAD_CTL_PAD_DDR_COUNT          (34U)

     /*! @name SW_PAD_CTL_PAD - SW_PAD_CTL_PAD_JTAG_MOD SW PAD Control Register..SW_PAD_CTL_PAD_CSI_DATA07 SW PAD Control Register */
     #define IOMUXC_SW_PAD_CTL_PAD_SRE_MASK           (0x1U)
     #define IOMUXC_SW_PAD_CTL_PAD_SRE_SHIFT          (0U)
     #define IOMUXC_SW_PAD_CTL_PAD_SRE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_SRE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_SRE_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_DSE_MASK           (0x38U)
     #define IOMUXC_SW_PAD_CTL_PAD_DSE_SHIFT          (3U)
     #define IOMUXC_SW_PAD_CTL_PAD_DSE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_DSE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_DSE_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_SPEED_MASK         (0xC0U)
     #define IOMUXC_SW_PAD_CTL_PAD_SPEED_SHIFT        (6U)
     #define IOMUXC_SW_PAD_CTL_PAD_SPEED(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_SPEED_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_SPEED_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_ODE_MASK           (0x800U)
     #define IOMUXC_SW_PAD_CTL_PAD_ODE_SHIFT          (11U)
     #define IOMUXC_SW_PAD_CTL_PAD_ODE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_ODE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_ODE_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_PKE_MASK           (0x1000U)
     #define IOMUXC_SW_PAD_CTL_PAD_PKE_SHIFT          (12U)
     #define IOMUXC_SW_PAD_CTL_PAD_PKE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_PKE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_PKE_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_PUE_MASK           (0x2000U)
     #define IOMUXC_SW_PAD_CTL_PAD_PUE_SHIFT          (13U)
     #define IOMUXC_SW_PAD_CTL_PAD_PUE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_PUE_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_PUE_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_PUS_MASK           (0xC000U)
     #define IOMUXC_SW_PAD_CTL_PAD_PUS_SHIFT          (14U)
     #define IOMUXC_SW_PAD_CTL_PAD_PUS(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_PUS_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_PUS_MASK)
     #define IOMUXC_SW_PAD_CTL_PAD_HYS_MASK           (0x10000U)
     #define IOMUXC_SW_PAD_CTL_PAD_HYS_SHIFT          (16U)
     #define IOMUXC_SW_PAD_CTL_PAD_HYS(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_HYS_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_HYS_MASK)

     /* The count of IOMUXC_SW_PAD_CTL_PAD */
     #define IOMUXC_SW_PAD_CTL_PAD_COUNT              (112U)

     /*! @name SW_PAD_CTL_GRP - SW_PAD_CTL_GRP_ADDDS SW GRP Register..SW_PAD_CTL_GRP_DDR_TYPE SW GRP Register */
     #define IOMUXC_SW_PAD_CTL_GRP_DSE_MASK           (0x38U)
     #define IOMUXC_SW_PAD_CTL_GRP_DSE_SHIFT          (3U)
     #define IOMUXC_SW_PAD_CTL_GRP_DSE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_GRP_DSE_SHIFT)) & IOMUXC_SW_PAD_CTL_GRP_DSE_MASK)
     #define IOMUXC_SW_PAD_CTL_GRP_PKE_MASK           (0x1000U)
     #define IOMUXC_SW_PAD_CTL_GRP_PKE_SHIFT          (12U)
     #define IOMUXC_SW_PAD_CTL_GRP_PKE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_GRP_PKE_SHIFT)) & IOMUXC_SW_PAD_CTL_GRP_PKE_MASK)
     #define IOMUXC_SW_PAD_CTL_GRP_PUE_MASK           (0x2000U)
     #define IOMUXC_SW_PAD_CTL_GRP_PUE_SHIFT          (13U)
     #define IOMUXC_SW_PAD_CTL_GRP_PUE(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_GRP_PUE_SHIFT)) & IOMUXC_SW_PAD_CTL_GRP_PUE_MASK)
     #define IOMUXC_SW_PAD_CTL_GRP_HYS_MASK           (0x10000U)
     #define IOMUXC_SW_PAD_CTL_GRP_HYS_SHIFT          (16U)
     #define IOMUXC_SW_PAD_CTL_GRP_HYS(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_GRP_HYS_SHIFT)) & IOMUXC_SW_PAD_CTL_GRP_HYS_MASK)
     #define IOMUXC_SW_PAD_CTL_GRP_DDR_INPUT_MASK     (0x20000U)
     #define IOMUXC_SW_PAD_CTL_GRP_DDR_INPUT_SHIFT    (17U)
     #define IOMUXC_SW_PAD_CTL_GRP_DDR_INPUT(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_GRP_DDR_INPUT_SHIFT)) & IOMUXC_SW_PAD_CTL_GRP_DDR_INPUT_MASK)
     #define IOMUXC_SW_PAD_CTL_GRP_DDR_SEL_MASK       (0xC0000U)
     #define IOMUXC_SW_PAD_CTL_GRP_DDR_SEL_SHIFT      (18U)
     #define IOMUXC_SW_PAD_CTL_GRP_DDR_SEL(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_GRP_DDR_SEL_SHIFT)) & IOMUXC_SW_PAD_CTL_GRP_DDR_SEL_MASK)

     /* The count of IOMUXC_SW_PAD_CTL_GRP */
     #define IOMUXC_SW_PAD_CTL_GRP_COUNT              (10U)

     /*! @name SELECT_INPUT - USB_OTG1_ID_SELECT_INPUT DAISY Register..USDHC2_WP_SELECT_INPUT DAISY Register */
     #define IOMUXC_SELECT_INPUT_DAISY_MASK           (0x7U)  /* Merged from fields with different position or width, of widths (1, 2, 3), largest definition used */
     #define IOMUXC_SELECT_INPUT_DAISY_SHIFT          (0U)
     #define IOMUXC_SELECT_INPUT_DAISY(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_SELECT_INPUT_DAISY_SHIFT)) & IOMUXC_SELECT_INPUT_DAISY_MASK)  /* Merged from fields with different position or width, of widths (1, 2, 3), largest definition used */

     /* The count of IOMUXC_SELECT_INPUT */
     #define IOMUXC_SELECT_INPUT_COUNT                (122U)

     /*!
     * @}
     */ /* end of group IOMUXC_Register_Masks */

/* IOMUXC - Peripheral instance base addresses */
/** Peripheral IOMUXC base address */
#define IOMUXC_BASE                              (0x20E0000u)
/** Peripheral IOMUXC base pointer */
#define IOMUXC                                   ((IOMUXC_Type *)IOMUXC_BASE)
/** Array initializer of IOMUXC peripheral base addresses */
#define IOMUXC_BASE_ADDRS                        { IOMUXC_BASE }
/** Array initializer of IOMUXC peripheral base pointers */
#define IOMUXC_BASE_PTRS                         { IOMUXC }

/*!
 * @}
 */ /* end of group IOMUXC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- IOMUXC_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_GPR_Peripheral_Access_Layer IOMUXC_GPR Peripheral Access Layer
 * @{
 */

/** IOMUXC_GPR - Register Layout Typedef */
typedef struct {
  __IO uint32_t GPR0;                              /**< GPR0 General Purpose Register, offset: 0x0 */
  __IO uint32_t GPR1;                              /**< GPR1 General Purpose Register, offset: 0x4 */
  __IO uint32_t GPR2;                              /**< GPR2 General Purpose Register, offset: 0x8 */
  __IO uint32_t GPR3;                              /**< GPR3 General Purpose Register, offset: 0xC */
  __IO uint32_t GPR4;                              /**< GPR4 General Purpose Register, offset: 0x10 */
  __IO uint32_t GPR5;                              /**< GPR5 General Purpose Register, offset: 0x14 */
       uint8_t RESERVED_0[12];
  __I  uint32_t GPR9;                              /**< GPR9 General Purpose Register, offset: 0x24 */
  __IO uint32_t GPR10;                             /**< GPR10 General Purpose Register, offset: 0x28 */
       uint8_t RESERVED_1[12];
  __IO uint32_t GPR14;                             /**< GPR14 General Purpose Register, offset: 0x38 */
} IOMUXC_GPR_Type;

/* ----------------------------------------------------------------------------
   -- IOMUXC_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_GPR_Register_Masks IOMUXC_GPR Register Masks
 * @{
 */

/*! @name GPR0 - GPR0 General Purpose Register */
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL0_MASK     (0x1U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL0_SHIFT    (0U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL0(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL0_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL0_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL1_MASK     (0x2U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL1_SHIFT    (1U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL1(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL1_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL1_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL2_MASK     (0x4U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL2_SHIFT    (2U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL2(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL2_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL2_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL3_MASK     (0x8U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL3_SHIFT    (3U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL3(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL3_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL3_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL4_MASK     (0x10U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL4_SHIFT    (4U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL4(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL4_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL4_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL5_MASK     (0x20U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL5_SHIFT    (5U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL5(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL5_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL5_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL6_MASK     (0x40U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL6_SHIFT    (6U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL6(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL6_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL6_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL7_MASK     (0x80U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL7_SHIFT    (7U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL7(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL7_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL7_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL8_MASK     (0x100U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL8_SHIFT    (8U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL8(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL8_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL8_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL9_MASK     (0x200U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL9_SHIFT    (9U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL9(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL9_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL9_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL10_MASK    (0x400U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL10_SHIFT   (10U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL10(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL10_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL10_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL11_MASK    (0x800U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL11_SHIFT   (11U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL11(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL11_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL11_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL12_MASK    (0x1000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL12_SHIFT   (12U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL12(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL12_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL12_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL13_MASK    (0x2000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL13_SHIFT   (13U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL13(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL13_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL13_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL14_MASK    (0x4000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL14_SHIFT   (14U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL14(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL14_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL14_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL15_MASK    (0x8000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL15_SHIFT   (15U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL15(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL15_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL15_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL16_MASK    (0x10000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL16_SHIFT   (16U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL16(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL16_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL16_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL17_MASK    (0x20000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL17_SHIFT   (17U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL17(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL17_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL17_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL18_MASK    (0x40000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL18_SHIFT   (18U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL18(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL18_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL18_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL19_MASK    (0x80000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL19_SHIFT   (19U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL19(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL19_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL19_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL20_MASK    (0x100000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL20_SHIFT   (20U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL20(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL20_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL20_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL21_MASK    (0x200000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL21_SHIFT   (21U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL21(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL21_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL21_MASK)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL22_MASK    (0x400000U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL22_SHIFT   (22U)
#define IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL22(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL22_SHIFT)) & IOMUXC_GPR_GPR0_DMAREQ_MUX_SEL22_MASK)

/*! @name GPR1 - GPR1 General Purpose Register */
#define IOMUXC_GPR_GPR1_ACT_CS0_MASK             (0x1U)
#define IOMUXC_GPR_GPR1_ACT_CS0_SHIFT            (0U)
#define IOMUXC_GPR_GPR1_ACT_CS0(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ACT_CS0_SHIFT)) & IOMUXC_GPR_GPR1_ACT_CS0_MASK)
#define IOMUXC_GPR_GPR1_ADDRS0_MASK              (0x6U)
#define IOMUXC_GPR_GPR1_ADDRS0_SHIFT             (1U)
#define IOMUXC_GPR_GPR1_ADDRS0(x)                (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ADDRS0_SHIFT)) & IOMUXC_GPR_GPR1_ADDRS0_MASK)
#define IOMUXC_GPR_GPR1_ACT_CS1_MASK             (0x8U)
#define IOMUXC_GPR_GPR1_ACT_CS1_SHIFT            (3U)
#define IOMUXC_GPR_GPR1_ACT_CS1(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ACT_CS1_SHIFT)) & IOMUXC_GPR_GPR1_ACT_CS1_MASK)
#define IOMUXC_GPR_GPR1_ADDRS1_MASK              (0x30U)
#define IOMUXC_GPR_GPR1_ADDRS1_SHIFT             (4U)
#define IOMUXC_GPR_GPR1_ADDRS1(x)                (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ADDRS1_SHIFT)) & IOMUXC_GPR_GPR1_ADDRS1_MASK)
#define IOMUXC_GPR_GPR1_ACT_CS2_MASK             (0x40U)
#define IOMUXC_GPR_GPR1_ACT_CS2_SHIFT            (6U)
#define IOMUXC_GPR_GPR1_ACT_CS2(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ACT_CS2_SHIFT)) & IOMUXC_GPR_GPR1_ACT_CS2_MASK)
#define IOMUXC_GPR_GPR1_ADDRS2_MASK              (0x180U)
#define IOMUXC_GPR_GPR1_ADDRS2_SHIFT             (7U)
#define IOMUXC_GPR_GPR1_ADDRS2(x)                (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ADDRS2_SHIFT)) & IOMUXC_GPR_GPR1_ADDRS2_MASK)
#define IOMUXC_GPR_GPR1_ACT_CS3_MASK             (0x200U)
#define IOMUXC_GPR_GPR1_ACT_CS3_SHIFT            (9U)
#define IOMUXC_GPR_GPR1_ACT_CS3(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ACT_CS3_SHIFT)) & IOMUXC_GPR_GPR1_ACT_CS3_MASK)
#define IOMUXC_GPR_GPR1_ADDRS3_MASK              (0xC00U)
#define IOMUXC_GPR_GPR1_ADDRS3_SHIFT             (10U)
#define IOMUXC_GPR_GPR1_ADDRS3(x)                (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ADDRS3_SHIFT)) & IOMUXC_GPR_GPR1_ADDRS3_MASK)
#define IOMUXC_GPR_GPR1_GINT_MASK                (0x1000U)
#define IOMUXC_GPR_GPR1_GINT_SHIFT               (12U)
#define IOMUXC_GPR_GPR1_GINT(x)                  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_GINT_SHIFT)) & IOMUXC_GPR_GPR1_GINT_MASK)
#define IOMUXC_GPR_GPR1_ENET1_CLK_SEL_MASK       (0x2000U)
#define IOMUXC_GPR_GPR1_ENET1_CLK_SEL_SHIFT      (13U)
#define IOMUXC_GPR_GPR1_ENET1_CLK_SEL(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ENET1_CLK_SEL_SHIFT)) & IOMUXC_GPR_GPR1_ENET1_CLK_SEL_MASK)
#define IOMUXC_GPR_GPR1_ENET2_CLK_SEL_MASK       (0x4000U)
#define IOMUXC_GPR_GPR1_ENET2_CLK_SEL_SHIFT      (14U)
#define IOMUXC_GPR_GPR1_ENET2_CLK_SEL(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ENET2_CLK_SEL_SHIFT)) & IOMUXC_GPR_GPR1_ENET2_CLK_SEL_MASK)
#define IOMUXC_GPR_GPR1_USB_EXP_MODE_MASK        (0x8000U)
#define IOMUXC_GPR_GPR1_USB_EXP_MODE_SHIFT       (15U)
#define IOMUXC_GPR_GPR1_USB_EXP_MODE(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_USB_EXP_MODE_SHIFT)) & IOMUXC_GPR_GPR1_USB_EXP_MODE_MASK)
#define IOMUXC_GPR_GPR1_ADD_DS_MASK              (0x10000U)
#define IOMUXC_GPR_GPR1_ADD_DS_SHIFT             (16U)
#define IOMUXC_GPR_GPR1_ADD_DS(x)                (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ADD_DS_SHIFT)) & IOMUXC_GPR_GPR1_ADD_DS_MASK)
#define IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR_MASK    (0x20000U)
#define IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR_SHIFT   (17U)
#define IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR_MASK)
#define IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR_MASK    (0x40000U)
#define IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR_SHIFT   (18U)
#define IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR_MASK)
#define IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_MASK       (0x80000U)
#define IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_SHIFT      (19U)
#define IOMUXC_GPR_GPR1_SAI1_MCLK_DIR(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_SAI1_MCLK_DIR_MASK)
#define IOMUXC_GPR_GPR1_SAI2_MCLK_DIR_MASK       (0x100000U)
#define IOMUXC_GPR_GPR1_SAI2_MCLK_DIR_SHIFT      (20U)
#define IOMUXC_GPR_GPR1_SAI2_MCLK_DIR(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI2_MCLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_SAI2_MCLK_DIR_MASK)
#define IOMUXC_GPR_GPR1_SAI3_MCLK_DIR_MASK       (0x200000U)
#define IOMUXC_GPR_GPR1_SAI3_MCLK_DIR_SHIFT      (21U)
#define IOMUXC_GPR_GPR1_SAI3_MCLK_DIR(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_SAI3_MCLK_DIR_SHIFT)) & IOMUXC_GPR_GPR1_SAI3_MCLK_DIR_MASK)
#define IOMUXC_GPR_GPR1_EXC_MON_MASK             (0x400000U)
#define IOMUXC_GPR_GPR1_EXC_MON_SHIFT            (22U)
#define IOMUXC_GPR_GPR1_EXC_MON(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_EXC_MON_SHIFT)) & IOMUXC_GPR_GPR1_EXC_MON_MASK)
#define IOMUXC_GPR_GPR1_TZASC1_BOOT_LOCK_MASK    (0x800000U)
#define IOMUXC_GPR_GPR1_TZASC1_BOOT_LOCK_SHIFT   (23U)
#define IOMUXC_GPR_GPR1_TZASC1_BOOT_LOCK(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_TZASC1_BOOT_LOCK_SHIFT)) & IOMUXC_GPR_GPR1_TZASC1_BOOT_LOCK_MASK)
#define IOMUXC_GPR_GPR1_ARMA7_CLK_APB_DBG_EN_MASK (0x1000000U)
#define IOMUXC_GPR_GPR1_ARMA7_CLK_APB_DBG_EN_SHIFT (24U)
#define IOMUXC_GPR_GPR1_ARMA7_CLK_APB_DBG_EN(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ARMA7_CLK_APB_DBG_EN_SHIFT)) & IOMUXC_GPR_GPR1_ARMA7_CLK_APB_DBG_EN_MASK)
#define IOMUXC_GPR_GPR1_ARMA7_CLK_ATB_EN_MASK    (0x2000000U)
#define IOMUXC_GPR_GPR1_ARMA7_CLK_ATB_EN_SHIFT   (25U)
#define IOMUXC_GPR_GPR1_ARMA7_CLK_ATB_EN(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ARMA7_CLK_ATB_EN_SHIFT)) & IOMUXC_GPR_GPR1_ARMA7_CLK_ATB_EN_MASK)
#define IOMUXC_GPR_GPR1_ARMA7_CLK_AHB_EN_MASK    (0x4000000U)
#define IOMUXC_GPR_GPR1_ARMA7_CLK_AHB_EN_SHIFT   (26U)
#define IOMUXC_GPR_GPR1_ARMA7_CLK_AHB_EN(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR1_ARMA7_CLK_AHB_EN_SHIFT)) & IOMUXC_GPR_GPR1_ARMA7_CLK_AHB_EN_MASK)

/*! @name GPR2 - GPR2 General Purpose Register */
#define IOMUXC_GPR_GPR2_PXP_MEM_EN_POWERSAVING_MASK (0x1U)
#define IOMUXC_GPR_GPR2_PXP_MEM_EN_POWERSAVING_SHIFT (0U)
#define IOMUXC_GPR_GPR2_PXP_MEM_EN_POWERSAVING(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_PXP_MEM_EN_POWERSAVING_SHIFT)) & IOMUXC_GPR_GPR2_PXP_MEM_EN_POWERSAVING_MASK)
#define IOMUXC_GPR_GPR2_PXP_MEM_SHUTDOWN_MASK    (0x2U)
#define IOMUXC_GPR_GPR2_PXP_MEM_SHUTDOWN_SHIFT   (1U)
#define IOMUXC_GPR_GPR2_PXP_MEM_SHUTDOWN(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_PXP_MEM_SHUTDOWN_SHIFT)) & IOMUXC_GPR_GPR2_PXP_MEM_SHUTDOWN_MASK)
#define IOMUXC_GPR_GPR2_PXP_MEM_DEEPSLEEP_MASK   (0x4U)
#define IOMUXC_GPR_GPR2_PXP_MEM_DEEPSLEEP_SHIFT  (2U)
#define IOMUXC_GPR_GPR2_PXP_MEM_DEEPSLEEP(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_PXP_MEM_DEEPSLEEP_SHIFT)) & IOMUXC_GPR_GPR2_PXP_MEM_DEEPSLEEP_MASK)
#define IOMUXC_GPR_GPR2_PXP_MEM_LIGHTSLEEP_MASK  (0x8U)
#define IOMUXC_GPR_GPR2_PXP_MEM_LIGHTSLEEP_SHIFT (3U)
#define IOMUXC_GPR_GPR2_PXP_MEM_LIGHTSLEEP(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_PXP_MEM_LIGHTSLEEP_SHIFT)) & IOMUXC_GPR_GPR2_PXP_MEM_LIGHTSLEEP_MASK)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_EN_POWERSAVING_MASK (0x10U)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_EN_POWERSAVING_SHIFT (4U)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_EN_POWERSAVING(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_LCDIF1_MEM_EN_POWERSAVING_SHIFT)) & IOMUXC_GPR_GPR2_LCDIF1_MEM_EN_POWERSAVING_MASK)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_SHUTDOWN_MASK (0x20U)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_SHUTDOWN_SHIFT (5U)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_SHUTDOWN(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_LCDIF1_MEM_SHUTDOWN_SHIFT)) & IOMUXC_GPR_GPR2_LCDIF1_MEM_SHUTDOWN_MASK)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_DEEPSLEEP_MASK (0x40U)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_DEEPSLEEP_SHIFT (6U)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_DEEPSLEEP(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_LCDIF1_MEM_DEEPSLEEP_SHIFT)) & IOMUXC_GPR_GPR2_LCDIF1_MEM_DEEPSLEEP_MASK)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_LIGHTSLEEP_MASK (0x80U)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_LIGHTSLEEP_SHIFT (7U)
#define IOMUXC_GPR_GPR2_LCDIF1_MEM_LIGHTSLEEP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_LCDIF1_MEM_LIGHTSLEEP_SHIFT)) & IOMUXC_GPR_GPR2_LCDIF1_MEM_LIGHTSLEEP_MASK)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_EN_POWERSAVING_MASK (0x100U)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_EN_POWERSAVING_SHIFT (8U)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_EN_POWERSAVING(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_LCDIF2_MEM_EN_POWERSAVING_SHIFT)) & IOMUXC_GPR_GPR2_LCDIF2_MEM_EN_POWERSAVING_MASK)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_SHUTDOWN_MASK (0x200U)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_SHUTDOWN_SHIFT (9U)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_SHUTDOWN(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_LCDIF2_MEM_SHUTDOWN_SHIFT)) & IOMUXC_GPR_GPR2_LCDIF2_MEM_SHUTDOWN_MASK)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_DEEPSLEEP_MASK (0x400U)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_DEEPSLEEP_SHIFT (10U)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_DEEPSLEEP(x)  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_LCDIF2_MEM_DEEPSLEEP_SHIFT)) & IOMUXC_GPR_GPR2_LCDIF2_MEM_DEEPSLEEP_MASK)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_LIGHTSLEEP_MASK (0x800U)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_LIGHTSLEEP_SHIFT (11U)
#define IOMUXC_GPR_GPR2_LCDIF2_MEM_LIGHTSLEEP(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_LCDIF2_MEM_LIGHTSLEEP_SHIFT)) & IOMUXC_GPR_GPR2_LCDIF2_MEM_LIGHTSLEEP_MASK)
#define IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING_MASK (0x1000U)
#define IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING_SHIFT (12U)
#define IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING_SHIFT)) & IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING_MASK)
#define IOMUXC_GPR_GPR2_L2_MEM_SHUTDOWN_MASK     (0x2000U)
#define IOMUXC_GPR_GPR2_L2_MEM_SHUTDOWN_SHIFT    (13U)
#define IOMUXC_GPR_GPR2_L2_MEM_SHUTDOWN(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_L2_MEM_SHUTDOWN_SHIFT)) & IOMUXC_GPR_GPR2_L2_MEM_SHUTDOWN_MASK)
#define IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP_MASK    (0x4000U)
#define IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP_SHIFT   (14U)
#define IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP_SHIFT)) & IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP_MASK)
#define IOMUXC_GPR_GPR2_L2_MEM_LIGHTSLEEP_MASK   (0x8000U)
#define IOMUXC_GPR_GPR2_L2_MEM_LIGHTSLEEP_SHIFT  (15U)
#define IOMUXC_GPR_GPR2_L2_MEM_LIGHTSLEEP(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_L2_MEM_LIGHTSLEEP_SHIFT)) & IOMUXC_GPR_GPR2_L2_MEM_LIGHTSLEEP_MASK)
#define IOMUXC_GPR_GPR2_MQS_CLK_DIV_MASK         (0xFF0000U)
#define IOMUXC_GPR_GPR2_MQS_CLK_DIV_SHIFT        (16U)
#define IOMUXC_GPR_GPR2_MQS_CLK_DIV(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_MQS_CLK_DIV_SHIFT)) & IOMUXC_GPR_GPR2_MQS_CLK_DIV_MASK)
#define IOMUXC_GPR_GPR2_MQS_SW_RST_MASK          (0x1000000U)
#define IOMUXC_GPR_GPR2_MQS_SW_RST_SHIFT         (24U)
#define IOMUXC_GPR_GPR2_MQS_SW_RST(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_MQS_SW_RST_SHIFT)) & IOMUXC_GPR_GPR2_MQS_SW_RST_MASK)
#define IOMUXC_GPR_GPR2_MQS_EN_MASK              (0x2000000U)
#define IOMUXC_GPR_GPR2_MQS_EN_SHIFT             (25U)
#define IOMUXC_GPR_GPR2_MQS_EN(x)                (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_MQS_EN_SHIFT)) & IOMUXC_GPR_GPR2_MQS_EN_MASK)
#define IOMUXC_GPR_GPR2_MQS_OVERSAMPLE_MASK      (0x4000000U)
#define IOMUXC_GPR_GPR2_MQS_OVERSAMPLE_SHIFT     (26U)
#define IOMUXC_GPR_GPR2_MQS_OVERSAMPLE(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_MQS_OVERSAMPLE_SHIFT)) & IOMUXC_GPR_GPR2_MQS_OVERSAMPLE_MASK)
#define IOMUXC_GPR_GPR2_DRAM_RESET_BYPASS_MASK   (0x8000000U)
#define IOMUXC_GPR_GPR2_DRAM_RESET_BYPASS_SHIFT  (27U)
#define IOMUXC_GPR_GPR2_DRAM_RESET_BYPASS(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_DRAM_RESET_BYPASS_SHIFT)) & IOMUXC_GPR_GPR2_DRAM_RESET_BYPASS_MASK)
#define IOMUXC_GPR_GPR2_DRAM_RESET_MASK          (0x10000000U)
#define IOMUXC_GPR_GPR2_DRAM_RESET_SHIFT         (28U)
#define IOMUXC_GPR_GPR2_DRAM_RESET(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_DRAM_RESET_SHIFT)) & IOMUXC_GPR_GPR2_DRAM_RESET_MASK)
#define IOMUXC_GPR_GPR2_DRAM_CKE0_MASK           (0x20000000U)
#define IOMUXC_GPR_GPR2_DRAM_CKE0_SHIFT          (29U)
#define IOMUXC_GPR_GPR2_DRAM_CKE0(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_DRAM_CKE0_SHIFT)) & IOMUXC_GPR_GPR2_DRAM_CKE0_MASK)
#define IOMUXC_GPR_GPR2_DRAM_CKE1_MASK           (0x40000000U)
#define IOMUXC_GPR_GPR2_DRAM_CKE1_SHIFT          (30U)
#define IOMUXC_GPR_GPR2_DRAM_CKE1(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_DRAM_CKE1_SHIFT)) & IOMUXC_GPR_GPR2_DRAM_CKE1_MASK)
#define IOMUXC_GPR_GPR2_DRAM_CKE_BYPASS_MASK     (0x80000000U)
#define IOMUXC_GPR_GPR2_DRAM_CKE_BYPASS_SHIFT    (31U)
#define IOMUXC_GPR_GPR2_DRAM_CKE_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR2_DRAM_CKE_BYPASS_SHIFT)) & IOMUXC_GPR_GPR2_DRAM_CKE_BYPASS_MASK)

/*! @name GPR3 - GPR3 General Purpose Register */
#define IOMUXC_GPR_GPR3_OCRAM_CTL_MASK           (0xFU)
#define IOMUXC_GPR_GPR3_OCRAM_CTL_SHIFT          (0U)
#define IOMUXC_GPR_GPR3_OCRAM_CTL(x)             (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_OCRAM_CTL_SHIFT)) & IOMUXC_GPR_GPR3_OCRAM_CTL_MASK)
#define IOMUXC_GPR_GPR3_CORE_DBG_ACK_EN_MASK     (0x2000U)
#define IOMUXC_GPR_GPR3_CORE_DBG_ACK_EN_SHIFT    (13U)
#define IOMUXC_GPR_GPR3_CORE_DBG_ACK_EN(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_CORE_DBG_ACK_EN_SHIFT)) & IOMUXC_GPR_GPR3_CORE_DBG_ACK_EN_MASK)
#define IOMUXC_GPR_GPR3_OCRAM_STATUS_MASK        (0xF0000U)
#define IOMUXC_GPR_GPR3_OCRAM_STATUS_SHIFT       (16U)
#define IOMUXC_GPR_GPR3_OCRAM_STATUS(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR3_OCRAM_STATUS_SHIFT)) & IOMUXC_GPR_GPR3_OCRAM_STATUS_MASK)

/*! @name GPR4 - GPR4 General Purpose Register */
#define IOMUXC_GPR_GPR4_SDMA_STOP_REQ_MASK       (0x1U)
#define IOMUXC_GPR_GPR4_SDMA_STOP_REQ_SHIFT      (0U)
#define IOMUXC_GPR_GPR4_SDMA_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SDMA_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_SDMA_STOP_REQ_MASK)
#define IOMUXC_GPR_GPR4_CAN1_STOP_REQ_MASK       (0x2U)
#define IOMUXC_GPR_GPR4_CAN1_STOP_REQ_SHIFT      (1U)
#define IOMUXC_GPR_GPR4_CAN1_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_CAN1_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_CAN1_STOP_REQ_MASK)
#define IOMUXC_GPR_GPR4_CAN2_STOP_REQ_MASK       (0x4U)
#define IOMUXC_GPR_GPR4_CAN2_STOP_REQ_SHIFT      (2U)
#define IOMUXC_GPR_GPR4_CAN2_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_CAN2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_CAN2_STOP_REQ_MASK)
#define IOMUXC_GPR_GPR4_ENET1_STOP_REQ_MASK      (0x8U)
#define IOMUXC_GPR_GPR4_ENET1_STOP_REQ_SHIFT     (3U)
#define IOMUXC_GPR_GPR4_ENET1_STOP_REQ(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ENET1_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_ENET1_STOP_REQ_MASK)
#define IOMUXC_GPR_GPR4_ENET2_STOP_REQ_MASK      (0x10U)
#define IOMUXC_GPR_GPR4_ENET2_STOP_REQ_SHIFT     (4U)
#define IOMUXC_GPR_GPR4_ENET2_STOP_REQ(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ENET2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_ENET2_STOP_REQ_MASK)
#define IOMUXC_GPR_GPR4_SAI1_STOP_REQ_MASK       (0x20U)
#define IOMUXC_GPR_GPR4_SAI1_STOP_REQ_SHIFT      (5U)
#define IOMUXC_GPR_GPR4_SAI1_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI1_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_SAI1_STOP_REQ_MASK)
#define IOMUXC_GPR_GPR4_SAI2_STOP_REQ_MASK       (0x40U)
#define IOMUXC_GPR_GPR4_SAI2_STOP_REQ_SHIFT      (6U)
#define IOMUXC_GPR_GPR4_SAI2_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI2_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_SAI2_STOP_REQ_MASK)
#define IOMUXC_GPR_GPR4_SAI3_STOP_REQ_MASK       (0x80U)
#define IOMUXC_GPR_GPR4_SAI3_STOP_REQ_SHIFT      (7U)
#define IOMUXC_GPR_GPR4_SAI3_STOP_REQ(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI3_STOP_REQ_SHIFT)) & IOMUXC_GPR_GPR4_SAI3_STOP_REQ_MASK)
#define IOMUXC_GPR_GPR4_ENET_IPG_CLK_S_EN_MASK   (0x100U)
#define IOMUXC_GPR_GPR4_ENET_IPG_CLK_S_EN_SHIFT  (8U)
#define IOMUXC_GPR_GPR4_ENET_IPG_CLK_S_EN(x)     (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ENET_IPG_CLK_S_EN_SHIFT)) & IOMUXC_GPR_GPR4_ENET_IPG_CLK_S_EN_MASK)
#define IOMUXC_GPR_GPR4_SDMA_STOP_ACK_MASK       (0x10000U)
#define IOMUXC_GPR_GPR4_SDMA_STOP_ACK_SHIFT      (16U)
#define IOMUXC_GPR_GPR4_SDMA_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SDMA_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_SDMA_STOP_ACK_MASK)
#define IOMUXC_GPR_GPR4_CAN1_STOP_ACK_MASK       (0x20000U)
#define IOMUXC_GPR_GPR4_CAN1_STOP_ACK_SHIFT      (17U)
#define IOMUXC_GPR_GPR4_CAN1_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_CAN1_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_CAN1_STOP_ACK_MASK)
#define IOMUXC_GPR_GPR4_CAN2_STOP_ACK_MASK       (0x40000U)
#define IOMUXC_GPR_GPR4_CAN2_STOP_ACK_SHIFT      (18U)
#define IOMUXC_GPR_GPR4_CAN2_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_CAN2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_CAN2_STOP_ACK_MASK)
#define IOMUXC_GPR_GPR4_ENET1_STOP_ACK_MASK      (0x80000U)
#define IOMUXC_GPR_GPR4_ENET1_STOP_ACK_SHIFT     (19U)
#define IOMUXC_GPR_GPR4_ENET1_STOP_ACK(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ENET1_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_ENET1_STOP_ACK_MASK)
#define IOMUXC_GPR_GPR4_ENET2_STOP_ACK_MASK      (0x100000U)
#define IOMUXC_GPR_GPR4_ENET2_STOP_ACK_SHIFT     (20U)
#define IOMUXC_GPR_GPR4_ENET2_STOP_ACK(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ENET2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_ENET2_STOP_ACK_MASK)
#define IOMUXC_GPR_GPR4_SAI1_STOP_ACK_MASK       (0x200000U)
#define IOMUXC_GPR_GPR4_SAI1_STOP_ACK_SHIFT      (21U)
#define IOMUXC_GPR_GPR4_SAI1_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI1_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_SAI1_STOP_ACK_MASK)
#define IOMUXC_GPR_GPR4_SAI2_STOP_ACK_MASK       (0x400000U)
#define IOMUXC_GPR_GPR4_SAI2_STOP_ACK_SHIFT      (22U)
#define IOMUXC_GPR_GPR4_SAI2_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI2_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_SAI2_STOP_ACK_MASK)
#define IOMUXC_GPR_GPR4_SAI3_STOP_ACK_MASK       (0x800000U)
#define IOMUXC_GPR_GPR4_SAI3_STOP_ACK_SHIFT      (23U)
#define IOMUXC_GPR_GPR4_SAI3_STOP_ACK(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_SAI3_STOP_ACK_SHIFT)) & IOMUXC_GPR_GPR4_SAI3_STOP_ACK_MASK)
#define IOMUXC_GPR_GPR4_ARM_WFI_MASK             (0x40000000U)
#define IOMUXC_GPR_GPR4_ARM_WFI_SHIFT            (30U)
#define IOMUXC_GPR_GPR4_ARM_WFI(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ARM_WFI_SHIFT)) & IOMUXC_GPR_GPR4_ARM_WFI_MASK)
#define IOMUXC_GPR_GPR4_ARM_WFE_MASK             (0x80000000U)
#define IOMUXC_GPR_GPR4_ARM_WFE_SHIFT            (31U)
#define IOMUXC_GPR_GPR4_ARM_WFE(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR4_ARM_WFE_SHIFT)) & IOMUXC_GPR_GPR4_ARM_WFE_MASK)

/*! @name GPR5 - GPR5 General Purpose Register */
#define IOMUXC_GPR_GPR5_WDOG1_MASK_MASK          (0x40U)
#define IOMUXC_GPR_GPR5_WDOG1_MASK_SHIFT         (6U)
#define IOMUXC_GPR_GPR5_WDOG1_MASK(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_WDOG1_MASK_SHIFT)) & IOMUXC_GPR_GPR5_WDOG1_MASK_MASK)
#define IOMUXC_GPR_GPR5_WDOG2_MASK_MASK          (0x80U)
#define IOMUXC_GPR_GPR5_WDOG2_MASK_SHIFT         (7U)
#define IOMUXC_GPR_GPR5_WDOG2_MASK(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_WDOG2_MASK_SHIFT)) & IOMUXC_GPR_GPR5_WDOG2_MASK_MASK)
#define IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_CSI_MASK (0x300U)
#define IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_CSI_SHIFT (8U)
#define IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_CSI(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_CSI_SHIFT)) & IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_CSI_MASK)
#define IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_LCDIF_MASK (0x3000U)
#define IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_LCDIF_SHIFT (12U)
#define IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_LCDIF(x) (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_LCDIF_SHIFT)) & IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_LCDIF_MASK)
#define IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_PXP_MASK (0x30000U)
#define IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_PXP_SHIFT (16U)
#define IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_PXP(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_PXP_SHIFT)) & IOMUXC_GPR_GPR5_LCDIF_HANDSHAKE_PXP_MASK)
#define IOMUXC_GPR_GPR5_WDOG3_MASK_MASK          (0x100000U)
#define IOMUXC_GPR_GPR5_WDOG3_MASK_SHIFT         (20U)
#define IOMUXC_GPR_GPR5_WDOG3_MASK(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_WDOG3_MASK_SHIFT)) & IOMUXC_GPR_GPR5_WDOG3_MASK_MASK)
#define IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL_MASK     (0x800000U)
#define IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL_SHIFT    (23U)
#define IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL_SHIFT)) & IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL_MASK)
#define IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL_MASK     (0x1000000U)
#define IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL_SHIFT    (24U)
#define IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL_SHIFT)) & IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL_MASK)
#define IOMUXC_GPR_GPR5_ENET1_EVENT3IN_SEL_MASK  (0x2000000U)
#define IOMUXC_GPR_GPR5_ENET1_EVENT3IN_SEL_SHIFT (25U)
#define IOMUXC_GPR_GPR5_ENET1_EVENT3IN_SEL(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_ENET1_EVENT3IN_SEL_SHIFT)) & IOMUXC_GPR_GPR5_ENET1_EVENT3IN_SEL_MASK)
#define IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL_MASK  (0x4000000U)
#define IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL_SHIFT (26U)
#define IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL_SHIFT)) & IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL_MASK)
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1_MASK    (0x10000000U)
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1_SHIFT   (28U)
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1_SHIFT)) & IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1_MASK)
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2_MASK    (0x20000000U)
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2_SHIFT   (29U)
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2_SHIFT)) & IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2_MASK)
#define IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT1_MASK    (0x40000000U)
#define IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT1_SHIFT   (30U)
#define IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT1(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT1_SHIFT)) & IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT1_MASK)
#define IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT2_MASK    (0x80000000U)
#define IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT2_SHIFT   (31U)
#define IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT2(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT2_SHIFT)) & IOMUXC_GPR_GPR5_REF_1M_CLK_EPIT2_MASK)

/*! @name GPR9 - GPR9 General Purpose Register */
#define IOMUXC_GPR_GPR9_TZASC1_BYP_MASK          (0x1U)
#define IOMUXC_GPR_GPR9_TZASC1_BYP_SHIFT         (0U)
#define IOMUXC_GPR_GPR9_TZASC1_BYP(x)            (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR9_TZASC1_BYP_SHIFT)) & IOMUXC_GPR_GPR9_TZASC1_BYP_MASK)

/*! @name GPR10 - GPR10 General Purpose Register */
#define IOMUXC_GPR_GPR10_DBG_EN_MASK             (0x1U)
#define IOMUXC_GPR_GPR10_DBG_EN_SHIFT            (0U)
#define IOMUXC_GPR_GPR10_DBG_EN(x)               (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_DBG_EN_SHIFT)) & IOMUXC_GPR_GPR10_DBG_EN_MASK)
#define IOMUXC_GPR_GPR10_DBG_CLK_EN_MASK         (0x2U)
#define IOMUXC_GPR_GPR10_DBG_CLK_EN_SHIFT        (1U)
#define IOMUXC_GPR_GPR10_DBG_CLK_EN(x)           (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_DBG_CLK_EN_SHIFT)) & IOMUXC_GPR_GPR10_DBG_CLK_EN_MASK)
#define IOMUXC_GPR_GPR10_SEC_ERR_RESP_MASK       (0x4U)
#define IOMUXC_GPR_GPR10_SEC_ERR_RESP_SHIFT      (2U)
#define IOMUXC_GPR_GPR10_SEC_ERR_RESP(x)         (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_SEC_ERR_RESP_SHIFT)) & IOMUXC_GPR_GPR10_SEC_ERR_RESP_MASK)
#define IOMUXC_GPR_GPR10_OCRAM_TZ_EN_MASK        (0x400U)
#define IOMUXC_GPR_GPR10_OCRAM_TZ_EN_SHIFT       (10U)
#define IOMUXC_GPR_GPR10_OCRAM_TZ_EN(x)          (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_OCRAM_TZ_EN_SHIFT)) & IOMUXC_GPR_GPR10_OCRAM_TZ_EN_MASK)
#define IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR_MASK      (0xF800U)
#define IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR_SHIFT     (11U)
#define IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR_SHIFT)) & IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR_MASK)

/*! @name GPR14 - GPR14 General Purpose Register */
#define IOMUXC_GPR_GPR14_GPR_MASK                (0xFFFFFFFCU)
#define IOMUXC_GPR_GPR14_GPR_SHIFT               (2U)
#define IOMUXC_GPR_GPR14_GPR(x)                  (((uint32_t)(((uint32_t)(x)) << IOMUXC_GPR_GPR14_GPR_SHIFT)) & IOMUXC_GPR_GPR14_GPR_MASK)

/*!
 * @}
 */ /* end of group IOMUXC_GPR_Register_Masks */

/* IOMUXC_GPR - Peripheral instance base addresses */
/** Peripheral IOMUXC_GPR base address */
#define IOMUXC_GPR_BASE                          (0x20E4000u)
/** Peripheral IOMUXC_GPR base pointer */
#define IOMUXC_GPR                               ((IOMUXC_GPR_Type *)IOMUXC_GPR_BASE)
/** Array initializer of IOMUXC_GPR peripheral base addresses */
#define IOMUXC_GPR_BASE_ADDRS                    { IOMUXC_GPR_BASE }
/** Array initializer of IOMUXC_GPR peripheral base pointers */
#define IOMUXC_GPR_BASE_PTRS                     { IOMUXC_GPR }

/*!
 * @}
 */ /* end of group IOMUXC_GPR_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- IOMUXC_SNVS Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_SNVS_Peripheral_Access_Layer IOMUXC_SNVS Peripheral Access Layer
 * @{
 */

/** IOMUXC_SNVS - Register Layout Typedef */
typedef struct {
  __IO uint32_t SW_MUX_CTL_PAD[12];                /**< SW_MUX_CTL_PAD_BOOT_MODE0 SW MUX Control Register..SW_MUX_CTL_PAD_SNVS_TAMPER9 SW MUX Control Register, array offset: 0x0, array step: 0x4 */
  __IO uint32_t SW_PAD_CTL_PAD[17];                /**< SW_PAD_CTL_PAD_TEST_MODE SW PAD Control Register..SW_PAD_CTL_PAD_SNVS_TAMPER9 SW PAD Control Register, array offset: 0x30, array step: 0x4 */
} IOMUXC_SNVS_Type;

/* ----------------------------------------------------------------------------
   -- IOMUXC_SNVS Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup IOMUXC_SNVS_Register_Masks IOMUXC_SNVS Register Masks
 * @{
 */

/*! @name SW_MUX_CTL_PAD - SW_MUX_CTL_PAD_BOOT_MODE0 SW MUX Control Register..SW_MUX_CTL_PAD_SNVS_TAMPER9 SW MUX Control Register */
#define IOMUXC_SNVS_SW_MUX_CTL_PAD_MUX_MODE_MASK (0xFU)
#define IOMUXC_SNVS_SW_MUX_CTL_PAD_MUX_MODE_SHIFT (0U)
#define IOMUXC_SNVS_SW_MUX_CTL_PAD_MUX_MODE(x)   (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_MUX_CTL_PAD_MUX_MODE_SHIFT)) & IOMUXC_SNVS_SW_MUX_CTL_PAD_MUX_MODE_MASK)
#define IOMUXC_SNVS_SW_MUX_CTL_PAD_SION_MASK     (0x10U)
#define IOMUXC_SNVS_SW_MUX_CTL_PAD_SION_SHIFT    (4U)
#define IOMUXC_SNVS_SW_MUX_CTL_PAD_SION(x)       (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_MUX_CTL_PAD_SION_SHIFT)) & IOMUXC_SNVS_SW_MUX_CTL_PAD_SION_MASK)

/* The count of IOMUXC_SNVS_SW_MUX_CTL_PAD */
#define IOMUXC_SNVS_SW_MUX_CTL_PAD_COUNT         (12U)

/*! @name SW_PAD_CTL_PAD - SW_PAD_CTL_PAD_TEST_MODE SW PAD Control Register..SW_PAD_CTL_PAD_SNVS_TAMPER9 SW PAD Control Register */
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_SRE_MASK      (0x1U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_SRE_SHIFT     (0U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_SRE(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_PAD_CTL_PAD_SRE_SHIFT)) & IOMUXC_SNVS_SW_PAD_CTL_PAD_SRE_MASK)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_DSE_MASK      (0x38U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_DSE_SHIFT     (3U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_DSE(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_PAD_CTL_PAD_DSE_SHIFT)) & IOMUXC_SNVS_SW_PAD_CTL_PAD_DSE_MASK)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_SPEED_MASK    (0xC0U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_SPEED_SHIFT   (6U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_SPEED(x)      (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_PAD_CTL_PAD_SPEED_SHIFT)) & IOMUXC_SNVS_SW_PAD_CTL_PAD_SPEED_MASK)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_ODE_MASK      (0x800U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_ODE_SHIFT     (11U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_ODE(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_PAD_CTL_PAD_ODE_SHIFT)) & IOMUXC_SNVS_SW_PAD_CTL_PAD_ODE_MASK)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_PKE_MASK      (0x1000U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_PKE_SHIFT     (12U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_PKE(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_PAD_CTL_PAD_PKE_SHIFT)) & IOMUXC_SNVS_SW_PAD_CTL_PAD_PKE_MASK)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_PUE_MASK      (0x2000U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_PUE_SHIFT     (13U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_PUE(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_PAD_CTL_PAD_PUE_SHIFT)) & IOMUXC_SNVS_SW_PAD_CTL_PAD_PUE_MASK)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_PUS_MASK      (0xC000U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_PUS_SHIFT     (14U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_PUS(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_PAD_CTL_PAD_PUS_SHIFT)) & IOMUXC_SNVS_SW_PAD_CTL_PAD_PUS_MASK)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_HYS_MASK      (0x10000U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_HYS_SHIFT     (16U)
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_HYS(x)        (((uint32_t)(((uint32_t)(x)) << IOMUXC_SNVS_SW_PAD_CTL_PAD_HYS_SHIFT)) & IOMUXC_SNVS_SW_PAD_CTL_PAD_HYS_MASK)

/* The count of IOMUXC_SNVS_SW_PAD_CTL_PAD */
#define IOMUXC_SNVS_SW_PAD_CTL_PAD_COUNT         (17U)

/*!
 * @}
 */ /* end of group IOMUXC_SNVS_Register_Masks */

/* IOMUXC_SNVS - Peripheral instance base addresses */
/** Peripheral IOMUXC_SNVS base address */
#define IOMUXC_SNVS_BASE                         (0x2290000u)
/** Peripheral IOMUXC_SNVS base pointer */
#define IOMUXC_SNVS                              ((IOMUXC_SNVS_Type *)IOMUXC_SNVS_BASE)
/** Array initializer of IOMUXC_SNVS peripheral base addresses */
#define IOMUXC_SNVS_BASE_ADDRS                   { IOMUXC_SNVS_BASE }
/** Array initializer of IOMUXC_SNVS peripheral base pointers */
#define IOMUXC_SNVS_BASE_PTRS                    { IOMUXC_SNVS }

/*!
 * @}
 */ /* end of group IOMUXC_SNVS_Peripheral_Access_Layer */


/*! @name Pin function ID */
/*@{*/
/*! @brief The pin function ID is a tuple of <muxRegister muxMode inputRegister inputDaisy configRegister> */
#define IOMUXC_SNVS_BOOT_MODE0_GPIO5_IO10                    0x02290000U, 0x5U, 0x00000000U, 0x0U, 0x02290044U
#define IOMUXC_SNVS_BOOT_MODE1_GPIO5_IO11                    0x02290004U, 0x5U, 0x00000000U, 0x0U, 0x02290048U
#define IOMUXC_SNVS_SNVS_TAMPER0_GPIO5_IO00                  0x02290008U, 0x5U, 0x00000000U, 0x0U, 0x0229004CU
#define IOMUXC_SNVS_SNVS_TAMPER1_GPIO5_IO01                  0x0229000CU, 0x5U, 0x00000000U, 0x0U, 0x02290050U
#define IOMUXC_SNVS_SNVS_TAMPER2_GPIO5_IO02                  0x02290010U, 0x5U, 0x00000000U, 0x0U, 0x02290054U
#define IOMUXC_SNVS_SNVS_TAMPER3_GPIO5_IO03                  0x02290014U, 0x5U, 0x00000000U, 0x0U, 0x02290058U
#define IOMUXC_SNVS_SNVS_TAMPER4_GPIO5_IO04                  0x02290018U, 0x5U, 0x00000000U, 0x0U, 0x0229005CU
#define IOMUXC_SNVS_SNVS_TAMPER5_GPIO5_IO05                  0x0229001CU, 0x5U, 0x00000000U, 0x0U, 0x02290060U
#define IOMUXC_SNVS_SNVS_TAMPER6_GPIO5_IO06                  0x02290020U, 0x5U, 0x00000000U, 0x0U, 0x02290064U
#define IOMUXC_SNVS_SNVS_TAMPER7_GPIO5_IO07                  0x02290024U, 0x5U, 0x00000000U, 0x0U, 0x02290068U
#define IOMUXC_SNVS_SNVS_TAMPER8_GPIO5_IO08                  0x02290028U, 0x5U, 0x00000000U, 0x0U, 0x0229006CU
#define IOMUXC_SNVS_SNVS_TAMPER9_GPIO5_IO09                  0x0229002CU, 0x5U, 0x00000000U, 0x0U, 0x02290070U
#define IOMUXC_SNVS_TEST_MODE                                0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x02290030U
#define IOMUXC_SNVS_POR_B                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x02290034U
#define IOMUXC_SNVS_ONOFF                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x02290038U
#define IOMUXC_SNVS_SNVS_PMIC_ON_REQ                         0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x0229003CU
#define IOMUXC_SNVS_CCM_PMIC_STBY_REQ                        0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x02290040U
#define IOMUXC_JTAG_MOD_SJC_MOD                              0x020E0044U, 0x0U, 0x00000000U, 0x0U, 0x020E02D0U
#define IOMUXC_JTAG_MOD_GPT2_CLK                             0x020E0044U, 0x1U, 0x020E05A0U, 0x0U, 0x020E02D0U
#define IOMUXC_JTAG_MOD_SPDIF_OUT                            0x020E0044U, 0x2U, 0x00000000U, 0x0U, 0x020E02D0U
#define IOMUXC_JTAG_MOD_ENET1_REF_CLK_25M                    0x020E0044U, 0x3U, 0x00000000U, 0x0U, 0x020E02D0U
#define IOMUXC_JTAG_MOD_CCM_PMIC_RDY                         0x020E0044U, 0x4U, 0x020E04C0U, 0x0U, 0x020E02D0U
#define IOMUXC_JTAG_MOD_GPIO1_IO10                           0x020E0044U, 0x5U, 0x00000000U, 0x0U, 0x020E02D0U
#define IOMUXC_JTAG_MOD_SDMA_EXT_EVENT00                     0x020E0044U, 0x6U, 0x020E0610U, 0x0U, 0x020E02D0U
#define IOMUXC_JTAG_TMS_SJC_TMS                              0x020E0048U, 0x0U, 0x00000000U, 0x0U, 0x020E02D4U
#define IOMUXC_JTAG_TMS_GPT2_CAPTURE1                        0x020E0048U, 0x1U, 0x020E0598U, 0x0U, 0x020E02D4U
#define IOMUXC_JTAG_TMS_SAI2_MCLK                            0x020E0048U, 0x2U, 0x020E05F0U, 0x0U, 0x020E02D4U
#define IOMUXC_JTAG_TMS_CCM_CLKO1                            0x020E0048U, 0x3U, 0x00000000U, 0x0U, 0x020E02D4U
#define IOMUXC_JTAG_TMS_CCM_WAIT                             0x020E0048U, 0x4U, 0x00000000U, 0x0U, 0x020E02D4U
#define IOMUXC_JTAG_TMS_GPIO1_IO11                           0x020E0048U, 0x5U, 0x00000000U, 0x0U, 0x020E02D4U
#define IOMUXC_JTAG_TMS_SDMA_EXT_EVENT01                     0x020E0048U, 0x6U, 0x020E0614U, 0x0U, 0x020E02D4U
#define IOMUXC_JTAG_TMS_EPIT1_OUT                            0x020E0048U, 0x8U, 0x00000000U, 0x0U, 0x020E02D4U
#define IOMUXC_JTAG_TDO_SJC_TDO                              0x020E004CU, 0x0U, 0x00000000U, 0x0U, 0x020E02D8U
#define IOMUXC_JTAG_TDO_GPT2_CAPTURE2                        0x020E004CU, 0x1U, 0x020E059CU, 0x0U, 0x020E02D8U
#define IOMUXC_JTAG_TDO_SAI2_TX_SYNC                         0x020E004CU, 0x2U, 0x020E05FCU, 0x0U, 0x020E02D8U
#define IOMUXC_JTAG_TDO_CCM_CLKO2                            0x020E004CU, 0x3U, 0x00000000U, 0x0U, 0x020E02D8U
#define IOMUXC_JTAG_TDO_CCM_STOP                             0x020E004CU, 0x4U, 0x00000000U, 0x0U, 0x020E02D8U
#define IOMUXC_JTAG_TDO_GPIO1_IO12                           0x020E004CU, 0x5U, 0x00000000U, 0x0U, 0x020E02D8U
#define IOMUXC_JTAG_TDO_MQS_RIGHT                            0x020E004CU, 0x6U, 0x00000000U, 0x0U, 0x020E02D8U
#define IOMUXC_JTAG_TDO_EPIT2_OUT                            0x020E004CU, 0x8U, 0x00000000U, 0x0U, 0x020E02D8U
#define IOMUXC_JTAG_TDI_SJC_TDI                              0x020E0050U, 0x0U, 0x00000000U, 0x0U, 0x020E02DCU
#define IOMUXC_JTAG_TDI_GPT2_COMPARE1                        0x020E0050U, 0x1U, 0x00000000U, 0x0U, 0x020E02DCU
#define IOMUXC_JTAG_TDI_SAI2_TX_BCLK                         0x020E0050U, 0x2U, 0x020E05F8U, 0x0U, 0x020E02DCU
#define IOMUXC_JTAG_TDI_PWM6_OUT                             0x020E0050U, 0x4U, 0x00000000U, 0x0U, 0x020E02DCU
#define IOMUXC_JTAG_TDI_GPIO1_IO13                           0x020E0050U, 0x5U, 0x00000000U, 0x0U, 0x020E02DCU
#define IOMUXC_JTAG_TDI_MQS_LEFT                             0x020E0050U, 0x6U, 0x00000000U, 0x0U, 0x020E02DCU
#define IOMUXC_JTAG_TCK_SJC_TCK                              0x020E0054U, 0x0U, 0x00000000U, 0x0U, 0x020E02E0U
#define IOMUXC_JTAG_TCK_GPT2_COMPARE2                        0x020E0054U, 0x1U, 0x00000000U, 0x0U, 0x020E02E0U
#define IOMUXC_JTAG_TCK_SAI2_RX_DATA                         0x020E0054U, 0x2U, 0x020E05F4U, 0x0U, 0x020E02E0U
#define IOMUXC_JTAG_TCK_PWM7_OUT                             0x020E0054U, 0x4U, 0x00000000U, 0x0U, 0x020E02E0U
#define IOMUXC_JTAG_TCK_GPIO1_IO14                           0x020E0054U, 0x5U, 0x00000000U, 0x0U, 0x020E02E0U
#define IOMUXC_JTAG_TRST_B_SJC_TRSTB                         0x020E0058U, 0x0U, 0x00000000U, 0x0U, 0x020E02E4U
#define IOMUXC_JTAG_TRST_B_GPT2_COMPARE3                     0x020E0058U, 0x1U, 0x00000000U, 0x0U, 0x020E02E4U
#define IOMUXC_JTAG_TRST_B_SAI2_TX_DATA                      0x020E0058U, 0x2U, 0x00000000U, 0x0U, 0x020E02E4U
#define IOMUXC_JTAG_TRST_B_PWM8_OUT                          0x020E0058U, 0x4U, 0x00000000U, 0x0U, 0x020E02E4U
#define IOMUXC_JTAG_TRST_B_GPIO1_IO15                        0x020E0058U, 0x5U, 0x00000000U, 0x0U, 0x020E02E4U
#define IOMUXC_GPIO1_IO00_I2C2_SCL                           0x020E005CU, 0x0U, 0x020E05ACU, 0x1U, 0x020E02E8U
#define IOMUXC_GPIO1_IO00_GPT1_CAPTURE1                      0x020E005CU, 0x1U, 0x020E058CU, 0x0U, 0x020E02E8U
#define IOMUXC_GPIO1_IO00_ANATOP_OTG1_ID                     0x020E005CU, 0x2U, 0x020E04B8U, 0x0U, 0x020E02E8U
#define IOMUXC_GPIO1_IO00_ENET1_REF_CLK1                     0x020E005CU, 0x3U, 0x020E0574U, 0x0U, 0x020E02E8U
#define IOMUXC_GPIO1_IO00_MQS_RIGHT                          0x020E005CU, 0x4U, 0x00000000U, 0x0U, 0x020E02E8U
#define IOMUXC_GPIO1_IO00_GPIO1_IO00                         0x020E005CU, 0x5U, 0x00000000U, 0x0U, 0x020E02E8U
#define IOMUXC_GPIO1_IO00_ENET1_1588_EVENT0_IN               0x020E005CU, 0x6U, 0x00000000U, 0x0U, 0x020E02E8U
#define IOMUXC_GPIO1_IO00_SRC_SYSTEM_RESET                   0x020E005CU, 0x7U, 0x00000000U, 0x0U, 0x020E02E8U
#define IOMUXC_GPIO1_IO00_WDOG3_WDOG_B                       0x020E005CU, 0x8U, 0x00000000U, 0x0U, 0x020E02E8U
#define IOMUXC_GPIO1_IO01_I2C2_SDA                           0x020E0060U, 0x0U, 0x020E05B0U, 0x1U, 0x020E02ECU
#define IOMUXC_GPIO1_IO01_GPT1_COMPARE1                      0x020E0060U, 0x1U, 0x00000000U, 0x0U, 0x020E02ECU
#define IOMUXC_GPIO1_IO01_USB_OTG1_OC                        0x020E0060U, 0x2U, 0x020E0664U, 0x0U, 0x020E02ECU
#define IOMUXC_GPIO1_IO01_ENET2_REF_CLK2                     0x020E0060U, 0x3U, 0x020E057CU, 0x0U, 0x020E02ECU
#define IOMUXC_GPIO1_IO01_MQS_LEFT                           0x020E0060U, 0x4U, 0x00000000U, 0x0U, 0x020E02ECU
#define IOMUXC_GPIO1_IO01_GPIO1_IO01                         0x020E0060U, 0x5U, 0x00000000U, 0x0U, 0x020E02ECU
#define IOMUXC_GPIO1_IO01_ENET1_1588_EVENT0_OUT              0x020E0060U, 0x6U, 0x00000000U, 0x0U, 0x020E02ECU
#define IOMUXC_GPIO1_IO01_SRC_EARLY_RESET                    0x020E0060U, 0x7U, 0x00000000U, 0x0U, 0x020E02ECU
#define IOMUXC_GPIO1_IO01_WDOG1_WDOG_B                       0x020E0060U, 0x8U, 0x00000000U, 0x0U, 0x020E02ECU
#define IOMUXC_GPIO1_IO02_I2C1_SCL                           0x020E0064U, 0x0U, 0x020E05A4U, 0x0U, 0x020E02F0U
#define IOMUXC_GPIO1_IO02_GPT1_COMPARE2                      0x020E0064U, 0x1U, 0x00000000U, 0x0U, 0x020E02F0U
#define IOMUXC_GPIO1_IO02_USB_OTG2_PWR                       0x020E0064U, 0x2U, 0x00000000U, 0x0U, 0x020E02F0U
#define IOMUXC_GPIO1_IO02_ENET1_REF_CLK_25M                  0x020E0064U, 0x3U, 0x00000000U, 0x0U, 0x020E02F0U
#define IOMUXC_GPIO1_IO02_USDHC1_WP                          0x020E0064U, 0x4U, 0x020E066CU, 0x0U, 0x020E02F0U
#define IOMUXC_GPIO1_IO02_GPIO1_IO02                         0x020E0064U, 0x5U, 0x00000000U, 0x0U, 0x020E02F0U
#define IOMUXC_GPIO1_IO02_SDMA_EXT_EVENT00                   0x020E0064U, 0x6U, 0x020E0610U, 0x1U, 0x020E02F0U
#define IOMUXC_GPIO1_IO02_SRC_ANY_PU_RESET                   0x020E0064U, 0x7U, 0x00000000U, 0x0U, 0x020E02F0U
#define IOMUXC_GPIO1_IO02_UART1_TX                           0x020E0064U, 0x8U, 0x00000000U, 0x0U, 0x020E02F0U
//#define IOMUXC_GPIO1_IO02_UART1_RX                           0x020E0064U, 0x8U, 0x020E0624U, 0x0U, 0x020E02F0U
#define IOMUXC_GPIO1_IO03_I2C1_SDA                           0x020E0068U, 0x0U, 0x020E05A8U, 0x1U, 0x020E02F4U
#define IOMUXC_GPIO1_IO03_GPT1_COMPARE3                      0x020E0068U, 0x1U, 0x00000000U, 0x0U, 0x020E02F4U
#define IOMUXC_GPIO1_IO03_USB_OTG2_OC                        0x020E0068U, 0x2U, 0x020E0660U, 0x0U, 0x020E02F4U
#define IOMUXC_GPIO1_IO03_USDHC1_CD_B                        0x020E0068U, 0x4U, 0x020E0668U, 0x0U, 0x020E02F4U
#define IOMUXC_GPIO1_IO03_GPIO1_IO03                         0x020E0068U, 0x5U, 0x00000000U, 0x0U, 0x020E02F4U
#define IOMUXC_GPIO1_IO03_CCM_DI0_EXT_CLK                    0x020E0068U, 0x6U, 0x00000000U, 0x0U, 0x020E02F4U
#define IOMUXC_GPIO1_IO03_SRC_TESTER_ACK                     0x020E0068U, 0x7U, 0x00000000U, 0x0U, 0x020E02F4U
#define IOMUXC_GPIO1_IO03_UART1_RX                           0x020E0068U, 0x8U, 0x020E0624U, 0x1U, 0x020E02F4U
//#define IOMUXC_GPIO1_IO03_UART1_TX                           0x020E0068U, 0x8U, 0x00000000U, 0x0U, 0x020E02F4U
#define IOMUXC_GPIO1_IO04_ENET1_REF_CLK1                     0x020E006CU, 0x0U, 0x020E0574U, 0x1U, 0x020E02F8U
#define IOMUXC_GPIO1_IO04_PWM3_OUT                           0x020E006CU, 0x1U, 0x00000000U, 0x0U, 0x020E02F8U
#define IOMUXC_GPIO1_IO04_USB_OTG1_PWR                       0x020E006CU, 0x2U, 0x00000000U, 0x0U, 0x020E02F8U
#define IOMUXC_GPIO1_IO04_USDHC1_RESET_B                     0x020E006CU, 0x4U, 0x00000000U, 0x0U, 0x020E02F8U
#define IOMUXC_GPIO1_IO04_GPIO1_IO04                         0x020E006CU, 0x5U, 0x00000000U, 0x0U, 0x020E02F8U
#define IOMUXC_GPIO1_IO04_ENET2_1588_EVENT0_IN               0x020E006CU, 0x6U, 0x00000000U, 0x0U, 0x020E02F8U
#define IOMUXC_GPIO1_IO04_UART5_TX                           0x020E006CU, 0x8U, 0x00000000U, 0x0U, 0x020E02F8U
#define IOMUXC_GPIO1_IO04_UART5_RX                           0x020E006CU, 0x8U, 0x020E0644U, 0x2U, 0x020E02F8U
#define IOMUXC_GPIO1_IO05_ENET2_REF_CLK2                     0x020E0070U, 0x0U, 0x020E057CU, 0x1U, 0x020E02FCU
#define IOMUXC_GPIO1_IO05_PWM4_OUT                           0x020E0070U, 0x1U, 0x00000000U, 0x0U, 0x020E02FCU
#define IOMUXC_GPIO1_IO05_ANATOP_OTG2_ID                     0x020E0070U, 0x2U, 0x020E04BCU, 0x0U, 0x020E02FCU
#define IOMUXC_GPIO1_IO05_CSI_FIELD                          0x020E0070U, 0x3U, 0x020E0530U, 0x0U, 0x020E02FCU
#define IOMUXC_GPIO1_IO05_USDHC1_VSELECT                     0x020E0070U, 0x4U, 0x00000000U, 0x0U, 0x020E02FCU
#define IOMUXC_GPIO1_IO05_GPIO1_IO05                         0x020E0070U, 0x5U, 0x00000000U, 0x0U, 0x020E02FCU
#define IOMUXC_GPIO1_IO05_ENET2_1588_EVENT0_OUT              0x020E0070U, 0x6U, 0x00000000U, 0x0U, 0x020E02FCU
#define IOMUXC_GPIO1_IO05_UART5_RX                           0x020E0070U, 0x8U, 0x020E0644U, 0x3U, 0x020E02FCU
#define IOMUXC_GPIO1_IO05_UART5_TX                           0x020E0070U, 0x8U, 0x00000000U, 0x0U, 0x020E02FCU
#define IOMUXC_GPIO1_IO06_ENET1_MDIO                         0x020E0074U, 0x0U, 0x020E0578U, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO06_ENET2_MDIO                         0x020E0074U, 0x1U, 0x020E0580U, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO06_USB_OTG_PWR_WAKE                   0x020E0074U, 0x2U, 0x00000000U, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO06_CSI_MCLK                           0x020E0074U, 0x3U, 0x00000000U, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO06_USDHC2_WP                          0x020E0074U, 0x4U, 0x020E069CU, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO06_GPIO1_IO06                         0x020E0074U, 0x5U, 0x00000000U, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO06_CCM_WAIT                           0x020E0074U, 0x6U, 0x00000000U, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO06_CCM_REF_EN_B                       0x020E0074U, 0x7U, 0x00000000U, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO06_UART1_CTS_B                        0x020E0074U, 0x8U, 0x00000000U, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO06_UART1_RTS_B                        0x020E0074U, 0x8U, 0x020E0620U, 0x0U, 0x020E0300U
#define IOMUXC_GPIO1_IO07_ENET1_MDC                          0x020E0078U, 0x0U, 0x00000000U, 0x0U, 0x020E0304U
#define IOMUXC_GPIO1_IO07_ENET2_MDC                          0x020E0078U, 0x1U, 0x00000000U, 0x0U, 0x020E0304U
#define IOMUXC_GPIO1_IO07_USB_OTG_HOST_MODE                  0x020E0078U, 0x2U, 0x00000000U, 0x0U, 0x020E0304U
#define IOMUXC_GPIO1_IO07_CSI_PIXCLK                         0x020E0078U, 0x3U, 0x020E0528U, 0x0U, 0x020E0304U
#define IOMUXC_GPIO1_IO07_USDHC2_CD_B                        0x020E0078U, 0x4U, 0x020E0674U, 0x1U, 0x020E0304U
#define IOMUXC_GPIO1_IO07_GPIO1_IO07                         0x020E0078U, 0x5U, 0x00000000U, 0x0U, 0x020E0304U
#define IOMUXC_GPIO1_IO07_CCM_STOP                           0x020E0078U, 0x6U, 0x00000000U, 0x0U, 0x020E0304U
#define IOMUXC_GPIO1_IO07_UART1_RTS_B                        0x020E0078U, 0x8U, 0x020E0620U, 0x1U, 0x020E0304U
#define IOMUXC_GPIO1_IO07_UART1_CTS_B                        0x020E0078U, 0x8U, 0x00000000U, 0x0U, 0x020E0304U
#define IOMUXC_GPIO1_IO08_PWM1_OUT                           0x020E007CU, 0x0U, 0x00000000U, 0x0U, 0x020E0308U
#define IOMUXC_GPIO1_IO08_WDOG1_WDOG_B                       0x020E007CU, 0x1U, 0x00000000U, 0x0U, 0x020E0308U
#define IOMUXC_GPIO1_IO08_SPDIF_OUT                          0x020E007CU, 0x2U, 0x00000000U, 0x0U, 0x020E0308U
#define IOMUXC_GPIO1_IO08_CSI_VSYNC                          0x020E007CU, 0x3U, 0x020E052CU, 0x1U, 0x020E0308U
#define IOMUXC_GPIO1_IO08_USDHC2_VSELECT                     0x020E007CU, 0x4U, 0x00000000U, 0x0U, 0x020E0308U
#define IOMUXC_GPIO1_IO08_GPIO1_IO08                         0x020E007CU, 0x5U, 0x00000000U, 0x0U, 0x020E0308U
#define IOMUXC_GPIO1_IO08_CCM_PMIC_RDY                       0x020E007CU, 0x6U, 0x020E04C0U, 0x1U, 0x020E0308U
#define IOMUXC_GPIO1_IO08_UART5_RTS_B                        0x020E007CU, 0x8U, 0x020E0640U, 0x1U, 0x020E0308U
#define IOMUXC_GPIO1_IO08_UART5_CTS_B                        0x020E007CU, 0x8U, 0x00000000U, 0x0U, 0x020E0308U
#define IOMUXC_GPIO1_IO09_PWM2_OUT                           0x020E0080U, 0x0U, 0x00000000U, 0x0U, 0x020E030CU
#define IOMUXC_GPIO1_IO09_WDOG1_WDOG_ANY                     0x020E0080U, 0x1U, 0x00000000U, 0x0U, 0x020E030CU
#define IOMUXC_GPIO1_IO09_SPDIF_IN                           0x020E0080U, 0x2U, 0x020E0618U, 0x0U, 0x020E030CU
#define IOMUXC_GPIO1_IO09_CSI_HSYNC                          0x020E0080U, 0x3U, 0x020E0524U, 0x1U, 0x020E030CU
#define IOMUXC_GPIO1_IO09_USDHC2_RESET_B                     0x020E0080U, 0x4U, 0x00000000U, 0x0U, 0x020E030CU
#define IOMUXC_GPIO1_IO09_GPIO1_IO09                         0x020E0080U, 0x5U, 0x00000000U, 0x0U, 0x020E030CU
#define IOMUXC_GPIO1_IO09_USDHC1_RESET_B                     0x020E0080U, 0x6U, 0x00000000U, 0x0U, 0x020E030CU
#define IOMUXC_GPIO1_IO09_UART5_CTS_B                        0x020E0080U, 0x8U, 0x00000000U, 0x0U, 0x020E030CU
#define IOMUXC_GPIO1_IO09_UART5_RTS_B                        0x020E0080U, 0x8U, 0x020E0640U, 0x2U, 0x020E030CU
#define IOMUXC_UART1_TX_DATA_UART1_TX                        0x020E0084U, 0x0U, 0x00000000U, 0x0U, 0x020E0310U
//#define IOMUXC_UART1_TX_DATA_UART1_RX                        0x020E0084U, 0x0U, 0x020E0624U, 0x2U, 0x020E0310U
#define IOMUXC_UART1_TX_DATA_ENET1_RDATA02                   0x020E0084U, 0x1U, 0x00000000U, 0x0U, 0x020E0310U
#define IOMUXC_UART1_TX_DATA_I2C3_SCL                        0x020E0084U, 0x2U, 0x020E05B4U, 0x0U, 0x020E0310U
#define IOMUXC_UART1_TX_DATA_CSI_DATA02                      0x020E0084U, 0x3U, 0x020E04C4U, 0x1U, 0x020E0310U
#define IOMUXC_UART1_TX_DATA_GPT1_COMPARE1                   0x020E0084U, 0x4U, 0x00000000U, 0x0U, 0x020E0310U
#define IOMUXC_UART1_TX_DATA_GPIO1_IO16                      0x020E0084U, 0x5U, 0x00000000U, 0x0U, 0x020E0310U
#define IOMUXC_UART1_TX_DATA_SPDIF_OUT                       0x020E0084U, 0x8U, 0x00000000U, 0x0U, 0x020E0310U
#define IOMUXC_UART1_TX_DATA_UART5_TX                        0x020E0084U, 0x9U, 0x00000000U, 0x0U, 0x020E0310U
//#define IOMUXC_UART1_TX_DATA_UART5_RX                        0x020E0084U, 0x9U, 0x020E0644U, 0x4U, 0x020E0310U
#define IOMUXC_UART1_RX_DATA_UART1_RX                        0x020E0088U, 0x0U, 0x020E0624U, 0x3U, 0x020E0314U
//#define IOMUXC_UART1_RX_DATA_UART1_TX                        0x020E0088U, 0x0U, 0x00000000U, 0x0U, 0x020E0314U
#define IOMUXC_UART1_RX_DATA_ENET1_RDATA03                   0x020E0088U, 0x1U, 0x00000000U, 0x0U, 0x020E0314U
#define IOMUXC_UART1_RX_DATA_I2C3_SDA                        0x020E0088U, 0x2U, 0x020E05B8U, 0x0U, 0x020E0314U
#define IOMUXC_UART1_RX_DATA_CSI_DATA03                      0x020E0088U, 0x3U, 0x020E04C8U, 0x1U, 0x020E0314U
#define IOMUXC_UART1_RX_DATA_GPT1_CLK                        0x020E0088U, 0x4U, 0x020E0594U, 0x0U, 0x020E0314U
#define IOMUXC_UART1_RX_DATA_GPIO1_IO17                      0x020E0088U, 0x5U, 0x00000000U, 0x0U, 0x020E0314U
#define IOMUXC_UART1_RX_DATA_SPDIF_IN                        0x020E0088U, 0x8U, 0x020E0618U, 0x1U, 0x020E0314U
#define IOMUXC_UART1_RX_DATA_UART5_RX                        0x020E0088U, 0x9U, 0x020E0644U, 0x5U, 0x020E0314U
//#define IOMUXC_UART1_RX_DATA_UART5_TX                        0x020E0088U, 0x9U, 0x00000000U, 0x0U, 0x020E0314U
#define IOMUXC_UART1_CTS_B_UART1_CTS_B                       0x020E008CU, 0x0U, 0x00000000U, 0x0U, 0x020E0318U
#define IOMUXC_UART1_CTS_B_UART1_RTS_B                       0x020E008CU, 0x0U, 0x020E0620U, 0x2U, 0x020E0318U
#define IOMUXC_UART1_CTS_B_ENET1_RX_CLK                      0x020E008CU, 0x1U, 0x00000000U, 0x0U, 0x020E0318U
#define IOMUXC_UART1_CTS_B_USDHC1_WP                         0x020E008CU, 0x2U, 0x020E066CU, 0x1U, 0x020E0318U
#define IOMUXC_UART1_CTS_B_CSI_DATA04                        0x020E008CU, 0x3U, 0x020E04D8U, 0x0U, 0x020E0318U
#define IOMUXC_UART1_CTS_B_ENET2_1588_EVENT1_IN              0x020E008CU, 0x4U, 0x00000000U, 0x0U, 0x020E0318U
#define IOMUXC_UART1_CTS_B_GPIO1_IO18                        0x020E008CU, 0x5U, 0x00000000U, 0x0U, 0x020E0318U
#define IOMUXC_UART1_CTS_B_USDHC2_WP                         0x020E008CU, 0x8U, 0x020E069CU, 0x1U, 0x020E0318U
#define IOMUXC_UART1_CTS_B_UART5_CTS_B                       0x020E008CU, 0x9U, 0x00000000U, 0x0U, 0x020E0318U
#define IOMUXC_UART1_CTS_B_UART5_RTS_B                       0x020E008CU, 0x9U, 0x020E0640U, 0x3U, 0x020E0318U
#define IOMUXC_UART1_RTS_B_UART1_RTS_B                       0x020E0090U, 0x0U, 0x020E0620U, 0x3U, 0x020E031CU
#define IOMUXC_UART1_RTS_B_UART1_CTS_B                       0x020E0090U, 0x0U, 0x00000000U, 0x0U, 0x020E031CU
#define IOMUXC_UART1_RTS_B_ENET1_TX_ER                       0x020E0090U, 0x1U, 0x00000000U, 0x0U, 0x020E031CU
#define IOMUXC_UART1_RTS_B_USDHC1_CD_B                       0x020E0090U, 0x2U, 0x020E0668U, 0x1U, 0x020E031CU
#define IOMUXC_UART1_RTS_B_CSI_DATA05                        0x020E0090U, 0x3U, 0x020E04CCU, 0x1U, 0x020E031CU
#define IOMUXC_UART1_RTS_B_ENET2_1588_EVENT1_OUT             0x020E0090U, 0x4U, 0x00000000U, 0x0U, 0x020E031CU
#define IOMUXC_UART1_RTS_B_GPIO1_IO19                        0x020E0090U, 0x5U, 0x00000000U, 0x0U, 0x020E031CU
#define IOMUXC_UART1_RTS_B_USDHC2_CD_B                       0x020E0090U, 0x8U, 0x020E0674U, 0x2U, 0x020E031CU
#define IOMUXC_UART1_RTS_B_UART5_RTS_B                       0x020E0090U, 0x9U, 0x020E0640U, 0x4U, 0x020E031CU
#define IOMUXC_UART1_RTS_B_UART5_CTS_B                       0x020E0090U, 0x9U, 0x00000000U, 0x0U, 0x020E031CU
#define IOMUXC_UART2_TX_DATA_UART2_TX                        0x020E0094U, 0x0U, 0x00000000U, 0x0U, 0x020E0320U
#define IOMUXC_UART2_TX_DATA_UART2_RX                        0x020E0094U, 0x0U, 0x020E062CU, 0x0U, 0x020E0320U
#define IOMUXC_UART2_TX_DATA_ENET1_TDATA02                   0x020E0094U, 0x1U, 0x00000000U, 0x0U, 0x020E0320U
#define IOMUXC_UART2_TX_DATA_I2C4_SCL                        0x020E0094U, 0x2U, 0x020E05BCU, 0x0U, 0x020E0320U
#define IOMUXC_UART2_TX_DATA_CSI_DATA06                      0x020E0094U, 0x3U, 0x020E04DCU, 0x0U, 0x020E0320U
#define IOMUXC_UART2_TX_DATA_GPT1_CAPTURE1                   0x020E0094U, 0x4U, 0x020E058CU, 0x1U, 0x020E0320U
#define IOMUXC_UART2_TX_DATA_GPIO1_IO20                      0x020E0094U, 0x5U, 0x00000000U, 0x0U, 0x020E0320U
#define IOMUXC_UART2_TX_DATA_ECSPI3_SS0                      0x020E0094U, 0x8U, 0x020E0560U, 0x0U, 0x020E0320U
#define IOMUXC_UART2_RX_DATA_UART2_RX                        0x020E0098U, 0x0U, 0x020E062CU, 0x1U, 0x020E0324U
#define IOMUXC_UART2_RX_DATA_UART2_TX                        0x020E0098U, 0x0U, 0x00000000U, 0x0U, 0x020E0324U
#define IOMUXC_UART2_RX_DATA_ENET1_TDATA03                   0x020E0098U, 0x1U, 0x00000000U, 0x0U, 0x020E0324U
#define IOMUXC_UART2_RX_DATA_I2C4_SDA                        0x020E0098U, 0x2U, 0x020E05C0U, 0x0U, 0x020E0324U
#define IOMUXC_UART2_RX_DATA_CSI_DATA07                      0x020E0098U, 0x3U, 0x020E04E0U, 0x0U, 0x020E0324U
#define IOMUXC_UART2_RX_DATA_GPT1_CAPTURE2                   0x020E0098U, 0x4U, 0x020E0590U, 0x0U, 0x020E0324U
#define IOMUXC_UART2_RX_DATA_GPIO1_IO21                      0x020E0098U, 0x5U, 0x00000000U, 0x0U, 0x020E0324U
#define IOMUXC_UART2_RX_DATA_SJC_DONE                        0x020E0098U, 0x7U, 0x00000000U, 0x0U, 0x020E0324U
#define IOMUXC_UART2_RX_DATA_ECSPI3_SCLK                     0x020E0098U, 0x8U, 0x020E0554U, 0x0U, 0x020E0324U
#define IOMUXC_UART2_CTS_B_UART2_CTS_B                       0x020E009CU, 0x0U, 0x00000000U, 0x0U, 0x020E0328U
#define IOMUXC_UART2_CTS_B_UART2_RTS_B                       0x020E009CU, 0x0U, 0x020E0628U, 0x0U, 0x020E0328U
#define IOMUXC_UART2_CTS_B_ENET1_CRS                         0x020E009CU, 0x1U, 0x00000000U, 0x0U, 0x020E0328U
#define IOMUXC_UART2_CTS_B_FLEXCAN2_TX                       0x020E009CU, 0x2U, 0x00000000U, 0x0U, 0x020E0328U
#define IOMUXC_UART2_CTS_B_CSI_DATA08                        0x020E009CU, 0x3U, 0x020E04E4U, 0x0U, 0x020E0328U
#define IOMUXC_UART2_CTS_B_GPT1_COMPARE2                     0x020E009CU, 0x4U, 0x00000000U, 0x0U, 0x020E0328U
#define IOMUXC_UART2_CTS_B_GPIO1_IO22                        0x020E009CU, 0x5U, 0x00000000U, 0x0U, 0x020E0328U
#define IOMUXC_UART2_CTS_B_SJC_DE_B                          0x020E009CU, 0x7U, 0x00000000U, 0x0U, 0x020E0328U
#define IOMUXC_UART2_CTS_B_ECSPI3_MOSI                       0x020E009CU, 0x8U, 0x020E055CU, 0x0U, 0x020E0328U
#define IOMUXC_UART2_RTS_B_UART2_RTS_B                       0x020E00A0U, 0x0U, 0x020E0628U, 0x1U, 0x020E032CU
#define IOMUXC_UART2_RTS_B_UART2_CTS_B                       0x020E00A0U, 0x0U, 0x00000000U, 0x0U, 0x020E032CU
#define IOMUXC_UART2_RTS_B_ENET1_COL                         0x020E00A0U, 0x1U, 0x00000000U, 0x0U, 0x020E032CU
#define IOMUXC_UART2_RTS_B_FLEXCAN2_RX                       0x020E00A0U, 0x2U, 0x020E0588U, 0x0U, 0x020E032CU
#define IOMUXC_UART2_RTS_B_CSI_DATA09                        0x020E00A0U, 0x3U, 0x020E04E8U, 0x0U, 0x020E032CU
#define IOMUXC_UART2_RTS_B_GPT1_COMPARE3                     0x020E00A0U, 0x4U, 0x00000000U, 0x0U, 0x020E032CU
#define IOMUXC_UART2_RTS_B_GPIO1_IO23                        0x020E00A0U, 0x5U, 0x00000000U, 0x0U, 0x020E032CU
#define IOMUXC_UART2_RTS_B_SJC_FAIL                          0x020E00A0U, 0x7U, 0x00000000U, 0x0U, 0x020E032CU
#define IOMUXC_UART2_RTS_B_ECSPI3_MISO                       0x020E00A0U, 0x8U, 0x020E0558U, 0x0U, 0x020E032CU
#define IOMUXC_UART3_TX_DATA_UART3_TX                        0x020E00A4U, 0x0U, 0x00000000U, 0x0U, 0x020E0330U
#define IOMUXC_UART3_TX_DATA_UART3_RX                        0x020E00A4U, 0x0U, 0x020E0634U, 0x0U, 0x020E0330U
#define IOMUXC_UART3_TX_DATA_ENET2_RDATA02                   0x020E00A4U, 0x1U, 0x00000000U, 0x0U, 0x020E0330U
#define IOMUXC_UART3_TX_DATA_CSI_DATA01                      0x020E00A4U, 0x3U, 0x020E04D4U, 0x0U, 0x020E0330U
#define IOMUXC_UART3_TX_DATA_UART2_CTS_B                     0x020E00A4U, 0x4U, 0x00000000U, 0x0U, 0x020E0330U
#define IOMUXC_UART3_TX_DATA_UART2_RTS_B                     0x020E00A4U, 0x4U, 0x020E0628U, 0x2U, 0x020E0330U
#define IOMUXC_UART3_TX_DATA_GPIO1_IO24                      0x020E00A4U, 0x5U, 0x00000000U, 0x0U, 0x020E0330U
#define IOMUXC_UART3_TX_DATA_SJC_JTAG_ACT                    0x020E00A4U, 0x7U, 0x00000000U, 0x0U, 0x020E0330U
#define IOMUXC_UART3_TX_DATA_ANATOP_OTG1_ID                  0x020E00A4U, 0x8U, 0x020E04B8U, 0x1U, 0x020E0330U
#define IOMUXC_UART3_RX_DATA_UART3_RX                        0x020E00A8U, 0x0U, 0x020E0634U, 0x1U, 0x020E0334U
#define IOMUXC_UART3_RX_DATA_UART3_TX                        0x020E00A8U, 0x0U, 0x00000000U, 0x0U, 0x020E0334U
#define IOMUXC_UART3_RX_DATA_ENET2_RDATA03                   0x020E00A8U, 0x1U, 0x00000000U, 0x0U, 0x020E0334U
#define IOMUXC_UART3_RX_DATA_CSI_DATA00                      0x020E00A8U, 0x3U, 0x020E04D0U, 0x0U, 0x020E0334U
#define IOMUXC_UART3_RX_DATA_UART2_RTS_B                     0x020E00A8U, 0x4U, 0x020E0628U, 0x3U, 0x020E0334U
#define IOMUXC_UART3_RX_DATA_UART2_CTS_B                     0x020E00A8U, 0x4U, 0x00000000U, 0x0U, 0x020E0334U
#define IOMUXC_UART3_RX_DATA_GPIO1_IO25                      0x020E00A8U, 0x5U, 0x00000000U, 0x0U, 0x020E0334U
#define IOMUXC_UART3_RX_DATA_EPIT1_OUT                       0x020E00A8U, 0x8U, 0x00000000U, 0x0U, 0x020E0334U
#define IOMUXC_UART3_CTS_B_UART3_CTS_B                       0x020E00ACU, 0x0U, 0x00000000U, 0x0U, 0x020E0338U
#define IOMUXC_UART3_CTS_B_UART3_RTS_B                       0x020E00ACU, 0x0U, 0x020E0630U, 0x0U, 0x020E0338U
#define IOMUXC_UART3_CTS_B_ENET2_RX_CLK                      0x020E00ACU, 0x1U, 0x00000000U, 0x0U, 0x020E0338U
#define IOMUXC_UART3_CTS_B_FLEXCAN1_TX                       0x020E00ACU, 0x2U, 0x00000000U, 0x0U, 0x020E0338U
#define IOMUXC_UART3_CTS_B_CSI_DATA10                        0x020E00ACU, 0x3U, 0x020E04ECU, 0x0U, 0x020E0338U
#define IOMUXC_UART3_CTS_B_ENET1_1588_EVENT1_IN              0x020E00ACU, 0x4U, 0x00000000U, 0x0U, 0x020E0338U
#define IOMUXC_UART3_CTS_B_GPIO1_IO26                        0x020E00ACU, 0x5U, 0x00000000U, 0x0U, 0x020E0338U
#define IOMUXC_UART3_CTS_B_EPIT2_OUT                         0x020E00ACU, 0x8U, 0x00000000U, 0x0U, 0x020E0338U
#define IOMUXC_UART3_RTS_B_UART3_RTS_B                       0x020E00B0U, 0x0U, 0x020E0630U, 0x1U, 0x020E033CU
#define IOMUXC_UART3_RTS_B_UART3_CTS_B                       0x020E00B0U, 0x0U, 0x00000000U, 0x0U, 0x020E033CU
#define IOMUXC_UART3_RTS_B_ENET2_TX_ER                       0x020E00B0U, 0x1U, 0x00000000U, 0x0U, 0x020E033CU
#define IOMUXC_UART3_RTS_B_FLEXCAN1_RX                       0x020E00B0U, 0x2U, 0x020E0584U, 0x0U, 0x020E033CU
#define IOMUXC_UART3_RTS_B_CSI_DATA11                        0x020E00B0U, 0x3U, 0x020E04F0U, 0x0U, 0x020E033CU
#define IOMUXC_UART3_RTS_B_ENET1_1588_EVENT1_OUT             0x020E00B0U, 0x4U, 0x00000000U, 0x0U, 0x020E033CU
#define IOMUXC_UART3_RTS_B_GPIO1_IO27                        0x020E00B0U, 0x5U, 0x00000000U, 0x0U, 0x020E033CU
#define IOMUXC_UART3_RTS_B_WDOG1_WDOG_B                      0x020E00B0U, 0x8U, 0x00000000U, 0x0U, 0x020E033CU
#define IOMUXC_UART4_TX_DATA_UART4_TX                        0x020E00B4U, 0x0U, 0x00000000U, 0x0U, 0x020E0340U
#define IOMUXC_UART4_TX_DATA_UART4_RX                        0x020E00B4U, 0x0U, 0x020E063CU, 0x0U, 0x020E0340U
#define IOMUXC_UART4_TX_DATA_ENET2_TDATA02                   0x020E00B4U, 0x1U, 0x00000000U, 0x0U, 0x020E0340U
#define IOMUXC_UART4_TX_DATA_I2C1_SCL                        0x020E00B4U, 0x2U, 0x020E05A4U, 0x1U, 0x020E0340U
#define IOMUXC_UART4_TX_DATA_CSI_DATA12                      0x020E00B4U, 0x3U, 0x020E04F4U, 0x0U, 0x020E0340U
#define IOMUXC_UART4_TX_DATA_CSU_CSU_ALARM_AUT02             0x020E00B4U, 0x4U, 0x00000000U, 0x0U, 0x020E0340U
#define IOMUXC_UART4_TX_DATA_GPIO1_IO28                      0x020E00B4U, 0x5U, 0x00000000U, 0x0U, 0x020E0340U
#define IOMUXC_UART4_TX_DATA_ECSPI2_SCLK                     0x020E00B4U, 0x8U, 0x020E0544U, 0x1U, 0x020E0340U
#define IOMUXC_UART4_RX_DATA_UART4_RX                        0x020E00B8U, 0x0U, 0x020E063CU, 0x1U, 0x020E0344U
#define IOMUXC_UART4_RX_DATA_UART4_TX                        0x020E00B8U, 0x0U, 0x00000000U, 0x0U, 0x020E0344U
#define IOMUXC_UART4_RX_DATA_ENET2_TDATA03                   0x020E00B8U, 0x1U, 0x00000000U, 0x0U, 0x020E0344U
#define IOMUXC_UART4_RX_DATA_I2C1_SDA                        0x020E00B8U, 0x2U, 0x020E05A8U, 0x2U, 0x020E0344U
#define IOMUXC_UART4_RX_DATA_CSI_DATA13                      0x020E00B8U, 0x3U, 0x020E04F8U, 0x0U, 0x020E0344U
#define IOMUXC_UART4_RX_DATA_CSU_CSU_ALARM_AUT01             0x020E00B8U, 0x4U, 0x00000000U, 0x0U, 0x020E0344U
#define IOMUXC_UART4_RX_DATA_GPIO1_IO29                      0x020E00B8U, 0x5U, 0x00000000U, 0x0U, 0x020E0344U
#define IOMUXC_UART4_RX_DATA_ECSPI2_SS0                      0x020E00B8U, 0x8U, 0x020E0550U, 0x1U, 0x020E0344U
#define IOMUXC_UART4_RX_DATA_EPDC_PWRCTRL01                  0x020E00B8U, 0x9U, 0x00000000U, 0x0U, 0x020E0344U
#define IOMUXC_UART5_TX_DATA_GPIO1_IO30                      0x020E00BCU, 0x5U, 0x00000000U, 0x0U, 0x020E0348U
#define IOMUXC_UART5_TX_DATA_ECSPI2_MOSI                     0x020E00BCU, 0x8U, 0x020E054CU, 0x0U, 0x020E0348U
#define IOMUXC_UART5_TX_DATA_EPDC_PWRCTRL02                  0x020E00BCU, 0x9U, 0x00000000U, 0x0U, 0x020E0348U
#define IOMUXC_UART5_TX_DATA_UART5_TX                        0x020E00BCU, 0x0U, 0x00000000U, 0x0U, 0x020E0348U
#define IOMUXC_UART5_TX_DATA_UART5_RX                        0x020E00BCU, 0x0U, 0x020E0644U, 0x6U, 0x020E0348U
#define IOMUXC_UART5_TX_DATA_ENET2_CRS                       0x020E00BCU, 0x1U, 0x00000000U, 0x0U, 0x020E0348U
#define IOMUXC_UART5_TX_DATA_I2C2_SCL                        0x020E00BCU, 0x2U, 0x020E05ACU, 0x2U, 0x020E0348U
#define IOMUXC_UART5_TX_DATA_CSI_DATA14                      0x020E00BCU, 0x3U, 0x020E04FCU, 0x0U, 0x020E0348U
#define IOMUXC_UART5_TX_DATA_CSU_CSU_ALARM_AUT00             0x020E00BCU, 0x4U, 0x00000000U, 0x0U, 0x020E0348U
#define IOMUXC_UART5_RX_DATA_UART5_RX                        0x020E00C0U, 0x0U, 0x020E0644U, 0x7U, 0x020E034CU
#define IOMUXC_UART5_RX_DATA_UART5_TX                        0x020E00C0U, 0x0U, 0x00000000U, 0x0U, 0x020E034CU
#define IOMUXC_UART5_RX_DATA_ENET2_COL                       0x020E00C0U, 0x1U, 0x00000000U, 0x0U, 0x020E034CU
#define IOMUXC_UART5_RX_DATA_I2C2_SDA                        0x020E00C0U, 0x2U, 0x020E05B0U, 0x2U, 0x020E034CU
#define IOMUXC_UART5_RX_DATA_CSI_DATA15                      0x020E00C0U, 0x3U, 0x020E0500U, 0x0U, 0x020E034CU
#define IOMUXC_UART5_RX_DATA_CSU_CSU_INT_DEB                 0x020E00C0U, 0x4U, 0x00000000U, 0x0U, 0x020E034CU
#define IOMUXC_UART5_RX_DATA_GPIO1_IO31                      0x020E00C0U, 0x5U, 0x00000000U, 0x0U, 0x020E034CU
#define IOMUXC_UART5_RX_DATA_ECSPI2_MISO                     0x020E00C0U, 0x8U, 0x020E0548U, 0x1U, 0x020E034CU
#define IOMUXC_UART5_RX_DATA_EPDC_PWRCTRL03                  0x020E00C0U, 0x9U, 0x00000000U, 0x0U, 0x020E034CU
#define IOMUXC_ENET1_RX_DATA0_ENET1_RDATA00                  0x020E00C4U, 0x0U, 0x00000000U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA0_UART4_RTS_B                    0x020E00C4U, 0x1U, 0x020E0638U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA0_UART4_CTS_B                    0x020E00C4U, 0x1U, 0x00000000U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA0_PWM1_OUT                       0x020E00C4U, 0x2U, 0x00000000U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA0_CSI_DATA16                     0x020E00C4U, 0x3U, 0x020E0504U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA0_FLEXCAN1_TX                    0x020E00C4U, 0x4U, 0x00000000U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA0_GPIO2_IO00                     0x020E00C4U, 0x5U, 0x00000000U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA0_KPP_ROW00                      0x020E00C4U, 0x6U, 0x020E05D0U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA0_USDHC1_LCTL                    0x020E00C4U, 0x8U, 0x00000000U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA0_EPDC_SDCE04                    0x020E00C4U, 0x9U, 0x00000000U, 0x0U, 0x020E0350U
#define IOMUXC_ENET1_RX_DATA1_ENET1_RDATA01                  0x020E00C8U, 0x0U, 0x00000000U, 0x0U, 0x020E0354U
#define IOMUXC_ENET1_RX_DATA1_UART4_CTS_B                    0x020E00C8U, 0x1U, 0x00000000U, 0x0U, 0x020E0354U
#define IOMUXC_ENET1_RX_DATA1_UART4_RTS_B                    0x020E00C8U, 0x1U, 0x020E0638U, 0x1U, 0x020E0354U
#define IOMUXC_ENET1_RX_DATA1_PWM2_OUT                       0x020E00C8U, 0x2U, 0x00000000U, 0x0U, 0x020E0354U
#define IOMUXC_ENET1_RX_DATA1_CSI_DATA17                     0x020E00C8U, 0x3U, 0x020E0508U, 0x0U, 0x020E0354U
#define IOMUXC_ENET1_RX_DATA1_FLEXCAN1_RX                    0x020E00C8U, 0x4U, 0x020E0584U, 0x1U, 0x020E0354U
#define IOMUXC_ENET1_RX_DATA1_GPIO2_IO01                     0x020E00C8U, 0x5U, 0x00000000U, 0x0U, 0x020E0354U
#define IOMUXC_ENET1_RX_DATA1_KPP_COL00                      0x020E00C8U, 0x6U, 0x020E05C4U, 0x0U, 0x020E0354U
#define IOMUXC_ENET1_RX_DATA1_USDHC2_LCTL                    0x020E00C8U, 0x8U, 0x00000000U, 0x0U, 0x020E0354U
#define IOMUXC_ENET1_RX_DATA1_EPDC_SDCE05                    0x020E00C8U, 0x9U, 0x00000000U, 0x0U, 0x020E0354U
#define IOMUXC_ENET1_RX_EN_ENET1_RX_EN                       0x020E00CCU, 0x0U, 0x00000000U, 0x0U, 0x020E0358U
#define IOMUXC_ENET1_RX_EN_UART5_RTS_B                       0x020E00CCU, 0x1U, 0x020E0640U, 0x5U, 0x020E0358U
#define IOMUXC_ENET1_RX_EN_UART5_CTS_B                       0x020E00CCU, 0x1U, 0x00000000U, 0x0U, 0x020E0358U
#define IOMUXC_ENET1_RX_EN_CSI_DATA18                        0x020E00CCU, 0x3U, 0x020E050CU, 0x0U, 0x020E0358U
#define IOMUXC_ENET1_RX_EN_FLEXCAN2_TX                       0x020E00CCU, 0x4U, 0x00000000U, 0x0U, 0x020E0358U
#define IOMUXC_ENET1_RX_EN_GPIO2_IO02                        0x020E00CCU, 0x5U, 0x00000000U, 0x0U, 0x020E0358U
#define IOMUXC_ENET1_RX_EN_KPP_ROW01                         0x020E00CCU, 0x6U, 0x020E05D4U, 0x0U, 0x020E0358U
#define IOMUXC_ENET1_RX_EN_USDHC1_VSELECT                    0x020E00CCU, 0x8U, 0x00000000U, 0x0U, 0x020E0358U
#define IOMUXC_ENET1_RX_EN_EPDC_SDCE06                       0x020E00CCU, 0x9U, 0x00000000U, 0x0U, 0x020E0358U
#define IOMUXC_ENET1_TX_DATA0_ENET1_TDATA00                  0x020E00D0U, 0x0U, 0x00000000U, 0x0U, 0x020E035CU
#define IOMUXC_ENET1_TX_DATA0_UART5_CTS_B                    0x020E00D0U, 0x1U, 0x00000000U, 0x0U, 0x020E035CU
#define IOMUXC_ENET1_TX_DATA0_UART5_RTS_B                    0x020E00D0U, 0x1U, 0x020E0640U, 0x6U, 0x020E035CU
#define IOMUXC_ENET1_TX_DATA0_CSI_DATA19                     0x020E00D0U, 0x3U, 0x020E0510U, 0x0U, 0x020E035CU
#define IOMUXC_ENET1_TX_DATA0_FLEXCAN2_RX                    0x020E00D0U, 0x4U, 0x020E0588U, 0x1U, 0x020E035CU
#define IOMUXC_ENET1_TX_DATA0_GPIO2_IO03                     0x020E00D0U, 0x5U, 0x00000000U, 0x0U, 0x020E035CU
#define IOMUXC_ENET1_TX_DATA0_KPP_COL01                      0x020E00D0U, 0x6U, 0x020E05C8U, 0x0U, 0x020E035CU
#define IOMUXC_ENET1_TX_DATA0_USDHC2_VSELECT                 0x020E00D0U, 0x8U, 0x00000000U, 0x0U, 0x020E035CU
#define IOMUXC_ENET1_TX_DATA0_EPDC_SDCE07                    0x020E00D0U, 0x9U, 0x00000000U, 0x0U, 0x020E035CU
#define IOMUXC_ENET1_TX_DATA1_ENET1_TDATA01                  0x020E00D4U, 0x0U, 0x00000000U, 0x0U, 0x020E0360U
#define IOMUXC_ENET1_TX_DATA1_UART6_CTS_B                    0x020E00D4U, 0x1U, 0x00000000U, 0x0U, 0x020E0360U
#define IOMUXC_ENET1_TX_DATA1_UART6_RTS_B                    0x020E00D4U, 0x1U, 0x020E0648U, 0x2U, 0x020E0360U
#define IOMUXC_ENET1_TX_DATA1_PWM5_OUT                       0x020E00D4U, 0x2U, 0x00000000U, 0x0U, 0x020E0360U
#define IOMUXC_ENET1_TX_DATA1_CSI_DATA20                     0x020E00D4U, 0x3U, 0x020E0514U, 0x0U, 0x020E0360U
#define IOMUXC_ENET1_TX_DATA1_ENET2_MDIO                     0x020E00D4U, 0x4U, 0x020E0580U, 0x1U, 0x020E0360U
#define IOMUXC_ENET1_TX_DATA1_GPIO2_IO04                     0x020E00D4U, 0x5U, 0x00000000U, 0x0U, 0x020E0360U
#define IOMUXC_ENET1_TX_DATA1_KPP_ROW02                      0x020E00D4U, 0x6U, 0x020E05D8U, 0x0U, 0x020E0360U
#define IOMUXC_ENET1_TX_DATA1_WDOG1_WDOG_RST_B_DEB           0x020E00D4U, 0x8U, 0x00000000U, 0x0U, 0x020E0360U
#define IOMUXC_ENET1_TX_DATA1_EPDC_SDCE08                    0x020E00D4U, 0x9U, 0x00000000U, 0x0U, 0x020E0360U
#define IOMUXC_ENET1_TX_EN_ENET1_TX_EN                       0x020E00D8U, 0x0U, 0x00000000U, 0x0U, 0x020E0364U
#define IOMUXC_ENET1_TX_EN_UART6_RTS_B                       0x020E00D8U, 0x1U, 0x020E0648U, 0x3U, 0x020E0364U
#define IOMUXC_ENET1_TX_EN_UART6_CTS_B                       0x020E00D8U, 0x1U, 0x00000000U, 0x0U, 0x020E0364U
#define IOMUXC_ENET1_TX_EN_PWM6_OUT                          0x020E00D8U, 0x2U, 0x00000000U, 0x0U, 0x020E0364U
#define IOMUXC_ENET1_TX_EN_CSI_DATA21                        0x020E00D8U, 0x3U, 0x020E0518U, 0x0U, 0x020E0364U
#define IOMUXC_ENET1_TX_EN_ENET2_MDC                         0x020E00D8U, 0x4U, 0x00000000U, 0x0U, 0x020E0364U
#define IOMUXC_ENET1_TX_EN_GPIO2_IO05                        0x020E00D8U, 0x5U, 0x00000000U, 0x0U, 0x020E0364U
#define IOMUXC_ENET1_TX_EN_KPP_COL02                         0x020E00D8U, 0x6U, 0x020E05CCU, 0x0U, 0x020E0364U
#define IOMUXC_ENET1_TX_EN_WDOG2_WDOG_RST_B_DEB              0x020E00D8U, 0x8U, 0x00000000U, 0x0U, 0x020E0364U
#define IOMUXC_ENET1_TX_EN_EPDC_SDCE09                       0x020E00D8U, 0x9U, 0x00000000U, 0x0U, 0x020E0364U
#define IOMUXC_ENET1_TX_CLK_ENET1_TX_CLK                     0x020E00DCU, 0x0U, 0x00000000U, 0x0U, 0x020E0368U
#define IOMUXC_ENET1_TX_CLK_UART7_CTS_B                      0x020E00DCU, 0x1U, 0x00000000U, 0x0U, 0x020E0368U
#define IOMUXC_ENET1_TX_CLK_UART7_RTS_B                      0x020E00DCU, 0x1U, 0x020E0650U, 0x0U, 0x020E0368U
#define IOMUXC_ENET1_TX_CLK_PWM7_OUT                         0x020E00DCU, 0x2U, 0x00000000U, 0x0U, 0x020E0368U
#define IOMUXC_ENET1_TX_CLK_CSI_DATA22                       0x020E00DCU, 0x3U, 0x020E051CU, 0x0U, 0x020E0368U
#define IOMUXC_ENET1_TX_CLK_ENET1_REF_CLK1                   0x020E00DCU, 0x4U, 0x020E0574U, 0x2U, 0x020E0368U
#define IOMUXC_ENET1_TX_CLK_GPIO2_IO06                       0x020E00DCU, 0x5U, 0x00000000U, 0x0U, 0x020E0368U
#define IOMUXC_ENET1_TX_CLK_KPP_ROW03                        0x020E00DCU, 0x6U, 0x00000000U, 0x0U, 0x020E0368U
#define IOMUXC_ENET1_TX_CLK_GPT1_CLK                         0x020E00DCU, 0x8U, 0x020E0594U, 0x1U, 0x020E0368U
#define IOMUXC_ENET1_TX_CLK_EPDC_SDOED                       0x020E00DCU, 0x9U, 0x00000000U, 0x0U, 0x020E0368U
#define IOMUXC_ENET1_RX_ER_ENET1_RX_ER                       0x020E00E0U, 0x0U, 0x00000000U, 0x0U, 0x020E036CU
#define IOMUXC_ENET1_RX_ER_UART7_RTS_B                       0x020E00E0U, 0x1U, 0x020E0650U, 0x1U, 0x020E036CU
#define IOMUXC_ENET1_RX_ER_UART7_CTS_B                       0x020E00E0U, 0x1U, 0x00000000U, 0x0U, 0x020E036CU
#define IOMUXC_ENET1_RX_ER_PWM8_OUT                          0x020E00E0U, 0x2U, 0x00000000U, 0x0U, 0x020E036CU
#define IOMUXC_ENET1_RX_ER_CSI_DATA23                        0x020E00E0U, 0x3U, 0x020E0520U, 0x0U, 0x020E036CU
#define IOMUXC_ENET1_RX_ER_EIM_CRE                           0x020E00E0U, 0x4U, 0x00000000U, 0x0U, 0x020E036CU
#define IOMUXC_ENET1_RX_ER_GPIO2_IO07                        0x020E00E0U, 0x5U, 0x00000000U, 0x0U, 0x020E036CU
#define IOMUXC_ENET1_RX_ER_KPP_COL03                         0x020E00E0U, 0x6U, 0x00000000U, 0x0U, 0x020E036CU
#define IOMUXC_ENET1_RX_ER_GPT1_CAPTURE2                     0x020E00E0U, 0x8U, 0x020E0590U, 0x1U, 0x020E036CU
#define IOMUXC_ENET1_RX_ER_EPDC_SDOEZ                        0x020E00E0U, 0x9U, 0x00000000U, 0x0U, 0x020E036CU
#define IOMUXC_ENET2_RX_DATA0_ENET2_RDATA00                  0x020E00E4U, 0x0U, 0x00000000U, 0x0U, 0x020E0370U
#define IOMUXC_ENET2_RX_DATA0_UART6_TX                       0x020E00E4U, 0x1U, 0x00000000U, 0x0U, 0x020E0370U
#define IOMUXC_ENET2_RX_DATA0_UART6_RX                       0x020E00E4U, 0x1U, 0x020E064CU, 0x1U, 0x020E0370U
#define IOMUXC_ENET2_RX_DATA0_I2C3_SCL                       0x020E00E4U, 0x3U, 0x020E05B4U, 0x1U, 0x020E0370U
#define IOMUXC_ENET2_RX_DATA0_ENET1_MDIO                     0x020E00E4U, 0x4U, 0x020E0578U, 0x1U, 0x020E0370U
#define IOMUXC_ENET2_RX_DATA0_GPIO2_IO08                     0x020E00E4U, 0x5U, 0x00000000U, 0x0U, 0x020E0370U
#define IOMUXC_ENET2_RX_DATA0_KPP_ROW04                      0x020E00E4U, 0x6U, 0x00000000U, 0x0U, 0x020E0370U
#define IOMUXC_ENET2_RX_DATA0_USB_OTG1_PWR                   0x020E00E4U, 0x8U, 0x00000000U, 0x0U, 0x020E0370U
#define IOMUXC_ENET2_RX_DATA0_EPDC_SDDO08                    0x020E00E4U, 0x9U, 0x00000000U, 0x0U, 0x020E0370U
#define IOMUXC_ENET2_RX_DATA1_ENET2_RDATA01                  0x020E00E8U, 0x0U, 0x00000000U, 0x0U, 0x020E0374U
#define IOMUXC_ENET2_RX_DATA1_UART6_RX                       0x020E00E8U, 0x1U, 0x020E064CU, 0x2U, 0x020E0374U
#define IOMUXC_ENET2_RX_DATA1_UART6_TX                       0x020E00E8U, 0x1U, 0x00000000U, 0x0U, 0x020E0374U
#define IOMUXC_ENET2_RX_DATA1_I2C3_SDA                       0x020E00E8U, 0x3U, 0x020E05B8U, 0x1U, 0x020E0374U
#define IOMUXC_ENET2_RX_DATA1_ENET1_MDC                      0x020E00E8U, 0x4U, 0x00000000U, 0x0U, 0x020E0374U
#define IOMUXC_ENET2_RX_DATA1_GPIO2_IO09                     0x020E00E8U, 0x5U, 0x00000000U, 0x0U, 0x020E0374U
#define IOMUXC_ENET2_RX_DATA1_KPP_COL04                      0x020E00E8U, 0x6U, 0x00000000U, 0x0U, 0x020E0374U
#define IOMUXC_ENET2_RX_DATA1_USB_OTG1_OC                    0x020E00E8U, 0x8U, 0x020E0664U, 0x1U, 0x020E0374U
#define IOMUXC_ENET2_RX_DATA1_EPDC_SDDO09                    0x020E00E8U, 0x9U, 0x00000000U, 0x0U, 0x020E0374U
#define IOMUXC_ENET2_RX_EN_ENET2_RX_EN                       0x020E00ECU, 0x0U, 0x00000000U, 0x0U, 0x020E0378U
#define IOMUXC_ENET2_RX_EN_UART7_TX                          0x020E00ECU, 0x1U, 0x00000000U, 0x0U, 0x020E0378U
#define IOMUXC_ENET2_RX_EN_UART7_RX                          0x020E00ECU, 0x1U, 0x020E0654U, 0x0U, 0x020E0378U
#define IOMUXC_ENET2_RX_EN_I2C4_SCL                          0x020E00ECU, 0x3U, 0x020E05BCU, 0x1U, 0x020E0378U
#define IOMUXC_ENET2_RX_EN_EIM_ADDR26                        0x020E00ECU, 0x4U, 0x00000000U, 0x0U, 0x020E0378U
#define IOMUXC_ENET2_RX_EN_GPIO2_IO10                        0x020E00ECU, 0x5U, 0x00000000U, 0x0U, 0x020E0378U
#define IOMUXC_ENET2_RX_EN_KPP_ROW05                         0x020E00ECU, 0x6U, 0x00000000U, 0x0U, 0x020E0378U
#define IOMUXC_ENET2_RX_EN_ENET1_REF_CLK_25M                 0x020E00ECU, 0x8U, 0x00000000U, 0x0U, 0x020E0378U
#define IOMUXC_ENET2_RX_EN_EPDC_SDDO10                       0x020E00ECU, 0x9U, 0x00000000U, 0x0U, 0x020E0378U
#define IOMUXC_ENET2_TX_DATA0_ENET2_TDATA00                  0x020E00F0U, 0x0U, 0x00000000U, 0x0U, 0x020E037CU
#define IOMUXC_ENET2_TX_DATA0_UART7_RX                       0x020E00F0U, 0x1U, 0x020E0654U, 0x1U, 0x020E037CU
#define IOMUXC_ENET2_TX_DATA0_UART7_TX                       0x020E00F0U, 0x1U, 0x00000000U, 0x0U, 0x020E037CU
#define IOMUXC_ENET2_TX_DATA0_I2C4_SDA                       0x020E00F0U, 0x3U, 0x020E05C0U, 0x1U, 0x020E037CU
#define IOMUXC_ENET2_TX_DATA0_EIM_EB_B02                     0x020E00F0U, 0x4U, 0x00000000U, 0x0U, 0x020E037CU
#define IOMUXC_ENET2_TX_DATA0_GPIO2_IO11                     0x020E00F0U, 0x5U, 0x00000000U, 0x0U, 0x020E037CU
#define IOMUXC_ENET2_TX_DATA0_KPP_COL05                      0x020E00F0U, 0x6U, 0x00000000U, 0x0U, 0x020E037CU
#define IOMUXC_ENET2_TX_DATA0_EPDC_SDDO11                    0x020E00F0U, 0x9U, 0x00000000U, 0x0U, 0x020E037CU
#define IOMUXC_ENET2_TX_DATA1_ENET2_TDATA01                  0x020E00F4U, 0x0U, 0x00000000U, 0x0U, 0x020E0380U
#define IOMUXC_ENET2_TX_DATA1_UART8_TX                       0x020E00F4U, 0x1U, 0x00000000U, 0x0U, 0x020E0380U
#define IOMUXC_ENET2_TX_DATA1_UART8_RX                       0x020E00F4U, 0x1U, 0x020E065CU, 0x0U, 0x020E0380U
#define IOMUXC_ENET2_TX_DATA1_ECSPI4_SCLK                    0x020E00F4U, 0x3U, 0x020E0564U, 0x0U, 0x020E0380U
#define IOMUXC_ENET2_TX_DATA1_EIM_EB_B03                     0x020E00F4U, 0x4U, 0x00000000U, 0x0U, 0x020E0380U
#define IOMUXC_ENET2_TX_DATA1_GPIO2_IO12                     0x020E00F4U, 0x5U, 0x00000000U, 0x0U, 0x020E0380U
#define IOMUXC_ENET2_TX_DATA1_KPP_ROW06                      0x020E00F4U, 0x6U, 0x00000000U, 0x0U, 0x020E0380U
#define IOMUXC_ENET2_TX_DATA1_USB_OTG2_PWR                   0x020E00F4U, 0x8U, 0x00000000U, 0x0U, 0x020E0380U
#define IOMUXC_ENET2_TX_DATA1_EPDC_SDDO12                    0x020E00F4U, 0x9U, 0x00000000U, 0x0U, 0x020E0380U
#define IOMUXC_ENET2_TX_EN_ENET2_TX_EN                       0x020E00F8U, 0x0U, 0x00000000U, 0x0U, 0x020E0384U
#define IOMUXC_ENET2_TX_EN_UART8_RX                          0x020E00F8U, 0x1U, 0x020E065CU, 0x1U, 0x020E0384U
#define IOMUXC_ENET2_TX_EN_UART8_TX                          0x020E00F8U, 0x1U, 0x00000000U, 0x0U, 0x020E0384U
#define IOMUXC_ENET2_TX_EN_ECSPI4_MOSI                       0x020E00F8U, 0x3U, 0x020E056CU, 0x0U, 0x020E0384U
#define IOMUXC_ENET2_TX_EN_EIM_ACLK_FREERUN                  0x020E00F8U, 0x4U, 0x00000000U, 0x0U, 0x020E0384U
#define IOMUXC_ENET2_TX_EN_GPIO2_IO13                        0x020E00F8U, 0x5U, 0x00000000U, 0x0U, 0x020E0384U
#define IOMUXC_ENET2_TX_EN_KPP_COL06                         0x020E00F8U, 0x6U, 0x00000000U, 0x0U, 0x020E0384U
#define IOMUXC_ENET2_TX_EN_USB_OTG2_OC                       0x020E00F8U, 0x8U, 0x020E0660U, 0x1U, 0x020E0384U
#define IOMUXC_ENET2_TX_EN_EPDC_SDDO13                       0x020E00F8U, 0x9U, 0x00000000U, 0x0U, 0x020E0384U
#define IOMUXC_ENET2_TX_CLK_ENET2_TX_CLK                     0x020E00FCU, 0x0U, 0x00000000U, 0x0U, 0x020E0388U
#define IOMUXC_ENET2_TX_CLK_UART8_CTS_B                      0x020E00FCU, 0x1U, 0x00000000U, 0x0U, 0x020E0388U
#define IOMUXC_ENET2_TX_CLK_UART8_RTS_B                      0x020E00FCU, 0x1U, 0x020E0658U, 0x0U, 0x020E0388U
#define IOMUXC_ENET2_TX_CLK_ECSPI4_MISO                      0x020E00FCU, 0x3U, 0x020E0568U, 0x0U, 0x020E0388U
#define IOMUXC_ENET2_TX_CLK_ENET2_REF_CLK2                   0x020E00FCU, 0x4U, 0x020E057CU, 0x2U, 0x020E0388U
#define IOMUXC_ENET2_TX_CLK_GPIO2_IO14                       0x020E00FCU, 0x5U, 0x00000000U, 0x0U, 0x020E0388U
#define IOMUXC_ENET2_TX_CLK_KPP_ROW07                        0x020E00FCU, 0x6U, 0x00000000U, 0x0U, 0x020E0388U
#define IOMUXC_ENET2_TX_CLK_ANATOP_OTG2_ID                   0x020E00FCU, 0x8U, 0x020E04BCU, 0x1U, 0x020E0388U
#define IOMUXC_ENET2_TX_CLK_EPDC_SDDO14                      0x020E00FCU, 0x9U, 0x00000000U, 0x0U, 0x020E0388U
#define IOMUXC_ENET2_RX_ER_ENET2_RX_ER                       0x020E0100U, 0x0U, 0x00000000U, 0x0U, 0x020E038CU
#define IOMUXC_ENET2_RX_ER_UART8_RTS_B                       0x020E0100U, 0x1U, 0x020E0658U, 0x1U, 0x020E038CU
#define IOMUXC_ENET2_RX_ER_UART8_CTS_B                       0x020E0100U, 0x1U, 0x00000000U, 0x0U, 0x020E038CU
#define IOMUXC_ENET2_RX_ER_ECSPI4_SS0                        0x020E0100U, 0x3U, 0x020E0570U, 0x0U, 0x020E038CU
#define IOMUXC_ENET2_RX_ER_EIM_ADDR25                        0x020E0100U, 0x4U, 0x00000000U, 0x0U, 0x020E038CU
#define IOMUXC_ENET2_RX_ER_GPIO2_IO15                        0x020E0100U, 0x5U, 0x00000000U, 0x0U, 0x020E038CU
#define IOMUXC_ENET2_RX_ER_KPP_COL07                         0x020E0100U, 0x6U, 0x00000000U, 0x0U, 0x020E038CU
#define IOMUXC_ENET2_RX_ER_WDOG1_WDOG_ANY                    0x020E0100U, 0x8U, 0x00000000U, 0x0U, 0x020E038CU
#define IOMUXC_ENET2_RX_ER_EPDC_SDDO15                       0x020E0100U, 0x9U, 0x00000000U, 0x0U, 0x020E038CU
#define IOMUXC_LCD_CLK_LCDIF_CLK                             0x020E0104U, 0x0U, 0x00000000U, 0x0U, 0x020E0390U
#define IOMUXC_LCD_CLK_LCDIF_WR_RWN                          0x020E0104U, 0x1U, 0x00000000U, 0x0U, 0x020E0390U
#define IOMUXC_LCD_CLK_UART4_TX                              0x020E0104U, 0x2U, 0x00000000U, 0x0U, 0x020E0390U
#define IOMUXC_LCD_CLK_UART4_RX                              0x020E0104U, 0x2U, 0x020E063CU, 0x2U, 0x020E0390U
#define IOMUXC_LCD_CLK_SAI3_MCLK                             0x020E0104U, 0x3U, 0x020E0600U, 0x0U, 0x020E0390U
#define IOMUXC_LCD_CLK_EIM_CS2_B                             0x020E0104U, 0x4U, 0x00000000U, 0x0U, 0x020E0390U
#define IOMUXC_LCD_CLK_GPIO3_IO00                            0x020E0104U, 0x5U, 0x00000000U, 0x0U, 0x020E0390U
#define IOMUXC_LCD_CLK_WDOG1_WDOG_RST_B_DEB                  0x020E0104U, 0x8U, 0x00000000U, 0x0U, 0x020E0390U
#define IOMUXC_LCD_CLK_EPDC_SDCLK                            0x020E0104U, 0x9U, 0x00000000U, 0x0U, 0x020E0390U
#define IOMUXC_LCD_ENABLE_LCDIF_ENABLE                       0x020E0108U, 0x0U, 0x00000000U, 0x0U, 0x020E0394U
#define IOMUXC_LCD_ENABLE_LCDIF_RD_E                         0x020E0108U, 0x1U, 0x00000000U, 0x0U, 0x020E0394U
#define IOMUXC_LCD_ENABLE_UART4_RX                           0x020E0108U, 0x2U, 0x020E063CU, 0x3U, 0x020E0394U
#define IOMUXC_LCD_ENABLE_UART4_TX                           0x020E0108U, 0x2U, 0x00000000U, 0x0U, 0x020E0394U
#define IOMUXC_LCD_ENABLE_SAI3_TX_SYNC                       0x020E0108U, 0x3U, 0x020E060CU, 0x0U, 0x020E0394U
#define IOMUXC_LCD_ENABLE_EIM_CS3_B                          0x020E0108U, 0x4U, 0x00000000U, 0x0U, 0x020E0394U
#define IOMUXC_LCD_ENABLE_GPIO3_IO01                         0x020E0108U, 0x5U, 0x00000000U, 0x0U, 0x020E0394U
#define IOMUXC_LCD_ENABLE_ECSPI2_RDY                         0x020E0108U, 0x8U, 0x00000000U, 0x0U, 0x020E0394U
#define IOMUXC_LCD_ENABLE_EPDC_SDLE                          0x020E0108U, 0x9U, 0x00000000U, 0x0U, 0x020E0394U
#define IOMUXC_LCD_HSYNC_LCDIF_HSYNC                         0x020E010CU, 0x0U, 0x020E05DCU, 0x0U, 0x020E0398U
#define IOMUXC_LCD_HSYNC_LCDIF_RS                            0x020E010CU, 0x1U, 0x00000000U, 0x0U, 0x020E0398U
#define IOMUXC_LCD_HSYNC_UART4_CTS_B                         0x020E010CU, 0x2U, 0x00000000U, 0x0U, 0x020E0398U
#define IOMUXC_LCD_HSYNC_UART4_RTS_B                         0x020E010CU, 0x2U, 0x020E0638U, 0x2U, 0x020E0398U
#define IOMUXC_LCD_HSYNC_SAI3_TX_BCLK                        0x020E010CU, 0x3U, 0x020E0608U, 0x0U, 0x020E0398U
#define IOMUXC_LCD_HSYNC_WDOG3_WDOG_RST_B_DEB                0x020E010CU, 0x4U, 0x00000000U, 0x0U, 0x020E0398U
#define IOMUXC_LCD_HSYNC_GPIO3_IO02                          0x020E010CU, 0x5U, 0x00000000U, 0x0U, 0x020E0398U
#define IOMUXC_LCD_HSYNC_ECSPI2_SS1                          0x020E010CU, 0x8U, 0x00000000U, 0x0U, 0x020E0398U
#define IOMUXC_LCD_HSYNC_EPDC_SDOE                           0x020E010CU, 0x9U, 0x00000000U, 0x0U, 0x020E0398U
#define IOMUXC_LCD_VSYNC_LCDIF_VSYNC                         0x020E0110U, 0x0U, 0x00000000U, 0x0U, 0x020E039CU
#define IOMUXC_LCD_VSYNC_LCDIF_BUSY                          0x020E0110U, 0x1U, 0x020E05DCU, 0x1U, 0x020E039CU
#define IOMUXC_LCD_VSYNC_UART4_RTS_B                         0x020E0110U, 0x2U, 0x020E0638U, 0x3U, 0x020E039CU
#define IOMUXC_LCD_VSYNC_UART4_CTS_B                         0x020E0110U, 0x2U, 0x00000000U, 0x0U, 0x020E039CU
#define IOMUXC_LCD_VSYNC_SAI3_RX_DATA                        0x020E0110U, 0x3U, 0x020E0604U, 0x0U, 0x020E039CU
#define IOMUXC_LCD_VSYNC_WDOG2_WDOG_B                        0x020E0110U, 0x4U, 0x00000000U, 0x0U, 0x020E039CU
#define IOMUXC_LCD_VSYNC_GPIO3_IO03                          0x020E0110U, 0x5U, 0x00000000U, 0x0U, 0x020E039CU
#define IOMUXC_LCD_VSYNC_ECSPI2_SS2                          0x020E0110U, 0x8U, 0x00000000U, 0x0U, 0x020E039CU
#define IOMUXC_LCD_VSYNC_EPDC_SDCE00                         0x020E0110U, 0x9U, 0x00000000U, 0x0U, 0x020E039CU
#define IOMUXC_LCD_RESET_LCDIF_RESET                         0x020E0114U, 0x0U, 0x00000000U, 0x0U, 0x020E03A0U
#define IOMUXC_LCD_RESET_LCDIF_CS                            0x020E0114U, 0x1U, 0x00000000U, 0x0U, 0x020E03A0U
#define IOMUXC_LCD_RESET_CA7_MX6ULL_EVENTI                   0x020E0114U, 0x2U, 0x00000000U, 0x0U, 0x020E03A0U
#define IOMUXC_LCD_RESET_SAI3_TX_DATA                        0x020E0114U, 0x3U, 0x00000000U, 0x0U, 0x020E03A0U
#define IOMUXC_LCD_RESET_WDOG1_WDOG_ANY                      0x020E0114U, 0x4U, 0x00000000U, 0x0U, 0x020E03A0U
#define IOMUXC_LCD_RESET_GPIO3_IO04                          0x020E0114U, 0x5U, 0x00000000U, 0x0U, 0x020E03A0U
#define IOMUXC_LCD_RESET_ECSPI2_SS3                          0x020E0114U, 0x8U, 0x00000000U, 0x0U, 0x020E03A0U
#define IOMUXC_LCD_RESET_EPDC_GDOE                           0x020E0114U, 0x9U, 0x00000000U, 0x0U, 0x020E03A0U
#define IOMUXC_LCD_DATA00_LCDIF_DATA00                       0x020E0118U, 0x0U, 0x00000000U, 0x0U, 0x020E03A4U
#define IOMUXC_LCD_DATA00_PWM1_OUT                           0x020E0118U, 0x1U, 0x00000000U, 0x0U, 0x020E03A4U
#define IOMUXC_LCD_DATA00_ENET1_1588_EVENT2_IN               0x020E0118U, 0x3U, 0x00000000U, 0x0U, 0x020E03A4U
#define IOMUXC_LCD_DATA00_I2C3_SDA                           0x020E0118U, 0x4U, 0x020E05B8U, 0x2U, 0x020E03A4U
#define IOMUXC_LCD_DATA00_GPIO3_IO05                         0x020E0118U, 0x5U, 0x00000000U, 0x0U, 0x020E03A4U
#define IOMUXC_LCD_DATA00_SRC_BT_CFG00                       0x020E0118U, 0x6U, 0x00000000U, 0x0U, 0x020E03A4U
#define IOMUXC_LCD_DATA00_SAI1_MCLK                          0x020E0118U, 0x8U, 0x020E05E0U, 0x1U, 0x020E03A4U
#define IOMUXC_LCD_DATA00_EPDC_SDDO00                        0x020E0118U, 0x9U, 0x00000000U, 0x0U, 0x020E03A4U
#define IOMUXC_LCD_DATA01_LCDIF_DATA01                       0x020E011CU, 0x0U, 0x00000000U, 0x0U, 0x020E03A8U
#define IOMUXC_LCD_DATA01_PWM2_OUT                           0x020E011CU, 0x1U, 0x00000000U, 0x0U, 0x020E03A8U
#define IOMUXC_LCD_DATA01_ENET1_1588_EVENT2_OUT              0x020E011CU, 0x3U, 0x00000000U, 0x0U, 0x020E03A8U
#define IOMUXC_LCD_DATA01_I2C3_SCL                           0x020E011CU, 0x4U, 0x020E05B4U, 0x2U, 0x020E03A8U
#define IOMUXC_LCD_DATA01_GPIO3_IO06                         0x020E011CU, 0x5U, 0x00000000U, 0x0U, 0x020E03A8U
#define IOMUXC_LCD_DATA01_SRC_BT_CFG01                       0x020E011CU, 0x6U, 0x00000000U, 0x0U, 0x020E03A8U
#define IOMUXC_LCD_DATA01_SAI1_TX_SYNC                       0x020E011CU, 0x8U, 0x020E05ECU, 0x0U, 0x020E03A8U
#define IOMUXC_LCD_DATA01_EPDC_SDDO01                        0x020E011CU, 0x9U, 0x00000000U, 0x0U, 0x020E03A8U
#define IOMUXC_LCD_DATA02_LCDIF_DATA02                       0x020E0120U, 0x0U, 0x00000000U, 0x0U, 0x020E03ACU
#define IOMUXC_LCD_DATA02_PWM3_OUT                           0x020E0120U, 0x1U, 0x00000000U, 0x0U, 0x020E03ACU
#define IOMUXC_LCD_DATA02_ENET1_1588_EVENT3_IN               0x020E0120U, 0x3U, 0x00000000U, 0x0U, 0x020E03ACU
#define IOMUXC_LCD_DATA02_I2C4_SDA                           0x020E0120U, 0x4U, 0x020E05C0U, 0x2U, 0x020E03ACU
#define IOMUXC_LCD_DATA02_GPIO3_IO07                         0x020E0120U, 0x5U, 0x00000000U, 0x0U, 0x020E03ACU
#define IOMUXC_LCD_DATA02_SRC_BT_CFG02                       0x020E0120U, 0x6U, 0x00000000U, 0x0U, 0x020E03ACU
#define IOMUXC_LCD_DATA02_SAI1_TX_BCLK                       0x020E0120U, 0x8U, 0x020E05E8U, 0x0U, 0x020E03ACU
#define IOMUXC_LCD_DATA02_EPDC_SDDO02                        0x020E0120U, 0x9U, 0x00000000U, 0x0U, 0x020E03ACU
#define IOMUXC_LCD_DATA03_LCDIF_DATA03                       0x020E0124U, 0x0U, 0x00000000U, 0x0U, 0x020E03B0U
#define IOMUXC_LCD_DATA03_PWM4_OUT                           0x020E0124U, 0x1U, 0x00000000U, 0x0U, 0x020E03B0U
#define IOMUXC_LCD_DATA03_ENET1_1588_EVENT3_OUT              0x020E0124U, 0x3U, 0x00000000U, 0x0U, 0x020E03B0U
#define IOMUXC_LCD_DATA03_I2C4_SCL                           0x020E0124U, 0x4U, 0x020E05BCU, 0x2U, 0x020E03B0U
#define IOMUXC_LCD_DATA03_GPIO3_IO08                         0x020E0124U, 0x5U, 0x00000000U, 0x0U, 0x020E03B0U
#define IOMUXC_LCD_DATA03_SRC_BT_CFG03                       0x020E0124U, 0x6U, 0x00000000U, 0x0U, 0x020E03B0U
#define IOMUXC_LCD_DATA03_SAI1_RX_DATA                       0x020E0124U, 0x8U, 0x020E05E4U, 0x0U, 0x020E03B0U
#define IOMUXC_LCD_DATA03_EPDC_SDDO03                        0x020E0124U, 0x9U, 0x00000000U, 0x0U, 0x020E03B0U
#define IOMUXC_LCD_DATA04_LCDIF_DATA04                       0x020E0128U, 0x0U, 0x00000000U, 0x0U, 0x020E03B4U
#define IOMUXC_LCD_DATA04_UART8_CTS_B                        0x020E0128U, 0x1U, 0x00000000U, 0x0U, 0x020E03B4U
#define IOMUXC_LCD_DATA04_UART8_RTS_B                        0x020E0128U, 0x1U, 0x020E0658U, 0x2U, 0x020E03B4U
#define IOMUXC_LCD_DATA04_ENET2_1588_EVENT2_IN               0x020E0128U, 0x3U, 0x00000000U, 0x0U, 0x020E03B4U
#define IOMUXC_LCD_DATA04_SPDIF_SR_CLK                       0x020E0128U, 0x4U, 0x00000000U, 0x0U, 0x020E03B4U
#define IOMUXC_LCD_DATA04_GPIO3_IO09                         0x020E0128U, 0x5U, 0x00000000U, 0x0U, 0x020E03B4U
#define IOMUXC_LCD_DATA04_SRC_BT_CFG04                       0x020E0128U, 0x6U, 0x00000000U, 0x0U, 0x020E03B4U
#define IOMUXC_LCD_DATA04_SAI1_TX_DATA                       0x020E0128U, 0x8U, 0x00000000U, 0x0U, 0x020E03B4U
#define IOMUXC_LCD_DATA04_EPDC_SDDO04                        0x020E0128U, 0x9U, 0x00000000U, 0x0U, 0x020E03B4U
#define IOMUXC_LCD_DATA05_LCDIF_DATA05                       0x020E012CU, 0x0U, 0x00000000U, 0x0U, 0x020E03B8U
#define IOMUXC_LCD_DATA05_UART8_RTS_B                        0x020E012CU, 0x1U, 0x020E0658U, 0x3U, 0x020E03B8U
#define IOMUXC_LCD_DATA05_UART8_CTS_B                        0x020E012CU, 0x1U, 0x00000000U, 0x0U, 0x020E03B8U
#define IOMUXC_LCD_DATA05_ENET2_1588_EVENT2_OUT              0x020E012CU, 0x3U, 0x00000000U, 0x0U, 0x020E03B8U
#define IOMUXC_LCD_DATA05_SPDIF_OUT                          0x020E012CU, 0x4U, 0x00000000U, 0x0U, 0x020E03B8U
#define IOMUXC_LCD_DATA05_GPIO3_IO10                         0x020E012CU, 0x5U, 0x00000000U, 0x0U, 0x020E03B8U
#define IOMUXC_LCD_DATA05_SRC_BT_CFG05                       0x020E012CU, 0x6U, 0x00000000U, 0x0U, 0x020E03B8U
#define IOMUXC_LCD_DATA05_ECSPI1_SS1                         0x020E012CU, 0x8U, 0x00000000U, 0x0U, 0x020E03B8U
#define IOMUXC_LCD_DATA05_EPDC_SDDO05                        0x020E012CU, 0x9U, 0x00000000U, 0x0U, 0x020E03B8U
#define IOMUXC_LCD_DATA06_LCDIF_DATA06                       0x020E0130U, 0x0U, 0x00000000U, 0x0U, 0x020E03BCU
#define IOMUXC_LCD_DATA06_UART7_CTS_B                        0x020E0130U, 0x1U, 0x00000000U, 0x0U, 0x020E03BCU
#define IOMUXC_LCD_DATA06_UART7_RTS_B                        0x020E0130U, 0x1U, 0x020E0650U, 0x2U, 0x020E03BCU
#define IOMUXC_LCD_DATA06_ENET2_1588_EVENT3_IN               0x020E0130U, 0x3U, 0x00000000U, 0x0U, 0x020E03BCU
#define IOMUXC_LCD_DATA06_SPDIF_LOCK                         0x020E0130U, 0x4U, 0x00000000U, 0x0U, 0x020E03BCU
#define IOMUXC_LCD_DATA06_GPIO3_IO11                         0x020E0130U, 0x5U, 0x00000000U, 0x0U, 0x020E03BCU
#define IOMUXC_LCD_DATA06_SRC_BT_CFG06                       0x020E0130U, 0x6U, 0x00000000U, 0x0U, 0x020E03BCU
#define IOMUXC_LCD_DATA06_ECSPI1_SS2                         0x020E0130U, 0x8U, 0x00000000U, 0x0U, 0x020E03BCU
#define IOMUXC_LCD_DATA06_EPDC_SDDO06                        0x020E0130U, 0x9U, 0x00000000U, 0x0U, 0x020E03BCU
#define IOMUXC_LCD_DATA07_LCDIF_DATA07                       0x020E0134U, 0x0U, 0x00000000U, 0x0U, 0x020E03C0U
#define IOMUXC_LCD_DATA07_UART7_RTS_B                        0x020E0134U, 0x1U, 0x020E0650U, 0x3U, 0x020E03C0U
#define IOMUXC_LCD_DATA07_UART7_CTS_B                        0x020E0134U, 0x1U, 0x00000000U, 0x0U, 0x020E03C0U
#define IOMUXC_LCD_DATA07_ENET2_1588_EVENT3_OUT              0x020E0134U, 0x3U, 0x00000000U, 0x0U, 0x020E03C0U
#define IOMUXC_LCD_DATA07_SPDIF_EXT_CLK                      0x020E0134U, 0x4U, 0x020E061CU, 0x0U, 0x020E03C0U
#define IOMUXC_LCD_DATA07_GPIO3_IO12                         0x020E0134U, 0x5U, 0x00000000U, 0x0U, 0x020E03C0U
#define IOMUXC_LCD_DATA07_SRC_BT_CFG07                       0x020E0134U, 0x6U, 0x00000000U, 0x0U, 0x020E03C0U
#define IOMUXC_LCD_DATA07_ECSPI1_SS3                         0x020E0134U, 0x8U, 0x00000000U, 0x0U, 0x020E03C0U
#define IOMUXC_LCD_DATA07_EPDC_SDDO07                        0x020E0134U, 0x9U, 0x00000000U, 0x0U, 0x020E03C0U
#define IOMUXC_LCD_DATA08_LCDIF_DATA08                       0x020E0138U, 0x0U, 0x00000000U, 0x0U, 0x020E03C4U
#define IOMUXC_LCD_DATA08_SPDIF_IN                           0x020E0138U, 0x1U, 0x020E0618U, 0x2U, 0x020E03C4U
#define IOMUXC_LCD_DATA08_CSI_DATA16                         0x020E0138U, 0x3U, 0x020E0504U, 0x1U, 0x020E03C4U
#define IOMUXC_LCD_DATA08_EIM_DATA00                         0x020E0138U, 0x4U, 0x00000000U, 0x0U, 0x020E03C4U
#define IOMUXC_LCD_DATA08_GPIO3_IO13                         0x020E0138U, 0x5U, 0x00000000U, 0x0U, 0x020E03C4U
#define IOMUXC_LCD_DATA08_SRC_BT_CFG08                       0x020E0138U, 0x6U, 0x00000000U, 0x0U, 0x020E03C4U
#define IOMUXC_LCD_DATA08_FLEXCAN1_TX                        0x020E0138U, 0x8U, 0x00000000U, 0x0U, 0x020E03C4U
#define IOMUXC_LCD_DATA08_EPDC_PWRIRQ                        0x020E0138U, 0x9U, 0x00000000U, 0x0U, 0x020E03C4U
#define IOMUXC_LCD_DATA09_LCDIF_DATA09                       0x020E013CU, 0x0U, 0x00000000U, 0x0U, 0x020E03C8U
#define IOMUXC_LCD_DATA09_SAI3_MCLK                          0x020E013CU, 0x1U, 0x020E0600U, 0x1U, 0x020E03C8U
#define IOMUXC_LCD_DATA09_CSI_DATA17                         0x020E013CU, 0x3U, 0x020E0508U, 0x1U, 0x020E03C8U
#define IOMUXC_LCD_DATA09_EIM_DATA01                         0x020E013CU, 0x4U, 0x00000000U, 0x0U, 0x020E03C8U
#define IOMUXC_LCD_DATA09_GPIO3_IO14                         0x020E013CU, 0x5U, 0x00000000U, 0x0U, 0x020E03C8U
#define IOMUXC_LCD_DATA09_SRC_BT_CFG09                       0x020E013CU, 0x6U, 0x00000000U, 0x0U, 0x020E03C8U
#define IOMUXC_LCD_DATA09_FLEXCAN1_RX                        0x020E013CU, 0x8U, 0x020E0584U, 0x2U, 0x020E03C8U
#define IOMUXC_LCD_DATA09_EPDC_PWRWAKE                       0x020E013CU, 0x9U, 0x00000000U, 0x0U, 0x020E03C8U
#define IOMUXC_LCD_DATA10_LCDIF_DATA10                       0x020E0140U, 0x0U, 0x00000000U, 0x0U, 0x020E03CCU
#define IOMUXC_LCD_DATA10_SAI3_RX_SYNC                       0x020E0140U, 0x1U, 0x00000000U, 0x0U, 0x020E03CCU
#define IOMUXC_LCD_DATA10_CSI_DATA18                         0x020E0140U, 0x3U, 0x020E050CU, 0x1U, 0x020E03CCU
#define IOMUXC_LCD_DATA10_EIM_DATA02                         0x020E0140U, 0x4U, 0x00000000U, 0x0U, 0x020E03CCU
#define IOMUXC_LCD_DATA10_GPIO3_IO15                         0x020E0140U, 0x5U, 0x00000000U, 0x0U, 0x020E03CCU
#define IOMUXC_LCD_DATA10_SRC_BT_CFG10                       0x020E0140U, 0x6U, 0x00000000U, 0x0U, 0x020E03CCU
#define IOMUXC_LCD_DATA10_FLEXCAN2_TX                        0x020E0140U, 0x8U, 0x00000000U, 0x0U, 0x020E03CCU
#define IOMUXC_LCD_DATA10_EPDC_PWRCOM                        0x020E0140U, 0x9U, 0x00000000U, 0x0U, 0x020E03CCU
#define IOMUXC_LCD_DATA11_LCDIF_DATA11                       0x020E0144U, 0x0U, 0x00000000U, 0x0U, 0x020E03D0U
#define IOMUXC_LCD_DATA11_SAI3_RX_BCLK                       0x020E0144U, 0x1U, 0x00000000U, 0x0U, 0x020E03D0U
#define IOMUXC_LCD_DATA11_CSI_DATA19                         0x020E0144U, 0x3U, 0x020E0510U, 0x1U, 0x020E03D0U
#define IOMUXC_LCD_DATA11_EIM_DATA03                         0x020E0144U, 0x4U, 0x00000000U, 0x0U, 0x020E03D0U
#define IOMUXC_LCD_DATA11_GPIO3_IO16                         0x020E0144U, 0x5U, 0x00000000U, 0x0U, 0x020E03D0U
#define IOMUXC_LCD_DATA11_SRC_BT_CFG11                       0x020E0144U, 0x6U, 0x00000000U, 0x0U, 0x020E03D0U
#define IOMUXC_LCD_DATA11_FLEXCAN2_RX                        0x020E0144U, 0x8U, 0x020E0588U, 0x2U, 0x020E03D0U
#define IOMUXC_LCD_DATA11_EPDC_PWRSTAT                       0x020E0144U, 0x9U, 0x00000000U, 0x0U, 0x020E03D0U
#define IOMUXC_LCD_DATA12_LCDIF_DATA12                       0x020E0148U, 0x0U, 0x00000000U, 0x0U, 0x020E03D4U
#define IOMUXC_LCD_DATA12_SAI3_TX_SYNC                       0x020E0148U, 0x1U, 0x020E060CU, 0x1U, 0x020E03D4U
#define IOMUXC_LCD_DATA12_CSI_DATA20                         0x020E0148U, 0x3U, 0x020E0514U, 0x1U, 0x020E03D4U
#define IOMUXC_LCD_DATA12_EIM_DATA04                         0x020E0148U, 0x4U, 0x00000000U, 0x0U, 0x020E03D4U
#define IOMUXC_LCD_DATA12_GPIO3_IO17                         0x020E0148U, 0x5U, 0x00000000U, 0x0U, 0x020E03D4U
#define IOMUXC_LCD_DATA12_SRC_BT_CFG12                       0x020E0148U, 0x6U, 0x00000000U, 0x0U, 0x020E03D4U
#define IOMUXC_LCD_DATA12_ECSPI1_RDY                         0x020E0148U, 0x8U, 0x00000000U, 0x0U, 0x020E03D4U
#define IOMUXC_LCD_DATA12_EPDC_PWRCTRL00                     0x020E0148U, 0x9U, 0x00000000U, 0x0U, 0x020E03D4U
#define IOMUXC_LCD_DATA13_LCDIF_DATA13                       0x020E014CU, 0x0U, 0x00000000U, 0x0U, 0x020E03D8U
#define IOMUXC_LCD_DATA13_SAI3_TX_BCLK                       0x020E014CU, 0x1U, 0x020E0608U, 0x1U, 0x020E03D8U
#define IOMUXC_LCD_DATA13_CSI_DATA21                         0x020E014CU, 0x3U, 0x020E0518U, 0x1U, 0x020E03D8U
#define IOMUXC_LCD_DATA13_EIM_DATA05                         0x020E014CU, 0x4U, 0x00000000U, 0x0U, 0x020E03D8U
#define IOMUXC_LCD_DATA13_GPIO3_IO18                         0x020E014CU, 0x5U, 0x00000000U, 0x0U, 0x020E03D8U
#define IOMUXC_LCD_DATA13_SRC_BT_CFG13                       0x020E014CU, 0x6U, 0x00000000U, 0x0U, 0x020E03D8U
#define IOMUXC_LCD_DATA13_USDHC2_RESET_B                     0x020E014CU, 0x8U, 0x00000000U, 0x0U, 0x020E03D8U
#define IOMUXC_LCD_DATA13_EPDC_BDR00                         0x020E014CU, 0x9U, 0x00000000U, 0x0U, 0x020E03D8U
#define IOMUXC_LCD_DATA14_LCDIF_DATA14                       0x020E0150U, 0x0U, 0x00000000U, 0x0U, 0x020E03DCU
#define IOMUXC_LCD_DATA14_SAI3_RX_DATA                       0x020E0150U, 0x1U, 0x020E0604U, 0x1U, 0x020E03DCU
#define IOMUXC_LCD_DATA14_CSI_DATA22                         0x020E0150U, 0x3U, 0x020E051CU, 0x1U, 0x020E03DCU
#define IOMUXC_LCD_DATA14_EIM_DATA06                         0x020E0150U, 0x4U, 0x00000000U, 0x0U, 0x020E03DCU
#define IOMUXC_LCD_DATA14_GPIO3_IO19                         0x020E0150U, 0x5U, 0x00000000U, 0x0U, 0x020E03DCU
#define IOMUXC_LCD_DATA14_SRC_BT_CFG14                       0x020E0150U, 0x6U, 0x00000000U, 0x0U, 0x020E03DCU
#define IOMUXC_LCD_DATA14_USDHC2_DATA4                       0x020E0150U, 0x8U, 0x020E068CU, 0x0U, 0x020E03DCU
#define IOMUXC_LCD_DATA14_EPDC_SDSHR                         0x020E0150U, 0x9U, 0x00000000U, 0x0U, 0x020E03DCU
#define IOMUXC_LCD_DATA15_LCDIF_DATA15                       0x020E0154U, 0x0U, 0x00000000U, 0x0U, 0x020E03E0U
#define IOMUXC_LCD_DATA15_SAI3_TX_DATA                       0x020E0154U, 0x1U, 0x00000000U, 0x0U, 0x020E03E0U
#define IOMUXC_LCD_DATA15_CSI_DATA23                         0x020E0154U, 0x3U, 0x020E0520U, 0x1U, 0x020E03E0U
#define IOMUXC_LCD_DATA15_EIM_DATA07                         0x020E0154U, 0x4U, 0x00000000U, 0x0U, 0x020E03E0U
#define IOMUXC_LCD_DATA15_GPIO3_IO20                         0x020E0154U, 0x5U, 0x00000000U, 0x0U, 0x020E03E0U
#define IOMUXC_LCD_DATA15_SRC_BT_CFG15                       0x020E0154U, 0x6U, 0x00000000U, 0x0U, 0x020E03E0U
#define IOMUXC_LCD_DATA15_USDHC2_DATA5                       0x020E0154U, 0x8U, 0x020E0690U, 0x0U, 0x020E03E0U
#define IOMUXC_LCD_DATA15_EPDC_GDRL                          0x020E0154U, 0x9U, 0x00000000U, 0x0U, 0x020E03E0U
#define IOMUXC_LCD_DATA16_LCDIF_DATA16                       0x020E0158U, 0x0U, 0x00000000U, 0x0U, 0x020E03E4U
#define IOMUXC_LCD_DATA16_UART7_TX                           0x020E0158U, 0x1U, 0x00000000U, 0x0U, 0x020E03E4U
#define IOMUXC_LCD_DATA16_UART7_RX                           0x020E0158U, 0x1U, 0x020E0654U, 0x2U, 0x020E03E4U
#define IOMUXC_LCD_DATA16_CSI_DATA01                         0x020E0158U, 0x3U, 0x020E04D4U, 0x1U, 0x020E03E4U
#define IOMUXC_LCD_DATA16_EIM_DATA08                         0x020E0158U, 0x4U, 0x00000000U, 0x0U, 0x020E03E4U
#define IOMUXC_LCD_DATA16_GPIO3_IO21                         0x020E0158U, 0x5U, 0x00000000U, 0x0U, 0x020E03E4U
#define IOMUXC_LCD_DATA16_SRC_BT_CFG24                       0x020E0158U, 0x6U, 0x00000000U, 0x0U, 0x020E03E4U
#define IOMUXC_LCD_DATA16_USDHC2_DATA6                       0x020E0158U, 0x8U, 0x020E0694U, 0x0U, 0x020E03E4U
#define IOMUXC_LCD_DATA16_EPDC_GDCLK                         0x020E0158U, 0x9U, 0x00000000U, 0x0U, 0x020E03E4U
#define IOMUXC_LCD_DATA17_LCDIF_DATA17                       0x020E015CU, 0x0U, 0x00000000U, 0x0U, 0x020E03E8U
#define IOMUXC_LCD_DATA17_UART7_RX                           0x020E015CU, 0x1U, 0x020E0654U, 0x3U, 0x020E03E8U
#define IOMUXC_LCD_DATA17_UART7_TX                           0x020E015CU, 0x1U, 0x00000000U, 0x0U, 0x020E03E8U
#define IOMUXC_LCD_DATA17_CSI_DATA00                         0x020E015CU, 0x3U, 0x020E04D0U, 0x1U, 0x020E03E8U
#define IOMUXC_LCD_DATA17_EIM_DATA09                         0x020E015CU, 0x4U, 0x00000000U, 0x0U, 0x020E03E8U
#define IOMUXC_LCD_DATA17_GPIO3_IO22                         0x020E015CU, 0x5U, 0x00000000U, 0x0U, 0x020E03E8U
#define IOMUXC_LCD_DATA17_SRC_BT_CFG25                       0x020E015CU, 0x6U, 0x00000000U, 0x0U, 0x020E03E8U
#define IOMUXC_LCD_DATA17_USDHC2_DATA7                       0x020E015CU, 0x8U, 0x020E0698U, 0x0U, 0x020E03E8U
#define IOMUXC_LCD_DATA17_EPDC_GDSP                          0x020E015CU, 0x9U, 0x00000000U, 0x0U, 0x020E03E8U
#define IOMUXC_LCD_DATA18_LCDIF_DATA18                       0x020E0160U, 0x0U, 0x00000000U, 0x0U, 0x020E03ECU
#define IOMUXC_LCD_DATA18_PWM5_OUT                           0x020E0160U, 0x1U, 0x00000000U, 0x0U, 0x020E03ECU
#define IOMUXC_LCD_DATA18_CA7_MX6ULL_EVENTO                  0x020E0160U, 0x2U, 0x00000000U, 0x0U, 0x020E03ECU
#define IOMUXC_LCD_DATA18_CSI_DATA10                         0x020E0160U, 0x3U, 0x020E04ECU, 0x1U, 0x020E03ECU
#define IOMUXC_LCD_DATA18_EIM_DATA10                         0x020E0160U, 0x4U, 0x00000000U, 0x0U, 0x020E03ECU
#define IOMUXC_LCD_DATA18_GPIO3_IO23                         0x020E0160U, 0x5U, 0x00000000U, 0x0U, 0x020E03ECU
#define IOMUXC_LCD_DATA18_SRC_BT_CFG26                       0x020E0160U, 0x6U, 0x00000000U, 0x0U, 0x020E03ECU
#define IOMUXC_LCD_DATA18_USDHC2_CMD                         0x020E0160U, 0x8U, 0x020E0678U, 0x1U, 0x020E03ECU
#define IOMUXC_LCD_DATA18_EPDC_BDR01                         0x020E0160U, 0x9U, 0x00000000U, 0x0U, 0x020E03ECU
#define IOMUXC_LCD_DATA19_EIM_DATA11                         0x020E0164U, 0x4U, 0x00000000U, 0x0U, 0x020E03F0U
#define IOMUXC_LCD_DATA19_GPIO3_IO24                         0x020E0164U, 0x5U, 0x00000000U, 0x0U, 0x020E03F0U
#define IOMUXC_LCD_DATA19_SRC_BT_CFG27                       0x020E0164U, 0x6U, 0x00000000U, 0x0U, 0x020E03F0U
#define IOMUXC_LCD_DATA19_USDHC2_CLK                         0x020E0164U, 0x8U, 0x020E0670U, 0x1U, 0x020E03F0U
#define IOMUXC_LCD_DATA19_EPDC_VCOM00                        0x020E0164U, 0x9U, 0x00000000U, 0x0U, 0x020E03F0U
#define IOMUXC_LCD_DATA19_LCDIF_DATA19                       0x020E0164U, 0x0U, 0x00000000U, 0x0U, 0x020E03F0U
#define IOMUXC_LCD_DATA19_PWM6_OUT                           0x020E0164U, 0x1U, 0x00000000U, 0x0U, 0x020E03F0U
#define IOMUXC_LCD_DATA19_WDOG1_WDOG_ANY                     0x020E0164U, 0x2U, 0x00000000U, 0x0U, 0x020E03F0U
#define IOMUXC_LCD_DATA19_CSI_DATA11                         0x020E0164U, 0x3U, 0x020E04F0U, 0x1U, 0x020E03F0U
#define IOMUXC_LCD_DATA20_EIM_DATA12                         0x020E0168U, 0x4U, 0x00000000U, 0x0U, 0x020E03F4U
#define IOMUXC_LCD_DATA20_GPIO3_IO25                         0x020E0168U, 0x5U, 0x00000000U, 0x0U, 0x020E03F4U
#define IOMUXC_LCD_DATA20_SRC_BT_CFG28                       0x020E0168U, 0x6U, 0x00000000U, 0x0U, 0x020E03F4U
#define IOMUXC_LCD_DATA20_USDHC2_DATA0                       0x020E0168U, 0x8U, 0x020E067CU, 0x1U, 0x020E03F4U
#define IOMUXC_LCD_DATA20_EPDC_VCOM01                        0x020E0168U, 0x9U, 0x00000000U, 0x0U, 0x020E03F4U
#define IOMUXC_LCD_DATA20_LCDIF_DATA20                       0x020E0168U, 0x0U, 0x00000000U, 0x0U, 0x020E03F4U
#define IOMUXC_LCD_DATA20_UART8_TX                           0x020E0168U, 0x1U, 0x00000000U, 0x0U, 0x020E03F4U
#define IOMUXC_LCD_DATA20_UART8_RX                           0x020E0168U, 0x1U, 0x020E065CU, 0x2U, 0x020E03F4U
#define IOMUXC_LCD_DATA20_ECSPI1_SCLK                        0x020E0168U, 0x2U, 0x020E0534U, 0x0U, 0x020E03F4U
#define IOMUXC_LCD_DATA20_CSI_DATA12                         0x020E0168U, 0x3U, 0x020E04F4U, 0x1U, 0x020E03F4U
#define IOMUXC_LCD_DATA21_LCDIF_DATA21                       0x020E016CU, 0x0U, 0x00000000U, 0x0U, 0x020E03F8U
#define IOMUXC_LCD_DATA21_UART8_RX                           0x020E016CU, 0x1U, 0x020E065CU, 0x3U, 0x020E03F8U
#define IOMUXC_LCD_DATA21_UART8_TX                           0x020E016CU, 0x1U, 0x00000000U, 0x0U, 0x020E03F8U
#define IOMUXC_LCD_DATA21_ECSPI1_SS0                         0x020E016CU, 0x2U, 0x020E0540U, 0x0U, 0x020E03F8U
#define IOMUXC_LCD_DATA21_CSI_DATA13                         0x020E016CU, 0x3U, 0x020E04F8U, 0x1U, 0x020E03F8U
#define IOMUXC_LCD_DATA21_EIM_DATA13                         0x020E016CU, 0x4U, 0x00000000U, 0x0U, 0x020E03F8U
#define IOMUXC_LCD_DATA21_GPIO3_IO26                         0x020E016CU, 0x5U, 0x00000000U, 0x0U, 0x020E03F8U
#define IOMUXC_LCD_DATA21_SRC_BT_CFG29                       0x020E016CU, 0x6U, 0x00000000U, 0x0U, 0x020E03F8U
#define IOMUXC_LCD_DATA21_USDHC2_DATA1                       0x020E016CU, 0x8U, 0x020E0680U, 0x1U, 0x020E03F8U
#define IOMUXC_LCD_DATA21_EPDC_SDCE01                        0x020E016CU, 0x9U, 0x00000000U, 0x0U, 0x020E03F8U
#define IOMUXC_LCD_DATA22_LCDIF_DATA22                       0x020E0170U, 0x0U, 0x00000000U, 0x0U, 0x020E03FCU
#define IOMUXC_LCD_DATA22_MQS_RIGHT                          0x020E0170U, 0x1U, 0x00000000U, 0x0U, 0x020E03FCU
#define IOMUXC_LCD_DATA22_ECSPI1_MOSI                        0x020E0170U, 0x2U, 0x020E053CU, 0x0U, 0x020E03FCU
#define IOMUXC_LCD_DATA22_CSI_DATA14                         0x020E0170U, 0x3U, 0x020E04FCU, 0x1U, 0x020E03FCU
#define IOMUXC_LCD_DATA22_EIM_DATA14                         0x020E0170U, 0x4U, 0x00000000U, 0x0U, 0x020E03FCU
#define IOMUXC_LCD_DATA22_GPIO3_IO27                         0x020E0170U, 0x5U, 0x00000000U, 0x0U, 0x020E03FCU
#define IOMUXC_LCD_DATA22_SRC_BT_CFG30                       0x020E0170U, 0x6U, 0x00000000U, 0x0U, 0x020E03FCU
#define IOMUXC_LCD_DATA22_USDHC2_DATA2                       0x020E0170U, 0x8U, 0x020E0684U, 0x0U, 0x020E03FCU
#define IOMUXC_LCD_DATA22_EPDC_SDCE02                        0x020E0170U, 0x9U, 0x00000000U, 0x0U, 0x020E03FCU
#define IOMUXC_LCD_DATA23_EPDC_SDCE03                        0x020E0174U, 0x9U, 0x00000000U, 0x0U, 0x020E0400U
#define IOMUXC_LCD_DATA23_LCDIF_DATA23                       0x020E0174U, 0x0U, 0x00000000U, 0x0U, 0x020E0400U
#define IOMUXC_LCD_DATA23_MQS_LEFT                           0x020E0174U, 0x1U, 0x00000000U, 0x0U, 0x020E0400U
#define IOMUXC_LCD_DATA23_ECSPI1_MISO                        0x020E0174U, 0x2U, 0x020E0538U, 0x0U, 0x020E0400U
#define IOMUXC_LCD_DATA23_CSI_DATA15                         0x020E0174U, 0x3U, 0x020E0500U, 0x1U, 0x020E0400U
#define IOMUXC_LCD_DATA23_EIM_DATA15                         0x020E0174U, 0x4U, 0x00000000U, 0x0U, 0x020E0400U
#define IOMUXC_LCD_DATA23_GPIO3_IO28                         0x020E0174U, 0x5U, 0x00000000U, 0x0U, 0x020E0400U
#define IOMUXC_LCD_DATA23_SRC_BT_CFG31                       0x020E0174U, 0x6U, 0x00000000U, 0x0U, 0x020E0400U
#define IOMUXC_LCD_DATA23_USDHC2_DATA3                       0x020E0174U, 0x8U, 0x020E0688U, 0x1U, 0x020E0400U
#define IOMUXC_NAND_RE_B_RAWNAND_RE_B                        0x020E0178U, 0x0U, 0x00000000U, 0x0U, 0x020E0404U
#define IOMUXC_NAND_RE_B_USDHC2_CLK                          0x020E0178U, 0x1U, 0x020E0670U, 0x2U, 0x020E0404U
#define IOMUXC_NAND_RE_B_QSPI_B_SCLK                         0x020E0178U, 0x2U, 0x00000000U, 0x0U, 0x020E0404U
#define IOMUXC_NAND_RE_B_KPP_ROW00                           0x020E0178U, 0x3U, 0x020E05D0U, 0x1U, 0x020E0404U
#define IOMUXC_NAND_RE_B_EIM_EB_B00                          0x020E0178U, 0x4U, 0x00000000U, 0x0U, 0x020E0404U
#define IOMUXC_NAND_RE_B_GPIO4_IO00                          0x020E0178U, 0x5U, 0x00000000U, 0x0U, 0x020E0404U
#define IOMUXC_NAND_RE_B_ECSPI3_SS2                          0x020E0178U, 0x8U, 0x00000000U, 0x0U, 0x020E0404U
#define IOMUXC_NAND_WE_B_RAWNAND_WE_B                        0x020E017CU, 0x0U, 0x00000000U, 0x0U, 0x020E0408U
#define IOMUXC_NAND_WE_B_USDHC2_CMD                          0x020E017CU, 0x1U, 0x020E0678U, 0x2U, 0x020E0408U
#define IOMUXC_NAND_WE_B_QSPI_B_SS0_B                        0x020E017CU, 0x2U, 0x00000000U, 0x0U, 0x020E0408U
#define IOMUXC_NAND_WE_B_KPP_COL00                           0x020E017CU, 0x3U, 0x020E05C4U, 0x1U, 0x020E0408U
#define IOMUXC_NAND_WE_B_EIM_EB_B01                          0x020E017CU, 0x4U, 0x00000000U, 0x0U, 0x020E0408U
#define IOMUXC_NAND_WE_B_GPIO4_IO01                          0x020E017CU, 0x5U, 0x00000000U, 0x0U, 0x020E0408U
#define IOMUXC_NAND_WE_B_ECSPI3_SS3                          0x020E017CU, 0x8U, 0x00000000U, 0x0U, 0x020E0408U
#define IOMUXC_NAND_DATA00_RAWNAND_DATA00                    0x020E0180U, 0x0U, 0x00000000U, 0x0U, 0x020E040CU
#define IOMUXC_NAND_DATA00_USDHC2_DATA0                      0x020E0180U, 0x1U, 0x020E067CU, 0x2U, 0x020E040CU
#define IOMUXC_NAND_DATA00_QSPI_B_SS1_B                      0x020E0180U, 0x2U, 0x00000000U, 0x0U, 0x020E040CU
#define IOMUXC_NAND_DATA00_KPP_ROW01                         0x020E0180U, 0x3U, 0x020E05D4U, 0x1U, 0x020E040CU
#define IOMUXC_NAND_DATA00_EIM_AD08                          0x020E0180U, 0x4U, 0x00000000U, 0x0U, 0x020E040CU
#define IOMUXC_NAND_DATA00_GPIO4_IO02                        0x020E0180U, 0x5U, 0x00000000U, 0x0U, 0x020E040CU
#define IOMUXC_NAND_DATA00_ECSPI4_RDY                        0x020E0180U, 0x8U, 0x00000000U, 0x0U, 0x020E040CU
#define IOMUXC_NAND_DATA01_RAWNAND_DATA01                    0x020E0184U, 0x0U, 0x00000000U, 0x0U, 0x020E0410U
#define IOMUXC_NAND_DATA01_USDHC2_DATA1                      0x020E0184U, 0x1U, 0x020E0680U, 0x2U, 0x020E0410U
#define IOMUXC_NAND_DATA01_QSPI_B_DQS                        0x020E0184U, 0x2U, 0x00000000U, 0x0U, 0x020E0410U
#define IOMUXC_NAND_DATA01_KPP_COL01                         0x020E0184U, 0x3U, 0x020E05C8U, 0x1U, 0x020E0410U
#define IOMUXC_NAND_DATA01_EIM_AD09                          0x020E0184U, 0x4U, 0x00000000U, 0x0U, 0x020E0410U
#define IOMUXC_NAND_DATA01_GPIO4_IO03                        0x020E0184U, 0x5U, 0x00000000U, 0x0U, 0x020E0410U
#define IOMUXC_NAND_DATA01_ECSPI4_SS1                        0x020E0184U, 0x8U, 0x00000000U, 0x0U, 0x020E0410U
#define IOMUXC_NAND_DATA02_RAWNAND_DATA02                    0x020E0188U, 0x0U, 0x00000000U, 0x0U, 0x020E0414U
#define IOMUXC_NAND_DATA02_USDHC2_DATA2                      0x020E0188U, 0x1U, 0x020E0684U, 0x1U, 0x020E0414U
#define IOMUXC_NAND_DATA02_QSPI_B_DATA00                     0x020E0188U, 0x2U, 0x00000000U, 0x0U, 0x020E0414U
#define IOMUXC_NAND_DATA02_KPP_ROW02                         0x020E0188U, 0x3U, 0x020E05D8U, 0x1U, 0x020E0414U
#define IOMUXC_NAND_DATA02_EIM_AD10                          0x020E0188U, 0x4U, 0x00000000U, 0x0U, 0x020E0414U
#define IOMUXC_NAND_DATA02_GPIO4_IO04                        0x020E0188U, 0x5U, 0x00000000U, 0x0U, 0x020E0414U
#define IOMUXC_NAND_DATA02_ECSPI4_SS2                        0x020E0188U, 0x8U, 0x00000000U, 0x0U, 0x020E0414U
#define IOMUXC_NAND_DATA03_RAWNAND_DATA03                    0x020E018CU, 0x0U, 0x00000000U, 0x0U, 0x020E0418U
#define IOMUXC_NAND_DATA03_USDHC2_DATA3                      0x020E018CU, 0x1U, 0x020E0688U, 0x2U, 0x020E0418U
#define IOMUXC_NAND_DATA03_QSPI_B_DATA01                     0x020E018CU, 0x2U, 0x00000000U, 0x0U, 0x020E0418U
#define IOMUXC_NAND_DATA03_KPP_COL02                         0x020E018CU, 0x3U, 0x020E05CCU, 0x1U, 0x020E0418U
#define IOMUXC_NAND_DATA03_EIM_AD11                          0x020E018CU, 0x4U, 0x00000000U, 0x0U, 0x020E0418U
#define IOMUXC_NAND_DATA03_GPIO4_IO05                        0x020E018CU, 0x5U, 0x00000000U, 0x0U, 0x020E0418U
#define IOMUXC_NAND_DATA03_ECSPI4_SS3                        0x020E018CU, 0x8U, 0x00000000U, 0x0U, 0x020E0418U
#define IOMUXC_NAND_DATA04_RAWNAND_DATA04                    0x020E0190U, 0x0U, 0x00000000U, 0x0U, 0x020E041CU
#define IOMUXC_NAND_DATA04_USDHC2_DATA4                      0x020E0190U, 0x1U, 0x020E068CU, 0x1U, 0x020E041CU
#define IOMUXC_NAND_DATA04_QSPI_B_DATA02                     0x020E0190U, 0x2U, 0x00000000U, 0x0U, 0x020E041CU
#define IOMUXC_NAND_DATA04_ECSPI4_SCLK                       0x020E0190U, 0x3U, 0x020E0564U, 0x1U, 0x020E041CU
#define IOMUXC_NAND_DATA04_EIM_AD12                          0x020E0190U, 0x4U, 0x00000000U, 0x0U, 0x020E041CU
#define IOMUXC_NAND_DATA04_GPIO4_IO06                        0x020E0190U, 0x5U, 0x00000000U, 0x0U, 0x020E041CU
#define IOMUXC_NAND_DATA04_UART2_TX                          0x020E0190U, 0x8U, 0x00000000U, 0x0U, 0x020E041CU
#define IOMUXC_NAND_DATA04_UART2_RX                          0x020E0190U, 0x8U, 0x020E062CU, 0x2U, 0x020E041CU
#define IOMUXC_NAND_DATA05_RAWNAND_DATA05                    0x020E0194U, 0x0U, 0x00000000U, 0x0U, 0x020E0420U
#define IOMUXC_NAND_DATA05_USDHC2_DATA5                      0x020E0194U, 0x1U, 0x020E0690U, 0x1U, 0x020E0420U
#define IOMUXC_NAND_DATA05_QSPI_B_DATA03                     0x020E0194U, 0x2U, 0x00000000U, 0x0U, 0x020E0420U
#define IOMUXC_NAND_DATA05_ECSPI4_MOSI                       0x020E0194U, 0x3U, 0x020E056CU, 0x1U, 0x020E0420U
#define IOMUXC_NAND_DATA05_EIM_AD13                          0x020E0194U, 0x4U, 0x00000000U, 0x0U, 0x020E0420U
#define IOMUXC_NAND_DATA05_GPIO4_IO07                        0x020E0194U, 0x5U, 0x00000000U, 0x0U, 0x020E0420U
#define IOMUXC_NAND_DATA05_UART2_RX                          0x020E0194U, 0x8U, 0x020E062CU, 0x3U, 0x020E0420U
#define IOMUXC_NAND_DATA05_UART2_TX                          0x020E0194U, 0x8U, 0x00000000U, 0x0U, 0x020E0420U
#define IOMUXC_NAND_DATA06_RAWNAND_DATA06                    0x020E0198U, 0x0U, 0x00000000U, 0x0U, 0x020E0424U
#define IOMUXC_NAND_DATA06_USDHC2_DATA6                      0x020E0198U, 0x1U, 0x020E0694U, 0x1U, 0x020E0424U
#define IOMUXC_NAND_DATA06_SAI2_RX_BCLK                      0x020E0198U, 0x2U, 0x00000000U, 0x0U, 0x020E0424U
#define IOMUXC_NAND_DATA06_ECSPI4_MISO                       0x020E0198U, 0x3U, 0x020E0568U, 0x1U, 0x020E0424U
#define IOMUXC_NAND_DATA06_EIM_AD14                          0x020E0198U, 0x4U, 0x00000000U, 0x0U, 0x020E0424U
#define IOMUXC_NAND_DATA06_GPIO4_IO08                        0x020E0198U, 0x5U, 0x00000000U, 0x0U, 0x020E0424U
#define IOMUXC_NAND_DATA06_UART2_CTS_B                       0x020E0198U, 0x8U, 0x00000000U, 0x0U, 0x020E0424U
#define IOMUXC_NAND_DATA06_UART2_RTS_B                       0x020E0198U, 0x8U, 0x020E0628U, 0x4U, 0x020E0424U
#define IOMUXC_NAND_DATA07_RAWNAND_DATA07                    0x020E019CU, 0x0U, 0x00000000U, 0x0U, 0x020E0428U
#define IOMUXC_NAND_DATA07_USDHC2_DATA7                      0x020E019CU, 0x1U, 0x020E0698U, 0x1U, 0x020E0428U
#define IOMUXC_NAND_DATA07_QSPI_A_SS1_B                      0x020E019CU, 0x2U, 0x00000000U, 0x0U, 0x020E0428U
#define IOMUXC_NAND_DATA07_ECSPI4_SS0                        0x020E019CU, 0x3U, 0x020E0570U, 0x1U, 0x020E0428U
#define IOMUXC_NAND_DATA07_EIM_AD15                          0x020E019CU, 0x4U, 0x00000000U, 0x0U, 0x020E0428U
#define IOMUXC_NAND_DATA07_GPIO4_IO09                        0x020E019CU, 0x5U, 0x00000000U, 0x0U, 0x020E0428U
#define IOMUXC_NAND_DATA07_UART2_RTS_B                       0x020E019CU, 0x8U, 0x020E0628U, 0x5U, 0x020E0428U
#define IOMUXC_NAND_DATA07_UART2_CTS_B                       0x020E019CU, 0x8U, 0x00000000U, 0x0U, 0x020E0428U
#define IOMUXC_NAND_ALE_RAWNAND_ALE                          0x020E01A0U, 0x0U, 0x00000000U, 0x0U, 0x020E042CU
#define IOMUXC_NAND_ALE_USDHC2_RESET_B                       0x020E01A0U, 0x1U, 0x00000000U, 0x0U, 0x020E042CU
#define IOMUXC_NAND_ALE_QSPI_A_DQS                           0x020E01A0U, 0x2U, 0x00000000U, 0x0U, 0x020E042CU
#define IOMUXC_NAND_ALE_PWM3_OUT                             0x020E01A0U, 0x3U, 0x00000000U, 0x0U, 0x020E042CU
#define IOMUXC_NAND_ALE_EIM_ADDR17                           0x020E01A0U, 0x4U, 0x00000000U, 0x0U, 0x020E042CU
#define IOMUXC_NAND_ALE_GPIO4_IO10                           0x020E01A0U, 0x5U, 0x00000000U, 0x0U, 0x020E042CU
#define IOMUXC_NAND_ALE_ECSPI3_SS1                           0x020E01A0U, 0x8U, 0x00000000U, 0x0U, 0x020E042CU
#define IOMUXC_NAND_WP_B_RAWNAND_WP_B                        0x020E01A4U, 0x0U, 0x00000000U, 0x0U, 0x020E0430U
#define IOMUXC_NAND_WP_B_USDHC1_RESET_B                      0x020E01A4U, 0x1U, 0x00000000U, 0x0U, 0x020E0430U
#define IOMUXC_NAND_WP_B_QSPI_A_SCLK                         0x020E01A4U, 0x2U, 0x00000000U, 0x0U, 0x020E0430U
#define IOMUXC_NAND_WP_B_PWM4_OUT                            0x020E01A4U, 0x3U, 0x00000000U, 0x0U, 0x020E0430U
#define IOMUXC_NAND_WP_B_EIM_BCLK                            0x020E01A4U, 0x4U, 0x00000000U, 0x0U, 0x020E0430U
#define IOMUXC_NAND_WP_B_GPIO4_IO11                          0x020E01A4U, 0x5U, 0x00000000U, 0x0U, 0x020E0430U
#define IOMUXC_NAND_WP_B_ECSPI3_RDY                          0x020E01A4U, 0x8U, 0x00000000U, 0x0U, 0x020E0430U
#define IOMUXC_NAND_READY_B_RAWNAND_READY_B                  0x020E01A8U, 0x0U, 0x00000000U, 0x0U, 0x020E0434U
#define IOMUXC_NAND_READY_B_USDHC1_DATA4                     0x020E01A8U, 0x1U, 0x00000000U, 0x0U, 0x020E0434U
#define IOMUXC_NAND_READY_B_QSPI_A_DATA00                    0x020E01A8U, 0x2U, 0x00000000U, 0x0U, 0x020E0434U
#define IOMUXC_NAND_READY_B_ECSPI3_SS0                       0x020E01A8U, 0x3U, 0x020E0560U, 0x1U, 0x020E0434U
#define IOMUXC_NAND_READY_B_EIM_CS1_B                        0x020E01A8U, 0x4U, 0x00000000U, 0x0U, 0x020E0434U
#define IOMUXC_NAND_READY_B_GPIO4_IO12                       0x020E01A8U, 0x5U, 0x00000000U, 0x0U, 0x020E0434U
#define IOMUXC_NAND_READY_B_UART3_TX                         0x020E01A8U, 0x8U, 0x00000000U, 0x0U, 0x020E0434U
#define IOMUXC_NAND_READY_B_UART3_RX                         0x020E01A8U, 0x8U, 0x020E0634U, 0x2U, 0x020E0434U
#define IOMUXC_NAND_CE0_B_RAWNAND_CE0_B                      0x020E01ACU, 0x0U, 0x00000000U, 0x0U, 0x020E0438U
#define IOMUXC_NAND_CE0_B_USDHC1_DATA5                       0x020E01ACU, 0x1U, 0x00000000U, 0x0U, 0x020E0438U
#define IOMUXC_NAND_CE0_B_QSPI_A_DATA01                      0x020E01ACU, 0x2U, 0x00000000U, 0x0U, 0x020E0438U
#define IOMUXC_NAND_CE0_B_ECSPI3_SCLK                        0x020E01ACU, 0x3U, 0x020E0554U, 0x1U, 0x020E0438U
#define IOMUXC_NAND_CE0_B_EIM_DTACK_B                        0x020E01ACU, 0x4U, 0x00000000U, 0x0U, 0x020E0438U
#define IOMUXC_NAND_CE0_B_GPIO4_IO13                         0x020E01ACU, 0x5U, 0x00000000U, 0x0U, 0x020E0438U
#define IOMUXC_NAND_CE0_B_UART3_RX                           0x020E01ACU, 0x8U, 0x020E0634U, 0x3U, 0x020E0438U
#define IOMUXC_NAND_CE0_B_UART3_TX                           0x020E01ACU, 0x8U, 0x00000000U, 0x0U, 0x020E0438U
#define IOMUXC_NAND_CE1_B_RAWNAND_CE1_B                      0x020E01B0U, 0x0U, 0x00000000U, 0x0U, 0x020E043CU
#define IOMUXC_NAND_CE1_B_USDHC1_DATA6                       0x020E01B0U, 0x1U, 0x00000000U, 0x0U, 0x020E043CU
#define IOMUXC_NAND_CE1_B_QSPI_A_DATA02                      0x020E01B0U, 0x2U, 0x00000000U, 0x0U, 0x020E043CU
#define IOMUXC_NAND_CE1_B_ECSPI3_MOSI                        0x020E01B0U, 0x3U, 0x020E055CU, 0x1U, 0x020E043CU
#define IOMUXC_NAND_CE1_B_EIM_ADDR18                         0x020E01B0U, 0x4U, 0x00000000U, 0x0U, 0x020E043CU
#define IOMUXC_NAND_CE1_B_GPIO4_IO14                         0x020E01B0U, 0x5U, 0x00000000U, 0x0U, 0x020E043CU
#define IOMUXC_NAND_CE1_B_UART3_CTS_B                        0x020E01B0U, 0x8U, 0x00000000U, 0x0U, 0x020E043CU
#define IOMUXC_NAND_CE1_B_UART3_RTS_B                        0x020E01B0U, 0x8U, 0x020E0630U, 0x2U, 0x020E043CU
#define IOMUXC_NAND_CLE_RAWNAND_CLE                          0x020E01B4U, 0x0U, 0x00000000U, 0x0U, 0x020E0440U
#define IOMUXC_NAND_CLE_USDHC1_DATA7                         0x020E01B4U, 0x1U, 0x00000000U, 0x0U, 0x020E0440U
#define IOMUXC_NAND_CLE_QSPI_A_DATA03                        0x020E01B4U, 0x2U, 0x00000000U, 0x0U, 0x020E0440U
#define IOMUXC_NAND_CLE_ECSPI3_MISO                          0x020E01B4U, 0x3U, 0x020E0558U, 0x1U, 0x020E0440U
#define IOMUXC_NAND_CLE_EIM_ADDR16                           0x020E01B4U, 0x4U, 0x00000000U, 0x0U, 0x020E0440U
#define IOMUXC_NAND_CLE_GPIO4_IO15                           0x020E01B4U, 0x5U, 0x00000000U, 0x0U, 0x020E0440U
#define IOMUXC_NAND_CLE_UART3_RTS_B                          0x020E01B4U, 0x8U, 0x020E0630U, 0x3U, 0x020E0440U
#define IOMUXC_NAND_CLE_UART3_CTS_B                          0x020E01B4U, 0x8U, 0x00000000U, 0x0U, 0x020E0440U
#define IOMUXC_NAND_DQS_RAWNAND_DQS                          0x020E01B8U, 0x0U, 0x00000000U, 0x0U, 0x020E0444U
#define IOMUXC_NAND_DQS_CSI_FIELD                            0x020E01B8U, 0x1U, 0x020E0530U, 0x1U, 0x020E0444U
#define IOMUXC_NAND_DQS_QSPI_A_SS0_B                         0x020E01B8U, 0x2U, 0x00000000U, 0x0U, 0x020E0444U
#define IOMUXC_NAND_DQS_PWM5_OUT                             0x020E01B8U, 0x3U, 0x00000000U, 0x0U, 0x020E0444U
#define IOMUXC_NAND_DQS_EIM_WAIT                             0x020E01B8U, 0x4U, 0x00000000U, 0x0U, 0x020E0444U
#define IOMUXC_NAND_DQS_GPIO4_IO16                           0x020E01B8U, 0x5U, 0x00000000U, 0x0U, 0x020E0444U
#define IOMUXC_NAND_DQS_SDMA_EXT_EVENT01                     0x020E01B8U, 0x6U, 0x020E0614U, 0x1U, 0x020E0444U
#define IOMUXC_NAND_DQS_SPDIF_EXT_CLK                        0x020E01B8U, 0x8U, 0x020E061CU, 0x1U, 0x020E0444U
#define IOMUXC_SD1_CMD_USDHC1_CMD                            0x020E01BCU, 0x0U, 0x00000000U, 0x0U, 0x020E0448U
#define IOMUXC_SD1_CMD_GPT2_COMPARE1                         0x020E01BCU, 0x1U, 0x00000000U, 0x0U, 0x020E0448U
#define IOMUXC_SD1_CMD_SAI2_RX_SYNC                          0x020E01BCU, 0x2U, 0x00000000U, 0x0U, 0x020E0448U
#define IOMUXC_SD1_CMD_SPDIF_OUT                             0x020E01BCU, 0x3U, 0x00000000U, 0x0U, 0x020E0448U
#define IOMUXC_SD1_CMD_EIM_ADDR19                            0x020E01BCU, 0x4U, 0x00000000U, 0x0U, 0x020E0448U
#define IOMUXC_SD1_CMD_GPIO2_IO16                            0x020E01BCU, 0x5U, 0x00000000U, 0x0U, 0x020E0448U
#define IOMUXC_SD1_CMD_SDMA_EXT_EVENT00                      0x020E01BCU, 0x6U, 0x020E0610U, 0x2U, 0x020E0448U
#define IOMUXC_SD1_CMD_USB_OTG1_PWR                          0x020E01BCU, 0x8U, 0x00000000U, 0x0U, 0x020E0448U
#define IOMUXC_SD1_CLK_USDHC1_CLK                            0x020E01C0U, 0x0U, 0x00000000U, 0x0U, 0x020E044CU
#define IOMUXC_SD1_CLK_GPT2_COMPARE2                         0x020E01C0U, 0x1U, 0x00000000U, 0x0U, 0x020E044CU
#define IOMUXC_SD1_CLK_SAI2_MCLK                             0x020E01C0U, 0x2U, 0x020E05F0U, 0x1U, 0x020E044CU
#define IOMUXC_SD1_CLK_SPDIF_IN                              0x020E01C0U, 0x3U, 0x020E0618U, 0x3U, 0x020E044CU
#define IOMUXC_SD1_CLK_EIM_ADDR20                            0x020E01C0U, 0x4U, 0x00000000U, 0x0U, 0x020E044CU
#define IOMUXC_SD1_CLK_GPIO2_IO17                            0x020E01C0U, 0x5U, 0x00000000U, 0x0U, 0x020E044CU
#define IOMUXC_SD1_CLK_USB_OTG1_OC                           0x020E01C0U, 0x8U, 0x020E0664U, 0x2U, 0x020E044CU
#define IOMUXC_SD1_DATA0_USDHC1_DATA0                        0x020E01C4U, 0x0U, 0x00000000U, 0x0U, 0x020E0450U
#define IOMUXC_SD1_DATA0_GPT2_COMPARE3                       0x020E01C4U, 0x1U, 0x00000000U, 0x0U, 0x020E0450U
#define IOMUXC_SD1_DATA0_SAI2_TX_SYNC                        0x020E01C4U, 0x2U, 0x020E05FCU, 0x1U, 0x020E0450U
#define IOMUXC_SD1_DATA0_FLEXCAN1_TX                         0x020E01C4U, 0x3U, 0x00000000U, 0x0U, 0x020E0450U
#define IOMUXC_SD1_DATA0_EIM_ADDR21                          0x020E01C4U, 0x4U, 0x00000000U, 0x0U, 0x020E0450U
#define IOMUXC_SD1_DATA0_GPIO2_IO18                          0x020E01C4U, 0x5U, 0x00000000U, 0x0U, 0x020E0450U
#define IOMUXC_SD1_DATA0_ANATOP_OTG1_ID                      0x020E01C4U, 0x8U, 0x020E04B8U, 0x2U, 0x020E0450U
#define IOMUXC_SD1_DATA1_USDHC1_DATA1                        0x020E01C8U, 0x0U, 0x00000000U, 0x0U, 0x020E0454U
#define IOMUXC_SD1_DATA1_GPT2_CLK                            0x020E01C8U, 0x1U, 0x020E05A0U, 0x1U, 0x020E0454U
#define IOMUXC_SD1_DATA1_SAI2_TX_BCLK                        0x020E01C8U, 0x2U, 0x020E05F8U, 0x1U, 0x020E0454U
#define IOMUXC_SD1_DATA1_FLEXCAN1_RX                         0x020E01C8U, 0x3U, 0x020E0584U, 0x3U, 0x020E0454U
#define IOMUXC_SD1_DATA1_EIM_ADDR22                          0x020E01C8U, 0x4U, 0x00000000U, 0x0U, 0x020E0454U
#define IOMUXC_SD1_DATA1_GPIO2_IO19                          0x020E01C8U, 0x5U, 0x00000000U, 0x0U, 0x020E0454U
#define IOMUXC_SD1_DATA1_USB_OTG2_PWR                        0x020E01C8U, 0x8U, 0x00000000U, 0x0U, 0x020E0454U
#define IOMUXC_SD1_DATA2_USDHC1_DATA2                        0x020E01CCU, 0x0U, 0x00000000U, 0x0U, 0x020E0458U
#define IOMUXC_SD1_DATA2_GPT2_CAPTURE1                       0x020E01CCU, 0x1U, 0x020E0598U, 0x1U, 0x020E0458U
#define IOMUXC_SD1_DATA2_SAI2_RX_DATA                        0x020E01CCU, 0x2U, 0x020E05F4U, 0x1U, 0x020E0458U
#define IOMUXC_SD1_DATA2_FLEXCAN2_TX                         0x020E01CCU, 0x3U, 0x00000000U, 0x0U, 0x020E0458U
#define IOMUXC_SD1_DATA2_EIM_ADDR23                          0x020E01CCU, 0x4U, 0x00000000U, 0x0U, 0x020E0458U
#define IOMUXC_SD1_DATA2_GPIO2_IO20                          0x020E01CCU, 0x5U, 0x00000000U, 0x0U, 0x020E0458U
#define IOMUXC_SD1_DATA2_CCM_CLKO1                           0x020E01CCU, 0x6U, 0x00000000U, 0x0U, 0x020E0458U
#define IOMUXC_SD1_DATA2_USB_OTG2_OC                         0x020E01CCU, 0x8U, 0x020E0660U, 0x2U, 0x020E0458U
#define IOMUXC_SD1_DATA3_USDHC1_DATA3                        0x020E01D0U, 0x0U, 0x00000000U, 0x0U, 0x020E045CU
#define IOMUXC_SD1_DATA3_GPT2_CAPTURE2                       0x020E01D0U, 0x1U, 0x020E059CU, 0x1U, 0x020E045CU
#define IOMUXC_SD1_DATA3_SAI2_TX_DATA                        0x020E01D0U, 0x2U, 0x00000000U, 0x0U, 0x020E045CU
#define IOMUXC_SD1_DATA3_FLEXCAN2_RX                         0x020E01D0U, 0x3U, 0x020E0588U, 0x3U, 0x020E045CU
#define IOMUXC_SD1_DATA3_EIM_ADDR24                          0x020E01D0U, 0x4U, 0x00000000U, 0x0U, 0x020E045CU
#define IOMUXC_SD1_DATA3_GPIO2_IO21                          0x020E01D0U, 0x5U, 0x00000000U, 0x0U, 0x020E045CU
#define IOMUXC_SD1_DATA3_CCM_CLKO2                           0x020E01D0U, 0x6U, 0x00000000U, 0x0U, 0x020E045CU
#define IOMUXC_SD1_DATA3_ANATOP_OTG2_ID                      0x020E01D0U, 0x8U, 0x020E04BCU, 0x2U, 0x020E045CU
#define IOMUXC_CSI_MCLK_CSI_MCLK                             0x020E01D4U, 0x0U, 0x00000000U, 0x0U, 0x020E0460U
#define IOMUXC_CSI_MCLK_USDHC2_CD_B                          0x020E01D4U, 0x1U, 0x020E0674U, 0x0U, 0x020E0460U
#define IOMUXC_CSI_MCLK_RAWNAND_CE2_B                        0x020E01D4U, 0x2U, 0x00000000U, 0x0U, 0x020E0460U
#define IOMUXC_CSI_MCLK_I2C1_SDA                             0x020E01D4U, 0x3U, 0x020E05A8U, 0x0U, 0x020E0460U
#define IOMUXC_CSI_MCLK_EIM_CS0_B                            0x020E01D4U, 0x4U, 0x00000000U, 0x0U, 0x020E0460U
#define IOMUXC_CSI_MCLK_GPIO4_IO17                           0x020E01D4U, 0x5U, 0x00000000U, 0x0U, 0x020E0460U
#define IOMUXC_CSI_MCLK_SNVS_HP_VIO_5_CTL                    0x020E01D4U, 0x6U, 0x00000000U, 0x0U, 0x020E0460U
#define IOMUXC_CSI_MCLK_UART6_TX                             0x020E01D4U, 0x8U, 0x00000000U, 0x0U, 0x020E0460U
#define IOMUXC_CSI_MCLK_UART6_RX                             0x020E01D4U, 0x8U, 0x020E064CU, 0x0U, 0x020E0460U
#define IOMUXC_CSI_MCLK_ESAI_TX3_RX2                         0x020E01D4U, 0x9U, 0x00000000U, 0x0U, 0x020E0460U
#define IOMUXC_CSI_PIXCLK_CSI_PIXCLK                         0x020E01D8U, 0x0U, 0x020E0528U, 0x1U, 0x020E0464U
#define IOMUXC_CSI_PIXCLK_USDHC2_WP                          0x020E01D8U, 0x1U, 0x020E069CU, 0x2U, 0x020E0464U
#define IOMUXC_CSI_PIXCLK_RAWNAND_CE3_B                      0x020E01D8U, 0x2U, 0x00000000U, 0x0U, 0x020E0464U
#define IOMUXC_CSI_PIXCLK_I2C1_SCL                           0x020E01D8U, 0x3U, 0x020E05A4U, 0x2U, 0x020E0464U
#define IOMUXC_CSI_PIXCLK_EIM_OE                             0x020E01D8U, 0x4U, 0x00000000U, 0x0U, 0x020E0464U
#define IOMUXC_CSI_PIXCLK_GPIO4_IO18                         0x020E01D8U, 0x5U, 0x00000000U, 0x0U, 0x020E0464U
#define IOMUXC_CSI_PIXCLK_SNVS_HP_VIO_5                      0x020E01D8U, 0x6U, 0x00000000U, 0x0U, 0x020E0464U
#define IOMUXC_CSI_PIXCLK_UART6_RX                           0x020E01D8U, 0x8U, 0x020E064CU, 0x3U, 0x020E0464U
#define IOMUXC_CSI_PIXCLK_UART6_TX                           0x020E01D8U, 0x8U, 0x00000000U, 0x0U, 0x020E0464U
#define IOMUXC_CSI_PIXCLK_ESAI_TX2_RX3                       0x020E01D8U, 0x9U, 0x00000000U, 0x0U, 0x020E0464U
#define IOMUXC_CSI_VSYNC_CSI_VSYNC                           0x020E01DCU, 0x0U, 0x020E052CU, 0x0U, 0x020E0468U
#define IOMUXC_CSI_VSYNC_USDHC2_CLK                          0x020E01DCU, 0x1U, 0x020E0670U, 0x0U, 0x020E0468U
#define IOMUXC_CSI_VSYNC_I2C2_SDA                            0x020E01DCU, 0x3U, 0x020E05B0U, 0x0U, 0x020E0468U
#define IOMUXC_CSI_VSYNC_EIM_RW                              0x020E01DCU, 0x4U, 0x00000000U, 0x0U, 0x020E0468U
#define IOMUXC_CSI_VSYNC_GPIO4_IO19                          0x020E01DCU, 0x5U, 0x00000000U, 0x0U, 0x020E0468U
#define IOMUXC_CSI_VSYNC_PWM7_OUT                            0x020E01DCU, 0x6U, 0x00000000U, 0x0U, 0x020E0468U
#define IOMUXC_CSI_VSYNC_UART6_RTS_B                         0x020E01DCU, 0x8U, 0x020E0648U, 0x0U, 0x020E0468U
#define IOMUXC_CSI_VSYNC_UART6_CTS_B                         0x020E01DCU, 0x8U, 0x00000000U, 0x0U, 0x020E0468U
#define IOMUXC_CSI_VSYNC_ESAI_TX4_RX1                        0x020E01DCU, 0x9U, 0x00000000U, 0x0U, 0x020E0468U
#define IOMUXC_CSI_HSYNC_CSI_HSYNC                           0x020E01E0U, 0x0U, 0x020E0524U, 0x0U, 0x020E046CU
#define IOMUXC_CSI_HSYNC_USDHC2_CMD                          0x020E01E0U, 0x1U, 0x020E0678U, 0x0U, 0x020E046CU
#define IOMUXC_CSI_HSYNC_I2C2_SCL                            0x020E01E0U, 0x3U, 0x020E05ACU, 0x0U, 0x020E046CU
#define IOMUXC_CSI_HSYNC_EIM_LBA_B                           0x020E01E0U, 0x4U, 0x00000000U, 0x0U, 0x020E046CU
#define IOMUXC_CSI_HSYNC_GPIO4_IO20                          0x020E01E0U, 0x5U, 0x00000000U, 0x0U, 0x020E046CU
#define IOMUXC_CSI_HSYNC_PWM8_OUT                            0x020E01E0U, 0x6U, 0x00000000U, 0x0U, 0x020E046CU
#define IOMUXC_CSI_HSYNC_UART6_CTS_B                         0x020E01E0U, 0x8U, 0x00000000U, 0x0U, 0x020E046CU
#define IOMUXC_CSI_HSYNC_UART6_RTS_B                         0x020E01E0U, 0x8U, 0x020E0648U, 0x1U, 0x020E046CU
#define IOMUXC_CSI_HSYNC_ESAI_TX1                            0x020E01E0U, 0x9U, 0x00000000U, 0x0U, 0x020E046CU
#define IOMUXC_CSI_DATA00_CSI_DATA02                         0x020E01E4U, 0x0U, 0x020E04C4U, 0x0U, 0x020E0470U
#define IOMUXC_CSI_DATA00_USDHC2_DATA0                       0x020E01E4U, 0x1U, 0x020E067CU, 0x0U, 0x020E0470U
#define IOMUXC_CSI_DATA00_ECSPI2_SCLK                        0x020E01E4U, 0x3U, 0x020E0544U, 0x0U, 0x020E0470U
#define IOMUXC_CSI_DATA00_EIM_AD00                           0x020E01E4U, 0x4U, 0x00000000U, 0x0U, 0x020E0470U
#define IOMUXC_CSI_DATA00_GPIO4_IO21                         0x020E01E4U, 0x5U, 0x00000000U, 0x0U, 0x020E0470U
#define IOMUXC_CSI_DATA00_SRC_INT_BOOT                       0x020E01E4U, 0x6U, 0x00000000U, 0x0U, 0x020E0470U
#define IOMUXC_CSI_DATA00_UART5_TX                           0x020E01E4U, 0x8U, 0x00000000U, 0x0U, 0x020E0470U
#define IOMUXC_CSI_DATA00_UART5_RX                           0x020E01E4U, 0x8U, 0x020E0644U, 0x0U, 0x020E0470U
#define IOMUXC_CSI_DATA00_ESAI_TX_HF_CLK                     0x020E01E4U, 0x9U, 0x00000000U, 0x0U, 0x020E0470U
#define IOMUXC_CSI_DATA01_CSI_DATA03                         0x020E01E8U, 0x0U, 0x020E04C8U, 0x0U, 0x020E0474U
#define IOMUXC_CSI_DATA01_USDHC2_DATA1                       0x020E01E8U, 0x1U, 0x020E0680U, 0x0U, 0x020E0474U
#define IOMUXC_CSI_DATA01_ECSPI2_SS0                         0x020E01E8U, 0x3U, 0x020E0550U, 0x0U, 0x020E0474U
#define IOMUXC_CSI_DATA01_EIM_AD01                           0x020E01E8U, 0x4U, 0x00000000U, 0x0U, 0x020E0474U
#define IOMUXC_CSI_DATA01_GPIO4_IO22                         0x020E01E8U, 0x5U, 0x00000000U, 0x0U, 0x020E0474U
#define IOMUXC_CSI_DATA01_SAI1_MCLK                          0x020E01E8U, 0x6U, 0x020E05E0U, 0x0U, 0x020E0474U
#define IOMUXC_CSI_DATA01_UART5_RX                           0x020E01E8U, 0x8U, 0x020E0644U, 0x1U, 0x020E0474U
#define IOMUXC_CSI_DATA01_UART5_TX                           0x020E01E8U, 0x8U, 0x00000000U, 0x0U, 0x020E0474U
#define IOMUXC_CSI_DATA01_ESAI_RX_HF_CLK                     0x020E01E8U, 0x9U, 0x00000000U, 0x0U, 0x020E0474U
#define IOMUXC_CSI_DATA02_CSI_DATA04                         0x020E01ECU, 0x0U, 0x020E04D8U, 0x1U, 0x020E0478U
#define IOMUXC_CSI_DATA02_USDHC2_DATA2                       0x020E01ECU, 0x1U, 0x020E0684U, 0x2U, 0x020E0478U
#define IOMUXC_CSI_DATA02_ECSPI2_MOSI                        0x020E01ECU, 0x3U, 0x020E054CU, 0x1U, 0x020E0478U
#define IOMUXC_CSI_DATA02_EIM_AD02                           0x020E01ECU, 0x4U, 0x00000000U, 0x0U, 0x020E0478U
#define IOMUXC_CSI_DATA02_GPIO4_IO23                         0x020E01ECU, 0x5U, 0x00000000U, 0x0U, 0x020E0478U
#define IOMUXC_CSI_DATA02_SAI1_RX_SYNC                       0x020E01ECU, 0x6U, 0x00000000U, 0x0U, 0x020E0478U
#define IOMUXC_CSI_DATA02_UART5_RTS_B                        0x020E01ECU, 0x8U, 0x020E0640U, 0x7U, 0x020E0478U
#define IOMUXC_CSI_DATA02_UART5_CTS_B                        0x020E01ECU, 0x8U, 0x00000000U, 0x0U, 0x020E0478U
#define IOMUXC_CSI_DATA02_ESAI_RX_FS                         0x020E01ECU, 0x9U, 0x00000000U, 0x0U, 0x020E0478U
#define IOMUXC_CSI_DATA03_CSI_DATA05                         0x020E01F0U, 0x0U, 0x020E04CCU, 0x0U, 0x020E047CU
#define IOMUXC_CSI_DATA03_USDHC2_DATA3                       0x020E01F0U, 0x1U, 0x020E0688U, 0x0U, 0x020E047CU
#define IOMUXC_CSI_DATA03_ECSPI2_MISO                        0x020E01F0U, 0x3U, 0x020E0548U, 0x0U, 0x020E047CU
#define IOMUXC_CSI_DATA03_EIM_AD03                           0x020E01F0U, 0x4U, 0x00000000U, 0x0U, 0x020E047CU
#define IOMUXC_CSI_DATA03_GPIO4_IO24                         0x020E01F0U, 0x5U, 0x00000000U, 0x0U, 0x020E047CU
#define IOMUXC_CSI_DATA03_SAI1_RX_BCLK                       0x020E01F0U, 0x6U, 0x00000000U, 0x0U, 0x020E047CU
#define IOMUXC_CSI_DATA03_UART5_CTS_B                        0x020E01F0U, 0x8U, 0x00000000U, 0x0U, 0x020E047CU
#define IOMUXC_CSI_DATA03_UART5_RTS_B                        0x020E01F0U, 0x8U, 0x020E0640U, 0x0U, 0x020E047CU
#define IOMUXC_CSI_DATA03_ESAI_RX_CLK                        0x020E01F0U, 0x9U, 0x00000000U, 0x0U, 0x020E047CU
#define IOMUXC_CSI_DATA04_CSI_DATA06                         0x020E01F4U, 0x0U, 0x020E04DCU, 0x1U, 0x020E0480U
#define IOMUXC_CSI_DATA04_USDHC2_DATA4                       0x020E01F4U, 0x1U, 0x020E068CU, 0x2U, 0x020E0480U
#define IOMUXC_CSI_DATA04_ECSPI1_SCLK                        0x020E01F4U, 0x3U, 0x020E0534U, 0x1U, 0x020E0480U
#define IOMUXC_CSI_DATA04_EIM_AD04                           0x020E01F4U, 0x4U, 0x00000000U, 0x0U, 0x020E0480U
#define IOMUXC_CSI_DATA04_GPIO4_IO25                         0x020E01F4U, 0x5U, 0x00000000U, 0x0U, 0x020E0480U
#define IOMUXC_CSI_DATA04_SAI1_TX_SYNC                       0x020E01F4U, 0x6U, 0x020E05ECU, 0x1U, 0x020E0480U
#define IOMUXC_CSI_DATA04_USDHC1_WP                          0x020E01F4U, 0x8U, 0x020E066CU, 0x2U, 0x020E0480U
#define IOMUXC_CSI_DATA04_ESAI_TX_FS                         0x020E01F4U, 0x9U, 0x00000000U, 0x0U, 0x020E0480U
#define IOMUXC_CSI_DATA05_CSI_DATA07                         0x020E01F8U, 0x0U, 0x020E04E0U, 0x1U, 0x020E0484U
#define IOMUXC_CSI_DATA05_USDHC2_DATA5                       0x020E01F8U, 0x1U, 0x020E0690U, 0x2U, 0x020E0484U
#define IOMUXC_CSI_DATA05_ECSPI1_SS0                         0x020E01F8U, 0x3U, 0x020E0540U, 0x1U, 0x020E0484U
#define IOMUXC_CSI_DATA05_EIM_AD05                           0x020E01F8U, 0x4U, 0x00000000U, 0x0U, 0x020E0484U
#define IOMUXC_CSI_DATA05_GPIO4_IO26                         0x020E01F8U, 0x5U, 0x00000000U, 0x0U, 0x020E0484U
#define IOMUXC_CSI_DATA05_SAI1_TX_BCLK                       0x020E01F8U, 0x6U, 0x020E05E8U, 0x1U, 0x020E0484U
#define IOMUXC_CSI_DATA05_USDHC1_CD_B                        0x020E01F8U, 0x8U, 0x020E0668U, 0x2U, 0x020E0484U
#define IOMUXC_CSI_DATA05_ESAI_TX_CLK                        0x020E01F8U, 0x9U, 0x00000000U, 0x0U, 0x020E0484U
#define IOMUXC_CSI_DATA06_CSI_DATA08                         0x020E01FCU, 0x0U, 0x020E04E4U, 0x1U, 0x020E0488U
#define IOMUXC_CSI_DATA06_USDHC2_DATA6                       0x020E01FCU, 0x1U, 0x020E0694U, 0x2U, 0x020E0488U
#define IOMUXC_CSI_DATA06_ECSPI1_MOSI                        0x020E01FCU, 0x3U, 0x020E053CU, 0x1U, 0x020E0488U
#define IOMUXC_CSI_DATA06_EIM_AD06                           0x020E01FCU, 0x4U, 0x00000000U, 0x0U, 0x020E0488U
#define IOMUXC_CSI_DATA06_GPIO4_IO27                         0x020E01FCU, 0x5U, 0x00000000U, 0x0U, 0x020E0488U
#define IOMUXC_CSI_DATA06_SAI1_RX_DATA                       0x020E01FCU, 0x6U, 0x020E05E4U, 0x1U, 0x020E0488U
#define IOMUXC_CSI_DATA06_USDHC1_RESET_B                     0x020E01FCU, 0x8U, 0x00000000U, 0x0U, 0x020E0488U
#define IOMUXC_CSI_DATA06_ESAI_TX5_RX0                       0x020E01FCU, 0x9U, 0x00000000U, 0x0U, 0x020E0488U
#define IOMUXC_CSI_DATA07_CSI_DATA09                         0x020E0200U, 0x0U, 0x020E04E8U, 0x1U, 0x020E048CU
#define IOMUXC_CSI_DATA07_USDHC2_DATA7                       0x020E0200U, 0x1U, 0x020E0698U, 0x2U, 0x020E048CU
#define IOMUXC_CSI_DATA07_ECSPI1_MISO                        0x020E0200U, 0x3U, 0x020E0538U, 0x1U, 0x020E048CU
#define IOMUXC_CSI_DATA07_EIM_AD07                           0x020E0200U, 0x4U, 0x00000000U, 0x0U, 0x020E048CU
#define IOMUXC_CSI_DATA07_GPIO4_IO28                         0x020E0200U, 0x5U, 0x00000000U, 0x0U, 0x020E048CU
#define IOMUXC_CSI_DATA07_SAI1_TX_DATA                       0x020E0200U, 0x6U, 0x00000000U, 0x0U, 0x020E048CU
#define IOMUXC_CSI_DATA07_USDHC1_VSELECT                     0x020E0200U, 0x8U, 0x00000000U, 0x0U, 0x020E048CU
#define IOMUXC_CSI_DATA07_ESAI_TX0                           0x020E0200U, 0x9U, 0x00000000U, 0x0U, 0x020E048CU
#define IOMUXC_DRAM_ADDR00                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0204U
#define IOMUXC_DRAM_ADDR01                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0208U
#define IOMUXC_DRAM_ADDR02                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E020CU
#define IOMUXC_DRAM_ADDR03                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0210U
#define IOMUXC_DRAM_ADDR04                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0214U
#define IOMUXC_DRAM_ADDR05                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0218U
#define IOMUXC_DRAM_ADDR06                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E021CU
#define IOMUXC_DRAM_ADDR07                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0220U
#define IOMUXC_DRAM_ADDR08                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0224U
#define IOMUXC_DRAM_ADDR09                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0228U
#define IOMUXC_DRAM_ADDR10                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E022CU
#define IOMUXC_DRAM_ADDR11                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0230U
#define IOMUXC_DRAM_ADDR12                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0234U
#define IOMUXC_DRAM_ADDR13                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0238U
#define IOMUXC_DRAM_ADDR14                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E023CU
#define IOMUXC_DRAM_ADDR15                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0240U
#define IOMUXC_DRAM_DQM0                                     0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0244U
#define IOMUXC_DRAM_DQM1                                     0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0248U
#define IOMUXC_DRAM_RAS_B                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E024CU
#define IOMUXC_DRAM_CAS_B                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0250U
#define IOMUXC_DRAM_CS0_B                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0254U
#define IOMUXC_DRAM_CS1_B                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0258U
#define IOMUXC_DRAM_SDWE_B                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E025CU
#define IOMUXC_DRAM_ODT0                                     0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0260U
#define IOMUXC_DRAM_ODT1                                     0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0264U
#define IOMUXC_DRAM_SDBA0                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0268U
#define IOMUXC_DRAM_SDBA1                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E026CU
#define IOMUXC_DRAM_SDBA2                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0270U
#define IOMUXC_DRAM_SDCKE0                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0274U
#define IOMUXC_DRAM_SDCKE1                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0278U
#define IOMUXC_DRAM_SDCLK0_P                                 0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E027CU
#define IOMUXC_DRAM_SDQS0_P                                  0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0280U
#define IOMUXC_DRAM_SDQS1_P                                  0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0284U
#define IOMUXC_DRAM_RESET                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0288U
#define IOMUXC_GRP_ADDDS                                     0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0490U
#define IOMUXC_GRP_DDRMODE_CTL                               0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0494U
#define IOMUXC_GRP_B0DS                                      0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E0498U
#define IOMUXC_GRP_DDRPK                                     0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E049CU
#define IOMUXC_GRP_CTLDS                                     0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E04A0U
#define IOMUXC_GRP_B1DS                                      0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E04A4U
#define IOMUXC_GRP_DDRHYS                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E04A8U
#define IOMUXC_GRP_DDRPKE                                    0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E04ACU
#define IOMUXC_GRP_DDRMODE                                   0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E04B0U
#define IOMUXC_GRP_DDR_TYPE                                  0x00000000U, 0x0U, 0x00000000U, 0x0U, 0x020E04B4U

/*@}*/


/*!
 * @brief Sets the IOMUXC pin mux mode.
 * @note The first five parameters can be filled with the pin function ID macros.
 *
 * This is an example to set the ENET1_RX_DATA0 Pad as FLEXCAN1_TX:
 * @code
 * IOMUXC_SetPinMux(IOMUXC_ENET1_RX_DATA0_FLEXCAN1_TX, 0);
 * @endcode
 *
 * This is an example to set the GPIO1_IO02 Pad as I2C1_SCL:
 * @code
 * IOMUXC_SetPinMux(IOMUXC_GPIO1_IO02_I2C1_SCL, 0);
 * @endcode
 *
 * @param muxRegister  The pin mux register.
 * @param muxMode      The pin mux mode.
 * @param inputRegister The select input register.
 * @param inputDaisy   The input daisy.
 * @param configRegister  The config register.
 * @param inputOnfield   Software input on field (SION Bit value, 0-disabled; 1-enabled).
 */
void IOMUXC_SetPinMux(uint32_t muxRegister,
                                    uint32_t muxMode,
                                    uint32_t inputRegister,
                                    uint32_t inputDaisy,
                                    uint32_t configRegister,
                                    uint32_t inputOnfield);


/*!
 * @brief Sets the IOMUXC pin configuration.
 * @note The previous five parameters can be filled with the pin function ID macros.
 *
 * This is an example to set pin configuration for IOMUXC_GPIO1_IO02_I2C1_SCL:
 * @code
 * IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO02_I2C1_SCL, IOMUXC_SW_PAD_CTL_PAD_PUE_MASK | IOMUXC_SW_PAD_CTL_PAD_PUS(2U));
 * @endcode
 *
 * @param muxRegister  The pin mux register.
 * @param muxMode      The pin mux mode.
 * @param inputRegister The select input register.
 * @param inputDaisy   The input daisy.
 * @param configRegister  The config register.
 * @param configValue   The pin config value.
 */
void IOMUXC_SetPinConfig(uint32_t muxRegister,
                                    uint32_t muxMode,
                                    uint32_t inputRegister,
                                    uint32_t inputDaisy,
                                    uint32_t configRegister,
                                    uint32_t configValue);


#endif
