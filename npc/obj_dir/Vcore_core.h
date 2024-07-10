// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_CORE_H_
#define VERILATED_VCORE_CORE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcore__Syms;
class Vcore_ifu;
class Vcore_exu_decode;
class Vcore_sirv_gnrl_dffl;


class Vcore_core final : public VerilatedModule {
  public:
    // CELLS
    Vcore_ifu* inst_ifu;
    Vcore_exu_decode* __PVT__inst_exu__DOT__inst_exu_decode;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl* __PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak;
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(ifu_req_valid,0,0);
        VL_IN8(ifu_req_ready,0,0);
        VL_IN8(ifu_rsp_valid,0,0);
        VL_OUT8(ifu_rsp_ready,0,0);
        CData/*0:0*/ __PVT__ifu_o_ready;
        CData/*0:0*/ __PVT__lsu_o_valid;
        CData/*0:0*/ __PVT__lsu_o_cmt_ld;
        CData/*0:0*/ __PVT__lsu_o_cmt_st;
        CData/*3:0*/ __PVT__agu_icb_cmd_wmask;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __Vtogcov__rst;
        CData/*0:0*/ __Vtogcov__ifu_req_valid;
        CData/*0:0*/ __Vtogcov__ifu_req_ready;
        CData/*0:0*/ __Vtogcov__ifu_rsp_valid;
        CData/*0:0*/ __Vtogcov__ifu_rsp_ready;
        CData/*0:0*/ __Vtogcov__ifu_o_valid;
        CData/*0:0*/ __Vtogcov__ifu_o_ready;
        CData/*4:0*/ __Vtogcov__ifu_o_rs1idx;
        CData/*4:0*/ __Vtogcov__ifu_o_rs2idx;
        CData/*0:0*/ __Vtogcov__ifu_o_prdt_taken;
        CData/*0:0*/ __Vtogcov__ifu_o_pc_vld;
        CData/*0:0*/ __Vtogcov__lsu_o_valid;
        CData/*0:0*/ __Vtogcov__lsu_o_ready;
        CData/*0:0*/ __Vtogcov__lsu_o_cmt_ld;
        CData/*0:0*/ __Vtogcov__lsu_o_cmt_st;
        CData/*0:0*/ __Vtogcov__agu_icb_cmd_read;
        CData/*3:0*/ __Vtogcov__agu_icb_cmd_wmask;
        CData/*0:0*/ __PVT__inst_exu__DOT__commit_trap;
        CData/*0:0*/ __PVT__inst_exu__DOT__rf_wbck_ena;
        CData/*4:0*/ __PVT__inst_exu__DOT__rf_wbck_rdidx;
        CData/*0:0*/ __PVT__inst_exu__DOT__oitf_ret_rdwen;
        CData/*4:0*/ __PVT__inst_exu__DOT__oitf_ret_rdidx;
        CData/*0:0*/ __PVT__inst_exu__DOT__alu_wbck_o_valid;
        CData/*0:0*/ __PVT__inst_exu__DOT__alu_cmt_bjp;
        CData/*0:0*/ __PVT__inst_exu__DOT__alu_cmt_ebreak;
        CData/*0:0*/ __PVT__inst_exu__DOT__alu_cmt_ld;
        CData/*0:0*/ __PVT__inst_exu__DOT__alu_cmt_stamo;
        CData/*0:0*/ __PVT__inst_exu__DOT__alu_cmt_bjp_prdt;
        CData/*0:0*/ __PVT__inst_exu__DOT__longp_wbck_o_valid;
        CData/*0:0*/ __PVT__inst_exu__DOT__longp_excp_o_ready;
        CData/*0:0*/ __PVT__inst_exu__DOT__longp_excp_o_valid;
        CData/*0:0*/ __PVT__inst_exu__DOT__longp_excp_o_ld;
        CData/*0:0*/ __PVT__inst_exu__DOT__longp_excp_o_st;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__commit_trap;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__rf_wbck_ena;
        CData/*4:0*/ inst_exu__DOT____Vtogcov__rf_wbck_rdidx;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__dec_rs1x0;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__dec_rs2x0;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__dec_rs1en;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__dec_rs2en;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__dec_rdwen;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__oitf_ret_rdwen;
        CData/*4:0*/ inst_exu__DOT____Vtogcov__oitf_ret_rdidx;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__alu_wbck_o_valid;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__alu_cmt_bjp;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__alu_cmt_ebreak;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__alu_cmt_ld;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__alu_cmt_stamo;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__alu_cmt_valid;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__alu_cmt_bjp_prdt;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__longp_wbck_o_valid;
    };
    struct {
        CData/*0:0*/ inst_exu__DOT____Vtogcov__longp_excp_o_ready;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__longp_excp_o_valid;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__longp_excp_o_ld;
        CData/*0:0*/ inst_exu__DOT____Vtogcov__longp_excp_o_st;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_valid;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_op;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_op;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_op;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_valid;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_valid;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_valid;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_o_cmt_bjp;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_o_cmt_prdt;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_o_cmt_stamo;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_add;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_xor;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_or;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_sltu;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_lui;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_lsuagu__DOT____Vtogcov__agu_i_size_b;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_lsuagu__DOT____Vtogcov__agu_i_size_hw;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_lsuagu__DOT____Vtogcov__agu_i_size_w;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_or;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_xor;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2;
    };
    struct {
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_cin;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_addsub;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_add;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_or;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_xor;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_sltu;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_mvop2;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_cin;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_addsub;
        CData/*0:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_cmp_lt;
        CData/*4:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hdf482e26__0;
        CData/*0:0*/ __PVT__inst_exu__DOT__inst_exu_wbck__DOT__wbck_sel_alu;
        CData/*0:0*/ inst_exu__DOT__inst_exu_wbck__DOT____Vtogcov__wbck_ready4alu;
        CData/*0:0*/ inst_exu__DOT__inst_exu_wbck__DOT____Vtogcov__wbck_sel_alu;
        CData/*0:0*/ inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT____Vtogcov__alu_excp_flush_req_ebreak;
        VL_OUT(inspect_pc,31,0);
        VL_IN(pc_rtvec,31,0);
        VL_OUT(ifu_req_pc,31,0);
        VL_IN(ifu_rsp_instr,31,0);
        IData/*31:0*/ __PVT__rf2ifu_rs1;
        IData/*31:0*/ __PVT__lsu_o_wbck_wdat;
        IData/*31:0*/ __PVT__agu_icb_cmd_addr;
        IData/*31:0*/ __PVT__agu_icb_cmd_wdata;
        IData/*31:0*/ __Vtogcov__inspect_pc;
        IData/*31:0*/ __Vtogcov__pc_rtvec;
        IData/*31:0*/ __Vtogcov__ifu_req_pc;
        IData/*31:0*/ __Vtogcov__ifu_rsp_instr;
        IData/*31:0*/ __Vtogcov__ifu_o_ir;
        IData/*31:0*/ __Vtogcov__ifu_o_pc;
        IData/*31:0*/ __Vtogcov__rf2ifu_x1;
        IData/*31:0*/ __Vtogcov__rf2ifu_rs1;
        IData/*31:0*/ __Vtogcov__lsu_o_wbck_wdat;
        IData/*31:0*/ __Vtogcov__agu_icb_cmd_addr;
        IData/*31:0*/ __Vtogcov__agu_icb_cmd_wdata;
        IData/*31:0*/ __PVT__inst_exu__DOT__rf_rs2;
        IData/*31:0*/ __PVT__inst_exu__DOT__rf_wbck_wdat;
        IData/*31:0*/ __PVT__inst_exu__DOT__disp_alu_rs1;
        IData/*31:0*/ __PVT__inst_exu__DOT__disp_alu_rs2;
        IData/*31:0*/ __PVT__inst_exu__DOT__alu_wbck_o_wdat;
        IData/*31:0*/ __PVT__inst_exu__DOT__longp_wbck_o_wdat;
        IData/*31:0*/ __PVT__inst_exu__DOT__longp_excp_o_pc;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__rf_rs2;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__rf_wbck_wdat;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__endcode;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__dec_imm;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__disp_alu_rs1;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__disp_alu_rs2;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__alu_wbck_o_wdat;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__cmt_cause;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__longp_wbck_o_wdat;
        IData/*31:0*/ inst_exu__DOT____Vtogcov__longp_excp_o_pc;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen;
        IData/*31:0*/ inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1;
    };
    struct {
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res;
        IData/*31:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res;
        IData/*31:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res;
        VlWide<3>/*68:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0;
        QData/*32:0*/ inst_exu__DOT____Vtogcov__dec_info;
        QData/*32:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info;
        QData/*32:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info;
        QData/*32:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info;
        QData/*32:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info;
        QData/*32:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info;
        QData/*32:0*/ inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info;
        QData/*32:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1;
        QData/*32:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2;
        QData/*32:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1;
        QData/*32:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2;
        QData/*32:0*/ __PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res;
        QData/*32:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1;
        QData/*32:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2;
        QData/*32:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1;
        QData/*32:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2;
        QData/*32:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res;
        VlUnpacked<IData/*31:0*/, 33> __PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r;
    };

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_core(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_core();
    VL_UNCOPYABLE(Vcore_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
