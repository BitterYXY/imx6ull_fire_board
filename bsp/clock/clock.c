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

    CCM_ANALOG->PLL_ARM = CCM_ANALOG_PLL_ARM_ENABLE(1) | CCM_ANALOG_PLL_ARM_DIV_SELECT(88);
    CCM->CCSR &= ~CCM_CCSR_PLL1_SW_CLK_SEL(1);
    CCM->CACRR = CCM_CACRR_ARM_PODF(1);

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
    while(CCM->CDHIPR & (1 << CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT));
    CCM->CBCDR &= ~CCM_CBCDR_AHB_PODF(7);
    CCM->CBCDR |= CCM_CBCDR_AHB_PODF(2);
    while(CCM->CDHIPR & (1 << CCM_CDHIPR_AHB_PODF_BUSY_SHIFT));

    /*Setting ipg_clk_root = 66MHx (permitting ipg_clk_root 3MHz~66MHz)*/
    CCM->CBCDR &= ~CCM_CBCDR_IPG_PODF(3);
    CCM->CBCDR |= CCM_CBCDR_IPG_PODF(1);

    /*Setting perclk_clk_root = ipg_clk_root = 66MHz*/
    CCM->CSCMR1 &= ~CCM_CSCMR1_PERCLK_CLK_SEL(1);
    CCM->CSCMR1 &= ~CCM_CSCMR1_PERCLK_PODF(0x3f);

}