#ifndef __IMX6ULL_H__
#define __IMX6ULL_H__

#include "common.h"


/********************************************CCM: Clock Controller Module***************************************************/
//CCM_CCGR register are used to turn on/off each module independently.
//00: Clock is off during all modes. 
//01: Clock is on in run mode, but off in WAIT and STOP modes.
//10: Reserved.
//11: Clock is on during all modes, except STOP mode.

#define     CCM_CCGR0       (__I uint32_t*)0x20c4068
#define     CCM_CCGR1       (__I uint32_t*)0x20c406c
#define     CCM_CCGR2       (__I uint32_t*)0x20c4070
#define     CCM_CCGR3       (__I uint32_t*)0x20c4074
#define     CCM_CCGR4       (__I uint32_t*)0x20c4078
#define     CCM_CCGR5       (__I uint32_t*)0x20c407c
#define     CCM_CCGR6       (__I uint32_t*)0x20c4080





/***************************************************IOMUX Controller********************************************************/
/*IOMUX MODE */
//GPIO1_IO04
#define     IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO04    (__I uint32_t*)0x20e006c
#define     IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO04_GPIO1_IO04     0x5



//GPIO4_IO19
#define     IOMUXC_SW_MUX_CTL_PAD_CSI_VSYNC     (__I uint32_t*)0x20e01dc
#define     IOMUXC_SW_MUX_CTL_PAD_CSI_VSYNC_GPIO4_IO19      0X5


//GPIO4_IO20
#define     IOMUXC_SW_MUX_CTL_PAD_CSI_HSYNC     (__I uint32_t*)0x20e01e0
#define     IOMUXC_SW_MUX_CTL_PAD_CSI_HSYNC_GPIO4_IO20      0X5


/*IOMUX PAD*/
//GPIO1_IO04
#define     IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO04    (__I uint32_t*)0x20e02f8
#define     IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO04_GPIO1_IO04     0x1f838

//GPIO4_IO19
#define     IOMUXC_SW_PAD_CTL_PAD_CSI_VSYNC     (__I uint32_t*)0x20e0468
#define     IOMUXC_SW_PAD_CTL_PAD_CSI_VSYNC_GPIO1_IO19      0x1f838

//GPIO4_IO20
#define     IOMUXC_SW_PAD_CTL_PAD_CSI_HSYNC     (__I uint32_t*)0x20e046c
#define     IOMUXC_SW_PAD_CTL_PAD_CSI_HSYNC_GPIO4_IO20      0x1f838


/**********************************************************GPIO module*******************************************************/
#define     GPIO1_BASE      (__IO uint32_t*)0x209c000
#define     GPIO2_BASE      (__IO uint32_t*)0x20a0000
#define     GPIO3_BASE      (__IO uint32_t*)0x20a4000
#define     GPIO4_BASE      (__IO uint32_t*)0x20a8000
#define     GPIO5_BASE      (__IO uint32_t*)0x20ac000

struct GPIO_TYPE
{
    __IO uint32_t   DR;         //data register 1: high level, 0: low level;
    __IO uint32_t   GDIR;       //direction control register 1: output, 0: input;
    __O  uint32_t   PSR;        //pad status register (read-only)
    __IO uint32_t   ICR1;           //interrupt configurations for active condition (pin 0~15)  
                                //00: low level, 01: high level, 10: rising edge, 11: falling edge;
    __IO uint32_t   ICR2;       //interrupt configurations for active condition (pin 16~31)
                                    //00: low level, 01: high level, 10: rising edge, 11: falling edge;
    __IO uint32_t   IMR;        //interrupt mask    1: enable; 0: disable;
    __IO uint32_t   ISR;        //interrupt status register when interrupting, the corresponding bit be set.
                                    //Status flags are cleard by writing a 1 to the corresponding bit position.
    __IO uint32_t   EDGE_SEL;   //when bit setting, rising edge or falling edge triger interrupt. 
                                    //(this will override ICR register)

};


#endif