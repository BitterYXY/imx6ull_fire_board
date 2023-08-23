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

OBJDIR 			:= obj

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

INCLUDE			:= $(patsubst %, -I %, $(INCDIRS))
SFILES			:= $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.S))
CFILES			:= $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.c))

SFILENDIR		:= $(notdir $(SFILES))
CFILENDIR		:= $(notdir $(CFILES))

SOBJS			:= $(patsubst %, $(OBJDIR)/%, $(SFILENDIR:.S=.o))
COBJS			:= $(patsubst %, $(OBJDIR)/%, $(CFILENDIR:.c=.o))
OBJS			:= $(SOBJS) $(COBJS)

VPATH			:= $(SRCDIRS)


TARGET			?= fire_board_led

all: $(OBJDIR) $(TARGET).bin


$(TARGET).bin : $(OBJS)
	$(Q)$(LD)	-T$(LDS) -o $(TARGET).elf $^
	$(Q)$(OBJCOPY)	-O binary -S -g $(TARGET).elf $@

$(SOBJS) : $(OBJDIR)/%.o : %.S
	$(Q)$(CC)	-Wall -nostdlib -c -O2 $(INCLUDE) -o $@ $<

$(COBJS) : $(OBJDIR)/%.o : %.c
	$(Q)$(CC)	-Wall -nostdlib -c -O2 $(INCLUDE) -o $@ $<


.PHONY: clean $(OBJDIR)

$(OBJDIR):
	$(shell mkdir -p $(OBJDIR))

clean:
	$(Q)rm -rf $(TARGET).elf $(TARGET).bin $(OBJDIR)/
