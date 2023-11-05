#include "gic.h"

/**
 * Obtain the GIC based address
*/
uint32_t __get_CBAR(void)
{
      uint32_t __dst;
      __asm("mrc p15, 4, %0, c15, c0, 0"
            : "=r"(__dst)
      );
      return __dst;
}

void GIC_Init(void)
{
    uint32_t irqRegs;
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);

    irqRegs = (gic->D_TYPER & 0x1FUL) + 1;          //total (irqRegs+1)*32 interrupts

    for(int i=0; i<irqRegs; ++i)
    {
        gic->D_ICENABLER[i] = 0xFFFFFFFFUL;
    }

    //Cortex-A7 support 32 priority
    gic->C_PMR = (0xFFUL << (8 - __GIC_PRIO_BITS)) & 0xFFUL;

    //No subpriority, all priority level allows preemption
    gic->C_BPR = 7 - __GIC_PRIO_BITS;

    //Enable the distributor
    gic->D_CTLR = 0x1UL;

    //Enable the CPU interface
    gic->C_CTLR = 0x1UL;
}

/**
 * Enable forwarding of the IRQn interrupt from the Distributor to the CPU interfaces. 
*/
void GIC_EnableIRQ(IRQn_Type IRQn)
{
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);
    gic->D_ISENABLER[((uint32_t)(int32_t)IRQn) >> 5] |= (0x1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}

/**
 * Disable forwarding of the IRQn interrupt from the Distributor to the CPU interfaces.
*/
void GIC_DisableIRQ(IRQn_Type IRQn)
{
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);
    gic->D_ICENABLER[((uint32_t)(int32_t)IRQn) >> 5] |= (0x1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}

/**
 * Obtain the interrupt ID of the signaled interrupt.
*/
uint32_t GIC_AcknowledgeIRQ(void)
{
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);
    return gic->C_IAR & 0x1FFFUL;
}

/**
 * Write GICC_EOIR to inform the CPU interface that the processor has completed the processing 
 * of the specified interrupt by value.
 * 
 * The value should be got from GIC_AcknowledgeIRQ function.
*/
void GIC_DeactivateIRQ(uint32_t value)
{
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);
    gic->C_EOIR = value;
}

/**
 * Indicates the Running priority of the CPU interface.
 * 
*/
uint32_t GIC_GetRunningPriority(void)
{
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);
    return gic->C_RPR & 0xFFUL;
}

void GIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);
    gic->C_BPR = PriorityGroup & 0x7UL;
}

uint32_t GIC_GetPriorityGrouping(void)
{
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);
    return gic->C_BPR & 0x7UL;
}

/**
 * Set the priority of the IRQn interrupt.
*/
void GIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);
    gic->D_IPRIORITYR[((uint32_t)(int32_t)IRQn)] = (uint8_t)((priority << (8-__GIC_PRIO_BITS)) & 0xFFUL);
}

/**
 * Get the priority of the IRQn interrupt.
*/
uint32_t GIC_GetPriority(IRQn_Type IRQn)
{
    GIC_Type *gic = (GIC_Type *)(__get_CBAR() & 0xFFFF0000UL);
    return (((uint32_t)gic->D_IPRIORITYR[(uint32_t)(int32_t)IRQn]) >> (8 - __GIC_PRIO_BITS));
}


static unsigned int irqNesting;             //the counter of interrupt nested
static sys_irq_handle_t irqTable[NUMBER_OF_INT_VECTORS];

/**
 * Setting the offset of interrupt table
*/
void __set_VBAR(uint32_t vbar)
{
    __asm("mcr p15, 0, %0, c12, c0, 0"
          :
          : "r"(vbar)
          );
}

/**
 * Register the handler function for the specified interrupt number
*/
void system_register_irqhandler(IRQn_Type irq, system_irq_handler_t handler, void *userParam)
{
    irqTable[irq].irqHandler = handler;
    irqTable[irq].userParam = userParam;
}

/**
 * the default interrupt handler
*/
void default_irqhandler(unsigned int giccIar, void *userParam)
{
    while (TRUE)
    {
        /* code */
    }
}

/**
 * Init irq table
*/
void system_irqtable_init(void)
{
    unsigned int i = 0;
    irqNesting = 0;

    for(i=0; i<NUMBER_OF_INT_VECTORS; ++i)
    {
        system_register_irqhandler((IRQn_Type)i, default_irqhandler, NULL);
    }
}

/**
 * the caller of IRQ handler
*/
void system_irqhandler(unsigned int giccIar)
{
    uint32_t intNum = giccIar & 0x3FFUL;

    if(intNum >= NUMBER_OF_INT_VECTORS)
    {
        return ;
    }

    irqNesting++;
    irqTable[intNum].irqHandler(intNum, irqTable[intNum].userParam);
    irqNesting--;
}

/**
 * the initialization of Interrupt module
*/
void int_init(void)
{
    GIC_Init();
    system_irqtable_init();
    __set_VBAR((uint32_t)0x87800000);
}
