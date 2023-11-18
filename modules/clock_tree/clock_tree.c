#include "clock_tree.h"

/**
 * @brief Init the clock_tree when boot the board.
 * @details Pllarm：    1056Mhz
 * 
 * @details Pllsys：    528Mhz
 * @details Pll2_pfd0： 352Mhz
 * @details Pll2_pfd1： 594Mhz
 * @details Pll2_pfd2： 400Mhz (actual 396Mhz)
 * @details Pll2_pfd3： 297Mhz
 * 
 * @details Pllusb1：   480Mhz
 * @details Pll3_pfd0： 720Mhz
 * @details Pll3_pfd1： 540Mhz
 * @details Pll3_pfd2： 508.2Mhz
 * @details Pll3_pfd3： 454.7Mhz
 * 
 * @details PllAudio：  650Mhz
 * @details PllVideo：  650Mhz
 * @details PllEnet0:   125Mhz
 * @details PllEnet1：  125Mhz
 * @details PllEnet2：  25Mhz
 * 
 * @details Pllusb2:    480Mhz
 * 
 * @details ARM_CLOCK_ROOT  528
 * @details AHB_CLOCK_ROOT  132Mhz
 * @details IPG_CLK_ROOT    66Mhz
 * @details PERCLK_CLK_ROOT 66Mhz
*/
void clock_tree_init(void)
{
    clock_arm_pll_config_t armpll_config = {
        .loopDivider = 88,
        };

    // PllArm=1056Mhz，ARM_CLOCK_ROOT=528Mhz;
    //1- switch pll1_sw_clk to osc_clk;
    if(((CCM->CCSR & CCM_CCSR_PLL1_SW_CLK_SEL_MASK) > CCM_CCSR_PLL1_SW_CLK_SEL_SHIFT) == 0x0)
    {
        CLOCK_SetMux(kCLOCK_StepMux, 0);
        CLOCK_SetMux(kCLOCK_Pll1SwMux, 1);
    }

    //2- set pll1_main_clk 1056Mhz
    CLOCK_InitArmPll(&armpll_config);

    //3- switch pll1_sw_clk to pll1_main_clk
    CLOCK_SetMux(kCLOCK_Pll1SwMux, 0);

    //4- set arm_podf=1, then arm_clock_root=pll1_sw_clk/2
    CLOCK_SetDiv(kCLOCK_ArmDiv, 1);


    // PllSys=528Mhz, Pll2_pfd0=352Mhz, Pll2_pfd1=594Mhz, Pll2_pfd2=396Mhz, pll2_pfd3=297Mhz;
    clock_sys_pll_config_t syspll_config = {
        .loopDivider = 1,
        .numerator = 0,
        .denominator = 1,
    };
    //1- set Pllsys 528Mhz
    CLOCK_InitSysPll(&syspll_config);

    //2- set Pll2_pfd0, frac=18*528/352=27
    CLOCK_InitSysPfd(kCLOCK_Pfd0, 27);

    //3- set pll2_pfd1, frac=18*528/594=16
    CLOCK_InitSysPfd(kCLOCK_Pfd1, 16);

    //4- set pll2_pfd2, frac=18*528/396=24
    //CLOCK_InitSysPfd(kCLOCK_Pfd2, 24);

    //5- set pll2_pfd3, frac=18*528/297=32
    CLOCK_InitSysPfd(kCLOCK_Pfd3, 32);

    // Pllusb1=480Mhz, Pll3_pfd0=720Mhz, Pll3_pfd1=540Mhz, Pll3_pfd2=508.2Mhz, Pll3_pfd3=454.7Mhz
    clock_usb_pll_config_t usb1pll_config = {
        .loopDivider = 0,
    };
    //1- set Pllusb1
    CLOCK_InitUsb1Pll(&usb1pll_config);

    //2- set pll3_pfd0, frac=18*480/720=12
    CLOCK_InitUsb1Pfd(kCLOCK_Pfd0, 12);

    //3- set pll3_pfd1, frac=18*480/540=16
    CLOCK_InitUsb1Pfd(kCLOCK_Pfd1, 16);

    //4- set pll3_pfd2, frac=18*480/508.2=17
    CLOCK_InitUsb1Pfd(kCLOCK_Pfd2, 17);

    //5- set pll_pfd3, frac=18*480/454.7=19
    CLOCK_InitUsb1Pfd(kCLOCK_Pfd3, 19);

    // Pllusb2=480Mhz
    clock_usb_pll_config_t usb2pll_config = {
        .loopDivider = 0,
    };
    CLOCK_InitUsb2Pll(&usb2pll_config);

    // PllAudio=650Mhz
    clock_audio_pll_config_t audiopll_config = {
        .loopDivider = 27,
        .numerator = 1,
        .denominator = 12,
        .postDivider = 1,
    };
    CLOCK_InitAudioPll(&audiopll_config);

    // PllVideo=650Mhz
    clock_video_pll_config_t videopll_config = {
        .loopDivider = 27,
        .numerator = 1,
        .denominator = 12,
        .postDivider = 1,
    };
    CLOCK_InitVideoPll(&videopll_config);

    // PllEnet0=125Mhz, PllEnet1=125Mhz, PllEnet2=25Mhz
    clock_enet_pll_config_t enetpll_config = {
        .enableClkOutput0 = true,
        .enableClkOutput1 = true,
        .enableClkOutput2 = true,
        .loopDivider0 = 3,
        .loopDivider1 = 3,
    };
    CLOCK_InitEnetPll(&enetpll_config);

    //set AHB_CLOCK_ROOT 132Mhz
    CLOCK_SetMux(kCLOCK_PrePeriphMux, 1);
    CLOCK_SetMux(kCLOCK_PeriphMux, 0);

    //set IPG_CLK_ROOT  66Mhz
    CLOCK_SetDiv(kCLOCK_IpgDiv, 1);

    //set PERCLK_CLK_ROOT 66Mhz
    CLOCK_SetMux(kCLOCK_PerclkMux, 0);
    CLOCK_SetDiv(kCLOCK_PerclkDiv, 0);
}

void clock_tree_enable()
{
    CCM->CCGR0 = 0xffffffff;
    CCM->CCGR1 = 0xffffffff;
    CCM->CCGR2 = 0xffffffff;
    CCM->CCGR3 = 0xffffffff;
    CCM->CCGR4 = 0xffffffff;
    CCM->CCGR5 = 0xffffffff;
    CCM->CCGR6 = 0xffffffff;
}