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
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBus(c+280,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+281,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+282,"ifu_req_valid", false,-1);
    tracep->declBit(c+283,"ifu_req_ready", false,-1);
    tracep->declBus(c+284,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+285,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+286,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+287,"ifu_rsp_instr", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBus(c+51,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+281,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+29,"ifu_req_valid", false,-1);
    tracep->declBit(c+283,"ifu_req_ready", false,-1);
    tracep->declBus(c+288,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+285,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+30,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+287,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBus(c+352,"ifu_req_pc_temp", false,-1, 31,0);
    tracep->declBit(c+52,"ifu_o_valid", false,-1);
    tracep->declBit(c+53,"ifu_o_ready", false,-1);
    tracep->declBus(c+54,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+55,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+56,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+57,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+58,"ifu_o_prdt_taken", false,-1);
    tracep->declBit(c+59,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+189,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+252,"rf2ifu_rs1", false,-1, 31,0);
    tracep->pushNamePrefix("inst_exu ");
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBit(c+52,"i_valid", false,-1);
    tracep->declBit(c+53,"i_ready", false,-1);
    tracep->declBus(c+54,"i_ir", false,-1, 31,0);
    tracep->declBus(c+55,"i_pc", false,-1, 31,0);
    tracep->declBus(c+56,"i_rs1idx", false,-1, 4,0);
    tracep->declBus(c+57,"i_rs2idx", false,-1, 4,0);
    tracep->declBit(c+59,"i_pc_vld", false,-1);
    tracep->declBit(c+58,"i_prdt_taken", false,-1);
    tracep->declBit(c+60,"commit_trap", false,-1);
    tracep->declBus(c+189,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+252,"rf2ifu_rs1", false,-1, 31,0);
    tracep->declBus(c+252,"rf_rs1", false,-1, 31,0);
    tracep->declBus(c+253,"rf_rs2", false,-1, 31,0);
    tracep->declBit(c+61,"rf_wbck_ena", false,-1);
    tracep->declBus(c+254,"rf_wbck_wdat", false,-1, 31,0);
    tracep->declBus(c+62,"rf_wbck_rdidx", false,-1, 4,0);
    tracep->declBus(c+190,"endcode", false,-1, 31,0);
    tracep->declBit(c+63,"dec_rs1x0", false,-1);
    tracep->declBit(c+64,"dec_rs2x0", false,-1);
    tracep->declQuad(c+65,"dec_info", false,-1, 32,0);
    tracep->declBus(c+67,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+55,"dec_pc", false,-1, 31,0);
    tracep->declBit(c+68,"dec_rs1en", false,-1);
    tracep->declBit(c+69,"dec_rs2en", false,-1);
    tracep->declBus(c+62,"dec_rdidx", false,-1, 4,0);
    tracep->declBit(c+70,"dec_rdwen", false,-1);
    tracep->declBit(c+52,"disp_alu_valid", false,-1);
    tracep->declBit(c+53,"disp_alu_ready", false,-1);
    tracep->declBus(c+255,"disp_alu_rs1", false,-1, 31,0);
    tracep->declBus(c+256,"disp_alu_rs2", false,-1, 31,0);
    tracep->declBus(c+67,"disp_alu_imm", false,-1, 31,0);
    tracep->declQuad(c+65,"disp_alu_info", false,-1, 32,0);
    tracep->declBus(c+62,"disp_alu_rdidx", false,-1, 4,0);
    tracep->declBit(c+70,"disp_alu_rdwen", false,-1);
    tracep->declBus(c+55,"disp_alu_pc", false,-1, 31,0);
    tracep->declBit(c+61,"alu_wbck_o_valid", false,-1);
    tracep->declBit(c+353,"alu_wbck_o_ready", false,-1);
    tracep->declBus(c+254,"alu_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+62,"alu_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+71,"alu_cmt_bjp", false,-1);
    tracep->declBit(c+72,"alu_cmt_ebreak", false,-1);
    tracep->declBit(c+73,"alu_cmt_valid", false,-1);
    tracep->declBit(c+353,"alu_cmt_ready", false,-1);
    tracep->declBit(c+74,"alu_cmt_bjp_prdt", false,-1);
    tracep->declBit(c+59,"alu_cmt_pc_vld", false,-1);
    tracep->declBus(c+55,"alu_cmt_pc", false,-1, 31,0);
    tracep->declBus(c+54,"alu_cmt_instr", false,-1, 31,0);
    tracep->declBus(c+67,"alu_cmt_imm", false,-1, 31,0);
    tracep->declBus(c+75,"cmt_cause", false,-1, 31,0);
    tracep->pushNamePrefix("inst_RegisterFile ");
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBus(c+56,"read_src1_idx", false,-1, 4,0);
    tracep->declBus(c+57,"read_src2_idx", false,-1, 4,0);
    tracep->declBus(c+252,"read_src1_dat", false,-1, 31,0);
    tracep->declBus(c+253,"read_src2_dat", false,-1, 31,0);
    tracep->declBit(c+61,"wbck_dest_wen", false,-1);
    tracep->declBus(c+62,"wbck_dest_idx", false,-1, 4,0);
    tracep->declBus(c+254,"wbck_dest_dat", false,-1, 31,0);
    tracep->declBus(c+189,"x1_r", false,-1, 31,0);
    tracep->declBus(c+190,"endcode", false,-1, 31,0);
    tracep->declBus(c+220,"rf_wen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu ");
    tracep->declBit(c+52,"i_valid", false,-1);
    tracep->declBit(c+53,"i_ready", false,-1);
    tracep->declBus(c+255,"i_rs1", false,-1, 31,0);
    tracep->declBus(c+256,"i_rs2", false,-1, 31,0);
    tracep->declBus(c+67,"i_imm", false,-1, 31,0);
    tracep->declQuad(c+65,"i_info", false,-1, 32,0);
    tracep->declBus(c+55,"i_pc", false,-1, 31,0);
    tracep->declBus(c+54,"i_instr", false,-1, 31,0);
    tracep->declBit(c+59,"i_pc_vld", false,-1);
    tracep->declBus(c+62,"i_rdidx", false,-1, 4,0);
    tracep->declBit(c+70,"i_rdwen", false,-1);
    tracep->declBit(c+73,"cmt_o_valid", false,-1);
    tracep->declBit(c+353,"cmt_o_ready", false,-1);
    tracep->declBit(c+59,"cmt_o_pc_vld", false,-1);
    tracep->declBus(c+55,"cmt_o_pc", false,-1, 31,0);
    tracep->declBus(c+54,"cmt_o_instr", false,-1, 31,0);
    tracep->declBus(c+67,"cmt_o_imm", false,-1, 31,0);
    tracep->declBit(c+71,"cmt_o_bjp", false,-1);
    tracep->declBit(c+72,"cmt_o_ebreak", false,-1);
    tracep->declBit(c+74,"cmt_o_bjp_prdt", false,-1);
    tracep->declBit(c+61,"wbck_o_valid", false,-1);
    tracep->declBit(c+353,"wbck_o_ready", false,-1);
    tracep->declBus(c+254,"wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+62,"wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+76,"alu_op", false,-1);
    tracep->declBit(c+77,"bjp_op", false,-1);
    tracep->declBit(c+78,"alu_i_valid", false,-1);
    tracep->declBit(c+79,"bjp_i_valid", false,-1);
    tracep->declBit(c+77,"bjp_i_ready", false,-1);
    tracep->declBit(c+79,"bjp_o_valid", false,-1);
    tracep->declBit(c+77,"bjp_o_ready", false,-1);
    tracep->declBus(c+257,"bjp_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+80,"bjp_o_cmt_bjp", false,-1);
    tracep->declBit(c+81,"bjp_o_cmt_prdt", false,-1);
    tracep->declBus(c+258,"bjp_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+259,"bjp_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+80,"bjp_req_alu_add", false,-1);
    tracep->declBus(c+257,"bjp_req_alu_add_res", false,-1, 31,0);
    tracep->declBus(c+260,"bjp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+261,"bjp_i_rs2", false,-1, 31,0);
    tracep->declBus(c+82,"bjp_i_imm", false,-1, 31,0);
    tracep->declQuad(c+83,"bjp_i_info", false,-1, 32,0);
    tracep->declBus(c+85,"bjp_i_pc", false,-1, 31,0);
    tracep->declBus(c+257,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+262,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+263,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+86,"alu_req_alu_add", false,-1);
    tracep->declBit(c+87,"alu_req_alu_lui", false,-1);
    tracep->declBit(c+88,"alu_req_alu", false,-1);
    tracep->declBit(c+77,"bjp_req_alu", false,-1);
    tracep->declBit(c+78,"alu_o_valid", false,-1);
    tracep->declBit(c+76,"alu_o_ready", false,-1);
    tracep->declBus(c+257,"alu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBus(c+264,"alu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+265,"alu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+89,"alu_i_imm", false,-1, 31,0);
    tracep->declQuad(c+90,"alu_i_info", false,-1, 32,0);
    tracep->declBus(c+92,"alu_i_pc", false,-1, 31,0);
    tracep->declBit(c+76,"alu_i_ready", false,-1);
    tracep->declBit(c+93,"alu_o_cmt_ebreak", false,-1);
    tracep->declBit(c+73,"o_valid", false,-1);
    tracep->declBit(c+353,"o_ready", false,-1);
    tracep->declBit(c+76,"o_sel_alu", false,-1);
    tracep->declBit(c+77,"o_sel_bjp", false,-1);
    tracep->declBit(c+70,"wbck_o_rdwen", false,-1);
    tracep->declBit(c+70,"o_need_wbck", false,-1);
    tracep->declBit(c+353,"o_need_cmt", false,-1);
    tracep->pushNamePrefix("inst_exu_alu_bjp ");
    tracep->declBit(c+79,"bjp_i_valid", false,-1);
    tracep->declBit(c+77,"bjp_i_ready", false,-1);
    tracep->declBus(c+260,"bjp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+261,"bjp_i_rs2", false,-1, 31,0);
    tracep->declBus(c+82,"bjp_i_imm", false,-1, 31,0);
    tracep->declBus(c+85,"bjp_i_pc", false,-1, 31,0);
    tracep->declBus(c+94,"bjp_i_info", false,-1, 16,0);
    tracep->declBit(c+79,"bjp_o_valid", false,-1);
    tracep->declBit(c+77,"bjp_o_ready", false,-1);
    tracep->declBus(c+257,"bjp_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+80,"bjp_o_cmt_bjp", false,-1);
    tracep->declBit(c+81,"bjp_o_cmt_prdt", false,-1);
    tracep->declBus(c+258,"bjp_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+259,"bjp_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+80,"bjp_req_alu_add", false,-1);
    tracep->declBus(c+257,"bjp_req_alu_add_res", false,-1, 31,0);
    tracep->declBit(c+80,"jump", false,-1);
    tracep->declBit(c+81,"bjp_i_bprdt", false,-1);
    tracep->declBit(c+80,"wbck_link", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu_dpath ");
    tracep->declBit(c+88,"alu_req_alu", false,-1);
    tracep->declBit(c+86,"alu_req_alu_add", false,-1);
    tracep->declBit(c+87,"alu_req_alu_lui", false,-1);
    tracep->declBus(c+262,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+263,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+80,"bjp_req_alu_add", false,-1);
    tracep->declBus(c+257,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBit(c+77,"bjp_req_alu", false,-1);
    tracep->declBus(c+258,"bjp_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+259,"bjp_req_alu_op2", false,-1, 31,0);
    tracep->declBus(c+257,"bjp_req_alu_add_res", false,-1, 31,0);
    tracep->declBus(c+266,"mux_op1", false,-1, 31,0);
    tracep->declBus(c+267,"mux_op2", false,-1, 31,0);
    tracep->declBus(c+266,"misc_op1", false,-1, 31,0);
    tracep->declBus(c+267,"misc_op2", false,-1, 31,0);
    tracep->declBit(c+95,"op_add", false,-1);
    tracep->declBit(c+95,"op_addsub", false,-1);
    tracep->declBit(c+96,"op_mvop2", false,-1);
    tracep->declQuad(c+268,"misc_adder_op1", false,-1, 32,0);
    tracep->declQuad(c+270,"misc_adder_op2", false,-1, 32,0);
    tracep->declQuad(c+268,"adder_op1", false,-1, 32,0);
    tracep->declQuad(c+270,"adder_op2", false,-1, 32,0);
    tracep->declBit(c+354,"adder_cin", false,-1);
    tracep->declQuad(c+272,"adder_in1", false,-1, 32,0);
    tracep->declQuad(c+274,"adder_in2", false,-1, 32,0);
    tracep->declQuad(c+276,"adder_res", false,-1, 32,0);
    tracep->declBit(c+95,"adder_add", false,-1);
    tracep->declBit(c+354,"adder_sub", false,-1);
    tracep->declBit(c+95,"adder_addsub", false,-1);
    tracep->declBus(c+267,"mvop2_res", false,-1, 31,0);
    tracep->declBus(c+257,"alu_dpath_res", false,-1, 31,0);
    tracep->declBus(c+355,"DPATH_MUX_WIDTH", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu_rglr ");
    tracep->declBit(c+78,"alu_i_valid", false,-1);
    tracep->declBit(c+76,"alu_i_ready", false,-1);
    tracep->declBus(c+257,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+264,"alu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+265,"alu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+89,"alu_i_imm", false,-1, 31,0);
    tracep->declBus(c+92,"alu_i_pc", false,-1, 31,0);
    tracep->declBus(c+97,"alu_i_info", false,-1, 20,0);
    tracep->declBit(c+78,"alu_o_valid", false,-1);
    tracep->declBit(c+76,"alu_o_ready", false,-1);
    tracep->declBus(c+257,"alu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+93,"alu_o_cmt_ebreak", false,-1);
    tracep->declBit(c+86,"alu_req_alu_add", false,-1);
    tracep->declBit(c+87,"alu_req_alu_lui", false,-1);
    tracep->declBus(c+262,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+263,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+98,"op2imm", false,-1);
    tracep->declBit(c+99,"op1pc", false,-1);
    tracep->declBit(c+100,"nop", false,-1);
    tracep->declBit(c+93,"ebreak", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_exu_commit ");
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBit(c+60,"commit_trap", false,-1);
    tracep->declBit(c+73,"alu_cmt_i_valid", false,-1);
    tracep->declBit(c+353,"alu_cmt_i_ready", false,-1);
    tracep->declBus(c+55,"alu_cmt_i_pc", false,-1, 31,0);
    tracep->declBus(c+54,"alu_cmt_i_instr", false,-1, 31,0);
    tracep->declBit(c+59,"alu_cmt_i_pc_vld", false,-1);
    tracep->declBus(c+67,"alu_cmt_i_imm", false,-1, 31,0);
    tracep->declBit(c+71,"alu_cmt_i_bjp", false,-1);
    tracep->declBit(c+72,"alu_cmt_i_ebreak", false,-1);
    tracep->declBit(c+74,"alu_cmt_i_bjp_prdt", false,-1);
    tracep->declBus(c+75,"cmt_cause", false,-1, 31,0);
    tracep->declBus(c+190,"endcode", false,-1, 31,0);
    tracep->declBit(c+353,"alu_brchmis_cmt_i_ready", false,-1);
    tracep->declBit(c+353,"alu_excp_cmt_i_ready", false,-1);
    tracep->pushNamePrefix("inst_exu_branchslv ");
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBit(c+73,"cmt_i_valid", false,-1);
    tracep->declBit(c+353,"cmt_i_ready", false,-1);
    tracep->declBit(c+71,"cmt_i_bjp", false,-1);
    tracep->declBit(c+74,"cmt_i_bjp_prdt", false,-1);
    tracep->declBus(c+55,"cmt_i_pc", false,-1, 31,0);
    tracep->declBus(c+67,"cmt_i_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_excp ");
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBit(c+60,"commit_trap", false,-1);
    tracep->declBit(c+353,"alu_excp_i_ready", false,-1);
    tracep->declBit(c+73,"alu_excp_i_valid", false,-1);
    tracep->declBit(c+72,"alu_excp_i_ebreak", false,-1);
    tracep->declBus(c+75,"cmt_cause", false,-1, 31,0);
    tracep->declBus(c+190,"endcode", false,-1, 31,0);
    tracep->declBit(c+353,"excpirq_flush_ack", false,-1);
    tracep->declBit(c+60,"excpirq_flush_req", false,-1);
    tracep->declBit(c+72,"alu_need_flush", false,-1);
    tracep->declBit(c+72,"alu_excp_i_ebreak4excp", false,-1);
    tracep->declBit(c+60,"alu_excp_flush_req", false,-1);
    tracep->declBit(c+353,"alu_excp_i_ready4nondbg", false,-1);
    tracep->declBit(c+60,"all_excp_flush_req", false,-1);
    tracep->declBit(c+60,"excpirq_taken_ena", false,-1);
    tracep->declBit(c+60,"excp_taken_ena", false,-1);
    tracep->declBit(c+101,"alu_excp_flush_req_ebreak", false,-1);
    tracep->declBus(c+75,"excp_cause", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_exu_disp ");
    tracep->declBit(c+52,"disp_i_valid", false,-1);
    tracep->declBit(c+53,"disp_i_ready", false,-1);
    tracep->declBit(c+63,"disp_i_rs1x0", false,-1);
    tracep->declBit(c+64,"disp_i_rs2x0", false,-1);
    tracep->declBit(c+68,"disp_i_rs1en", false,-1);
    tracep->declBit(c+69,"disp_i_rs2en", false,-1);
    tracep->declBus(c+56,"disp_i_rs1idx", false,-1, 4,0);
    tracep->declBus(c+57,"disp_i_rs2idx", false,-1, 4,0);
    tracep->declBus(c+252,"disp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+253,"disp_i_rs2", false,-1, 31,0);
    tracep->declBit(c+70,"disp_i_rdwen", false,-1);
    tracep->declBus(c+62,"disp_i_rdidx", false,-1, 4,0);
    tracep->declQuad(c+65,"disp_i_info", false,-1, 32,0);
    tracep->declBus(c+67,"disp_i_imm", false,-1, 31,0);
    tracep->declBus(c+55,"disp_i_pc", false,-1, 31,0);
    tracep->declBit(c+52,"disp_o_alu_valid", false,-1);
    tracep->declBit(c+53,"disp_o_alu_ready", false,-1);
    tracep->declBus(c+255,"disp_o_alu_rs1", false,-1, 31,0);
    tracep->declBus(c+256,"disp_o_alu_rs2", false,-1, 31,0);
    tracep->declBit(c+70,"disp_o_alu_rdwen", false,-1);
    tracep->declBus(c+62,"disp_o_alu_rdidx", false,-1, 4,0);
    tracep->declQuad(c+65,"disp_o_alu_info", false,-1, 32,0);
    tracep->declBus(c+67,"disp_o_alu_imm", false,-1, 31,0);
    tracep->declBus(c+55,"disp_o_alu_pc", false,-1, 31,0);
    tracep->declBit(c+53,"disp_i_ready_pos", false,-1);
    tracep->declBit(c+52,"disp_i_valid_pos", false,-1);
    tracep->declBus(c+255,"disp_i_rs1_msked", false,-1, 31,0);
    tracep->declBus(c+256,"disp_i_rs2_msked", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_wbck ");
    tracep->declBit(c+61,"alu_wbck_i_valid", false,-1);
    tracep->declBit(c+353,"alu_wbck_i_ready", false,-1);
    tracep->declBus(c+254,"alu_wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+62,"alu_wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+61,"rf_wbck_o_ena", false,-1);
    tracep->declBus(c+254,"rf_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+62,"rf_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+61,"wbck_sel_alu", false,-1);
    tracep->declBit(c+353,"rf_wbck_o_ready", false,-1);
    tracep->declBit(c+353,"wbck_i_ready", false,-1);
    tracep->declBit(c+61,"wbck_i_valid", false,-1);
    tracep->declBus(c+254,"wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+62,"wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+61,"rf_wbck_o_valid", false,-1);
    tracep->declBit(c+61,"wbck_o_ena", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBus(c+51,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+281,"pc_rtvec", false,-1, 31,0);
    tracep->declBus(c+54,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+55,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+56,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+57,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+58,"ifu_o_prdt_taken", false,-1);
    tracep->declBit(c+52,"ifu_o_valid", false,-1);
    tracep->declBit(c+53,"ifu_o_ready", false,-1);
    tracep->declBit(c+29,"ifu_req_valid", false,-1);
    tracep->declBit(c+283,"ifu_req_ready", false,-1);
    tracep->declBus(c+288,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+285,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+30,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+287,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBit(c+59,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+189,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+252,"rf2ifu_rs1", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBus(c+51,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+281,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+29,"ifu_req_valid", false,-1);
    tracep->declBit(c+283,"ifu_req_ready", false,-1);
    tracep->declBus(c+288,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+285,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+30,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+287,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBus(c+54,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+55,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+56,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+57,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+58,"ifu_o_prdt_taken", false,-1);
    tracep->declBit(c+52,"ifu_o_valid", false,-1);
    tracep->declBit(c+53,"ifu_o_ready", false,-1);
    tracep->declBit(c+59,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+189,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+252,"rf2ifu_rs1", false,-1, 31,0);
    tracep->declBit(c+31,"ifu_req_hsked", false,-1);
    tracep->declBit(c+32,"ifu_rsp_hsked", false,-1);
    tracep->declBit(c+102,"ifu_ir_o_hsked", false,-1);
    tracep->declBit(c+289,"reset_flag_r", false,-1);
    tracep->declBit(c+103,"reset_req_r", false,-1);
    tracep->declBit(c+104,"reset_req_set", false,-1);
    tracep->declBit(c+33,"reset_req_clr", false,-1);
    tracep->declBit(c+34,"reset_req_ena", false,-1);
    tracep->declBit(c+35,"reset_req_nxt", false,-1);
    tracep->declBit(c+103,"ifu_reset_req", false,-1);
    tracep->declBit(c+32,"ir_valid_set", false,-1);
    tracep->declBit(c+36,"ir_valid_ena", false,-1);
    tracep->declBit(c+102,"ir_valid_clr", false,-1);
    tracep->declBit(c+37,"ir_valid_nxt", false,-1);
    tracep->declBit(c+52,"ir_valid_r", false,-1);
    tracep->declBit(c+102,"ir_pc_vld_clr", false,-1);
    tracep->declBit(c+105,"ir_pc_vld_ena", false,-1);
    tracep->declBit(c+106,"ir_pc_vld_set", false,-1);
    tracep->declBit(c+59,"ir_pc_vld_r", false,-1);
    tracep->declBit(c+107,"ir_pc_vld_nxt", false,-1);
    tracep->declBit(c+108,"ifu_ir_i_ready", false,-1);
    tracep->declBit(c+109,"pc_newpend_r", false,-1);
    tracep->declBus(c+287,"ifu_ir_nxt", false,-1, 31,0);
    tracep->declBit(c+1,"prdt_taken", false,-1);
    tracep->declBit(c+58,"ifu_prdt_taken_r", false,-1);
    tracep->declBus(c+54,"ifu_ir_r", false,-1, 31,0);
    tracep->declBit(c+32,"ir_r_ena", false,-1);
    tracep->declBit(c+2,"minidec_rs1en", false,-1);
    tracep->declBit(c+3,"minidec_rs2en", false,-1);
    tracep->declBus(c+290,"minidec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+291,"minidec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+56,"ir_rs1idx_r", false,-1, 4,0);
    tracep->declBus(c+57,"ir_rs2idx_r", false,-1, 4,0);
    tracep->declBit(c+38,"bpu2rf_rs1_ena", false,-1);
    tracep->declBit(c+39,"ir_rs1idx_ena", false,-1);
    tracep->declBit(c+40,"ir_rs2idx_ena", false,-1);
    tracep->declBus(c+290,"ir_rs1idx_nxt", false,-1, 4,0);
    tracep->declBus(c+291,"ir_rs2idx_nxt", false,-1, 4,0);
    tracep->declBus(c+51,"pc_r", false,-1, 31,0);
    tracep->declBus(c+51,"ifu_pc_nxt", false,-1, 31,0);
    tracep->declBus(c+55,"ifu_pc_r", false,-1, 31,0);
    tracep->declBit(c+4,"minidec_bjp", false,-1);
    tracep->declBit(c+5,"minidec_jal", false,-1);
    tracep->declBit(c+6,"minidec_jalr", false,-1);
    tracep->declBus(c+7,"minidec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+290,"minidec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBit(c+38,"bpu_wait", false,-1);
    tracep->declBus(c+292,"prdt_pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+7,"prdt_pc_add_op2", false,-1, 31,0);
    tracep->declBus(c+356,"pc_incr_ofst", false,-1, 31,0);
    tracep->declBus(c+288,"pc_nxt", false,-1, 31,0);
    tracep->declBus(c+293,"pc_nxt_pre", false,-1, 31,0);
    tracep->declBit(c+8,"bjp_req", false,-1);
    tracep->declBus(c+294,"pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+41,"pc_add_op2", false,-1, 31,0);
    tracep->declBit(c+42,"ifu_new_req", false,-1);
    tracep->declBit(c+43,"ifu_req_valid_pre", false,-1);
    tracep->declBit(c+32,"out_flag_clr", false,-1);
    tracep->declBit(c+110,"out_flag_r", false,-1);
    tracep->declBit(c+44,"new_req_condi", false,-1);
    tracep->declBit(c+30,"ifu_rsp2ir_ready", false,-1);
    tracep->declBit(c+31,"pc_ena", false,-1);
    tracep->declBit(c+31,"out_flag_set", false,-1);
    tracep->declBit(c+45,"out_flag_ena", false,-1);
    tracep->declBit(c+46,"out_flag_nxt", false,-1);
    tracep->declBit(c+31,"pc_newpend_set", false,-1);
    tracep->declBit(c+106,"pc_newpend_clr", false,-1);
    tracep->declBit(c+47,"pc_newpend_ena", false,-1);
    tracep->declBit(c+48,"pc_newpend_nxt", false,-1);
    tracep->pushNamePrefix("ifu_prdt_taken_dfflr ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBit(c+32,"lden", false,-1);
    tracep->declBus(c+1,"dnxt", false,-1, 0,0);
    tracep->declBus(c+58,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+58,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_ifu_litebpu ");
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBus(c+51,"pc", false,-1, 31,0);
    tracep->declBit(c+5,"dec_jal", false,-1);
    tracep->declBit(c+6,"dec_jalr", false,-1);
    tracep->declBus(c+7,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+290,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBit(c+38,"bpu_wait", false,-1);
    tracep->declBit(c+1,"prdt_taken", false,-1);
    tracep->declBus(c+292,"prdt_pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+7,"prdt_pc_add_op2", false,-1, 31,0);
    tracep->declBit(c+285,"dec_i_valid", false,-1);
    tracep->declBit(c+38,"bpu2rf_rs1_ena", false,-1);
    tracep->declBit(c+102,"ir_valid_clr", false,-1);
    tracep->declBus(c+189,"rf2bpu_x1", false,-1, 31,0);
    tracep->declBus(c+252,"rf2bpu_rs1", false,-1, 31,0);
    tracep->declBit(c+295,"dec_jalr_rs1x0", false,-1);
    tracep->declBit(c+296,"dec_jalr_rs1x1", false,-1);
    tracep->declBit(c+9,"dec_jalr_rs1xn", false,-1);
    tracep->declBit(c+354,"jalr_rs1x1_dep", false,-1);
    tracep->declBit(c+354,"jalr_rs1xn_dep", false,-1);
    tracep->declBit(c+354,"jalr_rs1xn_dep_ir_clr", false,-1);
    tracep->declBit(c+111,"rs1xn_rdrf_r", false,-1);
    tracep->declBit(c+38,"rs1xn_rdrf_set", false,-1);
    tracep->declBit(c+111,"rs1xn_rdrf_clr", false,-1);
    tracep->declBit(c+49,"rs1xn_rdrf_ena", false,-1);
    tracep->declBit(c+50,"rs1xn_rdrf_nxt", false,-1);
    tracep->pushNamePrefix("rs1xn_rdrf_dfflrs ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBit(c+49,"lden", false,-1);
    tracep->declBus(c+50,"dnxt", false,-1, 0,0);
    tracep->declBus(c+111,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+111,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_ifu_minidec ");
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBus(c+287,"instr", false,-1, 31,0);
    tracep->declBit(c+2,"dec_rs1en", false,-1);
    tracep->declBit(c+3,"dec_rs2en", false,-1);
    tracep->declBus(c+290,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+291,"dec_rs2idx", false,-1, 4,0);
    tracep->declBit(c+4,"dec_bjp", false,-1);
    tracep->declBit(c+5,"dec_jal", false,-1);
    tracep->declBit(c+6,"dec_jalr", false,-1);
    tracep->declBus(c+290,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBus(c+7,"dec_bjp_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_pc_vld_dfflr ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBit(c+105,"lden", false,-1);
    tracep->declBus(c+107,"dnxt", false,-1, 0,0);
    tracep->declBus(c+59,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+59,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_rs1idx_dfflr ");
    tracep->declBus(c+358,"DW", false,-1, 31,0);
    tracep->declBit(c+39,"lden", false,-1);
    tracep->declBus(c+290,"dnxt", false,-1, 4,0);
    tracep->declBus(c+56,"qout", false,-1, 4,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+56,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_rs2idx_dfflr ");
    tracep->declBus(c+358,"DW", false,-1, 31,0);
    tracep->declBit(c+40,"lden", false,-1);
    tracep->declBus(c+291,"dnxt", false,-1, 4,0);
    tracep->declBus(c+57,"qout", false,-1, 4,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+57,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_valid_dfflr ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBit(c+36,"lden", false,-1);
    tracep->declBus(c+37,"dnxt", false,-1, 0,0);
    tracep->declBus(c+52,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+52,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out_flag_dfflr ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBit(c+45,"lden", false,-1);
    tracep->declBus(c+46,"dnxt", false,-1, 0,0);
    tracep->declBus(c+110,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+110,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_newpend_dfflr ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBit(c+47,"lden", false,-1);
    tracep->declBus(c+48,"dnxt", false,-1, 0,0);
    tracep->declBus(c+109,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+109,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_flag_dffrs ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBus(c+354,"dnxt", false,-1, 0,0);
    tracep->declBus(c+289,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+112,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_req_dfflr ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBit(c+34,"lden", false,-1);
    tracep->declBus(c+35,"dnxt", false,-1, 0,0);
    tracep->declBus(c+103,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+103,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+221,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+189,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+189,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+222,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+191,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+191,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+223,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+192,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+192,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+224,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+193,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+193,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+225,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+194,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+194,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+226,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+195,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+195,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+227,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+196,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+196,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+197,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+197,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+229,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+198,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+198,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+230,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+190,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+190,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+231,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+199,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+199,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+232,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+200,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+200,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+233,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+201,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+201,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+234,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+202,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+202,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+235,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+203,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+203,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+236,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+204,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+204,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+237,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+205,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+205,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+238,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+206,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+206,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+239,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+207,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+207,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+240,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+208,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+208,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+209,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+209,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+242,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+210,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+210,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+243,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+211,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+211,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+244,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+212,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+212,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+245,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+213,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+213,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+246,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+214,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+214,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+247,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+215,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+215,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+248,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+216,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+216,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+249,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+217,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+217,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+250,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+218,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+218,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+251,"lden", false,-1);
    tracep->declBus(c+254,"dnxt", false,-1, 31,0);
    tracep->declBus(c+219,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBus(c+219,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBus(c+287,"rv32_instr", false,-1, 31,0);
    tracep->declBus(c+360,"i_pc", false,-1, 31,0);
    tracep->declBit(c+354,"i_prdt_taken", false,-1);
    tracep->declBit(c+295,"dec_rs1x0", false,-1);
    tracep->declBit(c+297,"dec_rs2x0", false,-1);
    tracep->declBit(c+2,"dec_rs1en", false,-1);
    tracep->declBit(c+3,"dec_rs2en", false,-1);
    tracep->declBit(c+298,"dec_rdwen", false,-1);
    tracep->declBus(c+290,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+291,"dec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+299,"dec_rdidx", false,-1, 4,0);
    tracep->declBus(c+10,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+360,"dec_pc", false,-1, 31,0);
    tracep->declQuad(c+11,"dec_info", false,-1, 32,0);
    tracep->declBit(c+4,"dec_bjp", false,-1);
    tracep->declBit(c+5,"dec_jal", false,-1);
    tracep->declBit(c+6,"dec_jalr", false,-1);
    tracep->declBus(c+290,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBus(c+7,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+300,"opcode", false,-1, 6,0);
    tracep->declBus(c+299,"rv32_rd", false,-1, 4,0);
    tracep->declBus(c+301,"rv32_func3", false,-1, 2,0);
    tracep->declBus(c+290,"rv32_rs1", false,-1, 4,0);
    tracep->declBus(c+291,"rv32_rs2", false,-1, 4,0);
    tracep->declBus(c+302,"rv32_func7", false,-1, 6,0);
    tracep->declBit(c+303,"opcode_1_0_11", false,-1);
    tracep->declBit(c+304,"opcode_4_2_000", false,-1);
    tracep->declBit(c+305,"opcode_4_2_001", false,-1);
    tracep->declBit(c+306,"opcode_4_2_010", false,-1);
    tracep->declBit(c+307,"opcode_4_2_011", false,-1);
    tracep->declBit(c+308,"opcode_4_2_100", false,-1);
    tracep->declBit(c+309,"opcode_4_2_101", false,-1);
    tracep->declBit(c+310,"opcode_4_2_110", false,-1);
    tracep->declBit(c+311,"opcode_4_2_111", false,-1);
    tracep->declBit(c+312,"opcode_6_5_00", false,-1);
    tracep->declBit(c+313,"opcode_6_5_01", false,-1);
    tracep->declBit(c+314,"opcode_6_5_10", false,-1);
    tracep->declBit(c+315,"opcode_6_5_11", false,-1);
    tracep->declBit(c+316,"rv32_func3_000", false,-1);
    tracep->declBit(c+317,"rv32_func3_001", false,-1);
    tracep->declBit(c+318,"rv32_func3_010", false,-1);
    tracep->declBit(c+319,"rv32_func3_011", false,-1);
    tracep->declBit(c+320,"rv32_func3_100", false,-1);
    tracep->declBit(c+321,"rv32_func3_101", false,-1);
    tracep->declBit(c+322,"rv32_func3_110", false,-1);
    tracep->declBit(c+323,"rv32_func3_111", false,-1);
    tracep->declBit(c+324,"rv32_func7_0000000", false,-1);
    tracep->declBit(c+325,"rv32_func7_0100000", false,-1);
    tracep->declBit(c+326,"rv32_func7_0000001", false,-1);
    tracep->declBit(c+327,"rv32_func7_0000101", false,-1);
    tracep->declBit(c+328,"rv32_func7_0001001", false,-1);
    tracep->declBit(c+329,"rv32_func7_0001101", false,-1);
    tracep->declBit(c+330,"rv32_func7_0010101", false,-1);
    tracep->declBit(c+331,"rv32_func7_0100001", false,-1);
    tracep->declBit(c+332,"rv32_func7_0010001", false,-1);
    tracep->declBit(c+333,"rv32_func7_0101101", false,-1);
    tracep->declBit(c+334,"rv32_func7_1111111", false,-1);
    tracep->declBit(c+335,"rv32_func7_0000100", false,-1);
    tracep->declBit(c+336,"rv32_func7_0001000", false,-1);
    tracep->declBit(c+337,"rv32_func7_0001100", false,-1);
    tracep->declBit(c+338,"rv32_func7_0101100", false,-1);
    tracep->declBit(c+339,"rv32_func7_0010000", false,-1);
    tracep->declBit(c+340,"rv32_func7_0010100", false,-1);
    tracep->declBit(c+341,"rv32_func7_1100000", false,-1);
    tracep->declBit(c+342,"rv32_func7_1110000", false,-1);
    tracep->declBit(c+343,"rv32_func7_1010000", false,-1);
    tracep->declBit(c+344,"rv32_func7_1101000", false,-1);
    tracep->declBit(c+345,"rv32_func7_1111000", false,-1);
    tracep->declBit(c+346,"rv32_func7_1010001", false,-1);
    tracep->declBit(c+347,"rv32_func7_1110001", false,-1);
    tracep->declBit(c+348,"rv32_func7_1100001", false,-1);
    tracep->declBit(c+349,"rv32_func7_1101001", false,-1);
    tracep->declBit(c+295,"rv32_rs1_x0", false,-1);
    tracep->declBit(c+297,"rv32_rs2_x0", false,-1);
    tracep->declBit(c+350,"rv32_rd_x0", false,-1);
    tracep->declBit(c+6,"rv32_jalr", false,-1);
    tracep->declBit(c+5,"rv32_jal", false,-1);
    tracep->declBit(c+13,"rv32_op_imm", false,-1);
    tracep->declBit(c+14,"rv32_op", false,-1);
    tracep->declBit(c+15,"rv32_system", false,-1);
    tracep->declBit(c+16,"rv32_auipc", false,-1);
    tracep->declBit(c+16,"rv32_lui", false,-1);
    tracep->declBit(c+17,"rv32_ebreak", false,-1);
    tracep->declBit(c+18,"rv32_addi", false,-1);
    tracep->declBit(c+19,"rv32_nop", false,-1);
    tracep->declBit(c+17,"ecall_ebreak", false,-1);
    tracep->declBit(c+20,"alu_op", false,-1);
    tracep->declBit(c+21,"need_imm", false,-1);
    tracep->declBus(c+22,"alu_info_bus", false,-1, 20,0);
    tracep->declBit(c+2,"rv32_need_rs1", false,-1);
    tracep->declBit(c+3,"rv32_need_rs2", false,-1);
    tracep->declBit(c+298,"rv32_need_rd", false,-1);
    tracep->declBus(c+23,"rv32_i_imm", false,-1, 31,0);
    tracep->declBus(c+24,"rv32_s_imm", false,-1, 31,0);
    tracep->declBus(c+25,"rv32_b_imm", false,-1, 31,0);
    tracep->declBus(c+351,"rv32_u_imm", false,-1, 31,0);
    tracep->declBus(c+26,"rv32_j_imm", false,-1, 31,0);
    tracep->declBit(c+27,"rv32_imm_sel_i", false,-1);
    tracep->declBit(c+6,"rv32_imm_sel_jalr", false,-1);
    tracep->declBus(c+23,"rv32_jalr_imm", false,-1, 31,0);
    tracep->declBit(c+16,"rv32_imm_sel_u", false,-1);
    tracep->declBit(c+5,"rv32_imm_sel_j", false,-1);
    tracep->declBit(c+5,"rv32_imm_sel_jal", false,-1);
    tracep->declBus(c+26,"rv32_jal_imm", false,-1, 31,0);
    tracep->declBus(c+10,"rv32_imm", false,-1, 31,0);
    tracep->declBit(c+21,"rv32_need_imm", false,-1);
    tracep->declBit(c+4,"bjp_op", false,-1);
    tracep->declBus(c+28,"bjp_info_bus", false,-1, 16,0);
    tracep->declBit(c+113,"dec_bjp_test", false,-1);
    tracep->pushNamePrefix("decode_dec_bjp_test_dfflr ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBit(c+353,"lden", false,-1);
    tracep->declBus(c+18,"dnxt", false,-1, 0,0);
    tracep->declBus(c+113,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+113,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_exu_decode__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_exu_decode__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst", false,-1);
    tracep->declBus(c+54,"rv32_instr", false,-1, 31,0);
    tracep->declBus(c+55,"i_pc", false,-1, 31,0);
    tracep->declBit(c+58,"i_prdt_taken", false,-1);
    tracep->declBit(c+63,"dec_rs1x0", false,-1);
    tracep->declBit(c+64,"dec_rs2x0", false,-1);
    tracep->declBit(c+68,"dec_rs1en", false,-1);
    tracep->declBit(c+69,"dec_rs2en", false,-1);
    tracep->declBit(c+70,"dec_rdwen", false,-1);
    tracep->declBus(c+114,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+115,"dec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+62,"dec_rdidx", false,-1, 4,0);
    tracep->declBus(c+67,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+55,"dec_pc", false,-1, 31,0);
    tracep->declQuad(c+65,"dec_info", false,-1, 32,0);
    tracep->declBit(c+116,"dec_bjp", false,-1);
    tracep->declBit(c+117,"dec_jal", false,-1);
    tracep->declBit(c+118,"dec_jalr", false,-1);
    tracep->declBus(c+114,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBus(c+119,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+120,"opcode", false,-1, 6,0);
    tracep->declBus(c+62,"rv32_rd", false,-1, 4,0);
    tracep->declBus(c+121,"rv32_func3", false,-1, 2,0);
    tracep->declBus(c+114,"rv32_rs1", false,-1, 4,0);
    tracep->declBus(c+115,"rv32_rs2", false,-1, 4,0);
    tracep->declBus(c+122,"rv32_func7", false,-1, 6,0);
    tracep->declBit(c+123,"opcode_1_0_11", false,-1);
    tracep->declBit(c+124,"opcode_4_2_000", false,-1);
    tracep->declBit(c+125,"opcode_4_2_001", false,-1);
    tracep->declBit(c+126,"opcode_4_2_010", false,-1);
    tracep->declBit(c+127,"opcode_4_2_011", false,-1);
    tracep->declBit(c+128,"opcode_4_2_100", false,-1);
    tracep->declBit(c+129,"opcode_4_2_101", false,-1);
    tracep->declBit(c+130,"opcode_4_2_110", false,-1);
    tracep->declBit(c+131,"opcode_4_2_111", false,-1);
    tracep->declBit(c+132,"opcode_6_5_00", false,-1);
    tracep->declBit(c+133,"opcode_6_5_01", false,-1);
    tracep->declBit(c+134,"opcode_6_5_10", false,-1);
    tracep->declBit(c+135,"opcode_6_5_11", false,-1);
    tracep->declBit(c+136,"rv32_func3_000", false,-1);
    tracep->declBit(c+137,"rv32_func3_001", false,-1);
    tracep->declBit(c+138,"rv32_func3_010", false,-1);
    tracep->declBit(c+139,"rv32_func3_011", false,-1);
    tracep->declBit(c+140,"rv32_func3_100", false,-1);
    tracep->declBit(c+141,"rv32_func3_101", false,-1);
    tracep->declBit(c+142,"rv32_func3_110", false,-1);
    tracep->declBit(c+143,"rv32_func3_111", false,-1);
    tracep->declBit(c+144,"rv32_func7_0000000", false,-1);
    tracep->declBit(c+145,"rv32_func7_0100000", false,-1);
    tracep->declBit(c+146,"rv32_func7_0000001", false,-1);
    tracep->declBit(c+147,"rv32_func7_0000101", false,-1);
    tracep->declBit(c+148,"rv32_func7_0001001", false,-1);
    tracep->declBit(c+149,"rv32_func7_0001101", false,-1);
    tracep->declBit(c+150,"rv32_func7_0010101", false,-1);
    tracep->declBit(c+151,"rv32_func7_0100001", false,-1);
    tracep->declBit(c+152,"rv32_func7_0010001", false,-1);
    tracep->declBit(c+153,"rv32_func7_0101101", false,-1);
    tracep->declBit(c+154,"rv32_func7_1111111", false,-1);
    tracep->declBit(c+155,"rv32_func7_0000100", false,-1);
    tracep->declBit(c+156,"rv32_func7_0001000", false,-1);
    tracep->declBit(c+157,"rv32_func7_0001100", false,-1);
    tracep->declBit(c+158,"rv32_func7_0101100", false,-1);
    tracep->declBit(c+159,"rv32_func7_0010000", false,-1);
    tracep->declBit(c+160,"rv32_func7_0010100", false,-1);
    tracep->declBit(c+161,"rv32_func7_1100000", false,-1);
    tracep->declBit(c+162,"rv32_func7_1110000", false,-1);
    tracep->declBit(c+163,"rv32_func7_1010000", false,-1);
    tracep->declBit(c+164,"rv32_func7_1101000", false,-1);
    tracep->declBit(c+165,"rv32_func7_1111000", false,-1);
    tracep->declBit(c+166,"rv32_func7_1010001", false,-1);
    tracep->declBit(c+167,"rv32_func7_1110001", false,-1);
    tracep->declBit(c+168,"rv32_func7_1100001", false,-1);
    tracep->declBit(c+169,"rv32_func7_1101001", false,-1);
    tracep->declBit(c+63,"rv32_rs1_x0", false,-1);
    tracep->declBit(c+64,"rv32_rs2_x0", false,-1);
    tracep->declBit(c+170,"rv32_rd_x0", false,-1);
    tracep->declBit(c+118,"rv32_jalr", false,-1);
    tracep->declBit(c+117,"rv32_jal", false,-1);
    tracep->declBit(c+171,"rv32_op_imm", false,-1);
    tracep->declBit(c+172,"rv32_op", false,-1);
    tracep->declBit(c+173,"rv32_system", false,-1);
    tracep->declBit(c+174,"rv32_auipc", false,-1);
    tracep->declBit(c+174,"rv32_lui", false,-1);
    tracep->declBit(c+175,"rv32_ebreak", false,-1);
    tracep->declBit(c+176,"rv32_addi", false,-1);
    tracep->declBit(c+177,"rv32_nop", false,-1);
    tracep->declBit(c+175,"ecall_ebreak", false,-1);
    tracep->declBit(c+178,"alu_op", false,-1);
    tracep->declBit(c+179,"need_imm", false,-1);
    tracep->declBus(c+180,"alu_info_bus", false,-1, 20,0);
    tracep->declBit(c+68,"rv32_need_rs1", false,-1);
    tracep->declBit(c+69,"rv32_need_rs2", false,-1);
    tracep->declBit(c+70,"rv32_need_rd", false,-1);
    tracep->declBus(c+181,"rv32_i_imm", false,-1, 31,0);
    tracep->declBus(c+182,"rv32_s_imm", false,-1, 31,0);
    tracep->declBus(c+183,"rv32_b_imm", false,-1, 31,0);
    tracep->declBus(c+184,"rv32_u_imm", false,-1, 31,0);
    tracep->declBus(c+185,"rv32_j_imm", false,-1, 31,0);
    tracep->declBit(c+186,"rv32_imm_sel_i", false,-1);
    tracep->declBit(c+118,"rv32_imm_sel_jalr", false,-1);
    tracep->declBus(c+181,"rv32_jalr_imm", false,-1, 31,0);
    tracep->declBit(c+174,"rv32_imm_sel_u", false,-1);
    tracep->declBit(c+117,"rv32_imm_sel_j", false,-1);
    tracep->declBit(c+117,"rv32_imm_sel_jal", false,-1);
    tracep->declBus(c+185,"rv32_jal_imm", false,-1, 31,0);
    tracep->declBus(c+67,"rv32_imm", false,-1, 31,0);
    tracep->declBit(c+179,"rv32_need_imm", false,-1);
    tracep->declBit(c+116,"bjp_op", false,-1);
    tracep->declBus(c+187,"bjp_info_bus", false,-1, 16,0);
    tracep->declBit(c+188,"dec_bjp_test", false,-1);
    tracep->pushNamePrefix("decode_dec_bjp_test_dfflr ");
    tracep->declBus(c+357,"DW", false,-1, 31,0);
    tracep->declBit(c+353,"lden", false,-1);
    tracep->declBus(c+176,"dnxt", false,-1, 0,0);
    tracep->declBus(c+188,"qout", false,-1, 0,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+188,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+32,"lden", false,-1);
    tracep->declBus(c+287,"dnxt", false,-1, 31,0);
    tracep->declBus(c+54,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+54,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+106,"lden", false,-1);
    tracep->declBus(c+51,"dnxt", false,-1, 31,0);
    tracep->declBus(c+55,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+55,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+359,"DW", false,-1, 31,0);
    tracep->declBit(c+31,"lden", false,-1);
    tracep->declBus(c+288,"dnxt", false,-1, 31,0);
    tracep->declBus(c+51,"qout", false,-1, 31,0);
    tracep->declBit(c+278,"clk", false,-1);
    tracep->declBit(c+279,"rst_n", false,-1);
    tracep->declBus(c+51,"qout_r", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__prdt_taken));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr));
    bufp->fullIData(oldp+7,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm),32);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bjp_req));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn));
    bufp->fullIData(oldp+10,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_imm),32);
    bufp->fullQData(oldp+11,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_info),33);
    bufp->fullBit(oldp+13,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op_imm));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_system));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_auipc));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_ebreak));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_addi));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_nop));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_op));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__need_imm));
    bufp->fullIData(oldp+22,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    bufp->fullBit(oldp+27,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
    bufp->fullIData(oldp+28,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_hsked));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_clr));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_ena));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_nxt));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_ena));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_nxt));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bpu2rf_rs1_ena));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_ena));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_ena));
    bufp->fullIData(oldp+41,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op2),32);
    bufp->fullBit(oldp+42,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_new_req));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid_pre));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__new_req_condi));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_ena));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_nxt));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_ena));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_nxt));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt));
    bufp->fullIData(oldp+51,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r),32);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__core.__PVT__ifu_o_ready));
    bufp->fullIData(oldp+54,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r),32);
    bufp->fullIData(oldp+55,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r),32);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r),5);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r),5);
    bufp->fullBit(oldp+58,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__commit_trap));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_ena));
    bufp->fullCData(oldp+62,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 7U))),5);
    bufp->fullBit(oldp+63,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+64,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0x14U)))));
    bufp->fullQData(oldp+65,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info),33);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm),32);
    bufp->fullBit(oldp+68,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs1en));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs2en));
    bufp->fullBit(oldp+70,((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 7U)))));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_ebreak));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp_prdt));
    bufp->fullIData(oldp+75,(((IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                               ? 3U : 0x1fU)),32);
    bufp->fullBit(oldp+76,((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    bufp->fullBit(oldp+77,((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid));
    bufp->fullBit(oldp+80,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                          >> 4U)))));
    bufp->fullBit(oldp+81,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                          >> 5U)))));
    bufp->fullIData(oldp+82,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm),32);
    bufp->fullQData(oldp+83,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info),33);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc),32);
    bufp->fullBit(oldp+86,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add));
    bufp->fullBit(oldp+87,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu));
    bufp->fullIData(oldp+89,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm),32);
    bufp->fullQData(oldp+90,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info),33);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc),32);
    bufp->fullBit(oldp+93,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 0x13U)))));
    bufp->fullIData(oldp+94,((0x1ffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info))),17);
    bufp->fullBit(oldp+95,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add));
    bufp->fullBit(oldp+96,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2));
    bufp->fullIData(oldp+97,((0x1fffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info))),21);
    bufp->fullBit(oldp+98,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+99,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+100,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_o_hsked));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_set));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_ena));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_set));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_nxt));
    bufp->fullBit(oldp+108,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_i_ready));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_flag_dffrs__DOT__qout_r));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r));
    bufp->fullCData(oldp+114,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+115,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jal));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jalr));
    bufp->fullIData(oldp+119,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp_imm),32);
    bufp->fullCData(oldp+120,((0x7fU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),7);
    bufp->fullCData(oldp+121,((7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+122,((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+123,((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
    bufp->fullBit(oldp+124,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+125,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+126,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+127,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+128,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+129,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+130,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+131,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+132,((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+133,((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+134,((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+135,((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+136,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+137,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+138,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+139,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+140,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+141,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+142,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+143,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+144,((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+145,((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+146,((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+147,((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+148,((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+149,((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                      >> 0x19U))));
    bufp->fullBit(oldp+150,((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+151,((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+152,((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+153,((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+154,((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+155,((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+156,((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+157,((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                      >> 0x19U))));
    bufp->fullBit(oldp+158,((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+159,((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+160,((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+161,((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+162,((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+163,((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+164,((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+165,((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+166,((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+167,((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+168,((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+169,((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+170,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 7U)))));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op_imm));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op));
    bufp->fullBit(oldp+173,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_system));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_auipc));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_ebreak));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_addi));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_nop));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_op));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__need_imm));
    bufp->fullIData(oldp+180,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
    bufp->fullIData(oldp+184,((0xfffff000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),32);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    bufp->fullBit(oldp+186,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
    bufp->fullIData(oldp+187,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
    bufp->fullBit(oldp+188,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r));
    bufp->fullIData(oldp+189,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen),32);
    bufp->fullBit(oldp+221,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+222,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+223,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+224,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+225,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+226,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+227,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+230,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+231,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+232,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+233,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+234,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+235,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+237,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+238,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+240,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+241,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+243,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+244,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+245,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+246,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+247,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+248,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+251,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullIData(oldp+252,(vlSymsp->TOP__core.__PVT__rf2ifu_rs1),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_rs2),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs1),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs2),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_o_wbck_wdat),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2),32);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1),32);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2),32);
    bufp->fullIData(oldp+266,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[2U] 
                                << 0x1eU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[1U] 
                                             >> 2U))),32);
    bufp->fullIData(oldp+267,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[1U] 
                                << 0x1eU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[0U] 
                                             >> 2U))),32);
    bufp->fullQData(oldp+268,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1),33);
    bufp->fullQData(oldp+270,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2),33);
    bufp->fullQData(oldp+272,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1),33);
    bufp->fullQData(oldp+274,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2),33);
    bufp->fullQData(oldp+276,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res),33);
    bufp->fullBit(oldp+278,(vlSelf->clk));
    bufp->fullBit(oldp+279,(vlSelf->rst));
    bufp->fullIData(oldp+280,(vlSelf->inspect_pc),32);
    bufp->fullIData(oldp+281,(vlSelf->pc_rtvec),32);
    bufp->fullBit(oldp+282,(vlSelf->ifu_req_valid));
    bufp->fullBit(oldp+283,(vlSelf->ifu_req_ready));
    bufp->fullIData(oldp+284,(vlSelf->ifu_req_pc),32);
    bufp->fullBit(oldp+285,(vlSelf->ifu_rsp_valid));
    bufp->fullBit(oldp+286,(vlSelf->ifu_rsp_ready));
    bufp->fullIData(oldp+287,(vlSelf->ifu_rsp_instr),32);
    bufp->fullIData(oldp+288,((0xfffffffeU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre)),32);
    bufp->fullBit(oldp+289,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.reset_flag_r));
    bufp->fullCData(oldp+290,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+291,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+292,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__prdt_pc_add_op1),32);
    bufp->fullIData(oldp+293,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre),32);
    bufp->fullIData(oldp+294,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op1),32);
    bufp->fullBit(oldp+295,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+296,((1U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+297,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+298,((0U != (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 7U)))));
    bufp->fullCData(oldp+299,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+300,((0x7fU & vlSelf->ifu_rsp_instr)),7);
    bufp->fullCData(oldp+301,((7U & (vlSelf->ifu_rsp_instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+302,((vlSelf->ifu_rsp_instr 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+303,((3U == (3U & vlSelf->ifu_rsp_instr))));
    bufp->fullBit(oldp+304,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+305,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+306,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+307,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+308,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+309,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+310,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+311,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+312,((0U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+313,((1U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+314,((2U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+315,((3U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+316,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+317,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+318,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+319,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+320,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+321,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+322,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+323,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+324,((0U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+325,((0x20U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+326,((1U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+327,((5U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+328,((9U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+329,((0xdU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->fullBit(oldp+330,((0x15U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+331,((0x21U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+332,((0x11U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+333,((0x2dU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+334,((0x7fU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+335,((4U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+336,((8U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+337,((0xcU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->fullBit(oldp+338,((0x2cU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+339,((0x10U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+340,((0x14U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+341,((0x60U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+342,((0x70U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+343,((0x50U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+344,((0x68U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+345,((0x78U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+346,((0x51U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+347,((0x71U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+348,((0x61U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+349,((0x69U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+350,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 7U)))));
    bufp->fullIData(oldp+351,((0xfffff000U & vlSelf->ifu_rsp_instr)),32);
    bufp->fullIData(oldp+352,(vlSymsp->TOP__core.__PVT__ifu_req_pc_temp),32);
    bufp->fullBit(oldp+353,(1U));
    bufp->fullBit(oldp+354,(0U));
    bufp->fullIData(oldp+355,(0x42U),32);
    bufp->fullIData(oldp+356,(4U),32);
    bufp->fullIData(oldp+357,(1U),32);
    bufp->fullIData(oldp+358,(5U),32);
    bufp->fullIData(oldp+359,(0x20U),32);
    bufp->fullIData(oldp+360,(0U),32);
}
