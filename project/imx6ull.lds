OUTPUT_FORMAT("elf32-littlearm", "elf32-littlearm", "elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(_start)

SECTIONS{
    . = 0x87800000;
    . = ALIGN(4);
    .text :
    {
        obj/start.o
        *(.text)
    }

    . = ALIGN(4);
    .rodata :
    {
        *(.rodata*)
    }

    . = ALIGN(4);
    .data :
    {
        *(.data)
    }

    . = ALIGN(4);
    __bss_start = .;
    .bss :
    {
        *(.bss)
        *(COMMON)
    }
    __bss_end = .;
}