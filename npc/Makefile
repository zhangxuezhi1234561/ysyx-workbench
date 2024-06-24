export NAME	   = core
export TargetV = ./vsrc/$(NAME).v
export TargetC = ./csrc/$(NAME).cpp
export TOPNAME = $(NAME)

MAKEFLAGS += -j 4

VSRC = $(shell find $(abspath ./vsrc) -name "*.v")
CSRC = $(abspath ./csrc/core.cpp)

WORK_DIR = $(shell pwd)
SIM_PATH = $(WORK_DIR)/csrc

UTIL_SRC = $(NPC_HOME)/csrc/monitor
UTIL_SRCS = $(shell find $(UTIL_SRC) -name "*.cpp")
UTIL_DIR = $(UTIL_SRC)/build
UTIL_OBJS := $(addprefix $(UTIL_DIR)/, $(addsuffix .o, $(basename $(notdir $(UTIL_SRCS)))))

INC_PATH ?= $(NPC_HOME)/csrc/include
INCLUDES = $(addprefix -I, $(INC_PATH))
CFLAGS += -MMD -O3 $(INCLUDES) -std=c++14 -fno-exceptions -fPIE 
HW_PATH += $(NPC_HOME)/vsrc

#archive build rules
UTIL_ARCHIVE = $(UTIL_DIR)/util.a
$(UTIL_DIR)/%.o: $(UTIL_SRC)/%.cpp
	@echo + CXX "->" NPC_HOME/$(shell realpath $< --relative-to $(NPC_HOME))
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) -c -o $@ $<

$(UTIL_ARCHIVE): $(UTIL_OBJS) 
	@echo + AR "->" $(shell realpath $< --relative-to $(NPC_HOME))
	@ar rcs $(UTIL_ARCHIVE) $(UTIL_OBJS)

-include $(UTIL_OBJS:.o=.d)

NPCFLAGS = -i $(AM_HOME)/../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
NPCFLAGS += -d $(NEMU_HOME)/build/riscv32-nemu-interpreter-so

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

VERILATOR_FLAGS += -cc --exe
#VERILATOR_FLAGS += -x-assign fast
VERILATOR_FLAGS += -Wall -Wno-PINCONNECTEMPTY -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN -Wno-SYNCASYNCNET -Wno-WIDTHEXPAND
VERILATOR_FLAGS += --trace --timescale "1ns/1ns"
VERILATOR_FLAGS += --assert
VERILATOR_FLAGS += --coverage $(addprefix -CFLAGS , $(CFLAGS))
VERILATOR_FLAGS += $(INCLUDES) -y $(HW_PATH) -y $(SIM_PATH) 

VERILATOR_INPUT = $(TargetV) $(TargetC) $(UTIL_ARCHIVE)   #$(TargetC)	#$(UTIL_ARCHIVE)

######################################################################
default: run

run:
	@echo
	@echo "-- Verilator tracing example"
#	@echo $(INCLUDES)

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo
	@echo "-- BUILD -------------------"
	$(MAKE) -j -C obj_dir -f ../Makefile_obj

	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/V$(TOPNAME) +trace $(NPCFLAGS)

	@echo
	@echo "-- COVERAGE ----------------"
	@rm -rf logs/annotated
	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat

	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, open vlt_dump.vcd in a waveform viewer"
	@echo
	$(call git_commit, "run") # DO NOT REMOVE THIS LINE!!!

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core *.vcd build $(UTIL_DIR)

.PHONY:default all clean run

include ../Makefile
