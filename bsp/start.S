.global _start

_start:
    //b   reset
    ldr     pc, =Reset_Handler          //Reset Interrupt
    ldr     pc, =Undefined_Handler      //Undefined Instruction Interrupt
    ldr     pc, =SVC_Handler            //Software Interrupt (SWI)
    ldr     pc, =PrefAbort_Handler      //Prefetch Abort Interrupt
    ldr     pc, =DataAbort_Handler      //Data Abort Interrupt
    ldr     pc, =NotUsed_Handler        //Not Used
    ldr     pc, =IRQ_Handler            //IRQ Interrupt
    ldr     pc, =FIQ_Handler            //FIQ Interrupt


Reset_Handler:

    cpsid   i               //disable global interrupt

    mrc     p15, 0, r0, c1, c0, 0       //read cp15 system control register to r0
    bic     r0, r0, #(0x1<<12)          //clear bit 12 (I), disable I Cache
    bic     r0, r0, #(0x1<<2)           //clear bit 2 (C),  disable D Cache
    bic     r0, r0, #0x2                //clear bit 1 (A),  disable alignment
    bic     r0, r0, #(0x1<<11)          //clear bit 11 (Z), disable branch prediction
    bic     r0, r0, #0x1                //clear bit 0 (M), disable MMU
    mcr     p15, 0, r0, c1, c0, 0       //write r0 back to cp15

    /*
    1. CPSR Register Bits
      31  30   29  28  27   26               7   6   5    4    3    2    1   0
      --------------------------------------------------------------------------
     | N | Z | C | V | Q |     DNZ(RAZ)    | I | F | T | M4 | M3 | M2 | M1 | M0 |
      --------------------------------------------------------------------------
    2. Processor Mode
      -------------------------------------------------------
     | M[4:0]       |   Processor Mode                       |
      -------------------------------------------------------
     | 0b 10000     |   User                                 |
     | 0b 10001     |   FIQ                                  |
     | 0b 10010     |   IRQ                                  |
     | 0b 10011     |   Supervisor(SVC, Software Interrupt)  |
     | 0b 10111     |   Abort                                |
     | 0b 11011     |   Undefined                            |
     | 0b 11111     |   System                               |
      --------------------------------------------------------
    */

    // Init the stack pointer on different mode
    // enter IRQ mode
    mrs     r0, cpsr
    bic     r0, r0, #0x1f
    orr     r0, r0, #0x12
    msr     cpsr, r0
    ldr     sp, =0x80600000

    //enter SYS mode
    mrs     r0, cpsr
    bic     r0, r0, #0x1f
    orr     r0, r0, #0x1f
    msr     cpsr, r0
    ldr     sp, =0x80400000
    
    // enter SVC mode
    mrs     r0, cpsr
    bic     r0, r0, #0x1f
    orr     r0, r0, #0x13
    msr     cpsr, r0
    ldr     sp, =0x80200000

    cpsie   i               //enable global interrupt

    b   main


Undefined_Handler:
    ldr r0, =Undefined_Handler
    bx r0

SVC_Handler:
    ldr r0, =SVC_Handler
    bx r0

PrefAbort_Handler:
    ldr r0, =PrefAbort_Handler
    bx r0

DataAbort_Handler:
    ldr r0, =DataAbort_Handler
    bx r0

NotUsed_Handler:
    ldr r0, =NotUsed_Handler
    bx r0

IRQ_Handler:
    push    {lr}                        //Save return address+4
    push    {r0-r3, r12}                //Push caller save registers
    mrs     r0, spsr                    //Save SPRS to allow interrupt reentry
    push    {r0}

    mrc     p15, 4, r1, c15, c0, 0      //CBAR-- Get GIC based address
    add     r1, r1, #0x2000             //offset of GIC CPU Interface
    ldr     r0, [r1, #0xc]              //GICC_IAR: obtain the Interrupt ID
    push    {r0, r1}

    cps     #0x13                       //enter SVC mode, change to Supervisor mode to allow interrupt reentry
    push    {lr}                        //Save Supervisor lr
    ldr     r2, =system_irqhandler
    blx     r2                          //Call system_irqhandler with param GCC

    pop     {lr}
    cps     #0x12                       //Back to IRQ mode
    pop     {r0, r1}
    str     r0, [r1, #0x10]             //Now IRQ handler finished: write to EOIR

    pop     {r0}
    msr     spsr_cxsf, r0               //restore the spsr
    pop     {r0-r3, r12}
    pop     {lr}
    subs    pc, lr, #4                  //lr-4 -> pc

FIQ_Handler:
    ldr r0, =FIQ_Handler
    bx r0
