// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_IFU_IFETCH_H_
#define VERILATED_VCORE_IFU_IFETCH_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcore__Syms;
class Vcore_sirv_gnrl_dfflr;
class Vcore_exu_decode;


class Vcore_ifu_ifetch final : public VerilatedModule {
  public:
    // CELLS
    Vcore_sirv_gnrl_dfflr* __PVT__pc_dfflr;
    Vcore_sirv_gnrl_dfflr* __PVT__ifu_pc_dfflr;
    Vcore_sirv_gnrl_dfflr* __PVT__ifu_ir_dfflr;
    Vcore_exu_decode* __PVT__inst_ifu_minidec__DOT__inst_exu_decode;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_OUT8(__PVT__ifu_req_valid,0,0);
        VL_IN8(__PVT__ifu_req_ready,0,0);
        VL_IN8(__PVT__ifu_rsp_valid,0,0);
        VL_OUT8(__PVT__ifu_rsp_ready,0,0);
        VL_OUT8(__PVT__ifu_o_rs1idx,4,0);
        VL_OUT8(__PVT__ifu_o_rs2idx,4,0);
        VL_OUT8(__PVT__ifu_o_valid,0,0);
        VL_IN8(__PVT__ifu_o_ready,0,0);
        VL_OUT8(__PVT__ifu_o_pc_vld,0,0);
        CData/*0:0*/ __PVT__ifu_req_hsked;
        CData/*0:0*/ __PVT__ifu_rsp_hsked;
        CData/*0:0*/ __PVT__ifu_ir_o_hsked;
        CData/*0:0*/ reset_flag_r;
        CData/*0:0*/ __PVT__reset_req_set;
        CData/*0:0*/ __PVT__reset_req_clr;
        CData/*0:0*/ __PVT__reset_req_ena;
        CData/*0:0*/ __PVT__reset_req_nxt;
        CData/*0:0*/ __PVT__ir_valid_ena;
        CData/*0:0*/ __PVT__ir_valid_nxt;
        CData/*0:0*/ __PVT__ir_pc_vld_ena;
        CData/*0:0*/ __PVT__ir_pc_vld_set;
        CData/*0:0*/ __PVT__ir_pc_vld_nxt;
        CData/*0:0*/ __PVT__ifu_ir_i_ready;
        CData/*0:0*/ __PVT__out_flag_r;
        CData/*0:0*/ __PVT__out_flag_ena;
        CData/*0:0*/ __PVT__out_flag_nxt;
        CData/*0:0*/ __PVT__new_req_condi;
        CData/*0:0*/ __PVT__ifu_req_valid_pre;
        CData/*0:0*/ __PVT__pc_newpend_ena;
        CData/*0:0*/ __PVT__pc_newpend_nxt;
        CData/*0:0*/ __Vtogcov__ifu_req_hsked;
        CData/*0:0*/ __Vtogcov__ifu_rsp_hsked;
        CData/*0:0*/ __Vtogcov__ifu_ir_o_hsked;
        CData/*0:0*/ __Vtogcov__reset_flag_r;
        CData/*0:0*/ __Vtogcov__reset_req_r;
        CData/*0:0*/ __Vtogcov__reset_req_set;
        CData/*0:0*/ __Vtogcov__reset_req_clr;
        CData/*0:0*/ __Vtogcov__reset_req_ena;
        CData/*0:0*/ __Vtogcov__reset_req_nxt;
        CData/*0:0*/ __Vtogcov__ir_valid_ena;
        CData/*0:0*/ __Vtogcov__ir_valid_nxt;
        CData/*0:0*/ __Vtogcov__ir_pc_vld_ena;
        CData/*0:0*/ __Vtogcov__ir_pc_vld_set;
        CData/*0:0*/ __Vtogcov__ir_pc_vld_nxt;
        CData/*0:0*/ __Vtogcov__ifu_ir_i_ready;
        CData/*0:0*/ __Vtogcov__pc_newpend_r;
        CData/*0:0*/ __Vtogcov__out_flag_r;
        CData/*0:0*/ __Vtogcov__out_flag_ena;
        CData/*0:0*/ __Vtogcov__out_flag_nxt;
        CData/*0:0*/ __Vtogcov__new_req_condi;
        CData/*0:0*/ __Vtogcov__ifu_new_req;
        CData/*0:0*/ __Vtogcov__ifu_req_valid_pre;
        CData/*0:0*/ __Vtogcov__pc_newpend_ena;
        CData/*0:0*/ __Vtogcov__pc_newpend_nxt;
        CData/*0:0*/ __Vtogcov__minidec_rs1en;
        CData/*0:0*/ __Vtogcov__minidec_rs2en;
        CData/*0:0*/ __PVT__reset_flag_dffrs__DOT__qout_r;
        CData/*0:0*/ reset_flag_dffrs__DOT____Vtogcov__qout_r;
        CData/*0:0*/ __PVT__reset_req_dfflr__DOT__qout_r;
        CData/*0:0*/ reset_req_dfflr__DOT____Vtogcov__qout_r;
        CData/*0:0*/ __PVT__ir_valid_dfflr__DOT__qout_r;
        CData/*0:0*/ ir_valid_dfflr__DOT____Vtogcov__qout_r;
    };
    struct {
        CData/*0:0*/ __PVT__ir_pc_vld_dfflr__DOT__qout_r;
        CData/*0:0*/ ir_pc_vld_dfflr__DOT____Vtogcov__qout_r;
        CData/*0:0*/ __PVT__pc_newpend_dfflr__DOT__qout_r;
        CData/*0:0*/ pc_newpend_dfflr__DOT____Vtogcov__qout_r;
        CData/*4:0*/ __PVT__ir_rs1idx_dfflr__DOT__qout_r;
        CData/*4:0*/ __PVT__ir_rs2idx_dfflr__DOT__qout_r;
        VL_IN(__PVT__pc_rtvec,31,0);
        VL_OUT(__PVT__ifu_req_pc,31,0);
        VL_IN(__PVT__ifu_rsp_instr,31,0);
        VL_OUT(__PVT__ifu_o_ir,31,0);
        VL_OUT(__PVT__ifu_o_pc,31,0);
        IData/*31:0*/ __PVT__pc_add_op1;
        IData/*31:0*/ __PVT__pc_nxt_pre;
        IData/*31:0*/ __Vtogcov__pc_r;
        IData/*31:0*/ __Vtogcov__pc_add_op1;
        IData/*31:0*/ __Vtogcov__pc_add_op2;
        IData/*31:0*/ __Vtogcov__pc_nxt_pre;
    };

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_ifu_ifetch(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_ifu_ifetch();
    VL_UNCOPYABLE(Vcore_ifu_ifetch);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
