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
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+321,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+322,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+323,"ifu_req_valid", false,-1);
    tracep->declBit(c+324,"ifu_req_ready", false,-1);
    tracep->declBus(c+325,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+326,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+327,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+328,"ifu_rsp_instr", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+54,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+322,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+31,"ifu_req_valid", false,-1);
    tracep->declBit(c+324,"ifu_req_ready", false,-1);
    tracep->declBus(c+329,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+326,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+32,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+328,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBit(c+55,"ifu_o_valid", false,-1);
    tracep->declBit(c+56,"ifu_o_ready", false,-1);
    tracep->declBus(c+57,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+58,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+59,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+60,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+61,"ifu_o_prdt_taken", false,-1);
    tracep->declBit(c+62,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+198,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+293,"rf2ifu_rs1", false,-1, 31,0);
    tracep->pushNamePrefix("inst_exu ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBit(c+55,"i_valid", false,-1);
    tracep->declBit(c+56,"i_ready", false,-1);
    tracep->declBus(c+57,"i_ir", false,-1, 31,0);
    tracep->declBus(c+58,"i_pc", false,-1, 31,0);
    tracep->declBus(c+59,"i_rs1idx", false,-1, 4,0);
    tracep->declBus(c+60,"i_rs2idx", false,-1, 4,0);
    tracep->declBit(c+62,"i_pc_vld", false,-1);
    tracep->declBit(c+61,"i_prdt_taken", false,-1);
    tracep->declBit(c+63,"commit_trap", false,-1);
    tracep->declBus(c+198,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+293,"rf2ifu_rs1", false,-1, 31,0);
    tracep->declBus(c+293,"rf_rs1", false,-1, 31,0);
    tracep->declBus(c+294,"rf_rs2", false,-1, 31,0);
    tracep->declBit(c+64,"rf_wbck_ena", false,-1);
    tracep->declBus(c+295,"rf_wbck_wdat", false,-1, 31,0);
    tracep->declBus(c+65,"rf_wbck_rdidx", false,-1, 4,0);
    tracep->declBus(c+199,"endcode", false,-1, 31,0);
    tracep->declBit(c+66,"dec_rs1x0", false,-1);
    tracep->declBit(c+67,"dec_rs2x0", false,-1);
    tracep->declQuad(c+68,"dec_info", false,-1, 32,0);
    tracep->declBus(c+70,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+58,"dec_pc", false,-1, 31,0);
    tracep->declBit(c+71,"dec_rs1en", false,-1);
    tracep->declBit(c+72,"dec_rs2en", false,-1);
    tracep->declBus(c+65,"dec_rdidx", false,-1, 4,0);
    tracep->declBit(c+73,"dec_rdwen", false,-1);
    tracep->declBit(c+55,"disp_alu_valid", false,-1);
    tracep->declBit(c+56,"disp_alu_ready", false,-1);
    tracep->declBus(c+296,"disp_alu_rs1", false,-1, 31,0);
    tracep->declBus(c+297,"disp_alu_rs2", false,-1, 31,0);
    tracep->declBus(c+70,"disp_alu_imm", false,-1, 31,0);
    tracep->declQuad(c+68,"disp_alu_info", false,-1, 32,0);
    tracep->declBus(c+65,"disp_alu_rdidx", false,-1, 4,0);
    tracep->declBit(c+73,"disp_alu_rdwen", false,-1);
    tracep->declBus(c+58,"disp_alu_pc", false,-1, 31,0);
    tracep->declBit(c+64,"alu_wbck_o_valid", false,-1);
    tracep->declBit(c+394,"alu_wbck_o_ready", false,-1);
    tracep->declBus(c+295,"alu_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+65,"alu_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+74,"alu_cmt_bjp", false,-1);
    tracep->declBit(c+75,"alu_cmt_ebreak", false,-1);
    tracep->declBit(c+76,"alu_cmt_valid", false,-1);
    tracep->declBit(c+394,"alu_cmt_ready", false,-1);
    tracep->declBit(c+77,"alu_cmt_bjp_prdt", false,-1);
    tracep->declBit(c+62,"alu_cmt_pc_vld", false,-1);
    tracep->declBus(c+58,"alu_cmt_pc", false,-1, 31,0);
    tracep->declBus(c+57,"alu_cmt_instr", false,-1, 31,0);
    tracep->declBus(c+70,"alu_cmt_imm", false,-1, 31,0);
    tracep->declBus(c+78,"cmt_cause", false,-1, 31,0);
    tracep->pushNamePrefix("inst_RegisterFile ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+59,"read_src1_idx", false,-1, 4,0);
    tracep->declBus(c+60,"read_src2_idx", false,-1, 4,0);
    tracep->declBus(c+293,"read_src1_dat", false,-1, 31,0);
    tracep->declBus(c+294,"read_src2_dat", false,-1, 31,0);
    tracep->declBit(c+64,"wbck_dest_wen", false,-1);
    tracep->declBus(c+65,"wbck_dest_idx", false,-1, 4,0);
    tracep->declBus(c+295,"wbck_dest_dat", false,-1, 31,0);
    tracep->declBus(c+198,"x1_r", false,-1, 31,0);
    tracep->declBus(c+199,"endcode", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+200+i*1,"rf_r", true,(i+0), 31,0);
    }
    tracep->declBus(c+261,"rf_wen", false,-1, 31,0);
    tracep->declBus(c+330,"publicgetsignal__Vstatic__j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu ");
    tracep->declBit(c+55,"i_valid", false,-1);
    tracep->declBit(c+56,"i_ready", false,-1);
    tracep->declBus(c+296,"i_rs1", false,-1, 31,0);
    tracep->declBus(c+297,"i_rs2", false,-1, 31,0);
    tracep->declBus(c+70,"i_imm", false,-1, 31,0);
    tracep->declQuad(c+68,"i_info", false,-1, 32,0);
    tracep->declBus(c+58,"i_pc", false,-1, 31,0);
    tracep->declBus(c+57,"i_instr", false,-1, 31,0);
    tracep->declBit(c+62,"i_pc_vld", false,-1);
    tracep->declBus(c+65,"i_rdidx", false,-1, 4,0);
    tracep->declBit(c+73,"i_rdwen", false,-1);
    tracep->declBit(c+76,"cmt_o_valid", false,-1);
    tracep->declBit(c+394,"cmt_o_ready", false,-1);
    tracep->declBit(c+62,"cmt_o_pc_vld", false,-1);
    tracep->declBus(c+58,"cmt_o_pc", false,-1, 31,0);
    tracep->declBus(c+57,"cmt_o_instr", false,-1, 31,0);
    tracep->declBus(c+70,"cmt_o_imm", false,-1, 31,0);
    tracep->declBit(c+74,"cmt_o_bjp", false,-1);
    tracep->declBit(c+75,"cmt_o_ebreak", false,-1);
    tracep->declBit(c+77,"cmt_o_bjp_prdt", false,-1);
    tracep->declBit(c+64,"wbck_o_valid", false,-1);
    tracep->declBit(c+394,"wbck_o_ready", false,-1);
    tracep->declBus(c+295,"wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+65,"wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+79,"alu_op", false,-1);
    tracep->declBit(c+80,"bjp_op", false,-1);
    tracep->declBit(c+81,"alu_i_valid", false,-1);
    tracep->declBit(c+82,"bjp_i_valid", false,-1);
    tracep->declBit(c+80,"bjp_i_ready", false,-1);
    tracep->declBit(c+82,"bjp_o_valid", false,-1);
    tracep->declBit(c+80,"bjp_o_ready", false,-1);
    tracep->declBus(c+298,"bjp_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+83,"bjp_o_cmt_bjp", false,-1);
    tracep->declBit(c+84,"bjp_o_cmt_prdt", false,-1);
    tracep->declBus(c+299,"bjp_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+300,"bjp_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+83,"bjp_req_alu_add", false,-1);
    tracep->declBus(c+298,"bjp_req_alu_add_res", false,-1, 31,0);
    tracep->declBus(c+301,"bjp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+302,"bjp_i_rs2", false,-1, 31,0);
    tracep->declBus(c+85,"bjp_i_imm", false,-1, 31,0);
    tracep->declQuad(c+86,"bjp_i_info", false,-1, 32,0);
    tracep->declBus(c+88,"bjp_i_pc", false,-1, 31,0);
    tracep->declBus(c+298,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+303,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+304,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+89,"alu_req_alu_add", false,-1);
    tracep->declBit(c+90,"alu_req_alu_lui", false,-1);
    tracep->declBit(c+91,"alu_req_alu", false,-1);
    tracep->declBit(c+80,"bjp_req_alu", false,-1);
    tracep->declBit(c+81,"alu_o_valid", false,-1);
    tracep->declBit(c+79,"alu_o_ready", false,-1);
    tracep->declBus(c+298,"alu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBus(c+305,"alu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+306,"alu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+92,"alu_i_imm", false,-1, 31,0);
    tracep->declQuad(c+93,"alu_i_info", false,-1, 32,0);
    tracep->declBus(c+95,"alu_i_pc", false,-1, 31,0);
    tracep->declBit(c+79,"alu_i_ready", false,-1);
    tracep->declBit(c+96,"alu_o_cmt_ebreak", false,-1);
    tracep->declBit(c+76,"o_valid", false,-1);
    tracep->declBit(c+394,"o_ready", false,-1);
    tracep->declBit(c+79,"o_sel_alu", false,-1);
    tracep->declBit(c+80,"o_sel_bjp", false,-1);
    tracep->declBit(c+73,"wbck_o_rdwen", false,-1);
    tracep->declBit(c+73,"o_need_wbck", false,-1);
    tracep->declBit(c+394,"o_need_cmt", false,-1);
    tracep->pushNamePrefix("inst_exu_alu_bjp ");
    tracep->declBit(c+82,"bjp_i_valid", false,-1);
    tracep->declBit(c+80,"bjp_i_ready", false,-1);
    tracep->declBus(c+301,"bjp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+302,"bjp_i_rs2", false,-1, 31,0);
    tracep->declBus(c+85,"bjp_i_imm", false,-1, 31,0);
    tracep->declBus(c+88,"bjp_i_pc", false,-1, 31,0);
    tracep->declBus(c+97,"bjp_i_info", false,-1, 16,0);
    tracep->declBit(c+82,"bjp_o_valid", false,-1);
    tracep->declBit(c+80,"bjp_o_ready", false,-1);
    tracep->declBus(c+298,"bjp_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+83,"bjp_o_cmt_bjp", false,-1);
    tracep->declBit(c+84,"bjp_o_cmt_prdt", false,-1);
    tracep->declBus(c+299,"bjp_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+300,"bjp_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+83,"bjp_req_alu_add", false,-1);
    tracep->declBus(c+298,"bjp_req_alu_add_res", false,-1, 31,0);
    tracep->declBit(c+83,"jump", false,-1);
    tracep->declBit(c+84,"bjp_i_bprdt", false,-1);
    tracep->declBit(c+83,"wbck_link", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu_dpath ");
    tracep->declBit(c+91,"alu_req_alu", false,-1);
    tracep->declBit(c+89,"alu_req_alu_add", false,-1);
    tracep->declBit(c+90,"alu_req_alu_lui", false,-1);
    tracep->declBus(c+303,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+304,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+83,"bjp_req_alu_add", false,-1);
    tracep->declBus(c+298,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBit(c+80,"bjp_req_alu", false,-1);
    tracep->declBus(c+299,"bjp_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+300,"bjp_req_alu_op2", false,-1, 31,0);
    tracep->declBus(c+298,"bjp_req_alu_add_res", false,-1, 31,0);
    tracep->declBus(c+307,"mux_op1", false,-1, 31,0);
    tracep->declBus(c+308,"mux_op2", false,-1, 31,0);
    tracep->declBus(c+307,"misc_op1", false,-1, 31,0);
    tracep->declBus(c+308,"misc_op2", false,-1, 31,0);
    tracep->declBit(c+98,"op_add", false,-1);
    tracep->declBit(c+98,"op_addsub", false,-1);
    tracep->declBit(c+99,"op_mvop2", false,-1);
    tracep->declQuad(c+309,"misc_adder_op1", false,-1, 32,0);
    tracep->declQuad(c+311,"misc_adder_op2", false,-1, 32,0);
    tracep->declQuad(c+309,"adder_op1", false,-1, 32,0);
    tracep->declQuad(c+311,"adder_op2", false,-1, 32,0);
    tracep->declBit(c+395,"adder_cin", false,-1);
    tracep->declQuad(c+313,"adder_in1", false,-1, 32,0);
    tracep->declQuad(c+315,"adder_in2", false,-1, 32,0);
    tracep->declQuad(c+317,"adder_res", false,-1, 32,0);
    tracep->declBit(c+98,"adder_add", false,-1);
    tracep->declBit(c+395,"adder_sub", false,-1);
    tracep->declBit(c+98,"adder_addsub", false,-1);
    tracep->declBus(c+308,"mvop2_res", false,-1, 31,0);
    tracep->declBus(c+298,"alu_dpath_res", false,-1, 31,0);
    tracep->declBus(c+396,"DPATH_MUX_WIDTH", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu_rglr ");
    tracep->declBit(c+81,"alu_i_valid", false,-1);
    tracep->declBit(c+79,"alu_i_ready", false,-1);
    tracep->declBus(c+298,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+305,"alu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+306,"alu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+92,"alu_i_imm", false,-1, 31,0);
    tracep->declBus(c+95,"alu_i_pc", false,-1, 31,0);
    tracep->declBus(c+100,"alu_i_info", false,-1, 20,0);
    tracep->declBit(c+81,"alu_o_valid", false,-1);
    tracep->declBit(c+79,"alu_o_ready", false,-1);
    tracep->declBus(c+298,"alu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+96,"alu_o_cmt_ebreak", false,-1);
    tracep->declBit(c+89,"alu_req_alu_add", false,-1);
    tracep->declBit(c+90,"alu_req_alu_lui", false,-1);
    tracep->declBus(c+303,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+304,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+101,"op2imm", false,-1);
    tracep->declBit(c+102,"op1pc", false,-1);
    tracep->declBit(c+103,"nop", false,-1);
    tracep->declBit(c+96,"ebreak", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_exu_commit ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBit(c+63,"commit_trap", false,-1);
    tracep->declBit(c+76,"alu_cmt_i_valid", false,-1);
    tracep->declBit(c+394,"alu_cmt_i_ready", false,-1);
    tracep->declBus(c+58,"alu_cmt_i_pc", false,-1, 31,0);
    tracep->declBus(c+57,"alu_cmt_i_instr", false,-1, 31,0);
    tracep->declBit(c+62,"alu_cmt_i_pc_vld", false,-1);
    tracep->declBus(c+70,"alu_cmt_i_imm", false,-1, 31,0);
    tracep->declBit(c+74,"alu_cmt_i_bjp", false,-1);
    tracep->declBit(c+75,"alu_cmt_i_ebreak", false,-1);
    tracep->declBit(c+77,"alu_cmt_i_bjp_prdt", false,-1);
    tracep->declBus(c+78,"cmt_cause", false,-1, 31,0);
    tracep->declBus(c+199,"endcode", false,-1, 31,0);
    tracep->declBit(c+394,"alu_brchmis_cmt_i_ready", false,-1);
    tracep->declBit(c+394,"alu_excp_cmt_i_ready", false,-1);
    tracep->pushNamePrefix("inst_exu_branchslv ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBit(c+76,"cmt_i_valid", false,-1);
    tracep->declBit(c+394,"cmt_i_ready", false,-1);
    tracep->declBit(c+74,"cmt_i_bjp", false,-1);
    tracep->declBit(c+77,"cmt_i_bjp_prdt", false,-1);
    tracep->declBus(c+58,"cmt_i_pc", false,-1, 31,0);
    tracep->declBus(c+70,"cmt_i_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_excp ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBit(c+63,"commit_trap", false,-1);
    tracep->declBit(c+394,"alu_excp_i_ready", false,-1);
    tracep->declBit(c+76,"alu_excp_i_valid", false,-1);
    tracep->declBit(c+75,"alu_excp_i_ebreak", false,-1);
    tracep->declBus(c+78,"cmt_cause", false,-1, 31,0);
    tracep->declBus(c+199,"endcode", false,-1, 31,0);
    tracep->declBit(c+394,"excpirq_flush_ack", false,-1);
    tracep->declBit(c+63,"excpirq_flush_req", false,-1);
    tracep->declBit(c+75,"alu_need_flush", false,-1);
    tracep->declBit(c+75,"alu_excp_i_ebreak4excp", false,-1);
    tracep->declBit(c+63,"alu_excp_flush_req", false,-1);
    tracep->declBit(c+394,"alu_excp_i_ready4nondbg", false,-1);
    tracep->declBit(c+63,"all_excp_flush_req", false,-1);
    tracep->declBit(c+63,"excpirq_taken_ena", false,-1);
    tracep->declBit(c+63,"excp_taken_ena", false,-1);
    tracep->declBit(c+104,"alu_excp_flush_req_ebreak", false,-1);
    tracep->declBus(c+78,"excp_cause", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_exu_disp ");
    tracep->declBit(c+55,"disp_i_valid", false,-1);
    tracep->declBit(c+56,"disp_i_ready", false,-1);
    tracep->declBit(c+66,"disp_i_rs1x0", false,-1);
    tracep->declBit(c+67,"disp_i_rs2x0", false,-1);
    tracep->declBit(c+71,"disp_i_rs1en", false,-1);
    tracep->declBit(c+72,"disp_i_rs2en", false,-1);
    tracep->declBus(c+59,"disp_i_rs1idx", false,-1, 4,0);
    tracep->declBus(c+60,"disp_i_rs2idx", false,-1, 4,0);
    tracep->declBus(c+293,"disp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+294,"disp_i_rs2", false,-1, 31,0);
    tracep->declBit(c+73,"disp_i_rdwen", false,-1);
    tracep->declBus(c+65,"disp_i_rdidx", false,-1, 4,0);
    tracep->declQuad(c+68,"disp_i_info", false,-1, 32,0);
    tracep->declBus(c+70,"disp_i_imm", false,-1, 31,0);
    tracep->declBus(c+58,"disp_i_pc", false,-1, 31,0);
    tracep->declBit(c+55,"disp_o_alu_valid", false,-1);
    tracep->declBit(c+56,"disp_o_alu_ready", false,-1);
    tracep->declBus(c+296,"disp_o_alu_rs1", false,-1, 31,0);
    tracep->declBus(c+297,"disp_o_alu_rs2", false,-1, 31,0);
    tracep->declBit(c+73,"disp_o_alu_rdwen", false,-1);
    tracep->declBus(c+65,"disp_o_alu_rdidx", false,-1, 4,0);
    tracep->declQuad(c+68,"disp_o_alu_info", false,-1, 32,0);
    tracep->declBus(c+70,"disp_o_alu_imm", false,-1, 31,0);
    tracep->declBus(c+58,"disp_o_alu_pc", false,-1, 31,0);
    tracep->declBit(c+56,"disp_i_ready_pos", false,-1);
    tracep->declBit(c+55,"disp_i_valid_pos", false,-1);
    tracep->declBus(c+296,"disp_i_rs1_msked", false,-1, 31,0);
    tracep->declBus(c+297,"disp_i_rs2_msked", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_wbck ");
    tracep->declBit(c+64,"alu_wbck_i_valid", false,-1);
    tracep->declBit(c+394,"alu_wbck_i_ready", false,-1);
    tracep->declBus(c+295,"alu_wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+65,"alu_wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+64,"rf_wbck_o_ena", false,-1);
    tracep->declBus(c+295,"rf_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+65,"rf_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+64,"wbck_sel_alu", false,-1);
    tracep->declBit(c+394,"rf_wbck_o_ready", false,-1);
    tracep->declBit(c+394,"wbck_i_ready", false,-1);
    tracep->declBit(c+64,"wbck_i_valid", false,-1);
    tracep->declBus(c+295,"wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+65,"wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+64,"rf_wbck_o_valid", false,-1);
    tracep->declBit(c+64,"wbck_o_ena", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+54,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+322,"pc_rtvec", false,-1, 31,0);
    tracep->declBus(c+57,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+58,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+59,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+60,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+61,"ifu_o_prdt_taken", false,-1);
    tracep->declBit(c+55,"ifu_o_valid", false,-1);
    tracep->declBit(c+56,"ifu_o_ready", false,-1);
    tracep->declBit(c+31,"ifu_req_valid", false,-1);
    tracep->declBit(c+324,"ifu_req_ready", false,-1);
    tracep->declBus(c+329,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+326,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+32,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+328,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBit(c+62,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+198,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+293,"rf2ifu_rs1", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+54,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+322,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+31,"ifu_req_valid", false,-1);
    tracep->declBit(c+324,"ifu_req_ready", false,-1);
    tracep->declBus(c+329,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+326,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+32,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+328,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBus(c+57,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+58,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+59,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+60,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+61,"ifu_o_prdt_taken", false,-1);
    tracep->declBit(c+55,"ifu_o_valid", false,-1);
    tracep->declBit(c+56,"ifu_o_ready", false,-1);
    tracep->declBit(c+62,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+198,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+293,"rf2ifu_rs1", false,-1, 31,0);
    tracep->declBit(c+33,"ifu_req_hsked", false,-1);
    tracep->declBit(c+34,"ifu_rsp_hsked", false,-1);
    tracep->declBit(c+105,"ifu_ir_o_hsked", false,-1);
    tracep->declBit(c+331,"reset_flag_r", false,-1);
    tracep->declBit(c+106,"reset_req_r", false,-1);
    tracep->declBit(c+107,"reset_req_set", false,-1);
    tracep->declBit(c+35,"reset_req_clr", false,-1);
    tracep->declBit(c+36,"reset_req_ena", false,-1);
    tracep->declBit(c+37,"reset_req_nxt", false,-1);
    tracep->declBit(c+106,"ifu_reset_req", false,-1);
    tracep->declBit(c+34,"ir_valid_set", false,-1);
    tracep->declBit(c+38,"ir_valid_ena", false,-1);
    tracep->declBit(c+105,"ir_valid_clr", false,-1);
    tracep->declBit(c+39,"ir_valid_nxt", false,-1);
    tracep->declBit(c+55,"ir_valid_r", false,-1);
    tracep->declBit(c+105,"ir_pc_vld_clr", false,-1);
    tracep->declBit(c+108,"ir_pc_vld_ena", false,-1);
    tracep->declBit(c+109,"ir_pc_vld_set", false,-1);
    tracep->declBit(c+62,"ir_pc_vld_r", false,-1);
    tracep->declBit(c+110,"ir_pc_vld_nxt", false,-1);
    tracep->declBit(c+111,"ifu_ir_i_ready", false,-1);
    tracep->declBit(c+112,"pc_newpend_r", false,-1);
    tracep->declBus(c+328,"ifu_ir_nxt", false,-1, 31,0);
    tracep->declBit(c+1,"prdt_taken", false,-1);
    tracep->declBit(c+61,"ifu_prdt_taken_r", false,-1);
    tracep->declBus(c+57,"ifu_ir_r", false,-1, 31,0);
    tracep->declBit(c+34,"ir_r_ena", false,-1);
    tracep->declBit(c+2,"minidec_rs1en", false,-1);
    tracep->declBit(c+3,"minidec_rs2en", false,-1);
    tracep->declBus(c+332,"minidec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+333,"minidec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+59,"ir_rs1idx_r", false,-1, 4,0);
    tracep->declBus(c+60,"ir_rs2idx_r", false,-1, 4,0);
    tracep->declBit(c+40,"bpu2rf_rs1_ena", false,-1);
    tracep->declBit(c+41,"ir_rs1idx_ena", false,-1);
    tracep->declBit(c+42,"ir_rs2idx_ena", false,-1);
    tracep->declBus(c+332,"ir_rs1idx_nxt", false,-1, 4,0);
    tracep->declBus(c+333,"ir_rs2idx_nxt", false,-1, 4,0);
    tracep->declBus(c+54,"pc_r", false,-1, 31,0);
    tracep->declBus(c+54,"ifu_pc_nxt", false,-1, 31,0);
    tracep->declBus(c+58,"ifu_pc_r", false,-1, 31,0);
    tracep->declBit(c+4,"minidec_bjp", false,-1);
    tracep->declBit(c+5,"minidec_jal", false,-1);
    tracep->declBit(c+6,"minidec_jalr", false,-1);
    tracep->declBus(c+7,"minidec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+332,"minidec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBit(c+43,"bpu_wait", false,-1);
    tracep->declBus(c+334,"prdt_pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+7,"prdt_pc_add_op2", false,-1, 31,0);
    tracep->declBus(c+113,"pc_r_final", false,-1, 31,0);
    tracep->declBus(c+397,"pc_incr_ofst", false,-1, 31,0);
    tracep->declBus(c+329,"pc_nxt", false,-1, 31,0);
    tracep->declBus(c+335,"pc_nxt_pre", false,-1, 31,0);
    tracep->declBit(c+8,"bjp_req", false,-1);
    tracep->declBit(c+114,"bjp_final", false,-1);
    tracep->declBus(c+115,"prdt_pc_add_op1_final", false,-1, 31,0);
    tracep->declBus(c+116,"prdt_pc_add_op2_final", false,-1, 31,0);
    tracep->declBus(c+336,"pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+117,"pc_add_op2", false,-1, 31,0);
    tracep->declBit(c+44,"ifu_new_req", false,-1);
    tracep->declBit(c+45,"ifu_req_valid_pre", false,-1);
    tracep->declBit(c+34,"out_flag_clr", false,-1);
    tracep->declBit(c+118,"out_flag_r", false,-1);
    tracep->declBit(c+46,"new_req_condi", false,-1);
    tracep->declBit(c+32,"ifu_rsp2ir_ready", false,-1);
    tracep->declBit(c+33,"pc_ena", false,-1);
    tracep->declBit(c+33,"out_flag_set", false,-1);
    tracep->declBit(c+47,"out_flag_ena", false,-1);
    tracep->declBit(c+48,"out_flag_nxt", false,-1);
    tracep->declBit(c+33,"pc_newpend_set", false,-1);
    tracep->declBit(c+109,"pc_newpend_clr", false,-1);
    tracep->declBit(c+49,"pc_newpend_ena", false,-1);
    tracep->declBit(c+50,"pc_newpend_nxt", false,-1);
    tracep->pushNamePrefix("bjp_final_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+33,"lden", false,-1);
    tracep->declBus(c+8,"dnxt", false,-1, 0,0);
    tracep->declBus(c+114,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+114,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_prdt_taken_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+34,"lden", false,-1);
    tracep->declBus(c+1,"dnxt", false,-1, 0,0);
    tracep->declBus(c+61,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+61,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_ifu_litebpu ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+329,"pc", false,-1, 31,0);
    tracep->declBit(c+5,"dec_jal", false,-1);
    tracep->declBit(c+6,"dec_jalr", false,-1);
    tracep->declBus(c+7,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+332,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBit(c+43,"bpu_wait", false,-1);
    tracep->declBit(c+1,"prdt_taken", false,-1);
    tracep->declBus(c+334,"prdt_pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+7,"prdt_pc_add_op2", false,-1, 31,0);
    tracep->declBit(c+326,"dec_i_valid", false,-1);
    tracep->declBit(c+40,"bpu2rf_rs1_ena", false,-1);
    tracep->declBit(c+105,"ir_valid_clr", false,-1);
    tracep->declBus(c+198,"rf2bpu_x1", false,-1, 31,0);
    tracep->declBus(c+293,"rf2bpu_rs1", false,-1, 31,0);
    tracep->declBit(c+337,"dec_jalr_rs1x0", false,-1);
    tracep->declBit(c+338,"dec_jalr_rs1x1", false,-1);
    tracep->declBit(c+9,"dec_jalr_rs1xn", false,-1);
    tracep->declBit(c+10,"jalr_rs1x1_dep", false,-1);
    tracep->declBit(c+11,"jalr_rs1xn_dep", false,-1);
    tracep->declBit(c+51,"jalr_rs1xn_dep_ir_clr", false,-1);
    tracep->declBit(c+119,"rs1xn_rdrf_r", false,-1);
    tracep->declBit(c+40,"rs1xn_rdrf_set", false,-1);
    tracep->declBit(c+119,"rs1xn_rdrf_clr", false,-1);
    tracep->declBit(c+52,"rs1xn_rdrf_ena", false,-1);
    tracep->declBit(c+53,"rs1xn_rdrf_nxt", false,-1);
    tracep->pushNamePrefix("rs1xn_rdrf_dfflrs ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+52,"lden", false,-1);
    tracep->declBus(c+53,"dnxt", false,-1, 0,0);
    tracep->declBus(c+119,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+119,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_ifu_minidec ");
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+328,"instr", false,-1, 31,0);
    tracep->declBit(c+2,"dec_rs1en", false,-1);
    tracep->declBit(c+3,"dec_rs2en", false,-1);
    tracep->declBus(c+332,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+333,"dec_rs2idx", false,-1, 4,0);
    tracep->declBit(c+4,"dec_bjp", false,-1);
    tracep->declBit(c+5,"dec_jal", false,-1);
    tracep->declBit(c+6,"dec_jalr", false,-1);
    tracep->declBus(c+332,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBus(c+7,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBit(c+120,"minidec_dec_bjp_test", false,-1);
    tracep->pushNamePrefix("dec_bjp_test_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+394,"lden", false,-1);
    tracep->declBus(c+4,"dnxt", false,-1, 0,0);
    tracep->declBus(c+120,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+120,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ir_pc_vld_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+108,"lden", false,-1);
    tracep->declBus(c+110,"dnxt", false,-1, 0,0);
    tracep->declBus(c+62,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+62,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_rs1idx_dfflr ");
    tracep->declBus(c+399,"DW", false,-1, 31,0);
    tracep->declBit(c+41,"lden", false,-1);
    tracep->declBus(c+332,"dnxt", false,-1, 4,0);
    tracep->declBus(c+59,"qout", false,-1, 4,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+59,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_rs2idx_dfflr ");
    tracep->declBus(c+399,"DW", false,-1, 31,0);
    tracep->declBit(c+42,"lden", false,-1);
    tracep->declBus(c+333,"dnxt", false,-1, 4,0);
    tracep->declBus(c+60,"qout", false,-1, 4,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+60,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_valid_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+38,"lden", false,-1);
    tracep->declBus(c+39,"dnxt", false,-1, 0,0);
    tracep->declBus(c+55,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+55,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out_flag_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+47,"lden", false,-1);
    tracep->declBus(c+48,"dnxt", false,-1, 0,0);
    tracep->declBus(c+118,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+118,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_newpend_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+49,"lden", false,-1);
    tracep->declBus(c+50,"dnxt", false,-1, 0,0);
    tracep->declBus(c+112,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+112,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_flag_dffrs ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBus(c+395,"dnxt", false,-1, 0,0);
    tracep->declBus(c+331,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+121,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_req_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+36,"lden", false,-1);
    tracep->declBus(c+37,"dnxt", false,-1, 0,0);
    tracep->declBus(c+106,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+106,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+262,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+198,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+198,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+263,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+232,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+232,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+264,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+233,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+233,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+265,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+234,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+234,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+266,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+235,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+235,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+267,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+236,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+236,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+268,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+237,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+237,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+269,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+238,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+238,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+270,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+239,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+239,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+271,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+199,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+199,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+272,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+240,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+240,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+273,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+241,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+241,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+274,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+242,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+242,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+275,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+243,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+243,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+276,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+244,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+244,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+277,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+245,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+245,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+278,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+246,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+246,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+279,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+247,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+247,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+280,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+248,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+248,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+281,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+249,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+249,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+282,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+250,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+250,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+283,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+251,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+251,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+284,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+252,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+252,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+253,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+253,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+286,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+254,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+254,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+287,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+255,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+255,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+288,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+256,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+256,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+289,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+257,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+257,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+290,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+258,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+258,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+291,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+259,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+259,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+292,"lden", false,-1);
    tracep->declBus(c+295,"dnxt", false,-1, 31,0);
    tracep->declBus(c+260,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBus(c+260,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+328,"rv32_instr", false,-1, 31,0);
    tracep->declBus(c+401,"i_pc", false,-1, 31,0);
    tracep->declBit(c+395,"i_prdt_taken", false,-1);
    tracep->declBit(c+337,"dec_rs1x0", false,-1);
    tracep->declBit(c+339,"dec_rs2x0", false,-1);
    tracep->declBit(c+2,"dec_rs1en", false,-1);
    tracep->declBit(c+3,"dec_rs2en", false,-1);
    tracep->declBit(c+340,"dec_rdwen", false,-1);
    tracep->declBus(c+332,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+333,"dec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+341,"dec_rdidx", false,-1, 4,0);
    tracep->declBus(c+12,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+401,"dec_pc", false,-1, 31,0);
    tracep->declQuad(c+13,"dec_info", false,-1, 32,0);
    tracep->declBit(c+4,"dec_bjp", false,-1);
    tracep->declBit(c+5,"dec_jal", false,-1);
    tracep->declBit(c+6,"dec_jalr", false,-1);
    tracep->declBus(c+332,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBus(c+7,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+342,"opcode", false,-1, 6,0);
    tracep->declBus(c+341,"rv32_rd", false,-1, 4,0);
    tracep->declBus(c+343,"rv32_func3", false,-1, 2,0);
    tracep->declBus(c+332,"rv32_rs1", false,-1, 4,0);
    tracep->declBus(c+333,"rv32_rs2", false,-1, 4,0);
    tracep->declBus(c+344,"rv32_func7", false,-1, 6,0);
    tracep->declBit(c+345,"opcode_1_0_11", false,-1);
    tracep->declBit(c+346,"opcode_4_2_000", false,-1);
    tracep->declBit(c+347,"opcode_4_2_001", false,-1);
    tracep->declBit(c+348,"opcode_4_2_010", false,-1);
    tracep->declBit(c+349,"opcode_4_2_011", false,-1);
    tracep->declBit(c+350,"opcode_4_2_100", false,-1);
    tracep->declBit(c+351,"opcode_4_2_101", false,-1);
    tracep->declBit(c+352,"opcode_4_2_110", false,-1);
    tracep->declBit(c+353,"opcode_4_2_111", false,-1);
    tracep->declBit(c+354,"opcode_6_5_00", false,-1);
    tracep->declBit(c+355,"opcode_6_5_01", false,-1);
    tracep->declBit(c+356,"opcode_6_5_10", false,-1);
    tracep->declBit(c+357,"opcode_6_5_11", false,-1);
    tracep->declBit(c+358,"rv32_func3_000", false,-1);
    tracep->declBit(c+359,"rv32_func3_001", false,-1);
    tracep->declBit(c+360,"rv32_func3_010", false,-1);
    tracep->declBit(c+361,"rv32_func3_011", false,-1);
    tracep->declBit(c+362,"rv32_func3_100", false,-1);
    tracep->declBit(c+363,"rv32_func3_101", false,-1);
    tracep->declBit(c+364,"rv32_func3_110", false,-1);
    tracep->declBit(c+365,"rv32_func3_111", false,-1);
    tracep->declBit(c+366,"rv32_func7_0000000", false,-1);
    tracep->declBit(c+367,"rv32_func7_0100000", false,-1);
    tracep->declBit(c+368,"rv32_func7_0000001", false,-1);
    tracep->declBit(c+369,"rv32_func7_0000101", false,-1);
    tracep->declBit(c+370,"rv32_func7_0001001", false,-1);
    tracep->declBit(c+371,"rv32_func7_0001101", false,-1);
    tracep->declBit(c+372,"rv32_func7_0010101", false,-1);
    tracep->declBit(c+373,"rv32_func7_0100001", false,-1);
    tracep->declBit(c+374,"rv32_func7_0010001", false,-1);
    tracep->declBit(c+375,"rv32_func7_0101101", false,-1);
    tracep->declBit(c+376,"rv32_func7_1111111", false,-1);
    tracep->declBit(c+377,"rv32_func7_0000100", false,-1);
    tracep->declBit(c+378,"rv32_func7_0001000", false,-1);
    tracep->declBit(c+379,"rv32_func7_0001100", false,-1);
    tracep->declBit(c+380,"rv32_func7_0101100", false,-1);
    tracep->declBit(c+381,"rv32_func7_0010000", false,-1);
    tracep->declBit(c+382,"rv32_func7_0010100", false,-1);
    tracep->declBit(c+383,"rv32_func7_1100000", false,-1);
    tracep->declBit(c+384,"rv32_func7_1110000", false,-1);
    tracep->declBit(c+385,"rv32_func7_1010000", false,-1);
    tracep->declBit(c+386,"rv32_func7_1101000", false,-1);
    tracep->declBit(c+387,"rv32_func7_1111000", false,-1);
    tracep->declBit(c+388,"rv32_func7_1010001", false,-1);
    tracep->declBit(c+389,"rv32_func7_1110001", false,-1);
    tracep->declBit(c+390,"rv32_func7_1100001", false,-1);
    tracep->declBit(c+391,"rv32_func7_1101001", false,-1);
    tracep->declBit(c+337,"rv32_rs1_x0", false,-1);
    tracep->declBit(c+339,"rv32_rs2_x0", false,-1);
    tracep->declBit(c+392,"rv32_rd_x0", false,-1);
    tracep->declBit(c+6,"rv32_jalr", false,-1);
    tracep->declBit(c+5,"rv32_jal", false,-1);
    tracep->declBit(c+15,"rv32_op_imm", false,-1);
    tracep->declBit(c+16,"rv32_op", false,-1);
    tracep->declBit(c+17,"rv32_system", false,-1);
    tracep->declBit(c+18,"rv32_auipc", false,-1);
    tracep->declBit(c+18,"rv32_lui", false,-1);
    tracep->declBit(c+19,"rv32_ebreak", false,-1);
    tracep->declBit(c+20,"rv32_addi", false,-1);
    tracep->declBit(c+21,"rv32_nop", false,-1);
    tracep->declBit(c+19,"ecall_ebreak", false,-1);
    tracep->declBit(c+22,"alu_op", false,-1);
    tracep->declBit(c+23,"need_imm", false,-1);
    tracep->declBus(c+24,"alu_info_bus", false,-1, 20,0);
    tracep->declBit(c+2,"rv32_need_rs1", false,-1);
    tracep->declBit(c+3,"rv32_need_rs2", false,-1);
    tracep->declBit(c+340,"rv32_need_rd", false,-1);
    tracep->declBus(c+25,"rv32_i_imm", false,-1, 31,0);
    tracep->declBus(c+26,"rv32_s_imm", false,-1, 31,0);
    tracep->declBus(c+27,"rv32_b_imm", false,-1, 31,0);
    tracep->declBus(c+393,"rv32_u_imm", false,-1, 31,0);
    tracep->declBus(c+28,"rv32_j_imm", false,-1, 31,0);
    tracep->declBit(c+29,"rv32_imm_sel_i", false,-1);
    tracep->declBit(c+6,"rv32_imm_sel_jalr", false,-1);
    tracep->declBus(c+25,"rv32_jalr_imm", false,-1, 31,0);
    tracep->declBit(c+18,"rv32_imm_sel_u", false,-1);
    tracep->declBit(c+5,"rv32_imm_sel_j", false,-1);
    tracep->declBit(c+5,"rv32_imm_sel_jal", false,-1);
    tracep->declBus(c+28,"rv32_jal_imm", false,-1, 31,0);
    tracep->declBus(c+12,"rv32_imm", false,-1, 31,0);
    tracep->declBit(c+23,"rv32_need_imm", false,-1);
    tracep->declBit(c+4,"bjp_op", false,-1);
    tracep->declBus(c+30,"bjp_info_bus", false,-1, 16,0);
    tracep->declBit(c+122,"dec_bjp_test", false,-1);
    tracep->pushNamePrefix("decode_dec_bjp_test_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+394,"lden", false,-1);
    tracep->declBus(c+20,"dnxt", false,-1, 0,0);
    tracep->declBus(c+122,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+122,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_exu_decode__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_exu_decode__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst", false,-1);
    tracep->declBus(c+57,"rv32_instr", false,-1, 31,0);
    tracep->declBus(c+58,"i_pc", false,-1, 31,0);
    tracep->declBit(c+61,"i_prdt_taken", false,-1);
    tracep->declBit(c+66,"dec_rs1x0", false,-1);
    tracep->declBit(c+67,"dec_rs2x0", false,-1);
    tracep->declBit(c+71,"dec_rs1en", false,-1);
    tracep->declBit(c+72,"dec_rs2en", false,-1);
    tracep->declBit(c+73,"dec_rdwen", false,-1);
    tracep->declBus(c+123,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+124,"dec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+65,"dec_rdidx", false,-1, 4,0);
    tracep->declBus(c+70,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+58,"dec_pc", false,-1, 31,0);
    tracep->declQuad(c+68,"dec_info", false,-1, 32,0);
    tracep->declBit(c+125,"dec_bjp", false,-1);
    tracep->declBit(c+126,"dec_jal", false,-1);
    tracep->declBit(c+127,"dec_jalr", false,-1);
    tracep->declBus(c+123,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBus(c+128,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+129,"opcode", false,-1, 6,0);
    tracep->declBus(c+65,"rv32_rd", false,-1, 4,0);
    tracep->declBus(c+130,"rv32_func3", false,-1, 2,0);
    tracep->declBus(c+123,"rv32_rs1", false,-1, 4,0);
    tracep->declBus(c+124,"rv32_rs2", false,-1, 4,0);
    tracep->declBus(c+131,"rv32_func7", false,-1, 6,0);
    tracep->declBit(c+132,"opcode_1_0_11", false,-1);
    tracep->declBit(c+133,"opcode_4_2_000", false,-1);
    tracep->declBit(c+134,"opcode_4_2_001", false,-1);
    tracep->declBit(c+135,"opcode_4_2_010", false,-1);
    tracep->declBit(c+136,"opcode_4_2_011", false,-1);
    tracep->declBit(c+137,"opcode_4_2_100", false,-1);
    tracep->declBit(c+138,"opcode_4_2_101", false,-1);
    tracep->declBit(c+139,"opcode_4_2_110", false,-1);
    tracep->declBit(c+140,"opcode_4_2_111", false,-1);
    tracep->declBit(c+141,"opcode_6_5_00", false,-1);
    tracep->declBit(c+142,"opcode_6_5_01", false,-1);
    tracep->declBit(c+143,"opcode_6_5_10", false,-1);
    tracep->declBit(c+144,"opcode_6_5_11", false,-1);
    tracep->declBit(c+145,"rv32_func3_000", false,-1);
    tracep->declBit(c+146,"rv32_func3_001", false,-1);
    tracep->declBit(c+147,"rv32_func3_010", false,-1);
    tracep->declBit(c+148,"rv32_func3_011", false,-1);
    tracep->declBit(c+149,"rv32_func3_100", false,-1);
    tracep->declBit(c+150,"rv32_func3_101", false,-1);
    tracep->declBit(c+151,"rv32_func3_110", false,-1);
    tracep->declBit(c+152,"rv32_func3_111", false,-1);
    tracep->declBit(c+153,"rv32_func7_0000000", false,-1);
    tracep->declBit(c+154,"rv32_func7_0100000", false,-1);
    tracep->declBit(c+155,"rv32_func7_0000001", false,-1);
    tracep->declBit(c+156,"rv32_func7_0000101", false,-1);
    tracep->declBit(c+157,"rv32_func7_0001001", false,-1);
    tracep->declBit(c+158,"rv32_func7_0001101", false,-1);
    tracep->declBit(c+159,"rv32_func7_0010101", false,-1);
    tracep->declBit(c+160,"rv32_func7_0100001", false,-1);
    tracep->declBit(c+161,"rv32_func7_0010001", false,-1);
    tracep->declBit(c+162,"rv32_func7_0101101", false,-1);
    tracep->declBit(c+163,"rv32_func7_1111111", false,-1);
    tracep->declBit(c+164,"rv32_func7_0000100", false,-1);
    tracep->declBit(c+165,"rv32_func7_0001000", false,-1);
    tracep->declBit(c+166,"rv32_func7_0001100", false,-1);
    tracep->declBit(c+167,"rv32_func7_0101100", false,-1);
    tracep->declBit(c+168,"rv32_func7_0010000", false,-1);
    tracep->declBit(c+169,"rv32_func7_0010100", false,-1);
    tracep->declBit(c+170,"rv32_func7_1100000", false,-1);
    tracep->declBit(c+171,"rv32_func7_1110000", false,-1);
    tracep->declBit(c+172,"rv32_func7_1010000", false,-1);
    tracep->declBit(c+173,"rv32_func7_1101000", false,-1);
    tracep->declBit(c+174,"rv32_func7_1111000", false,-1);
    tracep->declBit(c+175,"rv32_func7_1010001", false,-1);
    tracep->declBit(c+176,"rv32_func7_1110001", false,-1);
    tracep->declBit(c+177,"rv32_func7_1100001", false,-1);
    tracep->declBit(c+178,"rv32_func7_1101001", false,-1);
    tracep->declBit(c+66,"rv32_rs1_x0", false,-1);
    tracep->declBit(c+67,"rv32_rs2_x0", false,-1);
    tracep->declBit(c+179,"rv32_rd_x0", false,-1);
    tracep->declBit(c+127,"rv32_jalr", false,-1);
    tracep->declBit(c+126,"rv32_jal", false,-1);
    tracep->declBit(c+180,"rv32_op_imm", false,-1);
    tracep->declBit(c+181,"rv32_op", false,-1);
    tracep->declBit(c+182,"rv32_system", false,-1);
    tracep->declBit(c+183,"rv32_auipc", false,-1);
    tracep->declBit(c+183,"rv32_lui", false,-1);
    tracep->declBit(c+184,"rv32_ebreak", false,-1);
    tracep->declBit(c+185,"rv32_addi", false,-1);
    tracep->declBit(c+186,"rv32_nop", false,-1);
    tracep->declBit(c+184,"ecall_ebreak", false,-1);
    tracep->declBit(c+187,"alu_op", false,-1);
    tracep->declBit(c+188,"need_imm", false,-1);
    tracep->declBus(c+189,"alu_info_bus", false,-1, 20,0);
    tracep->declBit(c+71,"rv32_need_rs1", false,-1);
    tracep->declBit(c+72,"rv32_need_rs2", false,-1);
    tracep->declBit(c+73,"rv32_need_rd", false,-1);
    tracep->declBus(c+190,"rv32_i_imm", false,-1, 31,0);
    tracep->declBus(c+191,"rv32_s_imm", false,-1, 31,0);
    tracep->declBus(c+192,"rv32_b_imm", false,-1, 31,0);
    tracep->declBus(c+193,"rv32_u_imm", false,-1, 31,0);
    tracep->declBus(c+194,"rv32_j_imm", false,-1, 31,0);
    tracep->declBit(c+195,"rv32_imm_sel_i", false,-1);
    tracep->declBit(c+127,"rv32_imm_sel_jalr", false,-1);
    tracep->declBus(c+190,"rv32_jalr_imm", false,-1, 31,0);
    tracep->declBit(c+183,"rv32_imm_sel_u", false,-1);
    tracep->declBit(c+126,"rv32_imm_sel_j", false,-1);
    tracep->declBit(c+126,"rv32_imm_sel_jal", false,-1);
    tracep->declBus(c+194,"rv32_jal_imm", false,-1, 31,0);
    tracep->declBus(c+70,"rv32_imm", false,-1, 31,0);
    tracep->declBit(c+188,"rv32_need_imm", false,-1);
    tracep->declBit(c+125,"bjp_op", false,-1);
    tracep->declBus(c+196,"bjp_info_bus", false,-1, 16,0);
    tracep->declBit(c+197,"dec_bjp_test", false,-1);
    tracep->pushNamePrefix("decode_dec_bjp_test_dfflr ");
    tracep->declBus(c+398,"DW", false,-1, 31,0);
    tracep->declBit(c+394,"lden", false,-1);
    tracep->declBus(c+185,"dnxt", false,-1, 0,0);
    tracep->declBus(c+197,"qout", false,-1, 0,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+197,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+34,"lden", false,-1);
    tracep->declBus(c+328,"dnxt", false,-1, 31,0);
    tracep->declBus(c+57,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+57,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+109,"lden", false,-1);
    tracep->declBus(c+329,"dnxt", false,-1, 31,0);
    tracep->declBus(c+58,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+58,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+33,"lden", false,-1);
    tracep->declBus(c+54,"dnxt", false,-1, 31,0);
    tracep->declBus(c+113,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+113,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+33,"lden", false,-1);
    tracep->declBus(c+334,"dnxt", false,-1, 31,0);
    tracep->declBus(c+115,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+115,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+33,"lden", false,-1);
    tracep->declBus(c+7,"dnxt", false,-1, 31,0);
    tracep->declBus(c+116,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+116,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+400,"DW", false,-1, 31,0);
    tracep->declBit(c+33,"lden", false,-1);
    tracep->declBus(c+329,"dnxt", false,-1, 31,0);
    tracep->declBus(c+54,"qout", false,-1, 31,0);
    tracep->declBit(c+319,"clk", false,-1);
    tracep->declBit(c+320,"rst_n", false,-1);
    tracep->declBus(c+54,"qout_r", false,-1, 31,0);
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
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_op1_dfflr ");
    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_op2_dfflr ");
    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_r_final_dfflr ");
    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr__0(vlSelf, tracep);
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
    bufp->fullBit(oldp+10,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__jalr_rs1x1_dep));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep));
    bufp->fullIData(oldp+12,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_imm),32);
    bufp->fullQData(oldp+13,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_info),33);
    bufp->fullBit(oldp+15,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op_imm));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_system));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_auipc));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_ebreak));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_addi));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_nop));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_op));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__need_imm));
    bufp->fullIData(oldp+24,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
    bufp->fullIData(oldp+30,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
    bufp->fullBit(oldp+31,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_hsked));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_clr));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_ena));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_nxt));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_ena));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_nxt));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bpu2rf_rs1_ena));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_ena));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_ena));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bpu_wait));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_new_req));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid_pre));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__new_req_condi));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_ena));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_nxt));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_ena));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_nxt));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt));
    bufp->fullIData(oldp+54,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r),32);
    bufp->fullBit(oldp+55,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__core.__PVT__ifu_o_ready));
    bufp->fullIData(oldp+57,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r),32);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r),32);
    bufp->fullCData(oldp+59,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r),5);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r),5);
    bufp->fullBit(oldp+61,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__commit_trap));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_ena));
    bufp->fullCData(oldp+65,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 7U))),5);
    bufp->fullBit(oldp+66,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+67,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0x14U)))));
    bufp->fullQData(oldp+68,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info),33);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm),32);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs1en));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs2en));
    bufp->fullBit(oldp+73,((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 7U)))));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_ebreak));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp_prdt));
    bufp->fullIData(oldp+78,(((IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                               ? 3U : 0x1fU)),32);
    bufp->fullBit(oldp+79,((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    bufp->fullBit(oldp+80,((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid));
    bufp->fullBit(oldp+83,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                          >> 4U)))));
    bufp->fullBit(oldp+84,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                          >> 5U)))));
    bufp->fullIData(oldp+85,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm),32);
    bufp->fullQData(oldp+86,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info),33);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc),32);
    bufp->fullBit(oldp+89,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add));
    bufp->fullBit(oldp+90,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu));
    bufp->fullIData(oldp+92,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm),32);
    bufp->fullQData(oldp+93,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info),33);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc),32);
    bufp->fullBit(oldp+96,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                          >> 0x13U)))));
    bufp->fullIData(oldp+97,((0x1ffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info))),17);
    bufp->fullBit(oldp+98,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2));
    bufp->fullIData(oldp+100,((0x1fffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info))),21);
    bufp->fullBit(oldp+101,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+102,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+103,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_o_hsked));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_set));
    bufp->fullBit(oldp+108,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_ena));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_set));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_nxt));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_i_ready));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_dfflr__DOT__qout_r));
    bufp->fullIData(oldp+113,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r),32);
    bufp->fullBit(oldp+114,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bjp_final_dfflr__DOT__qout_r));
    bufp->fullIData(oldp+115,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op2),32);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_minidec__DOT__dec_bjp_test_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_flag_dffrs__DOT__qout_r));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r));
    bufp->fullCData(oldp+123,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+124,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+125,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jal));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jalr));
    bufp->fullIData(oldp+128,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp_imm),32);
    bufp->fullCData(oldp+129,((0x7fU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),7);
    bufp->fullCData(oldp+130,((7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+131,((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+132,((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
    bufp->fullBit(oldp+133,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+134,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+135,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+136,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+137,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+138,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+139,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+140,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+141,((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+142,((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+143,((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+144,((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+145,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+146,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+147,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+148,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+149,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+150,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+151,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+152,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+153,((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+154,((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+155,((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+156,((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+157,((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+158,((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                      >> 0x19U))));
    bufp->fullBit(oldp+159,((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+160,((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+161,((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+162,((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+163,((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+164,((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+165,((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+166,((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                      >> 0x19U))));
    bufp->fullBit(oldp+167,((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+168,((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+169,((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+170,((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+171,((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+172,((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+173,((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+174,((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+175,((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+176,((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+177,((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+178,((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+179,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 7U)))));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op_imm));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_system));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_auipc));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_ebreak));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_addi));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_nop));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_op));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__need_imm));
    bufp->fullIData(oldp+189,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
    bufp->fullIData(oldp+193,((0xfffff000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    bufp->fullBit(oldp+195,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
    bufp->fullIData(oldp+196,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
    bufp->fullBit(oldp+197,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r));
    bufp->fullIData(oldp+198,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[1]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[2]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[3]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[4]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[5]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[6]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[7]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[8]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[9]),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[10]),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[11]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[12]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[13]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[14]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[15]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[16]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[17]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[18]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[19]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[20]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[21]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[22]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[23]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[24]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[25]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[26]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[27]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[28]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[29]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[30]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[31]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen),32);
    bufp->fullBit(oldp+262,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+265,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+267,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+268,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+269,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+270,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+277,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+278,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+280,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+281,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+282,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+283,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+284,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+286,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+287,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+288,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+289,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+290,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+291,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+292,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullIData(oldp+293,(vlSymsp->TOP__core.__PVT__rf2ifu_rs1),32);
    bufp->fullIData(oldp+294,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_rs2),32);
    bufp->fullIData(oldp+295,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat),32);
    bufp->fullIData(oldp+296,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs1),32);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs2),32);
    bufp->fullIData(oldp+298,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_o_wbck_wdat),32);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1),32);
    bufp->fullIData(oldp+300,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2),32);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2),32);
    bufp->fullIData(oldp+307,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[2U] 
                                << 0x1eU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[1U] 
                                             >> 2U))),32);
    bufp->fullIData(oldp+308,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[1U] 
                                << 0x1eU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[0U] 
                                             >> 2U))),32);
    bufp->fullQData(oldp+309,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1),33);
    bufp->fullQData(oldp+311,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2),33);
    bufp->fullQData(oldp+313,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1),33);
    bufp->fullQData(oldp+315,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2),33);
    bufp->fullQData(oldp+317,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res),33);
    bufp->fullBit(oldp+319,(vlSelf->clk));
    bufp->fullBit(oldp+320,(vlSelf->rst));
    bufp->fullIData(oldp+321,(vlSelf->inspect_pc),32);
    bufp->fullIData(oldp+322,(vlSelf->pc_rtvec),32);
    bufp->fullBit(oldp+323,(vlSelf->ifu_req_valid));
    bufp->fullBit(oldp+324,(vlSelf->ifu_req_ready));
    bufp->fullIData(oldp+325,(vlSelf->ifu_req_pc),32);
    bufp->fullBit(oldp+326,(vlSelf->ifu_rsp_valid));
    bufp->fullBit(oldp+327,(vlSelf->ifu_rsp_ready));
    bufp->fullIData(oldp+328,(vlSelf->ifu_rsp_instr),32);
    bufp->fullIData(oldp+329,((0xfffffffeU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre)),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__publicgetsignal__Vstatic__j),32);
    bufp->fullBit(oldp+331,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.reset_flag_r));
    bufp->fullCData(oldp+332,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+333,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+334,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__prdt_pc_add_op1),32);
    bufp->fullIData(oldp+335,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre),32);
    bufp->fullIData(oldp+336,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op1),32);
    bufp->fullBit(oldp+337,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+338,((1U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+339,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+340,((0U != (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 7U)))));
    bufp->fullCData(oldp+341,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+342,((0x7fU & vlSelf->ifu_rsp_instr)),7);
    bufp->fullCData(oldp+343,((7U & (vlSelf->ifu_rsp_instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+344,((vlSelf->ifu_rsp_instr 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+345,((3U == (3U & vlSelf->ifu_rsp_instr))));
    bufp->fullBit(oldp+346,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+347,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+348,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+349,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+350,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+351,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+352,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+353,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+354,((0U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+355,((1U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+356,((2U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+357,((3U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+358,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+359,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+360,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+361,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+362,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+363,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+364,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+365,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+366,((0U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+367,((0x20U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+368,((1U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+369,((5U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+370,((9U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+371,((0xdU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->fullBit(oldp+372,((0x15U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+373,((0x21U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+374,((0x11U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+375,((0x2dU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+376,((0x7fU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+377,((4U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+378,((8U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+379,((0xcU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->fullBit(oldp+380,((0x2cU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+381,((0x10U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+382,((0x14U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+383,((0x60U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+384,((0x70U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+385,((0x50U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+386,((0x68U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+387,((0x78U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+388,((0x51U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+389,((0x71U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+390,((0x61U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+391,((0x69U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+392,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 7U)))));
    bufp->fullIData(oldp+393,((0xfffff000U & vlSelf->ifu_rsp_instr)),32);
    bufp->fullBit(oldp+394,(1U));
    bufp->fullBit(oldp+395,(0U));
    bufp->fullIData(oldp+396,(0x42U),32);
    bufp->fullIData(oldp+397,(4U),32);
    bufp->fullIData(oldp+398,(1U),32);
    bufp->fullIData(oldp+399,(5U),32);
    bufp->fullIData(oldp+400,(0x20U),32);
    bufp->fullIData(oldp+401,(0U),32);
}
