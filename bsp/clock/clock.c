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

void CLOCK_InitExternalClk(bool bypassXtalOsc)
{
    /* This device does not support bypass XTAL OSC. */
    //assert(!bypassXtalOsc);

    CCM_ANALOG->MISC0_CLR = CCM_ANALOG_MISC0_XTAL_24M_PWD_MASK; /* Power up */
    while ((PMU->LOWPWR_CTRL & PMU_LOWPWR_CTRL_XTALOSC_PWRUP_STAT_MASK) == 0)
    {
    }
    CCM_ANALOG->MISC0_SET = CCM_ANALOG_MISC0_OSC_XTALOK_EN_MASK; /* detect freq */
    while ((CCM_ANALOG->MISC0 & CCM_ANALOG_MISC0_OSC_XTALOK_MASK) == 0)
    {
    }
    CCM_ANALOG->MISC0_CLR = CCM_ANALOG_MISC0_OSC_XTALOK_EN_MASK;
}

void CLOCK_DeinitExternalClk(void)
{
    CCM_ANALOG->MISC0_SET = CCM_ANALOG_MISC0_XTAL_24M_PWD_MASK; /* Power down */
}

void CLOCK_SwitchOsc(clock_osc_t osc)
{
    if (osc == kCLOCK_RcOsc)
        PMU->LOWPWR_CTRL_SET = PMU_LOWPWR_CTRL_OSC_SEL_MASK;
    else
        PMU->LOWPWR_CTRL_CLR = PMU_LOWPWR_CTRL_OSC_SEL_MASK;
}

void CLOCK_InitRcOsc24M(void)
{
    PMU->LOWPWR_CTRL |= PMU_LOWPWR_CTRL_RC_OSC_EN_MASK;
}

void CLOCK_DeinitRcOsc24M(void)
{
    PMU->LOWPWR_CTRL &= ~PMU_LOWPWR_CTRL_RC_OSC_EN_MASK;
}

void CLOCK_InitArmPll(const clock_arm_pll_config_t *config)
{
    CCM_ANALOG->PLL_ARM = CCM_ANALOG_PLL_ARM_ENABLE_MASK |
                          CCM_ANALOG_PLL_ARM_DIV_SELECT(config->loopDivider);

    while ((CCM_ANALOG->PLL_ARM & CCM_ANALOG_PLL_ARM_LOCK_MASK) == 0)
    {
    }
}

void CLOCK_DeinitArmPll(void)
{
    CCM_ANALOG->PLL_ARM = CCM_ANALOG_PLL_ARM_POWERDOWN_MASK;
}

void CLOCK_InitSysPll(const clock_sys_pll_config_t *config)
{
    CCM_ANALOG->PLL_SYS = CCM_ANALOG_PLL_SYS_ENABLE_MASK |
                          CCM_ANALOG_PLL_SYS_DIV_SELECT(config->loopDivider);

    while ((CCM_ANALOG->PLL_SYS & CCM_ANALOG_PLL_SYS_LOCK_MASK) == 0)
    {
    }
}

void CLOCK_DeinitSysPll(void)
{
    CCM_ANALOG->PLL_SYS = CCM_ANALOG_PLL_SYS_POWERDOWN_MASK;
}

void CLOCK_InitUsb1Pll(const clock_usb_pll_config_t *config)
{
    CCM_ANALOG->PLL_USB1 = CCM_ANALOG_PLL_USB1_ENABLE_MASK      |
                           CCM_ANALOG_PLL_USB1_POWER_MASK       |
                           CCM_ANALOG_PLL_USB1_EN_USB_CLKS_MASK |
                           CCM_ANALOG_PLL_USB1_DIV_SELECT(config->loopDivider);

    while ((CCM_ANALOG->PLL_USB1 & CCM_ANALOG_PLL_USB1_LOCK_MASK) == 0)
    {
    }
}

void CLOCK_DeinitUsb1Pll(void)
{
    CCM_ANALOG->PLL_USB1 = 0U;
}

void CLOCK_InitUsb2Pll(const clock_usb_pll_config_t *config)
{
    CCM_ANALOG->PLL_USB2 = CCM_ANALOG_PLL_USB2_ENABLE_MASK      |
                           CCM_ANALOG_PLL_USB2_POWER_MASK       |
                           CCM_ANALOG_PLL_USB2_EN_USB_CLKS_MASK |
                           CCM_ANALOG_PLL_USB2_DIV_SELECT(config->loopDivider);

    while ((CCM_ANALOG->PLL_USB2 & CCM_ANALOG_PLL_USB2_LOCK_MASK) == 0)
    {
    }
}

void CLOCK_DeinitUsb2Pll(void)
{
    CCM_ANALOG->PLL_USB2 = 0U;
}

void CLOCK_InitAudioPll(const clock_audio_pll_config_t *config)
{
    uint32_t pllAudio;
    uint32_t misc2 = 0;

    CCM_ANALOG->PLL_AUDIO_NUM = CCM_ANALOG_PLL_AUDIO_NUM_A(config->numerator);
    CCM_ANALOG->PLL_AUDIO_DENOM = CCM_ANALOG_PLL_AUDIO_DENOM_B(config->denominator);

    /*
     * Set post divider:
     *
     * ------------------------------------------------------------------------
     * | config->postDivider | PLL_AUDIO[POST_DIV_SELECT]  | MISC2[AUDIO_DIV] |
     * ------------------------------------------------------------------------
     * |         1           |            2                |        0         |
     * ------------------------------------------------------------------------
     * |         2           |            1                |        0         |
     * ------------------------------------------------------------------------
     * |         4           |            2                |        3         |
     * ------------------------------------------------------------------------
     * |         8           |            1                |        3         |
     * ------------------------------------------------------------------------
     * |         16          |            0                |        3         |
     * ------------------------------------------------------------------------
     */
    pllAudio = CCM_ANALOG_PLL_AUDIO_ENABLE_MASK | CCM_ANALOG_PLL_AUDIO_DIV_SELECT(config->loopDivider);

    switch (config->postDivider)
    {
        case 16:
            pllAudio |= CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(0);
            misc2 = CCM_ANALOG_MISC2_AUDIO_DIV_MSB_MASK | CCM_ANALOG_MISC2_AUDIO_DIV_LSB_MASK;
            break;

        case 8:
            pllAudio |= CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(1);
            misc2 = CCM_ANALOG_MISC2_AUDIO_DIV_MSB_MASK | CCM_ANALOG_MISC2_AUDIO_DIV_LSB_MASK;
            break;

        case 4:
            pllAudio |= CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(2);
            misc2 = CCM_ANALOG_MISC2_AUDIO_DIV_MSB_MASK | CCM_ANALOG_MISC2_AUDIO_DIV_LSB_MASK;
            break;

        case 2:
            pllAudio |= CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(1);
            break;

        default:
            pllAudio |= CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(2);
            break;
    }

    CCM_ANALOG->MISC2 = (CCM_ANALOG->MISC2 & ~(CCM_ANALOG_MISC2_AUDIO_DIV_LSB_MASK | CCM_ANALOG_MISC2_AUDIO_DIV_MSB_MASK))
                      | misc2;

    CCM_ANALOG->PLL_AUDIO = pllAudio;

    while ((CCM_ANALOG->PLL_AUDIO & CCM_ANALOG_PLL_AUDIO_LOCK_MASK) == 0)
    {
    }
}

void CLOCK_DeinitAudioPll(void)
{
    CCM_ANALOG->PLL_AUDIO = CCM_ANALOG_PLL_AUDIO_POWERDOWN_MASK;
}

void CLOCK_InitVideoPll(const clock_video_pll_config_t *config)
{
    uint32_t pllVideo;
    uint32_t misc2 = 0;

    CCM_ANALOG->PLL_VIDEO_NUM = CCM_ANALOG_PLL_VIDEO_NUM_A(config->numerator);
    CCM_ANALOG->PLL_VIDEO_DENOM = CCM_ANALOG_PLL_VIDEO_DENOM_B(config->denominator);

    /*
     * Set post divider:
     *
     * ------------------------------------------------------------------------
     * | config->postDivider | PLL_VIDEO[POST_DIV_SELECT]  | MISC2[VIDEO_DIV] |
     * ------------------------------------------------------------------------
     * |         1           |            2                |        0         |
     * ------------------------------------------------------------------------
     * |         2           |            1                |        0         |
     * ------------------------------------------------------------------------
     * |         4           |            2                |        3         |
     * ------------------------------------------------------------------------
     * |         8           |            1                |        3         |
     * ------------------------------------------------------------------------
     * |         16          |            0                |        3         |
     * ------------------------------------------------------------------------
     */
    pllVideo = CCM_ANALOG_PLL_VIDEO_ENABLE_MASK | CCM_ANALOG_PLL_VIDEO_DIV_SELECT(config->loopDivider);

    switch (config->postDivider)
    {
        case 16:
            pllVideo |= CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT(0);
            misc2 = CCM_ANALOG_MISC2_VIDEO_DIV(3);
            break;

        case 8:
            pllVideo |= CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT(1);
            misc2 = CCM_ANALOG_MISC2_VIDEO_DIV(3);
            break;

        case 4:
            pllVideo |= CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT(2);
            misc2 = CCM_ANALOG_MISC2_VIDEO_DIV(3);
            break;

        case 2:
            pllVideo |= CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT(1);
            break;

        default:
            pllVideo |= CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT(2);
            break;
    }

    CCM_ANALOG->MISC2 = (CCM_ANALOG->MISC2 & ~CCM_ANALOG_MISC2_VIDEO_DIV_MASK) | misc2;

    CCM_ANALOG->PLL_VIDEO = pllVideo;

    while ((CCM_ANALOG->PLL_VIDEO & CCM_ANALOG_PLL_VIDEO_LOCK_MASK) == 0)
    {
    }
}

void CLOCK_DeinitVideoPll(void)
{
    CCM_ANALOG->PLL_VIDEO = CCM_ANALOG_PLL_VIDEO_POWERDOWN_MASK;
}

void CLOCK_InitEnetPll(const clock_enet_pll_config_t *config)
{
    uint32_t enet_pll = CCM_ANALOG_PLL_ENET_ENET1_DIV_SELECT(config->loopDivider1) |
                        CCM_ANALOG_PLL_ENET_ENET0_DIV_SELECT(config->loopDivider0);

    if (config->enableClkOutput0)
    {
        enet_pll |= CCM_ANALOG_PLL_ENET_ENET1_125M_EN_MASK;
    }

    if (config->enableClkOutput1)
    {
        enet_pll |= CCM_ANALOG_PLL_ENET_ENET2_125M_EN_MASK;
    }

    if (config->enableClkOutput2)
    {
        enet_pll |= CCM_ANALOG_PLL_ENET_ENET_25M_REF_EN_MASK;
    }

    CCM_ANALOG->PLL_ENET = enet_pll;

    /* Wait for stable */
    while ((CCM_ANALOG->PLL_ENET & CCM_ANALOG_PLL_ENET_LOCK_MASK) == 0)
    {
    }
}

void CLOCK_DeinitEnetPll(void)
{
    CCM_ANALOG->PLL_ENET = CCM_ANALOG_PLL_ENET_POWERDOWN_MASK;
}

uint32_t CLOCK_GetPllFreq(clock_pll_t pll)
{
    uint32_t freq;
    uint32_t divSelect;
    uint64_t freqTmp;

    const uint32_t enetRefClkFreq[] = {
        25000000U, /* 25M */
        50000000U, /* 50M */
        100000000U, /* 100M */
        125000000U /* 125M */
    };

    switch (pll)
    {
        case kCLOCK_PllArm:
            freq = ((CLOCK_GetOscFreq() * ((CCM_ANALOG->PLL_ARM & CCM_ANALOG_PLL_ARM_DIV_SELECT_MASK) >>
                                         CCM_ANALOG_PLL_ARM_DIV_SELECT_SHIFT)) >> 1U);
            break;

        case kCLOCK_PllSys:
            freq = CLOCK_GetOscFreq();

            /* PLL output frequency = Fref * (DIV_SELECT + NUM/DENOM). */
            freqTmp = ((uint64_t)freq * ((uint64_t)(CCM_ANALOG->PLL_SYS_NUM))) / ((uint64_t)(CCM_ANALOG->PLL_SYS_DENOM));

            if (CCM_ANALOG->PLL_SYS & CCM_ANALOG_PLL_SYS_DIV_SELECT_MASK)
            {
                freq *= 22U;
            }
            else
            {
                freq *= 20U;
            }

            freq += (uint32_t)freqTmp;
            break;

        case kCLOCK_PllUsb1:
            freq = (CLOCK_GetOscFreq() * ((CCM_ANALOG->PLL_USB1 & CCM_ANALOG_PLL_USB1_DIV_SELECT_MASK) ? 22U : 20U));
            break;

        case kCLOCK_PllAudio:
            freq = CLOCK_GetOscFreq();

            /* PLL output frequency = Fref * (DIV_SELECT + NUM/DENOM). */
            divSelect = (CCM_ANALOG->PLL_AUDIO & CCM_ANALOG_PLL_AUDIO_DIV_SELECT_MASK) >> CCM_ANALOG_PLL_AUDIO_DIV_SELECT_SHIFT;

            freqTmp = ((uint64_t)freq * ((uint64_t)(CCM_ANALOG->PLL_AUDIO_NUM))) / ((uint64_t)(CCM_ANALOG->PLL_AUDIO_DENOM));

            freq = freq * divSelect + (uint32_t)freqTmp;

            /* AUDIO PLL output = PLL output frequency / POSTDIV. */

            /*
             * Post divider:
             *
             * PLL_AUDIO[POST_DIV_SELECT]:
             * 0x00: 4
             * 0x01: 2
             * 0x02: 1
             *
             * MISC2[AUDO_DIV]:
             * 0x00: 1
             * 0x01: 2
             * 0x02: 1
             * 0x03: 4
             */
            switch (CCM_ANALOG->PLL_AUDIO & CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT_MASK)
            {
                case CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(0U):
                    freq = freq >> 2U;
                    break;

                case CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(1U):
                    freq = freq >> 1U;
                    break;

                default:
                    break;
            }

            switch (CCM_ANALOG->MISC2 & (CCM_ANALOG_MISC2_AUDIO_DIV_MSB_MASK | CCM_ANALOG_MISC2_AUDIO_DIV_LSB_MASK))
            {
                case CCM_ANALOG_MISC2_AUDIO_DIV_MSB(1) | CCM_ANALOG_MISC2_AUDIO_DIV_LSB(1):
                    freq >>= 2U;
                    break;

                case CCM_ANALOG_MISC2_AUDIO_DIV_MSB(0) | CCM_ANALOG_MISC2_AUDIO_DIV_LSB(1):
                    freq >>= 1U;
                    break;

                default:
                    break;
            }
            break;

        case kCLOCK_PllVideo:
            freq = CLOCK_GetOscFreq();

            /* PLL output frequency = Fref * (DIV_SELECT + NUM/DENOM). */
            divSelect = (CCM_ANALOG->PLL_VIDEO & CCM_ANALOG_PLL_VIDEO_DIV_SELECT_MASK) >> CCM_ANALOG_PLL_VIDEO_DIV_SELECT_SHIFT;

            freqTmp = ((uint64_t)freq * ((uint64_t)(CCM_ANALOG->PLL_VIDEO_NUM))) / ((uint64_t)(CCM_ANALOG->PLL_VIDEO_DENOM));

            freq = freq * divSelect + (uint32_t)freqTmp;

            /* VIDEO PLL output = PLL output frequency / POSTDIV. */

            /*
             * Post divider:
             *
             * PLL_VIDEO[POST_DIV_SELECT]:
             * 0x00: 4
             * 0x01: 2
             * 0x02: 1
             *
             * MISC2[VIDEO_DIV]:
             * 0x00: 1
             * 0x01: 2
             * 0x02: 1
             * 0x03: 4
             */
            switch (CCM_ANALOG->PLL_VIDEO & CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT_MASK)
            {
                case CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT(0U):
                    freq = freq >> 2U;
                    break;

                case CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT(1U):
                    freq = freq >> 1U;
                    break;

                default:
                    break;
            }

            switch (CCM_ANALOG->MISC2 & CCM_ANALOG_MISC2_VIDEO_DIV_MASK)
            {
                case CCM_ANALOG_MISC2_VIDEO_DIV(3):
                    freq >>= 2U;
                    break;

                case CCM_ANALOG_MISC2_VIDEO_DIV(1):
                    freq >>= 1U;
                    break;

                default:
                    break;
            }
            break;

        case kCLOCK_PllEnet0:
            divSelect = (CCM_ANALOG->PLL_ENET & CCM_ANALOG_PLL_ENET_ENET0_DIV_SELECT_MASK)
                      >> CCM_ANALOG_PLL_ENET_ENET0_DIV_SELECT_SHIFT;
            freq = enetRefClkFreq[divSelect];
            break;

        case kCLOCK_PllEnet1:
            divSelect = (CCM_ANALOG->PLL_ENET & CCM_ANALOG_PLL_ENET_ENET1_DIV_SELECT_MASK)
                      >> CCM_ANALOG_PLL_ENET_ENET1_DIV_SELECT_SHIFT;
            freq = enetRefClkFreq[divSelect];
            break;

        case kCLOCK_PllEnet2:
            /* ref_enetpll2 if fixed at 25MHz. */
            freq = 25000000UL;
            break;

        case kCLOCK_PllUsb2:
            freq = (CLOCK_GetOscFreq() * ((CCM_ANALOG->PLL_USB2 & CCM_ANALOG_PLL_USB2_DIV_SELECT_MASK) ? 22U : 20U));
            break;

        default:
            freq = 0U;
            break;
    }

    return freq;
}

void CLOCK_InitSysPfd(clock_pfd_t pfd, uint8_t pfdFrac)
{
    uint32_t pfdIndex = (uint32_t)pfd;
    uint32_t pfd528;

    pfd528 = CCM_ANALOG->PFD_528 & ~((CCM_ANALOG_PFD_528_PFD0_CLKGATE_MASK | CCM_ANALOG_PFD_528_PFD0_FRAC_MASK) << (8 * pfdIndex));

    /* Disable the clock output first. */
    CCM_ANALOG->PFD_528 = pfd528 | (CCM_ANALOG_PFD_528_PFD0_CLKGATE_MASK << (8 * pfdIndex));

    /* Set the new value and enable output. */
    CCM_ANALOG->PFD_528 = pfd528 | (CCM_ANALOG_PFD_528_PFD0_FRAC(pfdFrac) << (8 * pfdIndex));
}

void CLOCK_DeinitSysPfd(clock_pfd_t pfd)
{
    CCM_ANALOG->PFD_528 |= CCM_ANALOG_PFD_528_PFD0_CLKGATE_MASK << (8 * pfd);
}

void CLOCK_InitUsb1Pfd(clock_pfd_t pfd, uint8_t pfdFrac)
{
    uint32_t pfdIndex = (uint32_t)pfd;
    uint32_t pfd480;

    pfd480 = CCM_ANALOG->PFD_480 & ~((CCM_ANALOG_PFD_480_PFD0_CLKGATE_MASK | CCM_ANALOG_PFD_480_PFD0_FRAC_MASK) << (8 * pfdIndex));

    /* Disable the clock output first. */
    CCM_ANALOG->PFD_480 = pfd480 | (CCM_ANALOG_PFD_480_PFD0_CLKGATE_MASK << (8 * pfdIndex));

    /* Set the new value and enable output. */
    CCM_ANALOG->PFD_480 = pfd480 | (CCM_ANALOG_PFD_480_PFD0_FRAC(pfdFrac) << (8 * pfdIndex));
}

void CLOCK_DeinitUsb1Pfd(clock_pfd_t pfd)
{
    CCM_ANALOG->PFD_480 |= CCM_ANALOG_PFD_480_PFD0_CLKGATE_MASK << (8 * pfd);
}

uint32_t CLOCK_GetSysPfdFreq(clock_pfd_t pfd)
{
    uint32_t freq = CLOCK_GetPllFreq(kCLOCK_PllSys);

    switch (pfd)
    {
        case kCLOCK_Pfd0:
            freq /= ((CCM_ANALOG->PFD_528 & CCM_ANALOG_PFD_528_PFD0_FRAC_MASK) >> CCM_ANALOG_PFD_528_PFD0_FRAC_SHIFT);
            break;

        case kCLOCK_Pfd1:
            freq /= ((CCM_ANALOG->PFD_528 & CCM_ANALOG_PFD_528_PFD1_FRAC_MASK) >> CCM_ANALOG_PFD_528_PFD1_FRAC_SHIFT);
            break;

        case kCLOCK_Pfd2:
            freq /= ((CCM_ANALOG->PFD_528 & CCM_ANALOG_PFD_528_PFD2_FRAC_MASK) >> CCM_ANALOG_PFD_528_PFD2_FRAC_SHIFT);
            break;

        case kCLOCK_Pfd3:
            freq /= ((CCM_ANALOG->PFD_528 & CCM_ANALOG_PFD_528_PFD3_FRAC_MASK) >> CCM_ANALOG_PFD_528_PFD3_FRAC_SHIFT);
            break;

        default:
            freq = 0U;
			break;
    }
    freq *= 18U;

    return freq;
}

uint32_t CLOCK_GetUsb1PfdFreq(clock_pfd_t pfd)
{
    uint32_t freq = CLOCK_GetPllFreq(kCLOCK_PllUsb1);

    switch (pfd)
    {
        case kCLOCK_Pfd0:
            freq /= ((CCM_ANALOG->PFD_480 & CCM_ANALOG_PFD_480_PFD0_FRAC_MASK) >> CCM_ANALOG_PFD_480_PFD0_FRAC_SHIFT);
            break;

        case kCLOCK_Pfd1:
            freq /= ((CCM_ANALOG->PFD_480 & CCM_ANALOG_PFD_480_PFD1_FRAC_MASK) >> CCM_ANALOG_PFD_480_PFD1_FRAC_SHIFT);
            break;

        case kCLOCK_Pfd2:
            freq /= ((CCM_ANALOG->PFD_480 & CCM_ANALOG_PFD_480_PFD2_FRAC_MASK) >> CCM_ANALOG_PFD_480_PFD2_FRAC_SHIFT);
            break;

        case kCLOCK_Pfd3:
            freq /= ((CCM_ANALOG->PFD_480 & CCM_ANALOG_PFD_480_PFD3_FRAC_MASK) >> CCM_ANALOG_PFD_480_PFD3_FRAC_SHIFT);
            break;

        default:
            freq = 0U;
		    break;
    }
    freq *= 18U;

    return freq;
}

bool CLOCK_EnableUsbhs0Clock(clock_usb_src_t src, uint32_t freq)
{
    CCM->CCGR6 |= CCM_CCGR6_CG0_MASK ;
    USB1->USBCMD |= USBHS_USBCMD_RST_MASK;
    PMU->REG_3P0 = (PMU->REG_3P0 & (~PMU_REG_3P0_OUTPUT_TRG_MASK)) | (PMU_REG_3P0_OUTPUT_TRG(0x17) | PMU_REG_3P0_ENABLE_LINREG_MASK);
    return true;
}

bool CLOCK_EnableUsbhs0PhyPllClock(clock_usb_phy_src_t src, uint32_t freq)
{
    const clock_usb_pll_config_t g_ccmConfigUsbPll  = {.loopDivider = 0U};
    CLOCK_InitUsb1Pll(&g_ccmConfigUsbPll);
    USBPHY1->CTRL &= ~USBPHY_CTRL_SFTRST_MASK;         /* release PHY from reset */
    USBPHY1->CTRL &= ~USBPHY_CTRL_CLKGATE_MASK;

    USBPHY1->PWD  = 0;
    USBPHY1->CTRL |=
    USBPHY_CTRL_ENAUTOCLR_PHY_PWD_MASK |
    USBPHY_CTRL_ENAUTOCLR_CLKGATE_MASK |
    USBPHY_CTRL_ENUTMILEVEL2_MASK |
    USBPHY_CTRL_ENUTMILEVEL3_MASK;
    return true;
}

void CLOCK_DisableUsbhs0PhyPllClock(void)
{
    CLOCK_DeinitUsb1Pll();
    USBPHY1->CTRL |= USBPHY_CTRL_CLKGATE_MASK;          /* Set to 1U to gate clocks */

}

bool CLOCK_EnableUsbhs1Clock(clock_usb_src_t src, uint32_t freq)
{
    CCM->CCGR6 |= CCM_CCGR6_CG0_MASK ;
    USB1->USBCMD |= USBHS_USBCMD_RST_MASK;
    PMU->REG_3P0 = (PMU->REG_3P0 & (~PMU_REG_3P0_OUTPUT_TRG_MASK)) | (PMU_REG_3P0_OUTPUT_TRG(0x17) | PMU_REG_3P0_ENABLE_LINREG_MASK);
    return true;
}

bool CLOCK_EnableUsbhs1PhyPllClock(clock_usb_phy_src_t src, uint32_t freq)
{
    const clock_usb_pll_config_t g_ccmConfigUsbPll  = {.loopDivider = 0U};
    CLOCK_InitUsb2Pll(&g_ccmConfigUsbPll);
    USBPHY2->CTRL &= ~USBPHY_CTRL_SFTRST_MASK;         /* release PHY from reset */
    USBPHY2->CTRL &= ~USBPHY_CTRL_CLKGATE_MASK;

    USBPHY2->PWD  = 0;
    USBPHY2->CTRL |=
            USBPHY_CTRL_ENAUTOCLR_PHY_PWD_MASK |
            USBPHY_CTRL_ENAUTOCLR_CLKGATE_MASK |
            USBPHY_CTRL_ENUTMILEVEL2_MASK |
            USBPHY_CTRL_ENUTMILEVEL3_MASK;

    return true;
}

void CLOCK_DisableUsbhs1PhyPllClock(void)
{
    CLOCK_DeinitUsb2Pll();
    USBPHY2->CTRL |= USBPHY_CTRL_CLKGATE_MASK;          /* Set to 1U to gate clocks */
}




