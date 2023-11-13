CROSS_COMPILE	?= arm-none-eabi-
CC				:= $(CROSS_COMPILE)gcc
LD				:= $(CROSS_COMPILE)ld
OBJCOPY			:= $(CROSS_COMPILE)objcopy
GCC				:= gcc

# Use "make V=1" to see the full commands
ifeq ("$(origin V)", "command line")
	KBUILD_VERBOSE = $(V)
endif
ifndef KBUILD_VERBOSE
	KBUILD_VERBOSE = 0
endif

ifeq ($(KBUILD_VERBOSE), 1)
	Q =
else
	Q = @
endif

# Use "make T=xxx" to compile specific target
ifeq ("$(origin T)", "command line")
	KBUILD_TARGET = $(T)
endif
ifndef KBUILD_TARGET
	KBUILD_TARGET =
endif

ifneq ($(KBUILD_TARGET), )
	TARGET := $(KBUILD_TARGET)
else
	TARGET := fire_board_led
endif


INCDIRS			:= 	include \
					lib \
					bsp/clock \
					bsp/uart \
					bsp/gic \
					bsp/gpio \
					bsp/iomux \
					bsp/pmu \
					bsp/gpc \
					modules/rgb_led \
					modules/key \
					modules/key_interrupt \
					modules/beep 


SRCDIRS			:=	project/$(TARGET) \
					lib \
					bsp \
					bsp/clock \
					bsp/uart \
					bsp/gic \
					bsp/gpio \
					bsp/iomux \
					bsp/pmu \
					bsp/gpc \
					modules/rgb_led \
					modules/key \
					modules/key_interrupt \
					modules/beep 

LDS				:= project/imx6ull.lds

OBJDIR 			:= obj


INCLUDE			:= $(patsubst %, -I %, $(INCDIRS))
SFILES			:= $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.S))
CFILES			:= $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.c))

SFILENDIR		:= $(notdir $(SFILES))
CFILENDIR		:= $(notdir $(CFILES))

SOBJS			:= $(patsubst %, $(OBJDIR)/%, $(SFILENDIR:.S=.o))
COBJS			:= $(patsubst %, $(OBJDIR)/%, $(CFILENDIR:.c=.o))
OBJS			:= $(SOBJS) $(COBJS)

VPATH			:= $(SRCDIRS)


$(TARGET): $(OBJDIR) $(TARGET).bin tools imxfile


$(TARGET).bin : $(OBJS)
	$(Q)$(LD)	-T$(LDS) -o $(TARGET).elf $^
	$(Q)$(OBJCOPY)	-O binary -S -g $(TARGET).elf $@

$(SOBJS) : $(OBJDIR)/%.o : %.S
	$(Q)$(CC)	-Wall -nostdlib -fno-builtin -c -O2 $(INCLUDE) -o $@ $<

$(COBJS) : $(OBJDIR)/%.o : %.c
	$(Q)$(CC)	-Wall -nostdlib -fno-builtin -c -O2 $(INCLUDE) -o $@ $<

tools: bintoimx

bintoimx: tools/bintoimx.c
	$(Q)$(GCC) $^ -o $@


.PHONY: clean download $(OBJDIR) imxfile

$(OBJDIR):
	$(shell mkdir -p $(OBJDIR))

imxfile:
	$(shell ./bintoimx $(TARGET).bin)

download:
#	$(shell dd iflag=dsync oflag=dsync if=$(TARGET).imx of=/dev/sdb seek=2 1 > /dev/null 2>&1)
	$(shell dd iflag=dsync oflag=dsync if=$(TARGET).imx of=/dev/sdb seek=2)

clean:
	$(Q)rm -rf $(TARGET).elf $(TARGET).bin $(OBJDIR)/ $(TARGET).imx bintoimx
