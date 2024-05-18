// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_core.h"

VL_ATTR_COLD void Vcore_core___ctor_var_reset(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc_rtvec = VL_RAND_RESET_I(32);
    vlSelf->ifu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->ifu_req_ready = VL_RAND_RESET_I(1);
    vlSelf->ifu_req_pc = VL_RAND_RESET_I(32);
    vlSelf->ifu_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->ifu_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->ifu_rsp_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_o_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__pc_rtvec = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ifu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_req_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ifu_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_rsp_instr = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ifu_o_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_o_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_o_ir = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ifu_o_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ifu_o_rs1idx = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__ifu_o_rs2idx = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__ifu_o_pc_vld = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rf2ifu_x1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__commit_trap = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_exu__DOT__rf_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__rf_rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__commit_trap = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_ena = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT____Vtogcov__dec_rs1x0 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__dec_rs2x0 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__dec_info = VL_RAND_RESET_Q(33);
    vlSelf->inst_exu__DOT____Vtogcov__dec_imm = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT____Vtogcov__dec_rs1en = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__dec_rs2en = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__dec_rdwen = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_ready = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_ebreak = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_valid = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT____Vtogcov__cmt_cause = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_op = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_valid = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_add = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info = VL_RAND_RESET_Q(33);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res = VL_RAND_RESET_Q(33);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_add = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 = VL_RAND_RESET_I(32);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 = VL_RAND_RESET_Q(33);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 = VL_RAND_RESET_Q(33);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 = VL_RAND_RESET_Q(33);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 = VL_RAND_RESET_Q(33);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res = VL_RAND_RESET_Q(33);
    VL_ZERO_RESET_W(65, vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak = VL_RAND_RESET_I(1);
    vlSelf->inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT____Vtogcov__alu_excp_flush_req_ebreak = VL_RAND_RESET_I(1);
}
