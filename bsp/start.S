.global _start

_start:
    b   reset

reset:
    mrc     p15, 0, r0, c1, c0, 0       //read cp15 system control register to r0
    bic     r0, r0, #(0x1<<12)          //clear bit 12 (I), disable I Cache
    bic     r0, r0, #(0x1<<2)           //clear bit 2 (C),  disable D Cache
    bic     r0, r0, #0x2                //clear bit 1 (A),  disable alignment
    bic     r0, r0, #(0x1<<11)          //clear bit 11 (Z), disable branch prediction
    bic     r0, r0, #0x1                //clear bit 0 (M), disable MMU
    mcr     p15, 0, r0, c1, c0, 0       //write r0 back to cp15

    // let CPU on SVC mode
    mov     r0, #0x0
    mrs     r0, cpsr
    bic     r0, r0, #0x1f
    orr     r0, r0, #0x13
    msr     cpsr, R0

    ldr     sp, =0x84000000
    b   main

loop:
    b       loop

