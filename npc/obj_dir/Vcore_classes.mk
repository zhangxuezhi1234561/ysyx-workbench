# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcore.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcore \
	Vcore___024root__DepSet_h0a3cae5e__0 \
	Vcore___024root__DepSet_h134b5715__0 \
	Vcore_core__DepSet_hf216864e__0 \
	Vcore_core__DepSet_hf216864e__1 \
	Vcore_ifu_ifetch__DepSet_h34b6a80f__0 \
	Vcore_sirv_gnrl_dfflr__DepSet_hacca00fd__0 \
	Vcore_sirv_gnrl_dffl__DepSet_hab8abccf__0 \
	Vcore_exu_decode__DepSet_h66efcaa5__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcore___024root__Slow \
	Vcore___024root__DepSet_h0a3cae5e__0__Slow \
	Vcore___024root__DepSet_h134b5715__0__Slow \
	Vcore_core__Slow \
	Vcore_core__DepSet_hf216864e__0__Slow \
	Vcore_core__DepSet_hf216864e__1__Slow \
	Vcore_core__DepSet_heb712f05__0__Slow \
	Vcore_ifu__Slow \
	Vcore_ifu__DepSet_h2c3baf5a__0__Slow \
	Vcore_ifu__DepSet_h31465811__0__Slow \
	Vcore_ifu_ifetch__Slow \
	Vcore_ifu_ifetch__DepSet_h34b6a80f__0__Slow \
	Vcore_ifu_ifetch__DepSet_h28d158c4__0__Slow \
	Vcore_sirv_gnrl_dfflr__Slow \
	Vcore_sirv_gnrl_dfflr__DepSet_hacca00fd__0__Slow \
	Vcore_sirv_gnrl_dfflr__DepSet_hb094b1b2__0__Slow \
	Vcore_sirv_gnrl_dffl__Slow \
	Vcore_sirv_gnrl_dffl__DepSet_hab8abccf__0__Slow \
	Vcore_sirv_gnrl_dffl__DepSet_hb1d56584__0__Slow \
	Vcore_exu_decode__Slow \
	Vcore_exu_decode__DepSet_h66efcaa5__0__Slow \
	Vcore_exu_decode__DepSet_h7679fb6a__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcore__Dpi \
	Vcore__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcore__Syms \
	Vcore__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_cov \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
