// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_ifu_ifetch.h"

VL_ATTR_COLD void Vcore_ifu_ifetch___ctor_var_reset(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inspect_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_rtvec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_req_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_rsp_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_o_ir = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_o_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_o_rs1idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ifu_o_rs2idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ifu_o_prdt_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_o_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_o_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_o_pc_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf2ifu_x1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf2ifu_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_req_hsked = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_rsp_hsked = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_ir_o_hsked = VL_RAND_RESET_I(1);
    vlSelf->reset_flag_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_req_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_req_clr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_req_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_req_nxt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_valid_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_valid_nxt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_pc_vld_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_pc_vld_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_pc_vld_nxt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_ir_i_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__prdt_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bpu2rf_rs1_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_rs1idx_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_rs2idx_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__prdt_pc_add_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_nxt_pre = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bjp_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_add_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_add_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_new_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_req_valid_pre = VL_RAND_RESET_I(1);
    vlSelf->__PVT__new_req_condi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_flag_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_flag_nxt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_newpend_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_newpend_nxt = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_req_hsked = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_rsp_hsked = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_ir_o_hsked = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset_flag_r = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset_req_r = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset_req_set = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset_req_clr = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset_req_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset_req_nxt = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ir_valid_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ir_valid_nxt = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ir_pc_vld_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ir_pc_vld_set = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ir_pc_vld_nxt = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_ir_i_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__pc_newpend_r = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__prdt_taken = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__minidec_rs1en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__minidec_rs2en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__bpu2rf_rs1_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ir_rs1idx_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ir_rs2idx_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__minidec_bjp = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__minidec_jal = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__minidec_jalr = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__minidec_bxx = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__minidec_bjp_imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__prdt_pc_add_op1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__pc_nxt_pre = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__bjp_req = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__pc_add_op1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__pc_add_op2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ifu_new_req = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ifu_req_valid_pre = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__out_flag_r = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__new_req_condi = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__out_flag_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__out_flag_nxt = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__pc_newpend_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__pc_newpend_nxt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_req_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->ifu_prdt_taken_dfflr__DOT____Vtogcov__qout_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ir_rs1idx_dfflr__DOT__qout_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ir_rs2idx_dfflr__DOT__qout_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt = VL_RAND_RESET_I(1);
    vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x0 = VL_RAND_RESET_I(1);
    vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x1 = VL_RAND_RESET_I(1);
    vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1xn = VL_RAND_RESET_I(1);
    vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_r = VL_RAND_RESET_I(1);
    vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena = VL_RAND_RESET_I(1);
    vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT____Vtogcov__qout_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_flag_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->out_flag_dfflr__DOT____Vtogcov__qout_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r = VL_RAND_RESET_I(1);
}
