CROSS_COMPILE	?= arm-none-eabi-
CC				:= $(CROSS_COMPILE)gcc
LD				:= $(CROSS_COMPILE)ld
OBJCOPY			:= $(CROSS_COMPILE)objcopy

INCDIRS			:= 	include \
					lib \
					bsp/clock \
					bsp/rgb_led

SRCDIRS			:=	project/fire_board_led \
					lib \
					bsp \
					bsp/clock \
					bsp/rgb_led

LDS				:= project/imx6ull.lds

INCLUDE			:= $(patsubst %, -I %, $(INCDIRS))
SFILES			:= $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.S))
CFILES			:= $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.c))

SFILENDIR		:= $(notdir $(SFILES))
CFILENDIR		:= $(notdir $(CFILES))

SOBJS			:= $(patsubst %, obj/%, $(SFILENDIR: .S=.o))
COBJS			:= $(patsubst %, obj/%, $(CFILENDIR: .c=.o))
OBJS			:= $(SOBJS) $(COBJS)

VPATH			:= $(SRCDIRS)


TARGET			?= fire_board_led

$(TARGET).bin : $(OBJS)
	$(LD)	-T$(LDS) -o $(TARGET).elf $^
	$(OBJCOPY)	-O binary -S -g $(TARGET).elf $@

$(SOBJS) : obj/%.o : %.S
	$(CC)	-Wall -nostdlib -c -O2 $(INCLUDE) -o $@ $<

$(COBJS) : obj/%.o : %.c
	$(CC)	-Wall -nostdlib -c -O2 $(INCLUDE) -o $@ $<

.PHONY: clean
clean:
	rm -rf $(TARGET).elf $(TARGET).bin obj/
