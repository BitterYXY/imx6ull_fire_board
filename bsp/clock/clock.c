#include "clock.h"

/**
 * description  : enable all peripheral module
 * param        : none
 * return       : none
*/
void clock_all_enable(void)
{
    //*CCM_CCGR0  = 0xffffffff;
    CCM->CCGR0  = 0xffffffff;
    //*CCM_CCGR1  = 0xffffffff;
    CCM->CCGR1  = 0xffffffff;
    //*CCM_CCGR2  = 0xffffffff;
    CCM->CCGR2  = 0xffffffff;
    //*CCM_CCGR3  = 0Xffffffff;
    CCM->CCGR3  = 0xffffffff;
    //*CCM_CCGR4  = 0xffffffff;
    CCM->CCGR4  = 0xffffffff;
    //*CCM_CCGR5  = 0xffffffff;
    CCM->CCGR5  = 0xffffffff;
    //*CCM_CCGR6  = 0xffffffff;
    CCM->CCGR6  = 0xffffffff;
}


void clock_init(void)
{
    unsigned int reg = 0;

    /*Setting arm_clk_root=528M */
    if((((CCM->CCSR) >> CCM_CCSR_PLL1_SW_CLK_SEL_SHIFT) & 0x1) == 0)
    {
        CCM->CCSR &= ~CCM_CCSR_STEP_SEL(1);
        CCM->CCSR |= CCM_CCSR_PLL1_SW_CLK_SEL(1);
    }

    //CCM_ANALOG->PLL_ARM = CCM_ANALOG_PLL_ARM_ENABLE(1) | CCM_ANALOG_PLL_ARM_DIV_SELECT(88);
    CCM_ANALOG->PLL_ARM |= CCM_ANALOG_PLL_ARM_DIV_SELECT(88);
    CCM->CCSR &= ~CCM_CCSR_PLL1_SW_CLK_SEL(1);
    CCM->CACRR = CCM_CACRR_ARM_PODF(1);
    while((((CCM->CDHIPR) >> CCM_CDHIPR_ARM_PODF_BUSY_SHIFT) & 0x1) == 1) ;

    /*Setting pll2(sys pll) and its pfd*/
    reg = CCM_ANALOG->PFD_528;
    reg &= ~(0x3f3f3f3f);
    reg |= CCM_ANALOG_PFD_528_PFD3_FRAC(32);    //PLL2 PFD3 = 528*18/32 = 297MHz
    reg |= CCM_ANALOG_PFD_528_PFD2_FRAC(24);    //PLL2 PFD2 = 528*18/24 = 396MHz
    reg |= CCM_ANALOG_PFD_528_PFD1_FRAC(16);    //PLL2 PFD1 = 528*18/16 = 594MHz
    reg |= CCM_ANALOG_PFD_528_PFD0_FRAC(27);    //PLL2 PFD0 = 528*18/27 = 352MHz
    CCM_ANALOG->PFD_528 = reg;

    /*Setting pll3(usb1) and its pfd*/
    reg = 0;
    reg = CCM_ANALOG->PFD_480;
    reg &= ~(0x3f3f3f3f);
    reg |= CCM_ANALOG_PFD_480_PFD3_FRAC(19);    //PLL3 PFD3 = 480*18/19 = 454.74MHz
    reg |= CCM_ANALOG_PFD_480_PFD2_FRAC(17);    //PLL3 PFD2 = 480*18/17 = 508.24MHz
    reg |= CCM_ANALOG_PFD_480_PFD1_FRAC(16);    //PLL3 PFD1 = 480*18/16 = 540MHz
    reg |= CCM_ANALOG_PFD_480_PFD0_FRAC(12);    //PLL3 PFD0 = 480*18/12 = 720MHz
    CCM_ANALOG->PFD_480 = reg;

    /*Setting ahb_clk_root = 132MHz (permitting ahb_clk_root 6Mhz~132Mhz)*/
    CCM->CBCMR &= ~CCM_CBCMR_PRE_PERIPH_CLK_SEL(3);
    CCM->CBCMR |= CCM_CBCMR_PRE_PERIPH_CLK_SEL(1);
    CCM->CBCDR &= ~CCM_CBCDR_PERIPH_CLK_SEL(1);
    //while(CCM->CDHIPR & (1 << CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT));
    while((((CCM->CDHIPR) >> CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT) & 0x1) == 1) ;

#if 0
    //disable ahb_clk_root before change ahb podf, otherwise abnormal.
    CCM->CBCDR &= ~CCM_CBCDR_AHB_PODF(7);
    CCM->CBCDR |= CCM_CBCDR_AHB_PODF(2);
    //while(CCM->CDHIPR & (1 << CCM_CDHIPR_AHB_PODF_BUSY_SHIFT));
    while((((CCM->CDHIPR) >> CCM_CDHIPR_AHB_PODF_BUSY_SHIFT) & 0x1) == 1) ;
#endif

    /*Setting ipg_clk_root = 66MHx (permitting ipg_clk_root 3MHz~66MHz)*/
    CCM->CBCDR &= ~CCM_CBCDR_IPG_PODF(3);
    CCM->CBCDR |= CCM_CBCDR_IPG_PODF(1);

    /*Setting perclk_clk_root = ipg_clk_root = 66MHz*/
    CCM->CSCMR1 &= ~CCM_CSCMR1_PERCLK_CLK_SEL(1);
    CCM->CSCMR1 &= ~CCM_CSCMR1_PERCLK_PODF(0x3f);

}

uint32_t CLOCK_GetFreq(clock_name_t name)
{
    uint32_t freq;

    switch (name)
    {
        case kCLOCK_CpuClk:
            switch (CCM->CCSR & (CCM_CCSR_STEP_SEL_MASK | CCM_CCSR_SECONDARY_CLK_SEL_MASK | CCM_CCSR_PLL1_SW_CLK_SEL_MASK))
            {
                /* ARM PLL ---> CPU Clock */
                case 0U:
                    freq = CLOCK_GetPllFreq(kCLOCK_PllArm);
                    break;

                /* Osc_clk (24M) ---> Step Clock ---> CPU Clock */
                case (CCM_CCSR_PLL1_SW_CLK_SEL_MASK):
                    freq = CLOCK_GetOscFreq();
                    break;

                /* PLL2 PFD2 ---> Secondary_clk ---> Step Clock ---> CPU Clock */
                case (CCM_CCSR_PLL1_SW_CLK_SEL_MASK | CCM_CCSR_STEP_SEL_MASK):
                    freq = CLOCK_GetSysPfdFreq(kCLOCK_Pfd2);
                    break;

                /* PLL2 ---> Secondary_clk ---> Step Clock ---> CPU Clock */
                case (CCM_CCSR_STEP_SEL_MASK | CCM_CCSR_SECONDARY_CLK_SEL_MASK | CCM_CCSR_PLL1_SW_CLK_SEL_MASK):
                    freq = CLOCK_GetPllFreq(kCLOCK_PllSys);
                    break;

                default:
                    freq = 0U;
                    break;
            }
            freq /= (((CCM->CACRR & CCM_CACRR_ARM_PODF_MASK) >> CCM_CACRR_ARM_PODF_SHIFT) + 1U);
            break;

        case kCLOCK_AxiClk:
            /* AXI alternative clock ---> AXI Clock */
            if (CCM->CBCDR & CCM_CBCDR_AXI_SEL_MASK)
            {
                /* PLL3 PFD1 ---> AXI alternative clock ---> AXI Clock */
                if (CCM->CBCDR & CCM_CBCDR_AXI_ALT_SEL_MASK)
                {
                    freq = CLOCK_GetUsb1PfdFreq(kCLOCK_Pfd1);
                }
                /* PLL2 PFD2 ---> AXI alternative clock ---> AXI Clock */
                else
                {
                    freq = CLOCK_GetSysPfdFreq(kCLOCK_Pfd2);
                }
            }
            /* Periph_clk ---> AXI Clock */
            else
            {
                freq = CLOCK_GetPeriphClkFreq();
            }

            freq /= (((CCM->CBCDR & CCM_CBCDR_AXI_PODF_MASK) >> CCM_CBCDR_AXI_PODF_SHIFT) + 1U);
            break;

        case kCLOCK_AhbClk:
            /* Periph_clk ---> AHB Clock */
            freq = CLOCK_GetPeriphClkFreq() / (((CCM->CBCDR & CCM_CBCDR_AHB_PODF_MASK) >> CCM_CBCDR_AHB_PODF_SHIFT) + 1U);
            break;

        case kCLOCK_IpgClk:
            /* Periph_clk ---> AHB Clock ---> IPG Clock */
            freq = CLOCK_GetPeriphClkFreq() / (((CCM->CBCDR & CCM_CBCDR_AHB_PODF_MASK) >> CCM_CBCDR_AHB_PODF_SHIFT) + 1U);
            freq /= (((CCM->CBCDR & CCM_CBCDR_IPG_PODF_MASK) >> CCM_CBCDR_IPG_PODF_SHIFT) + 1U);
            break;

        case kCLOCK_MmdcClk:
            /* periph2_clk2 ---> MMDC Clock */
            if (CCM->CBCDR & CCM_CBCDR_PERIPH2_CLK_SEL_MASK)
            {
                /* OSC ---> periph2_clk2 ---> MMDC Clock */
                if (CCM->CBCMR & CCM_CBCMR_PERIPH2_CLK2_SEL_MASK)
                {
                    freq = CLOCK_GetOscFreq();
                }
                /* pll3_sw_clk ---> periph2_clk2 ---> MMDC Clock */
                else
                {
                    freq = CLOCK_GetPllFreq(kCLOCK_PllUsb1);
                }

                freq /= (((CCM->CBCDR & CCM_CBCDR_PERIPH2_CLK2_PODF_MASK) >> CCM_CBCDR_PERIPH2_CLK2_PODF_SHIFT) + 1U);
            }
            /* pll2_main_clk ---> MMDC Clock */
            else
            {
                switch (CCM->CBCMR & CCM_CBCMR_PRE_PERIPH2_CLK_SEL_MASK)
                {
                    /* PLL2 ---> pll2_main_clk ---> MMDC Clock */
                    case CCM_CBCMR_PRE_PERIPH2_CLK_SEL(0U):
                        freq = CLOCK_GetPllFreq(kCLOCK_PllSys);
                        break;

                    /* PLL2 PFD2 ---> pll2_main_clk ---> MMDC Clock */
                    case CCM_CBCMR_PRE_PERIPH2_CLK_SEL(1U):
                        freq = CLOCK_GetSysPfdFreq(kCLOCK_Pfd2);
                        break;

                    /* PLL2 PFD0 ---> pll2_main_clk ---> MMDC Clock */
                    case CCM_CBCMR_PRE_PERIPH2_CLK_SEL(2U):
                        freq = CLOCK_GetSysPfdFreq(kCLOCK_Pfd0);
                        break;

                    /* PLL4 ---> pll2_main_clk ---> MMDC Clock */
                    case CCM_CBCMR_PRE_PERIPH2_CLK_SEL(3U):
                        freq = CLOCK_GetPllFreq(kCLOCK_PllAudio);
                        break;

                    default:
                        freq = 0U;
                        break;
                }
            }

            freq /= (((CCM->CBCDR & CCM_CBCDR_FABRIC_MMDC_PODF_MASK) >> CCM_CBCDR_FABRIC_MMDC_PODF_SHIFT) + 1U);
            break;

        case kCLOCK_OscClk:
            freq = CLOCK_GetOscFreq();
            break;
        case kCLOCK_RtcClk:
            freq = CLOCK_GetRtcFreq();
            break;
        case kCLOCK_ArmPllClk:
            freq = CLOCK_GetPllFreq(kCLOCK_PllArm);
            break;
        case kCLOCK_Usb1PllClk:
            freq = CLOCK_GetPllFreq(kCLOCK_PllUsb1);
            break;
        case kCLOCK_Usb1PllPfd0Clk:
            freq = CLOCK_GetUsb1PfdFreq(kCLOCK_Pfd0);
            break;
        case kCLOCK_Usb1PllPfd1Clk:
            freq = CLOCK_GetUsb1PfdFreq(kCLOCK_Pfd1);
            break;
        case kCLOCK_Usb1PllPfd2Clk:
            freq = CLOCK_GetUsb1PfdFreq(kCLOCK_Pfd2);
            break;
        case kCLOCK_Usb1PllPfd3Clk:
            freq = CLOCK_GetUsb1PfdFreq(kCLOCK_Pfd3);
            break;
        case kCLOCK_Usb2PllClk:
            freq = CLOCK_GetPllFreq(kCLOCK_PllUsb2);
            break;
        case kCLOCK_SysPllClk:
            freq = CLOCK_GetPllFreq(kCLOCK_PllSys);
            break;
        case kCLOCK_SysPllPfd0Clk:
            freq = CLOCK_GetSysPfdFreq(kCLOCK_Pfd0);
            break;
        case kCLOCK_SysPllPfd1Clk:
            freq = CLOCK_GetSysPfdFreq(kCLOCK_Pfd1);
            break;
        case kCLOCK_SysPllPfd2Clk:
            freq = CLOCK_GetSysPfdFreq(kCLOCK_Pfd2);
            break;
        case kCLOCK_SysPllPfd3Clk:
            freq = CLOCK_GetSysPfdFreq(kCLOCK_Pfd3);
            break;
        case kCLOCK_EnetPll0Clk:
            freq = CLOCK_GetPllFreq(kCLOCK_PllEnet0);
            break;
        case kCLOCK_EnetPll1Clk:
            freq = CLOCK_GetPllFreq(kCLOCK_PllEnet1);
            break;
        case kCLOCK_EnetPll2Clk:
            freq = CLOCK_GetPllFreq(kCLOCK_PllEnet2);
            break;
        case kCLOCK_AudioPllClk:
            freq = CLOCK_GetPllFreq(kCLOCK_PllAudio);
            break;
        case kCLOCK_VideoPllClk:
            freq = CLOCK_GetPllFreq(kCLOCK_PllVideo);
            break;
        default:
            freq = 0U;
            break;
    }

    return freq;
}

