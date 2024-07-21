// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCORE__DPI_H_
#define VERILATED_VCORE__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_excp.v:47:34
    extern void npc_stop(int a, int b);
    // DPI import at /home/pro/ysyx/ysyx-workbench/npc/vsrc/lsu.v:20:29
    extern int pmem_read(int raddr, int len);
    // DPI import at /home/pro/ysyx/ysyx-workbench/npc/vsrc/lsu.v:21:30
    extern void pmem_write(int waddr, int wdata, char wmask);
    // DPI import at /home/pro/ysyx/ysyx-workbench/npc/vsrc/RegisterFile.v:41:31
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
