// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst", false,-1);
    tracep->declBus(c+267,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+268,"ifu_req_valid", false,-1);
    tracep->declBit(c+269,"ifu_req_ready", false,-1);
    tracep->declBus(c+270,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+271,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+272,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+273,"ifu_rsp_instr", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst", false,-1);
    tracep->declBus(c+267,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+22,"ifu_req_valid", false,-1);
    tracep->declBit(c+269,"ifu_req_ready", false,-1);
    tracep->declBus(c+15,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+271,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+16,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+273,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBit(c+32,"ifu_o_valid", false,-1);
    tracep->declBit(c+33,"ifu_o_ready", false,-1);
    tracep->declBus(c+34,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+35,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+36,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+37,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+38,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+147,"rf2ifu_x1", false,-1, 31,0);
    tracep->pushNamePrefix("inst_exu ");
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst", false,-1);
    tracep->declBit(c+32,"i_valid", false,-1);
    tracep->declBit(c+33,"i_ready", false,-1);
    tracep->declBus(c+34,"i_ir", false,-1, 31,0);
    tracep->declBus(c+35,"i_pc", false,-1, 31,0);
    tracep->declBus(c+36,"i_rs1idx", false,-1, 4,0);
    tracep->declBus(c+37,"i_rs2idx", false,-1, 4,0);
    tracep->declBit(c+38,"i_pc_vld", false,-1);
    tracep->declBit(c+39,"commit_trap", false,-1);
    tracep->declBus(c+147,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+211,"rf_rs1", false,-1, 31,0);
    tracep->declBus(c+212,"rf_rs2", false,-1, 31,0);
    tracep->declBit(c+40,"rf_wbck_ena", false,-1);
    tracep->declBus(c+213,"rf_wbck_wdat", false,-1, 31,0);
    tracep->declBus(c+41,"rf_wbck_rdidx", false,-1, 4,0);
    tracep->declBit(c+42,"dec_rs1x0", false,-1);
    tracep->declBit(c+43,"dec_rs2x0", false,-1);
    tracep->declQuad(c+44,"dec_info", false,-1, 32,0);
    tracep->declBus(c+46,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+35,"dec_pc", false,-1, 31,0);
    tracep->declBit(c+47,"dec_rs1en", false,-1);
    tracep->declBit(c+48,"dec_rs2en", false,-1);
    tracep->declBus(c+41,"dec_rdidx", false,-1, 4,0);
    tracep->declBit(c+49,"dec_rdwen", false,-1);
    tracep->declBit(c+32,"disp_alu_valid", false,-1);
    tracep->declBit(c+33,"disp_alu_ready", false,-1);
    tracep->declBus(c+214,"disp_alu_rs1", false,-1, 31,0);
    tracep->declBus(c+215,"disp_alu_rs2", false,-1, 31,0);
    tracep->declBus(c+46,"disp_alu_imm", false,-1, 31,0);
    tracep->declQuad(c+44,"disp_alu_info", false,-1, 32,0);
    tracep->declBus(c+41,"disp_alu_rdidx", false,-1, 4,0);
    tracep->declBit(c+49,"disp_alu_rdwen", false,-1);
    tracep->declBus(c+35,"disp_alu_pc", false,-1, 31,0);
    tracep->declBit(c+40,"alu_wbck_o_valid", false,-1);
    tracep->declBit(c+337,"alu_wbck_o_ready", false,-1);
    tracep->declBus(c+213,"alu_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+41,"alu_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+50,"alu_cmt_ebreak", false,-1);
    tracep->declBit(c+51,"alu_cmt_valid", false,-1);
    tracep->declBit(c+337,"alu_cmt_ready", false,-1);
    tracep->declBit(c+38,"alu_cmt_pc_vld", false,-1);
    tracep->declBus(c+35,"alu_cmt_pc", false,-1, 31,0);
    tracep->declBus(c+34,"alu_cmt_instr", false,-1, 31,0);
    tracep->declBus(c+46,"alu_cmt_imm", false,-1, 31,0);
    tracep->declBus(c+52,"cmt_cause", false,-1, 31,0);
    tracep->pushNamePrefix("inst_RegisterFile ");
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst", false,-1);
    tracep->declBus(c+36,"read_src1_idx", false,-1, 4,0);
    tracep->declBus(c+37,"read_src2_idx", false,-1, 4,0);
    tracep->declBus(c+211,"read_src1_dat", false,-1, 31,0);
    tracep->declBus(c+212,"read_src2_dat", false,-1, 31,0);
    tracep->declBit(c+40,"wbck_dest_wen", false,-1);
    tracep->declBus(c+41,"wbck_dest_idx", false,-1, 4,0);
    tracep->declBus(c+213,"wbck_dest_dat", false,-1, 31,0);
    tracep->declBus(c+147,"x1_r", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+148+i*1,"rf_r", true,(i+0), 31,0);
    }
    tracep->declBus(c+233,"rf_wen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu ");
    tracep->declBit(c+32,"i_valid", false,-1);
    tracep->declBit(c+33,"i_ready", false,-1);
    tracep->declBus(c+214,"i_rs1", false,-1, 31,0);
    tracep->declBus(c+215,"i_rs2", false,-1, 31,0);
    tracep->declBus(c+46,"i_imm", false,-1, 31,0);
    tracep->declQuad(c+44,"i_info", false,-1, 32,0);
    tracep->declBus(c+35,"i_pc", false,-1, 31,0);
    tracep->declBus(c+34,"i_instr", false,-1, 31,0);
    tracep->declBit(c+38,"i_pc_vld", false,-1);
    tracep->declBus(c+41,"i_rdidx", false,-1, 4,0);
    tracep->declBit(c+49,"i_rdwen", false,-1);
    tracep->declBit(c+51,"cmt_o_valid", false,-1);
    tracep->declBit(c+337,"cmt_o_ready", false,-1);
    tracep->declBit(c+38,"cmt_o_pc_vld", false,-1);
    tracep->declBus(c+35,"cmt_o_pc", false,-1, 31,0);
    tracep->declBus(c+34,"cmt_o_instr", false,-1, 31,0);
    tracep->declBus(c+46,"cmt_o_imm", false,-1, 31,0);
    tracep->declBit(c+50,"cmt_o_ebreak", false,-1);
    tracep->declBit(c+40,"wbck_o_valid", false,-1);
    tracep->declBit(c+337,"wbck_o_ready", false,-1);
    tracep->declBus(c+213,"wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+41,"wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+53,"alu_op", false,-1);
    tracep->declBit(c+54,"alu_i_valid", false,-1);
    tracep->declBit(c+53,"o_sel_alu", false,-1);
    tracep->declBus(c+216,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+217,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+218,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+55,"alu_req_alu_add", false,-1);
    tracep->declBit(c+56,"alu_req_alu", false,-1);
    tracep->declBit(c+54,"alu_o_valid", false,-1);
    tracep->declBit(c+53,"alu_o_ready", false,-1);
    tracep->declBus(c+216,"alu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBus(c+219,"alu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+220,"alu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+57,"alu_i_imm", false,-1, 31,0);
    tracep->declQuad(c+58,"alu_i_info", false,-1, 32,0);
    tracep->declBus(c+60,"alu_i_pc", false,-1, 31,0);
    tracep->declBit(c+53,"alu_i_ready", false,-1);
    tracep->declBit(c+61,"alu_o_cmt_ebreak", false,-1);
    tracep->declBit(c+49,"wbck_o_rdwen", false,-1);
    tracep->declBit(c+49,"o_need_wbck", false,-1);
    tracep->declBit(c+337,"o_need_cmt", false,-1);
    tracep->declBit(c+51,"o_valid", false,-1);
    tracep->declBit(c+337,"o_ready", false,-1);
    tracep->pushNamePrefix("inst_exu_alu_dpath ");
    tracep->declBit(c+56,"alu_req_alu", false,-1);
    tracep->declBit(c+55,"alu_req_alu_add", false,-1);
    tracep->declBus(c+217,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+218,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBus(c+216,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+338,"DPATH_MUX_WIDTH", false,-1, 31,0);
    tracep->declBit(c+62,"op_add", false,-1);
    tracep->declBus(c+221,"mux_op1", false,-1, 31,0);
    tracep->declBus(c+222,"mux_op2", false,-1, 31,0);
    tracep->declBus(c+221,"misc_op1", false,-1, 31,0);
    tracep->declBus(c+222,"misc_op2", false,-1, 31,0);
    tracep->declBit(c+62,"adder_addsub", false,-1);
    tracep->declBit(c+339,"adder_cin", false,-1);
    tracep->declQuad(c+223,"misc_adder_op1", false,-1, 32,0);
    tracep->declQuad(c+225,"misc_adder_op2", false,-1, 32,0);
    tracep->declQuad(c+223,"adder_op1", false,-1, 32,0);
    tracep->declQuad(c+225,"adder_op2", false,-1, 32,0);
    tracep->declQuad(c+227,"adder_in1", false,-1, 32,0);
    tracep->declQuad(c+229,"adder_in2", false,-1, 32,0);
    tracep->declQuad(c+231,"adder_res", false,-1, 32,0);
    tracep->declBit(c+62,"adder_add", false,-1);
    tracep->declBit(c+339,"adder_sub", false,-1);
    tracep->declBit(c+62,"op_addsub", false,-1);
    tracep->declBus(c+216,"alu_dpath_res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu_rglr ");
    tracep->declBit(c+54,"alu_i_valid", false,-1);
    tracep->declBit(c+53,"alu_i_ready", false,-1);
    tracep->declBus(c+216,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+219,"alu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+220,"alu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+57,"alu_i_imm", false,-1, 31,0);
    tracep->declBus(c+60,"alu_i_pc", false,-1, 31,0);
    tracep->declBus(c+63,"alu_i_info", false,-1, 20,0);
    tracep->declBit(c+54,"alu_o_valid", false,-1);
    tracep->declBit(c+53,"alu_o_ready", false,-1);
    tracep->declBus(c+216,"alu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+61,"alu_o_cmt_ebreak", false,-1);
    tracep->declBit(c+55,"alu_req_alu_add", false,-1);
    tracep->declBus(c+217,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+218,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+64,"op2imm", false,-1);
    tracep->declBit(c+65,"op1pc", false,-1);
    tracep->declBit(c+61,"ebreak", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_exu_commit ");
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst", false,-1);
    tracep->declBit(c+39,"commit_trap", false,-1);
    tracep->declBit(c+51,"alu_cmt_i_valid", false,-1);
    tracep->declBit(c+337,"alu_cmt_i_ready", false,-1);
    tracep->declBus(c+35,"alu_cmt_i_pc", false,-1, 31,0);
    tracep->declBus(c+34,"alu_cmt_i_instr", false,-1, 31,0);
    tracep->declBit(c+38,"alu_cmt_i_pc_vld", false,-1);
    tracep->declBus(c+46,"alu_cmt_i_imm", false,-1, 31,0);
    tracep->declBit(c+50,"alu_cmt_i_ebreak", false,-1);
    tracep->declBus(c+52,"cmt_cause", false,-1, 31,0);
    tracep->declBit(c+337,"alu_excp_cmt_i_ready", false,-1);
    tracep->pushNamePrefix("inst_exu_excp ");
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst", false,-1);
    tracep->declBit(c+39,"commit_trap", false,-1);
    tracep->declBit(c+337,"alu_excp_i_ready", false,-1);
    tracep->declBit(c+51,"alu_excp_i_valid", false,-1);
    tracep->declBit(c+50,"alu_excp_i_ebreak", false,-1);
    tracep->declBus(c+52,"cmt_cause", false,-1, 31,0);
    tracep->declBit(c+337,"excpirq_flush_ack", false,-1);
    tracep->declBit(c+39,"excpirq_flush_req", false,-1);
    tracep->declBit(c+50,"alu_need_flush", false,-1);
    tracep->declBit(c+50,"alu_excp_i_ebreak4excp", false,-1);
    tracep->declBit(c+39,"alu_excp_flush_req", false,-1);
    tracep->declBit(c+337,"alu_excp_i_ready4nondbg", false,-1);
    tracep->declBit(c+39,"all_excp_flush_req", false,-1);
    tracep->declBit(c+39,"excpirq_taken_ena", false,-1);
    tracep->declBit(c+39,"excp_taken_ena", false,-1);
    tracep->declBit(c+66,"alu_excp_flush_req_ebreak", false,-1);
    tracep->declBus(c+52,"excp_cause", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_exu_disp ");
    tracep->declBit(c+32,"disp_i_valid", false,-1);
    tracep->declBit(c+33,"disp_i_ready", false,-1);
    tracep->declBit(c+42,"disp_i_rs1x0", false,-1);
    tracep->declBit(c+43,"disp_i_rs2x0", false,-1);
    tracep->declBit(c+47,"disp_i_rs1en", false,-1);
    tracep->declBit(c+48,"disp_i_rs2en", false,-1);
    tracep->declBus(c+36,"disp_i_rs1idx", false,-1, 4,0);
    tracep->declBus(c+37,"disp_i_rs2idx", false,-1, 4,0);
    tracep->declBus(c+211,"disp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+212,"disp_i_rs2", false,-1, 31,0);
    tracep->declBit(c+49,"disp_i_rdwen", false,-1);
    tracep->declBus(c+41,"disp_i_rdidx", false,-1, 4,0);
    tracep->declQuad(c+44,"disp_i_info", false,-1, 32,0);
    tracep->declBus(c+46,"disp_i_imm", false,-1, 31,0);
    tracep->declBus(c+35,"disp_i_pc", false,-1, 31,0);
    tracep->declBit(c+32,"disp_o_alu_valid", false,-1);
    tracep->declBit(c+33,"disp_o_alu_ready", false,-1);
    tracep->declBus(c+214,"disp_o_alu_rs1", false,-1, 31,0);
    tracep->declBus(c+215,"disp_o_alu_rs2", false,-1, 31,0);
    tracep->declBit(c+49,"disp_o_alu_rdwen", false,-1);
    tracep->declBus(c+41,"disp_o_alu_rdidx", false,-1, 4,0);
    tracep->declQuad(c+44,"disp_o_alu_info", false,-1, 32,0);
    tracep->declBus(c+46,"disp_o_alu_imm", false,-1, 31,0);
    tracep->declBus(c+35,"disp_o_alu_pc", false,-1, 31,0);
    tracep->declBit(c+33,"disp_i_ready_pos", false,-1);
    tracep->declBit(c+32,"disp_i_valid_pos", false,-1);
    tracep->declBus(c+214,"disp_i_rs1_msked", false,-1, 31,0);
    tracep->declBus(c+215,"disp_i_rs2_msked", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_wbck ");
    tracep->declBit(c+40,"alu_wbck_i_valid", false,-1);
    tracep->declBit(c+337,"alu_wbck_i_ready", false,-1);
    tracep->declBus(c+213,"alu_wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+41,"alu_wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+40,"rf_wbck_o_ena", false,-1);
    tracep->declBus(c+213,"rf_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+41,"rf_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+40,"wbck_sel_alu", false,-1);
    tracep->declBit(c+337,"rf_wbck_o_ready", false,-1);
    tracep->declBit(c+337,"wbck_i_ready", false,-1);
    tracep->declBit(c+40,"wbck_i_valid", false,-1);
    tracep->declBus(c+213,"wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+41,"wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+40,"rf_wbck_o_valid", false,-1);
    tracep->declBit(c+40,"wbck_o_ena", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst", false,-1);
    tracep->declBus(c+267,"pc_rtvec", false,-1, 31,0);
    tracep->declBus(c+34,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+35,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+36,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+37,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+32,"ifu_o_valid", false,-1);
    tracep->declBit(c+33,"ifu_o_ready", false,-1);
    tracep->declBit(c+22,"ifu_req_valid", false,-1);
    tracep->declBit(c+269,"ifu_req_ready", false,-1);
    tracep->declBus(c+15,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+271,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+16,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+273,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBit(c+38,"ifu_o_pc_vld", false,-1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst", false,-1);
    tracep->declBus(c+267,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+22,"ifu_req_valid", false,-1);
    tracep->declBit(c+269,"ifu_req_ready", false,-1);
    tracep->declBus(c+15,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+271,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+16,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+273,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBus(c+34,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+35,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+36,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+37,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+32,"ifu_o_valid", false,-1);
    tracep->declBit(c+33,"ifu_o_ready", false,-1);
    tracep->declBit(c+38,"ifu_o_pc_vld", false,-1);
    tracep->declBit(c+23,"ifu_req_hsked", false,-1);
    tracep->declBit(c+17,"ifu_rsp_hsked", false,-1);
    tracep->declBit(c+67,"ifu_ir_o_hsked", false,-1);
    tracep->declBit(c+274,"reset_flag_r", false,-1);
    tracep->declBit(c+68,"reset_req_r", false,-1);
    tracep->declBit(c+69,"reset_req_set", false,-1);
    tracep->declBit(c+24,"reset_req_clr", false,-1);
    tracep->declBit(c+25,"reset_req_ena", false,-1);
    tracep->declBit(c+26,"reset_req_nxt", false,-1);
    tracep->declBit(c+68,"ifu_reset_req", false,-1);
    tracep->declBit(c+17,"ir_valid_set", false,-1);
    tracep->declBit(c+18,"ir_valid_ena", false,-1);
    tracep->declBit(c+67,"ir_valid_clr", false,-1);
    tracep->declBit(c+19,"ir_valid_nxt", false,-1);
    tracep->declBit(c+32,"ir_valid_r", false,-1);
    tracep->declBit(c+67,"ir_pc_vld_clr", false,-1);
    tracep->declBit(c+70,"ir_pc_vld_ena", false,-1);
    tracep->declBit(c+71,"ir_pc_vld_set", false,-1);
    tracep->declBit(c+38,"ir_pc_vld_r", false,-1);
    tracep->declBit(c+72,"ir_pc_vld_nxt", false,-1);
    tracep->declBit(c+73,"ifu_ir_i_ready", false,-1);
    tracep->declBit(c+74,"pc_newpend_r", false,-1);
    tracep->declBit(c+23,"out_flag_set", false,-1);
    tracep->declBit(c+17,"out_flag_clr", false,-1);
    tracep->declBit(c+180,"out_flag_r", false,-1);
    tracep->declBit(c+27,"out_flag_ena", false,-1);
    tracep->declBit(c+28,"out_flag_nxt", false,-1);
    tracep->declBit(c+29,"new_req_condi", false,-1);
    tracep->declBit(c+75,"ifu_new_req", false,-1);
    tracep->declBit(c+76,"ifu_req_valid_pre", false,-1);
    tracep->declBit(c+16,"ifu_rsp2ir_ready", false,-1);
    tracep->declBus(c+77,"pc_r", false,-1, 31,0);
    tracep->declBus(c+340,"pc_incr_ofst", false,-1, 31,0);
    tracep->declBus(c+20,"pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+78,"pc_add_op2", false,-1, 31,0);
    tracep->declBus(c+15,"pc_nxt", false,-1, 31,0);
    tracep->declBus(c+21,"pc_nxt_pre", false,-1, 31,0);
    tracep->declBit(c+23,"pc_ena", false,-1);
    tracep->declBus(c+77,"ifu_pc_nxt", false,-1, 31,0);
    tracep->declBus(c+35,"ifu_pc_r", false,-1, 31,0);
    tracep->declBit(c+23,"pc_newpend_set", false,-1);
    tracep->declBit(c+71,"pc_newpend_clr", false,-1);
    tracep->declBit(c+30,"pc_newpend_ena", false,-1);
    tracep->declBit(c+31,"pc_newpend_nxt", false,-1);
    tracep->declBit(c+275,"minidec_rs1en", false,-1);
    tracep->declBit(c+276,"minidec_rs2en", false,-1);
    tracep->declBus(c+277,"minidec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+278,"minidec_rs2idx", false,-1, 4,0);
    tracep->declBit(c+275,"ir_rs1idx_ena", false,-1);
    tracep->declBit(c+276,"ir_rs2idx_ena", false,-1);
    tracep->declBus(c+277,"ir_rs1idx_nxt", false,-1, 4,0);
    tracep->declBus(c+278,"ir_rs2idx_nxt", false,-1, 4,0);
    tracep->declBus(c+36,"ir_rs1idx_r", false,-1, 4,0);
    tracep->declBus(c+37,"ir_rs2idx_r", false,-1, 4,0);
    tracep->declBus(c+34,"ifu_ir_r", false,-1, 31,0);
    tracep->declBit(c+17,"ir_r_ena", false,-1);
    tracep->declBus(c+273,"ifu_ir_nxt", false,-1, 31,0);
    tracep->pushNamePrefix("inst_ifu_minidec ");
    tracep->declBus(c+273,"instr", false,-1, 31,0);
    tracep->declBit(c+275,"dec_rs1en", false,-1);
    tracep->declBit(c+276,"dec_rs2en", false,-1);
    tracep->declBus(c+277,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+278,"dec_rs2idx", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_pc_vld_dfflr ");
    tracep->declBus(c+341,"DW", false,-1, 31,0);
    tracep->declBit(c+70,"lden", false,-1);
    tracep->declBus(c+72,"dnxt", false,-1, 0,0);
    tracep->declBus(c+38,"qout", false,-1, 0,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+38,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_rs1idx_dfflr ");
    tracep->declBus(c+342,"DW", false,-1, 31,0);
    tracep->declBit(c+275,"lden", false,-1);
    tracep->declBus(c+277,"dnxt", false,-1, 4,0);
    tracep->declBus(c+36,"qout", false,-1, 4,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+36,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_rs2idx_dfflr ");
    tracep->declBus(c+342,"DW", false,-1, 31,0);
    tracep->declBit(c+276,"lden", false,-1);
    tracep->declBus(c+278,"dnxt", false,-1, 4,0);
    tracep->declBus(c+37,"qout", false,-1, 4,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+37,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_valid_dfflr ");
    tracep->declBus(c+341,"DW", false,-1, 31,0);
    tracep->declBit(c+18,"lden", false,-1);
    tracep->declBus(c+19,"dnxt", false,-1, 0,0);
    tracep->declBus(c+32,"qout", false,-1, 0,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+32,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out_flag_reg ");
    tracep->declBus(c+341,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+343,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst", false,-1);
    tracep->declBus(c+28,"din", false,-1, 0,0);
    tracep->declBus(c+180,"dout", false,-1, 0,0);
    tracep->declBit(c+27,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_newpend_dfflr ");
    tracep->declBus(c+341,"DW", false,-1, 31,0);
    tracep->declBit(c+30,"lden", false,-1);
    tracep->declBus(c+31,"dnxt", false,-1, 0,0);
    tracep->declBus(c+74,"qout", false,-1, 0,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+74,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_flag_dffrs ");
    tracep->declBus(c+341,"DW", false,-1, 31,0);
    tracep->declBus(c+339,"dnxt", false,-1, 0,0);
    tracep->declBus(c+274,"qout", false,-1, 0,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+79,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_req_dfflr ");
    tracep->declBus(c+341,"DW", false,-1, 31,0);
    tracep->declBit(c+25,"lden", false,-1);
    tracep->declBus(c+26,"dnxt", false,-1, 0,0);
    tracep->declBus(c+68,"qout", false,-1, 0,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+68,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+23,"lden", false,-1);
    tracep->declBus(c+15,"dnxt", false,-1, 31,0);
    tracep->declBus(c+77,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+77,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+71,"lden", false,-1);
    tracep->declBus(c+77,"dnxt", false,-1, 31,0);
    tracep->declBus(c+35,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+35,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+17,"lden", false,-1);
    tracep->declBus(c+273,"dnxt", false,-1, 31,0);
    tracep->declBus(c+34,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBit(c+266,"rst_n", false,-1);
    tracep->declBus(c+34,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+234,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+147,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+147,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+235,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+181,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+181,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+236,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+182,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+182,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+237,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+183,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+183,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+238,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+184,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+184,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+239,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+185,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+185,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+240,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+186,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+186,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+187,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+187,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+242,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+188,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+188,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+243,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+189,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+189,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+244,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+190,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+190,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+245,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+191,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+191,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+246,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+192,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+192,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+247,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+193,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+193,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+248,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+194,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+194,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+249,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+195,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+195,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+250,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+196,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+196,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+251,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+197,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+197,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+252,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+198,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+198,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+199,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+199,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+254,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+200,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+200,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+255,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+201,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+201,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+256,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+202,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+202,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+257,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+203,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+203,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+258,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+204,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+204,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+259,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+205,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+205,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+260,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+206,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+206,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+261,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+207,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+207,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+262,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+208,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+208,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+263,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+209,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+209,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+344,"DW", false,-1, 31,0);
    tracep->declBit(c+264,"lden", false,-1);
    tracep->declBus(c+213,"dnxt", false,-1, 31,0);
    tracep->declBus(c+210,"qout", false,-1, 31,0);
    tracep->declBit(c+265,"clk", false,-1);
    tracep->declBus(c+210,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+273,"rv32_instr", false,-1, 31,0);
    tracep->declBus(c+345,"i_pc", false,-1, 31,0);
    tracep->declBit(c+279,"dec_rs1x0", false,-1);
    tracep->declBit(c+280,"dec_rs2x0", false,-1);
    tracep->declBit(c+275,"dec_rs1en", false,-1);
    tracep->declBit(c+276,"dec_rs2en", false,-1);
    tracep->declBit(c+281,"dec_rdwen", false,-1);
    tracep->declBus(c+277,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+278,"dec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+282,"dec_rdidx", false,-1, 4,0);
    tracep->declBus(c+1,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+345,"dec_pc", false,-1, 31,0);
    tracep->declQuad(c+2,"dec_info", false,-1, 32,0);
    tracep->declBus(c+283,"opcode", false,-1, 6,0);
    tracep->declBus(c+282,"rv32_rd", false,-1, 4,0);
    tracep->declBus(c+284,"rv32_func3", false,-1, 2,0);
    tracep->declBus(c+277,"rv32_rs1", false,-1, 4,0);
    tracep->declBus(c+278,"rv32_rs2", false,-1, 4,0);
    tracep->declBus(c+285,"rv32_func7", false,-1, 6,0);
    tracep->declBit(c+286,"opcode_1_0_11", false,-1);
    tracep->declBit(c+287,"opcode_4_2_000", false,-1);
    tracep->declBit(c+288,"opcode_4_2_001", false,-1);
    tracep->declBit(c+289,"opcode_4_2_010", false,-1);
    tracep->declBit(c+290,"opcode_4_2_011", false,-1);
    tracep->declBit(c+291,"opcode_4_2_100", false,-1);
    tracep->declBit(c+292,"opcode_4_2_101", false,-1);
    tracep->declBit(c+293,"opcode_4_2_110", false,-1);
    tracep->declBit(c+294,"opcode_4_2_111", false,-1);
    tracep->declBit(c+295,"opcode_6_5_00", false,-1);
    tracep->declBit(c+296,"opcode_6_5_01", false,-1);
    tracep->declBit(c+297,"opcode_6_5_10", false,-1);
    tracep->declBit(c+298,"opcode_6_5_11", false,-1);
    tracep->declBit(c+299,"rv32_func3_000", false,-1);
    tracep->declBit(c+300,"rv32_func3_001", false,-1);
    tracep->declBit(c+301,"rv32_func3_010", false,-1);
    tracep->declBit(c+302,"rv32_func3_011", false,-1);
    tracep->declBit(c+303,"rv32_func3_100", false,-1);
    tracep->declBit(c+304,"rv32_func3_101", false,-1);
    tracep->declBit(c+305,"rv32_func3_110", false,-1);
    tracep->declBit(c+306,"rv32_func3_111", false,-1);
    tracep->declBit(c+307,"rv32_func7_0000000", false,-1);
    tracep->declBit(c+308,"rv32_func7_0100000", false,-1);
    tracep->declBit(c+309,"rv32_func7_0000001", false,-1);
    tracep->declBit(c+310,"rv32_func7_0000101", false,-1);
    tracep->declBit(c+311,"rv32_func7_0001001", false,-1);
    tracep->declBit(c+312,"rv32_func7_0001101", false,-1);
    tracep->declBit(c+313,"rv32_func7_0010101", false,-1);
    tracep->declBit(c+314,"rv32_func7_0100001", false,-1);
    tracep->declBit(c+315,"rv32_func7_0010001", false,-1);
    tracep->declBit(c+316,"rv32_func7_0101101", false,-1);
    tracep->declBit(c+317,"rv32_func7_1111111", false,-1);
    tracep->declBit(c+318,"rv32_func7_0000100", false,-1);
    tracep->declBit(c+319,"rv32_func7_0001000", false,-1);
    tracep->declBit(c+320,"rv32_func7_0001100", false,-1);
    tracep->declBit(c+321,"rv32_func7_0101100", false,-1);
    tracep->declBit(c+322,"rv32_func7_0010000", false,-1);
    tracep->declBit(c+323,"rv32_func7_0010100", false,-1);
    tracep->declBit(c+324,"rv32_func7_1100000", false,-1);
    tracep->declBit(c+325,"rv32_func7_1110000", false,-1);
    tracep->declBit(c+326,"rv32_func7_1010000", false,-1);
    tracep->declBit(c+327,"rv32_func7_1101000", false,-1);
    tracep->declBit(c+328,"rv32_func7_1111000", false,-1);
    tracep->declBit(c+329,"rv32_func7_1010001", false,-1);
    tracep->declBit(c+330,"rv32_func7_1110001", false,-1);
    tracep->declBit(c+331,"rv32_func7_1100001", false,-1);
    tracep->declBit(c+332,"rv32_func7_1101001", false,-1);
    tracep->declBit(c+279,"rv32_rs1_x0", false,-1);
    tracep->declBit(c+280,"rv32_rs2_x0", false,-1);
    tracep->declBit(c+333,"rv32_rd_x0", false,-1);
    tracep->declBit(c+4,"rv32_op_imm", false,-1);
    tracep->declBit(c+334,"rv32_op", false,-1);
    tracep->declBit(c+5,"rv32_system", false,-1);
    tracep->declBit(c+6,"rv32_auipc", false,-1);
    tracep->declBit(c+7,"rv32_ebreak", false,-1);
    tracep->declBit(c+8,"rv32_addi", false,-1);
    tracep->declBit(c+335,"rv32_nop", false,-1);
    tracep->declBit(c+7,"ecall_ebreak", false,-1);
    tracep->declBit(c+9,"alu_op", false,-1);
    tracep->declBit(c+4,"need_imm", false,-1);
    tracep->declBus(c+10,"alu_info_bus", false,-1, 20,0);
    tracep->declBit(c+275,"rv32_need_rs1", false,-1);
    tracep->declBit(c+276,"rv32_need_rs2", false,-1);
    tracep->declBit(c+281,"rv32_need_rd", false,-1);
    tracep->declBus(c+11,"rv32_i_imm", false,-1, 31,0);
    tracep->declBus(c+12,"rv32_s_imm", false,-1, 31,0);
    tracep->declBus(c+13,"rv32_b_imm", false,-1, 31,0);
    tracep->declBus(c+336,"rv32_u_imm", false,-1, 31,0);
    tracep->declBus(c+14,"rv32_j_imm", false,-1, 31,0);
    tracep->declBit(c+4,"rv32_imm_sel_i", false,-1);
    tracep->declBus(c+1,"rv32_imm", false,-1, 31,0);
    tracep->declBit(c+4,"rv32_need_imm", false,-1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_exu_decode__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_exu_decode__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+34,"rv32_instr", false,-1, 31,0);
    tracep->declBus(c+35,"i_pc", false,-1, 31,0);
    tracep->declBit(c+42,"dec_rs1x0", false,-1);
    tracep->declBit(c+43,"dec_rs2x0", false,-1);
    tracep->declBit(c+47,"dec_rs1en", false,-1);
    tracep->declBit(c+48,"dec_rs2en", false,-1);
    tracep->declBit(c+49,"dec_rdwen", false,-1);
    tracep->declBus(c+80,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+81,"dec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+41,"dec_rdidx", false,-1, 4,0);
    tracep->declBus(c+46,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+35,"dec_pc", false,-1, 31,0);
    tracep->declQuad(c+44,"dec_info", false,-1, 32,0);
    tracep->declBus(c+82,"opcode", false,-1, 6,0);
    tracep->declBus(c+41,"rv32_rd", false,-1, 4,0);
    tracep->declBus(c+83,"rv32_func3", false,-1, 2,0);
    tracep->declBus(c+80,"rv32_rs1", false,-1, 4,0);
    tracep->declBus(c+81,"rv32_rs2", false,-1, 4,0);
    tracep->declBus(c+84,"rv32_func7", false,-1, 6,0);
    tracep->declBit(c+85,"opcode_1_0_11", false,-1);
    tracep->declBit(c+86,"opcode_4_2_000", false,-1);
    tracep->declBit(c+87,"opcode_4_2_001", false,-1);
    tracep->declBit(c+88,"opcode_4_2_010", false,-1);
    tracep->declBit(c+89,"opcode_4_2_011", false,-1);
    tracep->declBit(c+90,"opcode_4_2_100", false,-1);
    tracep->declBit(c+91,"opcode_4_2_101", false,-1);
    tracep->declBit(c+92,"opcode_4_2_110", false,-1);
    tracep->declBit(c+93,"opcode_4_2_111", false,-1);
    tracep->declBit(c+94,"opcode_6_5_00", false,-1);
    tracep->declBit(c+95,"opcode_6_5_01", false,-1);
    tracep->declBit(c+96,"opcode_6_5_10", false,-1);
    tracep->declBit(c+97,"opcode_6_5_11", false,-1);
    tracep->declBit(c+98,"rv32_func3_000", false,-1);
    tracep->declBit(c+99,"rv32_func3_001", false,-1);
    tracep->declBit(c+100,"rv32_func3_010", false,-1);
    tracep->declBit(c+101,"rv32_func3_011", false,-1);
    tracep->declBit(c+102,"rv32_func3_100", false,-1);
    tracep->declBit(c+103,"rv32_func3_101", false,-1);
    tracep->declBit(c+104,"rv32_func3_110", false,-1);
    tracep->declBit(c+105,"rv32_func3_111", false,-1);
    tracep->declBit(c+106,"rv32_func7_0000000", false,-1);
    tracep->declBit(c+107,"rv32_func7_0100000", false,-1);
    tracep->declBit(c+108,"rv32_func7_0000001", false,-1);
    tracep->declBit(c+109,"rv32_func7_0000101", false,-1);
    tracep->declBit(c+110,"rv32_func7_0001001", false,-1);
    tracep->declBit(c+111,"rv32_func7_0001101", false,-1);
    tracep->declBit(c+112,"rv32_func7_0010101", false,-1);
    tracep->declBit(c+113,"rv32_func7_0100001", false,-1);
    tracep->declBit(c+114,"rv32_func7_0010001", false,-1);
    tracep->declBit(c+115,"rv32_func7_0101101", false,-1);
    tracep->declBit(c+116,"rv32_func7_1111111", false,-1);
    tracep->declBit(c+117,"rv32_func7_0000100", false,-1);
    tracep->declBit(c+118,"rv32_func7_0001000", false,-1);
    tracep->declBit(c+119,"rv32_func7_0001100", false,-1);
    tracep->declBit(c+120,"rv32_func7_0101100", false,-1);
    tracep->declBit(c+121,"rv32_func7_0010000", false,-1);
    tracep->declBit(c+122,"rv32_func7_0010100", false,-1);
    tracep->declBit(c+123,"rv32_func7_1100000", false,-1);
    tracep->declBit(c+124,"rv32_func7_1110000", false,-1);
    tracep->declBit(c+125,"rv32_func7_1010000", false,-1);
    tracep->declBit(c+126,"rv32_func7_1101000", false,-1);
    tracep->declBit(c+127,"rv32_func7_1111000", false,-1);
    tracep->declBit(c+128,"rv32_func7_1010001", false,-1);
    tracep->declBit(c+129,"rv32_func7_1110001", false,-1);
    tracep->declBit(c+130,"rv32_func7_1100001", false,-1);
    tracep->declBit(c+131,"rv32_func7_1101001", false,-1);
    tracep->declBit(c+42,"rv32_rs1_x0", false,-1);
    tracep->declBit(c+43,"rv32_rs2_x0", false,-1);
    tracep->declBit(c+132,"rv32_rd_x0", false,-1);
    tracep->declBit(c+133,"rv32_op_imm", false,-1);
    tracep->declBit(c+134,"rv32_op", false,-1);
    tracep->declBit(c+135,"rv32_system", false,-1);
    tracep->declBit(c+136,"rv32_auipc", false,-1);
    tracep->declBit(c+137,"rv32_ebreak", false,-1);
    tracep->declBit(c+138,"rv32_addi", false,-1);
    tracep->declBit(c+139,"rv32_nop", false,-1);
    tracep->declBit(c+137,"ecall_ebreak", false,-1);
    tracep->declBit(c+140,"alu_op", false,-1);
    tracep->declBit(c+133,"need_imm", false,-1);
    tracep->declBus(c+141,"alu_info_bus", false,-1, 20,0);
    tracep->declBit(c+47,"rv32_need_rs1", false,-1);
    tracep->declBit(c+48,"rv32_need_rs2", false,-1);
    tracep->declBit(c+49,"rv32_need_rd", false,-1);
    tracep->declBus(c+142,"rv32_i_imm", false,-1, 31,0);
    tracep->declBus(c+143,"rv32_s_imm", false,-1, 31,0);
    tracep->declBus(c+144,"rv32_b_imm", false,-1, 31,0);
    tracep->declBus(c+145,"rv32_u_imm", false,-1, 31,0);
    tracep->declBus(c+146,"rv32_j_imm", false,-1, 31,0);
    tracep->declBit(c+133,"rv32_imm_sel_i", false,-1);
    tracep->declBus(c+46,"rv32_imm", false,-1, 31,0);
    tracep->declBit(c+133,"rv32_need_imm", false,-1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_top(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_top\n"); );
    // Body
    Vcore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("core ");
    Vcore___024root__trace_init_sub__TOP__core__0(vlSelf, tracep);
    tracep->pushNamePrefix("inst_exu ");
    tracep->pushNamePrefix("inst_RegisterFile ");
    tracep->pushNamePrefix("regfile[10] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[11] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[12] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[13] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[14] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[15] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[16] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[17] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[18] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[19] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[1] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[20] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[21] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[22] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[23] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[24] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[25] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[26] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[27] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[28] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[29] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[2] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[30] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[31] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[3] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[4] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[5] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[6] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[7] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[8] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("regfile[9] ");
    tracep->pushNamePrefix("rfno0 ");
    tracep->pushNamePrefix("rf_dffl ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("inst_exu_decode ");
    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_exu_decode__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_ifu ");
    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__0(vlSelf, tracep);
    tracep->pushNamePrefix("inst_ifu_ifetch ");
    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__0(vlSelf, tracep);
    tracep->pushNamePrefix("ifu_ir_dfflr ");
    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_pc_dfflr ");
    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_ifu_minidec ");
    tracep->pushNamePrefix("inst_exu_decode ");
    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_dfflr ");
    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vcore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcore___024root__trace_register(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcore___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcore___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcore___024root__trace_full_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_top_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcore___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcore___024root__trace_full_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_imm),32);
    bufp->fullQData(oldp+2,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_info),33);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op_imm));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_system));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_auipc));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_ebreak));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_addi));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_op));
    bufp->fullIData(oldp+10,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    bufp->fullIData(oldp+15,((0xfffffffeU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre)),32);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_hsked));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_ena));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_nxt));
    bufp->fullIData(oldp+20,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op1),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre),32);
    bufp->fullBit(oldp+22,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_clr));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_ena));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_nxt));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_ena));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_nxt));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__new_req_condi));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_ena));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_nxt));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__core.__PVT__ifu_o_ready));
    bufp->fullIData(oldp+34,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r),32);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r),32);
    bufp->fullCData(oldp+36,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r),5);
    bufp->fullCData(oldp+37,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r),5);
    bufp->fullBit(oldp+38,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__commit_trap));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_ena));
    bufp->fullCData(oldp+41,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 7U))),5);
    bufp->fullBit(oldp+42,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+43,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0x14U)))));
    bufp->fullQData(oldp+44,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info),33);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm),32);
    bufp->fullBit(oldp+47,((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+48,((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+49,((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 7U)))));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_ebreak));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
    bufp->fullIData(oldp+52,(((IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                               ? 3U : 0x1fU)),32);
    bufp->fullBit(oldp+53,((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid));
    bufp->fullBit(oldp+55,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 4U)))));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu));
    bufp->fullIData(oldp+57,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm),32);
    bufp->fullQData(oldp+58,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info),33);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc),32);
    bufp->fullBit(oldp+61,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 0x13U)))));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add));
    bufp->fullIData(oldp+63,((0x1fffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info))),21);
    bufp->fullBit(oldp+64,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+65,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_o_hsked));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_set));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_ena));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_set));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_nxt));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_i_ready));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+75,((1U & (~ (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_flag_dffrs__DOT__qout_r)))));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid_pre));
    bufp->fullIData(oldp+77,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r),32);
    bufp->fullIData(oldp+78,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_dfflr__DOT__qout_r)
                               ? 0U : 4U)),32);
    bufp->fullBit(oldp+79,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_flag_dffrs__DOT__qout_r));
    bufp->fullCData(oldp+80,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+81,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+82,((0x7fU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),7);
    bufp->fullCData(oldp+83,((7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+84,((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+85,((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
    bufp->fullBit(oldp+86,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 2U)))));
    bufp->fullBit(oldp+87,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 2U)))));
    bufp->fullBit(oldp+88,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 2U)))));
    bufp->fullBit(oldp+89,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 2U)))));
    bufp->fullBit(oldp+90,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 2U)))));
    bufp->fullBit(oldp+91,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 2U)))));
    bufp->fullBit(oldp+92,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 2U)))));
    bufp->fullBit(oldp+93,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 2U)))));
    bufp->fullBit(oldp+94,((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 5U)))));
    bufp->fullBit(oldp+95,((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 5U)))));
    bufp->fullBit(oldp+96,((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 5U)))));
    bufp->fullBit(oldp+97,((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 5U)))));
    bufp->fullBit(oldp+98,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+99,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+100,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+101,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+102,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+103,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+104,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+105,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+106,((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+107,((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+108,((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+109,((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+110,((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+111,((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                      >> 0x19U))));
    bufp->fullBit(oldp+112,((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+113,((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+114,((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+115,((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+116,((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+117,((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+118,((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+119,((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                      >> 0x19U))));
    bufp->fullBit(oldp+120,((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+121,((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+122,((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+123,((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+124,((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+125,((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+126,((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+127,((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+128,((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+129,((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+130,((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+131,((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+132,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 7U)))));
    bufp->fullBit(oldp+133,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op_imm));
    bufp->fullBit(oldp+134,((IData)(((0x20U == (0x60U 
                                                & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                     & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__VdfgTmp_hc3fc61f5__0)))));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_system));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_auipc));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_ebreak));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_addi));
    bufp->fullBit(oldp+139,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_addi) 
                             & (IData)(((0U == (0xf8f80U 
                                                & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                       >> 0x14U)))))))));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_op));
    bufp->fullIData(oldp+141,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
    bufp->fullIData(oldp+145,((0xfffff000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0]),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[1]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[2]),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[3]),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[4]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[5]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[6]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[7]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[8]),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[9]),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[10]),32);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[11]),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[12]),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[13]),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[14]),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[15]),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[16]),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[17]),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[18]),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[19]),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[20]),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[21]),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[22]),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[23]),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[24]),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[25]),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[26]),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[27]),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[28]),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[29]),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[30]),32);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[31]),32);
    bufp->fullBit(oldp+180,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_r));
    bufp->fullIData(oldp+181,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+187,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_rs1),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_rs2),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs1),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs2),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2),32);
    bufp->fullIData(oldp+221,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[2U] 
                                << 0x1fU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                             >> 1U))),32);
    bufp->fullIData(oldp+222,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                << 0x1fU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                             >> 1U))),32);
    bufp->fullQData(oldp+223,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1),33);
    bufp->fullQData(oldp+225,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2),33);
    bufp->fullQData(oldp+227,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1),33);
    bufp->fullQData(oldp+229,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2),33);
    bufp->fullQData(oldp+231,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res),33);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen),32);
    bufp->fullBit(oldp+234,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+235,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+237,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+238,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+240,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+241,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+243,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+244,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+245,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+246,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+247,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+248,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+251,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+252,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+253,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+254,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+255,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+256,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+258,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+265,(vlSelf->clk));
    bufp->fullBit(oldp+266,(vlSelf->rst));
    bufp->fullIData(oldp+267,(vlSelf->pc_rtvec),32);
    bufp->fullBit(oldp+268,(vlSelf->ifu_req_valid));
    bufp->fullBit(oldp+269,(vlSelf->ifu_req_ready));
    bufp->fullIData(oldp+270,(vlSelf->ifu_req_pc),32);
    bufp->fullBit(oldp+271,(vlSelf->ifu_rsp_valid));
    bufp->fullBit(oldp+272,(vlSelf->ifu_rsp_ready));
    bufp->fullIData(oldp+273,(vlSelf->ifu_rsp_instr),32);
    bufp->fullBit(oldp+274,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.reset_flag_r));
    bufp->fullBit(oldp+275,((0U != (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+276,((0U != (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0x14U)))));
    bufp->fullCData(oldp+277,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+278,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+279,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+280,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+281,((0U != (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 7U)))));
    bufp->fullCData(oldp+282,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+283,((0x7fU & vlSelf->ifu_rsp_instr)),7);
    bufp->fullCData(oldp+284,((7U & (vlSelf->ifu_rsp_instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+285,((vlSelf->ifu_rsp_instr 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+286,((3U == (3U & vlSelf->ifu_rsp_instr))));
    bufp->fullBit(oldp+287,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+288,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+289,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+290,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+291,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+292,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+293,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+294,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+295,((0U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+296,((1U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+297,((2U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+298,((3U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+299,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+300,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+301,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+302,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+303,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+304,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+305,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+306,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+307,((0U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+308,((0x20U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+309,((1U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+310,((5U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+311,((9U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+312,((0xdU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->fullBit(oldp+313,((0x15U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+314,((0x21U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+315,((0x11U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+316,((0x2dU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+317,((0x7fU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+318,((4U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+319,((8U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+320,((0xcU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->fullBit(oldp+321,((0x2cU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+322,((0x10U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+323,((0x14U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+324,((0x60U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+325,((0x70U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+326,((0x50U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+327,((0x68U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+328,((0x78U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+329,((0x51U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+330,((0x71U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+331,((0x61U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+332,((0x69U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+333,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 7U)))));
    bufp->fullBit(oldp+334,((IData)(((0x20U == (0x60U 
                                                & vlSelf->ifu_rsp_instr)) 
                                     & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__VdfgTmp_hc3fc61f5__0)))));
    bufp->fullBit(oldp+335,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_addi) 
                             & (IData)(((0U == (0xf8f80U 
                                                & vlSelf->ifu_rsp_instr)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->ifu_rsp_instr 
                                                       >> 0x14U)))))))));
    bufp->fullIData(oldp+336,((0xfffff000U & vlSelf->ifu_rsp_instr)),32);
    bufp->fullBit(oldp+337,(1U));
    bufp->fullIData(oldp+338,(0x41U),32);
    bufp->fullBit(oldp+339,(0U));
    bufp->fullIData(oldp+340,(4U),32);
    bufp->fullIData(oldp+341,(1U),32);
    bufp->fullIData(oldp+342,(5U),32);
    bufp->fullBit(oldp+343,(0U));
    bufp->fullIData(oldp+344,(0x20U),32);
    bufp->fullIData(oldp+345,(0U),32);
}
