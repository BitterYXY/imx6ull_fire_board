#include "imx6ull.h"
#include "clock.h"

void clock_all_enable()
{
    *CCM_CCGR0  = 0xffffffff;
    *CCM_CCGR1  = 0xffffffff;
    *CCM_CCGR2  = 0xffffffff;
    *CCM_CCGR3  = 0Xffffffff;
    *CCM_CCGR4  = 0xffffffff;
    *CCM_CCGR5  = 0xffffffff;
    *CCM_CCGR6  = 0xffffffff;
}