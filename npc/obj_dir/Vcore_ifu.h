// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_IFU_H_
#define VERILATED_VCORE_IFU_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcore__Syms;
class Vcore_ifu_ifetch;


class Vcore_ifu final : public VerilatedModule {
  public:
    // CELLS
    Vcore_ifu_ifetch* inst_ifu_ifetch;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__ifu_o_rs1idx,4,0);
    VL_OUT8(__PVT__ifu_o_rs2idx,4,0);
    VL_OUT8(__PVT__ifu_o_valid,0,0);
    VL_IN8(__PVT__ifu_o_ready,0,0);
    VL_OUT8(__PVT__ifu_req_valid,0,0);
    VL_IN8(__PVT__ifu_req_ready,0,0);
    VL_IN8(__PVT__ifu_rsp_valid,0,0);
    VL_OUT8(__PVT__ifu_rsp_ready,0,0);
    VL_OUT8(__PVT__ifu_o_pc_vld,0,0);
    VL_IN(__PVT__pc_rtvec,31,0);
    VL_OUT(__PVT__ifu_o_ir,31,0);
    VL_OUT(__PVT__ifu_o_pc,31,0);
    VL_OUT(__PVT__ifu_req_pc,31,0);
    VL_IN(__PVT__ifu_rsp_instr,31,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_ifu(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_ifu();
    VL_UNCOPYABLE(Vcore_ifu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
