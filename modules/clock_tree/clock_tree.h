#ifndef __CLOCK_TREE_H__
#define __CLOCK_TREE_H__

#include "clock.h"


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
void clock_tree_init(void);


/**
 * @brief enable all peripheral modules
*/
void clock_tree_enable(void);



#endif