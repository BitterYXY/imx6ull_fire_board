#include "gpc.h"

void GPC_EnableIRQ(GPC_Type *base, uint32_t irqId)
{
    uint32_t irqRegNum = irqId / 32U;
    uint32_t irqRegShiftNum = irqId % 32U;

    //assert(irqRegNum > 0U);
    //assert(irqRegNum <= GPC_IMR_COUNT);
    base->IMR[irqRegNum - 1U] &= ~(1U << irqRegShiftNum);
}

void GPC_DisableIRQ(GPC_Type *base, uint32_t irqId)
{
    uint32_t irqRegNum = irqId / 32U;
    uint32_t irqRegShiftNum = irqId % 32U;

    //assert(irqRegNum > 0U);
    //assert(irqRegNum <= GPC_IMR_COUNT);
    base->IMR[irqRegNum - 1U] |= (1U << irqRegShiftNum);
}

bool GPC_GetIRQStatusFlag(GPC_Type *base, uint32_t irqId)
{
    uint32_t irqRegNum = irqId / 32U;
    uint32_t irqRegShiftNum = irqId % 32U;
    bool ret;

    //assert(irqRegNum > 0U);
    //assert(irqRegNum <= GPC_IMR_COUNT);
    ret = ((1U << irqRegShiftNum) == (base->ISR[irqRegNum - 1U] | (1U << irqRegShiftNum)));

    return ret;
}