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
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBus(c+346,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+347,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+348,"ifu_req_valid", false,-1);
    tracep->declBit(c+349,"ifu_req_ready", false,-1);
    tracep->declBus(c+350,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+351,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+352,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+353,"ifu_rsp_instr", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBus(c+67,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+347,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+45,"ifu_req_valid", false,-1);
    tracep->declBit(c+349,"ifu_req_ready", false,-1);
    tracep->declBus(c+354,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+351,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+46,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+353,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBit(c+68,"ifu_o_valid", false,-1);
    tracep->declBit(c+69,"ifu_o_ready", false,-1);
    tracep->declBus(c+70,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+71,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+72,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+73,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+74,"ifu_o_prdt_taken", false,-1);
    tracep->declBit(c+75,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+242,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+273,"rf2ifu_rs1", false,-1, 31,0);
    tracep->declBit(c+424,"lsu_o_valid", false,-1);
    tracep->declBit(c+425,"lsu_o_ready", false,-1);
    tracep->declBus(c+426,"lsu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+427,"lsu_o_cmt_ld", false,-1);
    tracep->declBit(c+428,"lsu_o_cmt_st", false,-1);
    tracep->declBus(c+274,"agu_icb_cmd_addr", false,-1, 31,0);
    tracep->declBit(c+76,"agu_icb_cmd_read", false,-1);
    tracep->declBus(c+275,"agu_icb_cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+276,"agu_icb_cmd_wmask", false,-1, 3,0);
    tracep->pushNamePrefix("inst_exu ");
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBit(c+68,"i_valid", false,-1);
    tracep->declBit(c+69,"i_ready", false,-1);
    tracep->declBus(c+70,"i_ir", false,-1, 31,0);
    tracep->declBus(c+71,"i_pc", false,-1, 31,0);
    tracep->declBus(c+72,"i_rs1idx", false,-1, 4,0);
    tracep->declBus(c+73,"i_rs2idx", false,-1, 4,0);
    tracep->declBit(c+75,"i_pc_vld", false,-1);
    tracep->declBit(c+74,"i_prdt_taken", false,-1);
    tracep->declBit(c+77,"commit_trap", false,-1);
    tracep->declBus(c+242,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+273,"rf2ifu_rs1", false,-1, 31,0);
    tracep->declBit(c+424,"lsu_o_valid", false,-1);
    tracep->declBit(c+425,"lsu_o_ready", false,-1);
    tracep->declBus(c+426,"lsu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+427,"lsu_o_cmt_ld", false,-1);
    tracep->declBit(c+428,"lsu_o_cmt_st", false,-1);
    tracep->declBus(c+274,"agu_icb_cmd_addr", false,-1, 31,0);
    tracep->declBit(c+76,"agu_icb_cmd_read", false,-1);
    tracep->declBus(c+275,"agu_icb_cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+276,"agu_icb_cmd_wmask", false,-1, 3,0);
    tracep->declBus(c+273,"rf_rs1", false,-1, 31,0);
    tracep->declBus(c+277,"rf_rs2", false,-1, 31,0);
    tracep->declBit(c+309,"rf_wbck_ena", false,-1);
    tracep->declBus(c+355,"rf_wbck_wdat", false,-1, 31,0);
    tracep->declBus(c+310,"rf_wbck_rdidx", false,-1, 4,0);
    tracep->declBus(c+243,"endcode", false,-1, 31,0);
    tracep->declBit(c+78,"dec_rs1x0", false,-1);
    tracep->declBit(c+79,"dec_rs2x0", false,-1);
    tracep->declQuad(c+80,"dec_info", false,-1, 32,0);
    tracep->declBus(c+82,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+71,"dec_pc", false,-1, 31,0);
    tracep->declBit(c+83,"dec_rs1en", false,-1);
    tracep->declBit(c+84,"dec_rs2en", false,-1);
    tracep->declBus(c+85,"dec_rdidx", false,-1, 4,0);
    tracep->declBit(c+86,"dec_rdwen", false,-1);
    tracep->declBit(c+68,"disp_alu_valid", false,-1);
    tracep->declBit(c+69,"disp_alu_ready", false,-1);
    tracep->declBus(c+278,"disp_alu_rs1", false,-1, 31,0);
    tracep->declBus(c+279,"disp_alu_rs2", false,-1, 31,0);
    tracep->declBus(c+82,"disp_alu_imm", false,-1, 31,0);
    tracep->declQuad(c+80,"disp_alu_info", false,-1, 32,0);
    tracep->declBus(c+85,"disp_alu_rdidx", false,-1, 4,0);
    tracep->declBit(c+86,"disp_alu_rdwen", false,-1);
    tracep->declBus(c+71,"disp_alu_pc", false,-1, 31,0);
    tracep->declBit(c+424,"oitf_ret_ena", false,-1);
    tracep->declBit(c+429,"oitf_ret_rdwen", false,-1);
    tracep->declBus(c+430,"oitf_ret_rdidx", false,-1, 4,0);
    tracep->declBit(c+87,"alu_wbck_o_valid", false,-1);
    tracep->declBit(c+425,"alu_wbck_o_ready", false,-1);
    tracep->declBus(c+280,"alu_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+85,"alu_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+88,"alu_cmt_bjp", false,-1);
    tracep->declBit(c+89,"alu_cmt_ebreak", false,-1);
    tracep->declBit(c+90,"alu_cmt_ld", false,-1);
    tracep->declBit(c+91,"alu_cmt_stamo", false,-1);
    tracep->declBit(c+92,"alu_cmt_valid", false,-1);
    tracep->declBit(c+425,"alu_cmt_ready", false,-1);
    tracep->declBit(c+93,"alu_cmt_bjp_prdt", false,-1);
    tracep->declBit(c+75,"alu_cmt_pc_vld", false,-1);
    tracep->declBus(c+71,"alu_cmt_pc", false,-1, 31,0);
    tracep->declBus(c+70,"alu_cmt_instr", false,-1, 31,0);
    tracep->declBus(c+82,"alu_cmt_imm", false,-1, 31,0);
    tracep->declBus(c+94,"cmt_cause", false,-1, 31,0);
    tracep->declBit(c+1,"longp_wbck_o_valid", false,-1);
    tracep->declBit(c+425,"longp_wbck_o_ready", false,-1);
    tracep->declBus(c+2,"longp_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+430,"longp_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+431,"longp_excp_o_ready", false,-1);
    tracep->declBit(c+432,"longp_excp_o_valid", false,-1);
    tracep->declBit(c+3,"longp_excp_o_ld", false,-1);
    tracep->declBit(c+4,"longp_excp_o_st", false,-1);
    tracep->declBus(c+433,"longp_excp_o_pc", false,-1, 31,0);
    tracep->pushNamePrefix("inst_RegisterFile ");
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBus(c+72,"read_src1_idx", false,-1, 4,0);
    tracep->declBus(c+73,"read_src2_idx", false,-1, 4,0);
    tracep->declBus(c+273,"read_src1_dat", false,-1, 31,0);
    tracep->declBus(c+277,"read_src2_dat", false,-1, 31,0);
    tracep->declBit(c+309,"wbck_dest_wen", false,-1);
    tracep->declBus(c+310,"wbck_dest_idx", false,-1, 4,0);
    tracep->declBus(c+355,"wbck_dest_dat", false,-1, 31,0);
    tracep->declBus(c+242,"x1_r", false,-1, 31,0);
    tracep->declBus(c+243,"endcode", false,-1, 31,0);
    tracep->declBus(c+311,"rf_wen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu ");
    tracep->declBit(c+68,"i_valid", false,-1);
    tracep->declBit(c+69,"i_ready", false,-1);
    tracep->declBus(c+278,"i_rs1", false,-1, 31,0);
    tracep->declBus(c+279,"i_rs2", false,-1, 31,0);
    tracep->declBus(c+82,"i_imm", false,-1, 31,0);
    tracep->declQuad(c+80,"i_info", false,-1, 32,0);
    tracep->declBus(c+71,"i_pc", false,-1, 31,0);
    tracep->declBus(c+70,"i_instr", false,-1, 31,0);
    tracep->declBit(c+75,"i_pc_vld", false,-1);
    tracep->declBus(c+85,"i_rdidx", false,-1, 4,0);
    tracep->declBit(c+86,"i_rdwen", false,-1);
    tracep->declBit(c+92,"cmt_o_valid", false,-1);
    tracep->declBit(c+425,"cmt_o_ready", false,-1);
    tracep->declBit(c+75,"cmt_o_pc_vld", false,-1);
    tracep->declBus(c+71,"cmt_o_pc", false,-1, 31,0);
    tracep->declBus(c+70,"cmt_o_instr", false,-1, 31,0);
    tracep->declBus(c+82,"cmt_o_imm", false,-1, 31,0);
    tracep->declBit(c+88,"cmt_o_bjp", false,-1);
    tracep->declBit(c+89,"cmt_o_ebreak", false,-1);
    tracep->declBit(c+93,"cmt_o_bjp_prdt", false,-1);
    tracep->declBit(c+90,"cmt_o_ld", false,-1);
    tracep->declBit(c+91,"cmt_o_stamo", false,-1);
    tracep->declBit(c+87,"wbck_o_valid", false,-1);
    tracep->declBit(c+425,"wbck_o_ready", false,-1);
    tracep->declBus(c+280,"wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+85,"wbck_o_rdidx", false,-1, 4,0);
    tracep->declBus(c+274,"agu_icb_cmd_addr", false,-1, 31,0);
    tracep->declBit(c+76,"agu_icb_cmd_read", false,-1);
    tracep->declBus(c+275,"agu_icb_cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+276,"agu_icb_cmd_wmask", false,-1, 3,0);
    tracep->declBit(c+95,"alu_op", false,-1);
    tracep->declBit(c+96,"bjp_op", false,-1);
    tracep->declBit(c+97,"agu_op", false,-1);
    tracep->declBit(c+98,"alu_i_valid", false,-1);
    tracep->declBit(c+99,"bjp_i_valid", false,-1);
    tracep->declBit(c+100,"agu_i_valid", false,-1);
    tracep->declBit(c+96,"bjp_i_ready", false,-1);
    tracep->declBit(c+97,"agu_i_ready", false,-1);
    tracep->declBit(c+99,"bjp_o_valid", false,-1);
    tracep->declBit(c+96,"bjp_o_ready", false,-1);
    tracep->declBus(c+274,"bjp_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+101,"bjp_o_cmt_bjp", false,-1);
    tracep->declBit(c+102,"bjp_o_cmt_prdt", false,-1);
    tracep->declBus(c+281,"bjp_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+282,"bjp_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+101,"bjp_req_alu_add", false,-1);
    tracep->declBus(c+274,"bjp_req_alu_add_res", false,-1, 31,0);
    tracep->declBus(c+283,"bjp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+284,"bjp_i_rs2", false,-1, 31,0);
    tracep->declBus(c+103,"bjp_i_imm", false,-1, 31,0);
    tracep->declQuad(c+104,"bjp_i_info", false,-1, 32,0);
    tracep->declBus(c+106,"bjp_i_pc", false,-1, 31,0);
    tracep->declBit(c+100,"agu_o_valid", false,-1);
    tracep->declBit(c+97,"agu_o_ready", false,-1);
    tracep->declBus(c+434,"agu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+76,"agu_o_cmt_ld", false,-1);
    tracep->declBit(c+107,"agu_o_cmt_stamo", false,-1);
    tracep->declBus(c+285,"agu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+108,"agu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+425,"agu_req_alu_add", false,-1);
    tracep->declBus(c+274,"agu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+285,"agu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+286,"agu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+108,"agu_i_imm", false,-1, 31,0);
    tracep->declQuad(c+109,"agu_i_info", false,-1, 32,0);
    tracep->declBus(c+274,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+287,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+288,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+111,"alu_req_alu_add", false,-1);
    tracep->declBit(c+112,"alu_req_alu_xor", false,-1);
    tracep->declBit(c+113,"alu_req_alu_or", false,-1);
    tracep->declBit(c+114,"alu_req_alu_sltu", false,-1);
    tracep->declBit(c+115,"alu_req_alu_lui", false,-1);
    tracep->declBit(c+116,"alu_req_alu", false,-1);
    tracep->declBit(c+96,"bjp_req_alu", false,-1);
    tracep->declBit(c+97,"agu_req_alu", false,-1);
    tracep->declBit(c+98,"alu_o_valid", false,-1);
    tracep->declBit(c+95,"alu_o_ready", false,-1);
    tracep->declBus(c+274,"alu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBus(c+289,"alu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+290,"alu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+117,"alu_i_imm", false,-1, 31,0);
    tracep->declQuad(c+118,"alu_i_info", false,-1, 32,0);
    tracep->declBus(c+120,"alu_i_pc", false,-1, 31,0);
    tracep->declBit(c+95,"alu_i_ready", false,-1);
    tracep->declBit(c+121,"alu_o_cmt_ebreak", false,-1);
    tracep->declBit(c+92,"o_valid", false,-1);
    tracep->declBit(c+425,"o_ready", false,-1);
    tracep->declBit(c+95,"o_sel_alu", false,-1);
    tracep->declBit(c+96,"o_sel_bjp", false,-1);
    tracep->declBit(c+97,"o_sel_agu", false,-1);
    tracep->declBit(c+86,"wbck_o_rdwen", false,-1);
    tracep->declBit(c+86,"o_need_wbck", false,-1);
    tracep->declBit(c+425,"o_need_cmt", false,-1);
    tracep->pushNamePrefix("inst_exu_alu_bjp ");
    tracep->declBit(c+99,"bjp_i_valid", false,-1);
    tracep->declBit(c+96,"bjp_i_ready", false,-1);
    tracep->declBus(c+283,"bjp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+284,"bjp_i_rs2", false,-1, 31,0);
    tracep->declBus(c+103,"bjp_i_imm", false,-1, 31,0);
    tracep->declBus(c+106,"bjp_i_pc", false,-1, 31,0);
    tracep->declBus(c+122,"bjp_i_info", false,-1, 16,0);
    tracep->declBit(c+99,"bjp_o_valid", false,-1);
    tracep->declBit(c+96,"bjp_o_ready", false,-1);
    tracep->declBus(c+274,"bjp_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+101,"bjp_o_cmt_bjp", false,-1);
    tracep->declBit(c+102,"bjp_o_cmt_prdt", false,-1);
    tracep->declBus(c+281,"bjp_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+282,"bjp_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+101,"bjp_req_alu_add", false,-1);
    tracep->declBus(c+274,"bjp_req_alu_add_res", false,-1, 31,0);
    tracep->declBit(c+101,"jump", false,-1);
    tracep->declBit(c+102,"bjp_i_bprdt", false,-1);
    tracep->declBit(c+101,"wbck_link", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu_dpath ");
    tracep->declBit(c+116,"alu_req_alu", false,-1);
    tracep->declBit(c+111,"alu_req_alu_add", false,-1);
    tracep->declBit(c+112,"alu_req_alu_xor", false,-1);
    tracep->declBit(c+113,"alu_req_alu_or", false,-1);
    tracep->declBit(c+114,"alu_req_alu_sltu", false,-1);
    tracep->declBit(c+115,"alu_req_alu_lui", false,-1);
    tracep->declBus(c+287,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+288,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+101,"bjp_req_alu_add", false,-1);
    tracep->declBus(c+274,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBit(c+96,"bjp_req_alu", false,-1);
    tracep->declBus(c+281,"bjp_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+282,"bjp_req_alu_op2", false,-1, 31,0);
    tracep->declBus(c+274,"bjp_req_alu_add_res", false,-1, 31,0);
    tracep->declBit(c+97,"agu_req_alu", false,-1);
    tracep->declBus(c+285,"agu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+108,"agu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+425,"agu_req_alu_add", false,-1);
    tracep->declBus(c+274,"agu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+291,"mux_op1", false,-1, 31,0);
    tracep->declBus(c+292,"mux_op2", false,-1, 31,0);
    tracep->declBus(c+291,"misc_op1", false,-1, 31,0);
    tracep->declBus(c+292,"misc_op2", false,-1, 31,0);
    tracep->declBit(c+123,"op_add", false,-1);
    tracep->declBit(c+123,"op_addsub", false,-1);
    tracep->declBit(c+124,"op_or", false,-1);
    tracep->declBit(c+125,"op_xor", false,-1);
    tracep->declBit(c+126,"op_sltu", false,-1);
    tracep->declBit(c+127,"op_mvop2", false,-1);
    tracep->declBit(c+126,"op_unsigned", false,-1);
    tracep->declQuad(c+293,"misc_adder_op1", false,-1, 32,0);
    tracep->declQuad(c+295,"misc_adder_op2", false,-1, 32,0);
    tracep->declQuad(c+293,"adder_op1", false,-1, 32,0);
    tracep->declQuad(c+295,"adder_op2", false,-1, 32,0);
    tracep->declBit(c+128,"adder_cin", false,-1);
    tracep->declQuad(c+297,"adder_in1", false,-1, 32,0);
    tracep->declQuad(c+299,"adder_in2", false,-1, 32,0);
    tracep->declQuad(c+301,"adder_res", false,-1, 32,0);
    tracep->declBit(c+123,"adder_add", false,-1);
    tracep->declBit(c+126,"adder_sub", false,-1);
    tracep->declBit(c+129,"adder_addsub", false,-1);
    tracep->declBus(c+303,"xorer_in1", false,-1, 31,0);
    tracep->declBus(c+304,"xorer_in2", false,-1, 31,0);
    tracep->declBit(c+125,"xorer_op", false,-1);
    tracep->declBus(c+305,"xorer_res", false,-1, 31,0);
    tracep->declBus(c+306,"orer_res", false,-1, 31,0);
    tracep->declBus(c+292,"mvop2_res", false,-1, 31,0);
    tracep->declBit(c+126,"op_slttu", false,-1);
    tracep->declBit(c+307,"slttu_cmp_lt", false,-1);
    tracep->declBus(c+308,"slttu_res", false,-1, 31,0);
    tracep->declBus(c+274,"alu_dpath_res", false,-1, 31,0);
    tracep->declBus(c+435,"DPATH_MUX_WIDTH", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu_lsuagu ");
    tracep->declBit(c+100,"agu_i_valid", false,-1);
    tracep->declBit(c+97,"agu_i_ready", false,-1);
    tracep->declBus(c+285,"agu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+286,"agu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+108,"agu_i_imm", false,-1, 31,0);
    tracep->declBus(c+130,"agu_i_info", false,-1, 20,0);
    tracep->declBit(c+100,"agu_o_valid", false,-1);
    tracep->declBit(c+97,"agu_o_ready", false,-1);
    tracep->declBus(c+434,"agu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+76,"agu_o_cmt_ld", false,-1);
    tracep->declBit(c+107,"agu_o_cmt_stamo", false,-1);
    tracep->declBus(c+285,"agu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+108,"agu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+425,"agu_req_alu_add", false,-1);
    tracep->declBus(c+274,"agu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+274,"agu_icb_cmd_addr", false,-1, 31,0);
    tracep->declBit(c+76,"agu_icb_cmd_read", false,-1);
    tracep->declBus(c+275,"agu_icb_cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+276,"agu_icb_cmd_wmask", false,-1, 3,0);
    tracep->declBit(c+76,"agu_i_load", false,-1);
    tracep->declBit(c+107,"agu_i_store", false,-1);
    tracep->declBus(c+131,"agu_i_size", false,-1, 1,0);
    tracep->declBit(c+132,"agu_i_usign", false,-1);
    tracep->declBit(c+133,"agu_i_size_b", false,-1);
    tracep->declBit(c+134,"agu_i_size_hw", false,-1);
    tracep->declBit(c+135,"agu_i_size_w", false,-1);
    tracep->declBit(c+425,"icb_sta_is_idle", false,-1);
    tracep->declBit(c+436,"agu_i_ofst0", false,-1);
    tracep->declBus(c+108,"agu_addr_gen_op2", false,-1, 31,0);
    tracep->declBus(c+275,"algnst_wdata", false,-1, 31,0);
    tracep->declBus(c+276,"algnst_wmask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_alu_rglr ");
    tracep->declBit(c+98,"alu_i_valid", false,-1);
    tracep->declBit(c+95,"alu_i_ready", false,-1);
    tracep->declBus(c+274,"alu_req_alu_res", false,-1, 31,0);
    tracep->declBus(c+289,"alu_i_rs1", false,-1, 31,0);
    tracep->declBus(c+290,"alu_i_rs2", false,-1, 31,0);
    tracep->declBus(c+117,"alu_i_imm", false,-1, 31,0);
    tracep->declBus(c+120,"alu_i_pc", false,-1, 31,0);
    tracep->declBus(c+136,"alu_i_info", false,-1, 20,0);
    tracep->declBit(c+98,"alu_o_valid", false,-1);
    tracep->declBit(c+95,"alu_o_ready", false,-1);
    tracep->declBus(c+274,"alu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+121,"alu_o_cmt_ebreak", false,-1);
    tracep->declBit(c+111,"alu_req_alu_add", false,-1);
    tracep->declBit(c+112,"alu_req_alu_xor", false,-1);
    tracep->declBit(c+113,"alu_req_alu_or", false,-1);
    tracep->declBit(c+114,"alu_req_alu_sltu", false,-1);
    tracep->declBit(c+115,"alu_req_alu_lui", false,-1);
    tracep->declBus(c+287,"alu_req_alu_op1", false,-1, 31,0);
    tracep->declBus(c+288,"alu_req_alu_op2", false,-1, 31,0);
    tracep->declBit(c+137,"op2imm", false,-1);
    tracep->declBit(c+138,"op1pc", false,-1);
    tracep->declBit(c+139,"nop", false,-1);
    tracep->declBit(c+121,"ebreak", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_exu_commit ");
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBit(c+77,"commit_trap", false,-1);
    tracep->declBit(c+92,"alu_cmt_i_valid", false,-1);
    tracep->declBit(c+425,"alu_cmt_i_ready", false,-1);
    tracep->declBus(c+71,"alu_cmt_i_pc", false,-1, 31,0);
    tracep->declBus(c+70,"alu_cmt_i_instr", false,-1, 31,0);
    tracep->declBit(c+75,"alu_cmt_i_pc_vld", false,-1);
    tracep->declBus(c+82,"alu_cmt_i_imm", false,-1, 31,0);
    tracep->declBit(c+88,"alu_cmt_i_bjp", false,-1);
    tracep->declBit(c+89,"alu_cmt_i_ebreak", false,-1);
    tracep->declBit(c+93,"alu_cmt_i_bjp_prdt", false,-1);
    tracep->declBit(c+90,"alu_cmt_i_ld", false,-1);
    tracep->declBit(c+91,"alu_cmt_i_stamo", false,-1);
    tracep->declBus(c+94,"cmt_cause", false,-1, 31,0);
    tracep->declBus(c+243,"endcode", false,-1, 31,0);
    tracep->declBit(c+425,"alu_brchmis_cmt_i_ready", false,-1);
    tracep->declBit(c+425,"alu_excp_cmt_i_ready", false,-1);
    tracep->pushNamePrefix("inst_exu_branchslv ");
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBit(c+92,"cmt_i_valid", false,-1);
    tracep->declBit(c+425,"cmt_i_ready", false,-1);
    tracep->declBit(c+88,"cmt_i_bjp", false,-1);
    tracep->declBit(c+93,"cmt_i_bjp_prdt", false,-1);
    tracep->declBus(c+71,"cmt_i_pc", false,-1, 31,0);
    tracep->declBus(c+82,"cmt_i_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_excp ");
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBit(c+77,"commit_trap", false,-1);
    tracep->declBit(c+425,"alu_excp_i_ready", false,-1);
    tracep->declBit(c+92,"alu_excp_i_valid", false,-1);
    tracep->declBit(c+89,"alu_excp_i_ebreak", false,-1);
    tracep->declBus(c+94,"cmt_cause", false,-1, 31,0);
    tracep->declBus(c+243,"endcode", false,-1, 31,0);
    tracep->declBit(c+425,"excpirq_flush_ack", false,-1);
    tracep->declBit(c+77,"excpirq_flush_req", false,-1);
    tracep->declBit(c+89,"alu_need_flush", false,-1);
    tracep->declBit(c+89,"alu_excp_i_ebreak4excp", false,-1);
    tracep->declBit(c+77,"alu_excp_flush_req", false,-1);
    tracep->declBit(c+425,"alu_excp_i_ready4nondbg", false,-1);
    tracep->declBit(c+77,"all_excp_flush_req", false,-1);
    tracep->declBit(c+77,"excpirq_taken_ena", false,-1);
    tracep->declBit(c+77,"excp_taken_ena", false,-1);
    tracep->declBit(c+140,"alu_excp_flush_req_ebreak", false,-1);
    tracep->declBus(c+94,"excp_cause", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_exu_disp ");
    tracep->declBit(c+68,"disp_i_valid", false,-1);
    tracep->declBit(c+69,"disp_i_ready", false,-1);
    tracep->declBit(c+78,"disp_i_rs1x0", false,-1);
    tracep->declBit(c+79,"disp_i_rs2x0", false,-1);
    tracep->declBit(c+83,"disp_i_rs1en", false,-1);
    tracep->declBit(c+84,"disp_i_rs2en", false,-1);
    tracep->declBus(c+72,"disp_i_rs1idx", false,-1, 4,0);
    tracep->declBus(c+73,"disp_i_rs2idx", false,-1, 4,0);
    tracep->declBus(c+273,"disp_i_rs1", false,-1, 31,0);
    tracep->declBus(c+277,"disp_i_rs2", false,-1, 31,0);
    tracep->declBit(c+86,"disp_i_rdwen", false,-1);
    tracep->declBus(c+85,"disp_i_rdidx", false,-1, 4,0);
    tracep->declQuad(c+80,"disp_i_info", false,-1, 32,0);
    tracep->declBus(c+82,"disp_i_imm", false,-1, 31,0);
    tracep->declBus(c+71,"disp_i_pc", false,-1, 31,0);
    tracep->declBit(c+68,"disp_o_alu_valid", false,-1);
    tracep->declBit(c+69,"disp_o_alu_ready", false,-1);
    tracep->declBus(c+278,"disp_o_alu_rs1", false,-1, 31,0);
    tracep->declBus(c+279,"disp_o_alu_rs2", false,-1, 31,0);
    tracep->declBit(c+86,"disp_o_alu_rdwen", false,-1);
    tracep->declBus(c+85,"disp_o_alu_rdidx", false,-1, 4,0);
    tracep->declQuad(c+80,"disp_o_alu_info", false,-1, 32,0);
    tracep->declBus(c+82,"disp_o_alu_imm", false,-1, 31,0);
    tracep->declBus(c+71,"disp_o_alu_pc", false,-1, 31,0);
    tracep->declBit(c+69,"disp_i_ready_pos", false,-1);
    tracep->declBit(c+68,"disp_i_valid_pos", false,-1);
    tracep->declBus(c+278,"disp_i_rs1_msked", false,-1, 31,0);
    tracep->declBus(c+279,"disp_i_rs2_msked", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_longpwbck ");
    tracep->declBit(c+424,"lsu_wbck_i_valid", false,-1);
    tracep->declBit(c+425,"lsu_wbck_i_ready", false,-1);
    tracep->declBus(c+426,"lsu_wbck_i_wdat", false,-1, 31,0);
    tracep->declBit(c+427,"lsu_cmt_i_ld", false,-1);
    tracep->declBit(c+428,"lsu_cmt_i_st", false,-1);
    tracep->declBit(c+1,"longp_wbck_o_valid", false,-1);
    tracep->declBit(c+425,"longp_wbck_o_ready", false,-1);
    tracep->declBus(c+2,"longp_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+430,"longp_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+432,"longp_excp_o_valid", false,-1);
    tracep->declBit(c+431,"longp_excp_o_ready", false,-1);
    tracep->declBit(c+3,"longp_excp_o_ld", false,-1);
    tracep->declBit(c+4,"longp_excp_o_st", false,-1);
    tracep->declBus(c+433,"longp_excp_o_pc", false,-1, 31,0);
    tracep->declBit(c+424,"oitf_ret_ena", false,-1);
    tracep->declBit(c+429,"oitf_ret_rdwen", false,-1);
    tracep->declBus(c+430,"oitf_ret_rdidx", false,-1, 4,0);
    tracep->declBit(c+425,"wbck_ready4lsu", false,-1);
    tracep->declBit(c+424,"wbck_sel_lsu", false,-1);
    tracep->declBit(c+425,"wbck_i_ready", false,-1);
    tracep->declBit(c+424,"wbck_i_valid", false,-1);
    tracep->declBus(c+2,"wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+430,"wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+429,"wbck_i_rdwen", false,-1);
    tracep->declBus(c+426,"lsu_wbck_i_wdat_exd", false,-1, 31,0);
    tracep->declBit(c+429,"need_wbck", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_exu_wbck ");
    tracep->declBit(c+87,"alu_wbck_i_valid", false,-1);
    tracep->declBit(c+425,"alu_wbck_i_ready", false,-1);
    tracep->declBus(c+280,"alu_wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+85,"alu_wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+1,"longp_wbck_i_valid", false,-1);
    tracep->declBit(c+425,"longp_wbck_i_ready", false,-1);
    tracep->declBus(c+2,"longp_wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+430,"longp_wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+309,"rf_wbck_o_ena", false,-1);
    tracep->declBus(c+355,"rf_wbck_o_wdat", false,-1, 31,0);
    tracep->declBus(c+310,"rf_wbck_o_rdidx", false,-1, 4,0);
    tracep->declBit(c+5,"wbck_ready4alu", false,-1);
    tracep->declBit(c+312,"wbck_sel_alu", false,-1);
    tracep->declBit(c+425,"wbck_ready4longp", false,-1);
    tracep->declBit(c+1,"wbck_sel_longp", false,-1);
    tracep->declBit(c+425,"rf_wbck_o_ready", false,-1);
    tracep->declBit(c+425,"wbck_i_ready", false,-1);
    tracep->declBit(c+309,"wbck_i_valid", false,-1);
    tracep->declBus(c+355,"wbck_i_wdat", false,-1, 31,0);
    tracep->declBus(c+310,"wbck_i_rdidx", false,-1, 4,0);
    tracep->declBit(c+309,"rf_wbck_o_valid", false,-1);
    tracep->declBit(c+309,"wbck_o_ena", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_lsu ");
    tracep->declBit(c+424,"lsu_o_valid", false,-1);
    tracep->declBit(c+425,"lsu_o_ready", false,-1);
    tracep->declBus(c+426,"lsu_o_wbck_wdat", false,-1, 31,0);
    tracep->declBit(c+427,"lsu_o_cmt_ld", false,-1);
    tracep->declBit(c+428,"lsu_o_cmt_st", false,-1);
    tracep->declBus(c+274,"agu_icb_cmd_addr", false,-1, 31,0);
    tracep->declBit(c+76,"agu_icb_cmd_read", false,-1);
    tracep->declBus(c+275,"agu_icb_cmd_wdata", false,-1, 31,0);
    tracep->declBus(c+276,"agu_icb_cmd_wmask", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBus(c+67,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+347,"pc_rtvec", false,-1, 31,0);
    tracep->declBus(c+70,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+71,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+72,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+73,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+74,"ifu_o_prdt_taken", false,-1);
    tracep->declBit(c+68,"ifu_o_valid", false,-1);
    tracep->declBit(c+69,"ifu_o_ready", false,-1);
    tracep->declBit(c+45,"ifu_req_valid", false,-1);
    tracep->declBit(c+349,"ifu_req_ready", false,-1);
    tracep->declBus(c+354,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+351,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+46,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+353,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBit(c+75,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+242,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+273,"rf2ifu_rs1", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBus(c+67,"inspect_pc", false,-1, 31,0);
    tracep->declBus(c+347,"pc_rtvec", false,-1, 31,0);
    tracep->declBit(c+45,"ifu_req_valid", false,-1);
    tracep->declBit(c+349,"ifu_req_ready", false,-1);
    tracep->declBus(c+354,"ifu_req_pc", false,-1, 31,0);
    tracep->declBit(c+351,"ifu_rsp_valid", false,-1);
    tracep->declBit(c+46,"ifu_rsp_ready", false,-1);
    tracep->declBus(c+353,"ifu_rsp_instr", false,-1, 31,0);
    tracep->declBus(c+70,"ifu_o_ir", false,-1, 31,0);
    tracep->declBus(c+71,"ifu_o_pc", false,-1, 31,0);
    tracep->declBus(c+72,"ifu_o_rs1idx", false,-1, 4,0);
    tracep->declBus(c+73,"ifu_o_rs2idx", false,-1, 4,0);
    tracep->declBit(c+74,"ifu_o_prdt_taken", false,-1);
    tracep->declBit(c+68,"ifu_o_valid", false,-1);
    tracep->declBit(c+69,"ifu_o_ready", false,-1);
    tracep->declBit(c+75,"ifu_o_pc_vld", false,-1);
    tracep->declBus(c+242,"rf2ifu_x1", false,-1, 31,0);
    tracep->declBus(c+273,"rf2ifu_rs1", false,-1, 31,0);
    tracep->declBit(c+47,"ifu_req_hsked", false,-1);
    tracep->declBit(c+48,"ifu_rsp_hsked", false,-1);
    tracep->declBit(c+141,"ifu_ir_o_hsked", false,-1);
    tracep->declBit(c+356,"reset_flag_r", false,-1);
    tracep->declBit(c+142,"reset_req_r", false,-1);
    tracep->declBit(c+143,"reset_req_set", false,-1);
    tracep->declBit(c+49,"reset_req_clr", false,-1);
    tracep->declBit(c+50,"reset_req_ena", false,-1);
    tracep->declBit(c+51,"reset_req_nxt", false,-1);
    tracep->declBit(c+142,"ifu_reset_req", false,-1);
    tracep->declBit(c+48,"ir_valid_set", false,-1);
    tracep->declBit(c+52,"ir_valid_ena", false,-1);
    tracep->declBit(c+141,"ir_valid_clr", false,-1);
    tracep->declBit(c+53,"ir_valid_nxt", false,-1);
    tracep->declBit(c+68,"ir_valid_r", false,-1);
    tracep->declBit(c+141,"ir_pc_vld_clr", false,-1);
    tracep->declBit(c+144,"ir_pc_vld_ena", false,-1);
    tracep->declBit(c+145,"ir_pc_vld_set", false,-1);
    tracep->declBit(c+75,"ir_pc_vld_r", false,-1);
    tracep->declBit(c+146,"ir_pc_vld_nxt", false,-1);
    tracep->declBit(c+147,"ifu_ir_i_ready", false,-1);
    tracep->declBit(c+148,"pc_newpend_r", false,-1);
    tracep->declBus(c+353,"ifu_ir_nxt", false,-1, 31,0);
    tracep->declBit(c+6,"prdt_taken", false,-1);
    tracep->declBit(c+74,"ifu_prdt_taken_r", false,-1);
    tracep->declBus(c+70,"ifu_ir_r", false,-1, 31,0);
    tracep->declBit(c+48,"ir_r_ena", false,-1);
    tracep->declBit(c+7,"minidec_rs1en", false,-1);
    tracep->declBit(c+8,"minidec_rs2en", false,-1);
    tracep->declBus(c+357,"minidec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+358,"minidec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+72,"ir_rs1idx_r", false,-1, 4,0);
    tracep->declBus(c+73,"ir_rs2idx_r", false,-1, 4,0);
    tracep->declBit(c+54,"bpu2rf_rs1_ena", false,-1);
    tracep->declBit(c+55,"ir_rs1idx_ena", false,-1);
    tracep->declBit(c+56,"ir_rs2idx_ena", false,-1);
    tracep->declBus(c+357,"ir_rs1idx_nxt", false,-1, 4,0);
    tracep->declBus(c+358,"ir_rs2idx_nxt", false,-1, 4,0);
    tracep->declBus(c+67,"pc_r", false,-1, 31,0);
    tracep->declBus(c+67,"ifu_pc_nxt", false,-1, 31,0);
    tracep->declBus(c+71,"ifu_pc_r", false,-1, 31,0);
    tracep->declBit(c+9,"minidec_bjp", false,-1);
    tracep->declBit(c+10,"minidec_jal", false,-1);
    tracep->declBit(c+11,"minidec_jalr", false,-1);
    tracep->declBit(c+12,"minidec_bxx", false,-1);
    tracep->declBus(c+13,"minidec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+357,"minidec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBit(c+54,"bpu_wait", false,-1);
    tracep->declBus(c+359,"prdt_pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+13,"prdt_pc_add_op2", false,-1, 31,0);
    tracep->declBus(c+437,"pc_incr_ofst", false,-1, 31,0);
    tracep->declBus(c+354,"pc_nxt", false,-1, 31,0);
    tracep->declBus(c+360,"pc_nxt_pre", false,-1, 31,0);
    tracep->declBit(c+14,"bjp_req", false,-1);
    tracep->declBus(c+361,"pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+57,"pc_add_op2", false,-1, 31,0);
    tracep->declBit(c+58,"ifu_new_req", false,-1);
    tracep->declBit(c+59,"ifu_req_valid_pre", false,-1);
    tracep->declBit(c+48,"out_flag_clr", false,-1);
    tracep->declBit(c+149,"out_flag_r", false,-1);
    tracep->declBit(c+60,"new_req_condi", false,-1);
    tracep->declBit(c+46,"ifu_rsp2ir_ready", false,-1);
    tracep->declBit(c+47,"pc_ena", false,-1);
    tracep->declBit(c+47,"out_flag_set", false,-1);
    tracep->declBit(c+61,"out_flag_ena", false,-1);
    tracep->declBit(c+62,"out_flag_nxt", false,-1);
    tracep->declBit(c+47,"pc_newpend_set", false,-1);
    tracep->declBit(c+145,"pc_newpend_clr", false,-1);
    tracep->declBit(c+63,"pc_newpend_ena", false,-1);
    tracep->declBit(c+64,"pc_newpend_nxt", false,-1);
    tracep->pushNamePrefix("ifu_prdt_taken_dfflr ");
    tracep->declBus(c+438,"DW", false,-1, 31,0);
    tracep->declBit(c+48,"lden", false,-1);
    tracep->declBus(c+6,"dnxt", false,-1, 0,0);
    tracep->declBus(c+74,"qout", false,-1, 0,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+74,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_ifu_litebpu ");
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst", false,-1);
    tracep->declBus(c+67,"pc", false,-1, 31,0);
    tracep->declBit(c+10,"dec_jal", false,-1);
    tracep->declBit(c+11,"dec_jalr", false,-1);
    tracep->declBit(c+12,"dec_bxx", false,-1);
    tracep->declBus(c+13,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+357,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBit(c+54,"bpu_wait", false,-1);
    tracep->declBit(c+6,"prdt_taken", false,-1);
    tracep->declBus(c+359,"prdt_pc_add_op1", false,-1, 31,0);
    tracep->declBus(c+13,"prdt_pc_add_op2", false,-1, 31,0);
    tracep->declBit(c+351,"dec_i_valid", false,-1);
    tracep->declBit(c+54,"bpu2rf_rs1_ena", false,-1);
    tracep->declBit(c+141,"ir_valid_clr", false,-1);
    tracep->declBus(c+242,"rf2bpu_x1", false,-1, 31,0);
    tracep->declBus(c+273,"rf2bpu_rs1", false,-1, 31,0);
    tracep->declBit(c+362,"dec_jalr_rs1x0", false,-1);
    tracep->declBit(c+363,"dec_jalr_rs1x1", false,-1);
    tracep->declBit(c+15,"dec_jalr_rs1xn", false,-1);
    tracep->declBit(c+436,"jalr_rs1x1_dep", false,-1);
    tracep->declBit(c+436,"jalr_rs1xn_dep", false,-1);
    tracep->declBit(c+436,"jalr_rs1xn_dep_ir_clr", false,-1);
    tracep->declBit(c+150,"rs1xn_rdrf_r", false,-1);
    tracep->declBit(c+54,"rs1xn_rdrf_set", false,-1);
    tracep->declBit(c+150,"rs1xn_rdrf_clr", false,-1);
    tracep->declBit(c+65,"rs1xn_rdrf_ena", false,-1);
    tracep->declBit(c+66,"rs1xn_rdrf_nxt", false,-1);
    tracep->pushNamePrefix("rs1xn_rdrf_dfflrs ");
    tracep->declBus(c+438,"DW", false,-1, 31,0);
    tracep->declBit(c+65,"lden", false,-1);
    tracep->declBus(c+66,"dnxt", false,-1, 0,0);
    tracep->declBus(c+150,"qout", false,-1, 0,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+150,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_ifu_minidec ");
    tracep->declBus(c+353,"instr", false,-1, 31,0);
    tracep->declBit(c+7,"dec_rs1en", false,-1);
    tracep->declBit(c+8,"dec_rs2en", false,-1);
    tracep->declBus(c+357,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+358,"dec_rs2idx", false,-1, 4,0);
    tracep->declBit(c+9,"dec_bjp", false,-1);
    tracep->declBit(c+10,"dec_jal", false,-1);
    tracep->declBit(c+11,"dec_jalr", false,-1);
    tracep->declBit(c+12,"dec_bxx", false,-1);
    tracep->declBus(c+357,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBus(c+13,"dec_bjp_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_pc_vld_dfflr ");
    tracep->declBus(c+438,"DW", false,-1, 31,0);
    tracep->declBit(c+144,"lden", false,-1);
    tracep->declBus(c+146,"dnxt", false,-1, 0,0);
    tracep->declBus(c+75,"qout", false,-1, 0,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+75,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_rs1idx_dfflr ");
    tracep->declBus(c+439,"DW", false,-1, 31,0);
    tracep->declBit(c+55,"lden", false,-1);
    tracep->declBus(c+357,"dnxt", false,-1, 4,0);
    tracep->declBus(c+72,"qout", false,-1, 4,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+72,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_rs2idx_dfflr ");
    tracep->declBus(c+439,"DW", false,-1, 31,0);
    tracep->declBit(c+56,"lden", false,-1);
    tracep->declBus(c+358,"dnxt", false,-1, 4,0);
    tracep->declBus(c+73,"qout", false,-1, 4,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+73,"qout_r", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ir_valid_dfflr ");
    tracep->declBus(c+438,"DW", false,-1, 31,0);
    tracep->declBit(c+52,"lden", false,-1);
    tracep->declBus(c+53,"dnxt", false,-1, 0,0);
    tracep->declBus(c+68,"qout", false,-1, 0,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+68,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("out_flag_dfflr ");
    tracep->declBus(c+438,"DW", false,-1, 31,0);
    tracep->declBit(c+61,"lden", false,-1);
    tracep->declBus(c+62,"dnxt", false,-1, 0,0);
    tracep->declBus(c+149,"qout", false,-1, 0,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+149,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_newpend_dfflr ");
    tracep->declBus(c+438,"DW", false,-1, 31,0);
    tracep->declBit(c+63,"lden", false,-1);
    tracep->declBus(c+64,"dnxt", false,-1, 0,0);
    tracep->declBus(c+148,"qout", false,-1, 0,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+148,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_flag_dffrs ");
    tracep->declBus(c+438,"DW", false,-1, 31,0);
    tracep->declBus(c+436,"dnxt", false,-1, 0,0);
    tracep->declBus(c+356,"qout", false,-1, 0,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+151,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_req_dfflr ");
    tracep->declBus(c+438,"DW", false,-1, 31,0);
    tracep->declBit(c+50,"lden", false,-1);
    tracep->declBus(c+51,"dnxt", false,-1, 0,0);
    tracep->declBus(c+142,"qout", false,-1, 0,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+142,"qout_r", false,-1, 0,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+313,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+242,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+242,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+314,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+244,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+244,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+315,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+245,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+245,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+316,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+246,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+246,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+317,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+247,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+247,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+318,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+248,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+248,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+319,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+249,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+249,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+320,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+250,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+250,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+321,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+251,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+251,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+322,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+243,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+243,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+323,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+252,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+252,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+253,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+253,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+325,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+254,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+254,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+326,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+255,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+255,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+327,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+256,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+256,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+328,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+257,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+257,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+329,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+258,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+258,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+330,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+259,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+259,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+331,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+260,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+260,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+332,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+261,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+261,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+333,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+262,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+262,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+334,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+263,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+263,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+335,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+264,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+264,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+336,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+265,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+265,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+337,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+266,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+266,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+338,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+267,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+267,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+339,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+268,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+268,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+340,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+269,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+269,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+341,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+270,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+270,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+342,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+271,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+271,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+343,"lden", false,-1);
    tracep->declBus(c+355,"dnxt", false,-1, 31,0);
    tracep->declBus(c+272,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBus(c+272,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+353,"rv32_instr", false,-1, 31,0);
    tracep->declBus(c+434,"i_pc", false,-1, 31,0);
    tracep->declBit(c+436,"i_prdt_taken", false,-1);
    tracep->declBit(c+362,"dec_rs1x0", false,-1);
    tracep->declBit(c+364,"dec_rs2x0", false,-1);
    tracep->declBit(c+7,"dec_rs1en", false,-1);
    tracep->declBit(c+8,"dec_rs2en", false,-1);
    tracep->declBit(c+16,"dec_rdwen", false,-1);
    tracep->declBus(c+357,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+358,"dec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+365,"dec_rdidx", false,-1, 4,0);
    tracep->declBus(c+17,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+434,"dec_pc", false,-1, 31,0);
    tracep->declQuad(c+18,"dec_info", false,-1, 32,0);
    tracep->declBit(c+9,"dec_bjp", false,-1);
    tracep->declBit(c+10,"dec_jal", false,-1);
    tracep->declBit(c+11,"dec_jalr", false,-1);
    tracep->declBit(c+12,"dec_bxx", false,-1);
    tracep->declBus(c+357,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBus(c+13,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+366,"opcode", false,-1, 6,0);
    tracep->declBus(c+365,"rv32_rd", false,-1, 4,0);
    tracep->declBus(c+367,"rv32_func3", false,-1, 2,0);
    tracep->declBus(c+357,"rv32_rs1", false,-1, 4,0);
    tracep->declBus(c+358,"rv32_rs2", false,-1, 4,0);
    tracep->declBus(c+368,"rv32_func7", false,-1, 6,0);
    tracep->declBit(c+369,"opcode_1_0_11", false,-1);
    tracep->declBit(c+370,"opcode_4_2_000", false,-1);
    tracep->declBit(c+371,"opcode_4_2_001", false,-1);
    tracep->declBit(c+372,"opcode_4_2_010", false,-1);
    tracep->declBit(c+373,"opcode_4_2_011", false,-1);
    tracep->declBit(c+374,"opcode_4_2_100", false,-1);
    tracep->declBit(c+375,"opcode_4_2_101", false,-1);
    tracep->declBit(c+376,"opcode_4_2_110", false,-1);
    tracep->declBit(c+377,"opcode_4_2_111", false,-1);
    tracep->declBit(c+378,"opcode_6_5_00", false,-1);
    tracep->declBit(c+379,"opcode_6_5_01", false,-1);
    tracep->declBit(c+380,"opcode_6_5_10", false,-1);
    tracep->declBit(c+381,"opcode_6_5_11", false,-1);
    tracep->declBit(c+382,"rv32_func3_000", false,-1);
    tracep->declBit(c+383,"rv32_func3_001", false,-1);
    tracep->declBit(c+384,"rv32_func3_010", false,-1);
    tracep->declBit(c+385,"rv32_func3_011", false,-1);
    tracep->declBit(c+386,"rv32_func3_100", false,-1);
    tracep->declBit(c+387,"rv32_func3_101", false,-1);
    tracep->declBit(c+388,"rv32_func3_110", false,-1);
    tracep->declBit(c+389,"rv32_func3_111", false,-1);
    tracep->declBit(c+390,"rv32_func7_0000000", false,-1);
    tracep->declBit(c+391,"rv32_func7_0100000", false,-1);
    tracep->declBit(c+392,"rv32_func7_0000001", false,-1);
    tracep->declBit(c+393,"rv32_func7_0000101", false,-1);
    tracep->declBit(c+394,"rv32_func7_0001001", false,-1);
    tracep->declBit(c+395,"rv32_func7_0001101", false,-1);
    tracep->declBit(c+396,"rv32_func7_0010101", false,-1);
    tracep->declBit(c+397,"rv32_func7_0100001", false,-1);
    tracep->declBit(c+398,"rv32_func7_0010001", false,-1);
    tracep->declBit(c+399,"rv32_func7_0101101", false,-1);
    tracep->declBit(c+400,"rv32_func7_1111111", false,-1);
    tracep->declBit(c+401,"rv32_func7_0000100", false,-1);
    tracep->declBit(c+402,"rv32_func7_0001000", false,-1);
    tracep->declBit(c+403,"rv32_func7_0001100", false,-1);
    tracep->declBit(c+404,"rv32_func7_0101100", false,-1);
    tracep->declBit(c+405,"rv32_func7_0010000", false,-1);
    tracep->declBit(c+406,"rv32_func7_0010100", false,-1);
    tracep->declBit(c+407,"rv32_func7_1100000", false,-1);
    tracep->declBit(c+408,"rv32_func7_1110000", false,-1);
    tracep->declBit(c+409,"rv32_func7_1010000", false,-1);
    tracep->declBit(c+410,"rv32_func7_1101000", false,-1);
    tracep->declBit(c+411,"rv32_func7_1111000", false,-1);
    tracep->declBit(c+412,"rv32_func7_1010001", false,-1);
    tracep->declBit(c+413,"rv32_func7_1110001", false,-1);
    tracep->declBit(c+414,"rv32_func7_1100001", false,-1);
    tracep->declBit(c+415,"rv32_func7_1101001", false,-1);
    tracep->declBit(c+362,"rv32_rs1_x0", false,-1);
    tracep->declBit(c+364,"rv32_rs2_x0", false,-1);
    tracep->declBit(c+416,"rv32_rd_x0", false,-1);
    tracep->declBit(c+20,"rv32_load", false,-1);
    tracep->declBit(c+21,"rv32_store", false,-1);
    tracep->declBit(c+12,"rv32_branch", false,-1);
    tracep->declBit(c+11,"rv32_jalr", false,-1);
    tracep->declBit(c+10,"rv32_jal", false,-1);
    tracep->declBit(c+22,"rv32_op_imm", false,-1);
    tracep->declBit(c+23,"rv32_op", false,-1);
    tracep->declBit(c+24,"rv32_system", false,-1);
    tracep->declBit(c+25,"rv32_auipc", false,-1);
    tracep->declBit(c+25,"rv32_lui", false,-1);
    tracep->declBit(c+26,"rv32_beq", false,-1);
    tracep->declBit(c+27,"rv32_bne", false,-1);
    tracep->declBit(c+28,"rv32_ebreak", false,-1);
    tracep->declBit(c+29,"rv32_addi", false,-1);
    tracep->declBit(c+30,"rv32_sltiu", false,-1);
    tracep->declBit(c+31,"rv32_add", false,-1);
    tracep->declBit(c+32,"rv32_sltu", false,-1);
    tracep->declBit(c+417,"rv32_xor", false,-1);
    tracep->declBit(c+418,"rv32_or", false,-1);
    tracep->declBit(c+33,"rv32_nop", false,-1);
    tracep->declBit(c+28,"ecall_ebreak", false,-1);
    tracep->declBit(c+419,"rv32_lw", false,-1);
    tracep->declBit(c+420,"rv32_sw", false,-1);
    tracep->declBit(c+34,"alu_op", false,-1);
    tracep->declBit(c+35,"need_imm", false,-1);
    tracep->declBus(c+36,"alu_info_bus", false,-1, 20,0);
    tracep->declBit(c+37,"amoldst_op", false,-1);
    tracep->declBus(c+421,"lsu_info_size", false,-1, 1,0);
    tracep->declBit(c+422,"lsu_info_usign", false,-1);
    tracep->declBus(c+38,"agu_info_bus", false,-1, 20,0);
    tracep->declBit(c+7,"rv32_need_rs1", false,-1);
    tracep->declBit(c+8,"rv32_need_rs2", false,-1);
    tracep->declBit(c+16,"rv32_need_rd", false,-1);
    tracep->declBus(c+39,"rv32_i_imm", false,-1, 31,0);
    tracep->declBus(c+40,"rv32_s_imm", false,-1, 31,0);
    tracep->declBus(c+41,"rv32_b_imm", false,-1, 31,0);
    tracep->declBus(c+423,"rv32_u_imm", false,-1, 31,0);
    tracep->declBus(c+42,"rv32_j_imm", false,-1, 31,0);
    tracep->declBit(c+43,"rv32_imm_sel_i", false,-1);
    tracep->declBit(c+11,"rv32_imm_sel_jalr", false,-1);
    tracep->declBus(c+39,"rv32_jalr_imm", false,-1, 31,0);
    tracep->declBit(c+25,"rv32_imm_sel_u", false,-1);
    tracep->declBit(c+10,"rv32_imm_sel_j", false,-1);
    tracep->declBit(c+10,"rv32_imm_sel_jal", false,-1);
    tracep->declBus(c+42,"rv32_jal_imm", false,-1, 31,0);
    tracep->declBit(c+12,"rv32_imm_sel_b", false,-1);
    tracep->declBit(c+12,"rv32_imm_sel_bxx", false,-1);
    tracep->declBus(c+41,"rv32_bxx_imm", false,-1, 31,0);
    tracep->declBit(c+21,"rv32_imm_sel_s", false,-1);
    tracep->declBus(c+17,"rv32_imm", false,-1, 31,0);
    tracep->declBit(c+35,"rv32_need_imm", false,-1);
    tracep->declBit(c+9,"bjp_op", false,-1);
    tracep->declBus(c+44,"bjp_info_bus", false,-1, 16,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_exu_decode__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_exu__DOT__inst_exu_decode__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+70,"rv32_instr", false,-1, 31,0);
    tracep->declBus(c+71,"i_pc", false,-1, 31,0);
    tracep->declBit(c+74,"i_prdt_taken", false,-1);
    tracep->declBit(c+78,"dec_rs1x0", false,-1);
    tracep->declBit(c+79,"dec_rs2x0", false,-1);
    tracep->declBit(c+83,"dec_rs1en", false,-1);
    tracep->declBit(c+84,"dec_rs2en", false,-1);
    tracep->declBit(c+86,"dec_rdwen", false,-1);
    tracep->declBus(c+152,"dec_rs1idx", false,-1, 4,0);
    tracep->declBus(c+153,"dec_rs2idx", false,-1, 4,0);
    tracep->declBus(c+85,"dec_rdidx", false,-1, 4,0);
    tracep->declBus(c+82,"dec_imm", false,-1, 31,0);
    tracep->declBus(c+71,"dec_pc", false,-1, 31,0);
    tracep->declQuad(c+80,"dec_info", false,-1, 32,0);
    tracep->declBit(c+154,"dec_bjp", false,-1);
    tracep->declBit(c+155,"dec_jal", false,-1);
    tracep->declBit(c+156,"dec_jalr", false,-1);
    tracep->declBit(c+157,"dec_bxx", false,-1);
    tracep->declBus(c+152,"dec_jalr_rs1idx", false,-1, 4,0);
    tracep->declBus(c+158,"dec_bjp_imm", false,-1, 31,0);
    tracep->declBus(c+159,"opcode", false,-1, 6,0);
    tracep->declBus(c+85,"rv32_rd", false,-1, 4,0);
    tracep->declBus(c+160,"rv32_func3", false,-1, 2,0);
    tracep->declBus(c+152,"rv32_rs1", false,-1, 4,0);
    tracep->declBus(c+153,"rv32_rs2", false,-1, 4,0);
    tracep->declBus(c+161,"rv32_func7", false,-1, 6,0);
    tracep->declBit(c+162,"opcode_1_0_11", false,-1);
    tracep->declBit(c+163,"opcode_4_2_000", false,-1);
    tracep->declBit(c+164,"opcode_4_2_001", false,-1);
    tracep->declBit(c+165,"opcode_4_2_010", false,-1);
    tracep->declBit(c+166,"opcode_4_2_011", false,-1);
    tracep->declBit(c+167,"opcode_4_2_100", false,-1);
    tracep->declBit(c+168,"opcode_4_2_101", false,-1);
    tracep->declBit(c+169,"opcode_4_2_110", false,-1);
    tracep->declBit(c+170,"opcode_4_2_111", false,-1);
    tracep->declBit(c+171,"opcode_6_5_00", false,-1);
    tracep->declBit(c+172,"opcode_6_5_01", false,-1);
    tracep->declBit(c+173,"opcode_6_5_10", false,-1);
    tracep->declBit(c+174,"opcode_6_5_11", false,-1);
    tracep->declBit(c+175,"rv32_func3_000", false,-1);
    tracep->declBit(c+176,"rv32_func3_001", false,-1);
    tracep->declBit(c+177,"rv32_func3_010", false,-1);
    tracep->declBit(c+178,"rv32_func3_011", false,-1);
    tracep->declBit(c+179,"rv32_func3_100", false,-1);
    tracep->declBit(c+180,"rv32_func3_101", false,-1);
    tracep->declBit(c+181,"rv32_func3_110", false,-1);
    tracep->declBit(c+182,"rv32_func3_111", false,-1);
    tracep->declBit(c+183,"rv32_func7_0000000", false,-1);
    tracep->declBit(c+184,"rv32_func7_0100000", false,-1);
    tracep->declBit(c+185,"rv32_func7_0000001", false,-1);
    tracep->declBit(c+186,"rv32_func7_0000101", false,-1);
    tracep->declBit(c+187,"rv32_func7_0001001", false,-1);
    tracep->declBit(c+188,"rv32_func7_0001101", false,-1);
    tracep->declBit(c+189,"rv32_func7_0010101", false,-1);
    tracep->declBit(c+190,"rv32_func7_0100001", false,-1);
    tracep->declBit(c+191,"rv32_func7_0010001", false,-1);
    tracep->declBit(c+192,"rv32_func7_0101101", false,-1);
    tracep->declBit(c+193,"rv32_func7_1111111", false,-1);
    tracep->declBit(c+194,"rv32_func7_0000100", false,-1);
    tracep->declBit(c+195,"rv32_func7_0001000", false,-1);
    tracep->declBit(c+196,"rv32_func7_0001100", false,-1);
    tracep->declBit(c+197,"rv32_func7_0101100", false,-1);
    tracep->declBit(c+198,"rv32_func7_0010000", false,-1);
    tracep->declBit(c+199,"rv32_func7_0010100", false,-1);
    tracep->declBit(c+200,"rv32_func7_1100000", false,-1);
    tracep->declBit(c+201,"rv32_func7_1110000", false,-1);
    tracep->declBit(c+202,"rv32_func7_1010000", false,-1);
    tracep->declBit(c+203,"rv32_func7_1101000", false,-1);
    tracep->declBit(c+204,"rv32_func7_1111000", false,-1);
    tracep->declBit(c+205,"rv32_func7_1010001", false,-1);
    tracep->declBit(c+206,"rv32_func7_1110001", false,-1);
    tracep->declBit(c+207,"rv32_func7_1100001", false,-1);
    tracep->declBit(c+208,"rv32_func7_1101001", false,-1);
    tracep->declBit(c+78,"rv32_rs1_x0", false,-1);
    tracep->declBit(c+79,"rv32_rs2_x0", false,-1);
    tracep->declBit(c+209,"rv32_rd_x0", false,-1);
    tracep->declBit(c+210,"rv32_load", false,-1);
    tracep->declBit(c+211,"rv32_store", false,-1);
    tracep->declBit(c+157,"rv32_branch", false,-1);
    tracep->declBit(c+156,"rv32_jalr", false,-1);
    tracep->declBit(c+155,"rv32_jal", false,-1);
    tracep->declBit(c+212,"rv32_op_imm", false,-1);
    tracep->declBit(c+213,"rv32_op", false,-1);
    tracep->declBit(c+214,"rv32_system", false,-1);
    tracep->declBit(c+215,"rv32_auipc", false,-1);
    tracep->declBit(c+215,"rv32_lui", false,-1);
    tracep->declBit(c+216,"rv32_beq", false,-1);
    tracep->declBit(c+217,"rv32_bne", false,-1);
    tracep->declBit(c+218,"rv32_ebreak", false,-1);
    tracep->declBit(c+219,"rv32_addi", false,-1);
    tracep->declBit(c+220,"rv32_sltiu", false,-1);
    tracep->declBit(c+221,"rv32_add", false,-1);
    tracep->declBit(c+222,"rv32_sltu", false,-1);
    tracep->declBit(c+223,"rv32_xor", false,-1);
    tracep->declBit(c+224,"rv32_or", false,-1);
    tracep->declBit(c+225,"rv32_nop", false,-1);
    tracep->declBit(c+218,"ecall_ebreak", false,-1);
    tracep->declBit(c+226,"rv32_lw", false,-1);
    tracep->declBit(c+227,"rv32_sw", false,-1);
    tracep->declBit(c+228,"alu_op", false,-1);
    tracep->declBit(c+229,"need_imm", false,-1);
    tracep->declBus(c+230,"alu_info_bus", false,-1, 20,0);
    tracep->declBit(c+231,"amoldst_op", false,-1);
    tracep->declBus(c+232,"lsu_info_size", false,-1, 1,0);
    tracep->declBit(c+233,"lsu_info_usign", false,-1);
    tracep->declBus(c+234,"agu_info_bus", false,-1, 20,0);
    tracep->declBit(c+83,"rv32_need_rs1", false,-1);
    tracep->declBit(c+84,"rv32_need_rs2", false,-1);
    tracep->declBit(c+86,"rv32_need_rd", false,-1);
    tracep->declBus(c+235,"rv32_i_imm", false,-1, 31,0);
    tracep->declBus(c+236,"rv32_s_imm", false,-1, 31,0);
    tracep->declBus(c+237,"rv32_b_imm", false,-1, 31,0);
    tracep->declBus(c+238,"rv32_u_imm", false,-1, 31,0);
    tracep->declBus(c+239,"rv32_j_imm", false,-1, 31,0);
    tracep->declBit(c+240,"rv32_imm_sel_i", false,-1);
    tracep->declBit(c+156,"rv32_imm_sel_jalr", false,-1);
    tracep->declBus(c+235,"rv32_jalr_imm", false,-1, 31,0);
    tracep->declBit(c+215,"rv32_imm_sel_u", false,-1);
    tracep->declBit(c+155,"rv32_imm_sel_j", false,-1);
    tracep->declBit(c+155,"rv32_imm_sel_jal", false,-1);
    tracep->declBus(c+239,"rv32_jal_imm", false,-1, 31,0);
    tracep->declBit(c+157,"rv32_imm_sel_b", false,-1);
    tracep->declBit(c+157,"rv32_imm_sel_bxx", false,-1);
    tracep->declBus(c+237,"rv32_bxx_imm", false,-1, 31,0);
    tracep->declBit(c+211,"rv32_imm_sel_s", false,-1);
    tracep->declBus(c+82,"rv32_imm", false,-1, 31,0);
    tracep->declBit(c+229,"rv32_need_imm", false,-1);
    tracep->declBit(c+154,"bjp_op", false,-1);
    tracep->declBus(c+241,"bjp_info_bus", false,-1, 16,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+48,"lden", false,-1);
    tracep->declBus(c+353,"dnxt", false,-1, 31,0);
    tracep->declBus(c+70,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+70,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+145,"lden", false,-1);
    tracep->declBus(c+67,"dnxt", false,-1, 31,0);
    tracep->declBus(c+71,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+71,"qout_r", false,-1, 31,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+440,"DW", false,-1, 31,0);
    tracep->declBit(c+47,"lden", false,-1);
    tracep->declBus(c+354,"dnxt", false,-1, 31,0);
    tracep->declBus(c+67,"qout", false,-1, 31,0);
    tracep->declBit(c+344,"clk", false,-1);
    tracep->declBit(c+345,"rst_n", false,-1);
    tracep->declBus(c+67,"qout_r", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_wbck_o_valid));
    bufp->fullIData(oldp+2,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_wbck_o_wdat),32);
    bufp->fullBit(oldp+3,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_excp_o_ld));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_excp_o_st));
    bufp->fullBit(oldp+5,((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_wbck_o_valid)))));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__prdt_taken));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bxx));
    bufp->fullIData(oldp+13,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm),32);
    bufp->fullBit(oldp+14,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bjp_req));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rdwen));
    bufp->fullIData(oldp+17,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_imm),32);
    bufp->fullQData(oldp+18,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_info),33);
    bufp->fullBit(oldp+20,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_load));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_store));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op_imm));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_system));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_auipc));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_beq));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_bne));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_ebreak));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_addi));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_sltiu));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_add));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_sltu));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_nop));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_op));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__need_imm));
    bufp->fullIData(oldp+36,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
    bufp->fullBit(oldp+37,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__amoldst_op));
    bufp->fullIData(oldp+38,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__agu_info_bus),21);
    bufp->fullIData(oldp+39,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
    bufp->fullIData(oldp+41,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
    bufp->fullIData(oldp+42,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    bufp->fullBit(oldp+43,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
    bufp->fullIData(oldp+44,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
    bufp->fullBit(oldp+45,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_hsked));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_clr));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_ena));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_nxt));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_ena));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_nxt));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bpu2rf_rs1_ena));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_ena));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_ena));
    bufp->fullIData(oldp+57,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op2),32);
    bufp->fullBit(oldp+58,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_new_req));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid_pre));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__new_req_condi));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_ena));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_nxt));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_ena));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_nxt));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt));
    bufp->fullIData(oldp+67,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r),32);
    bufp->fullBit(oldp+68,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__core.__PVT__ifu_o_ready));
    bufp->fullIData(oldp+70,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r),32);
    bufp->fullIData(oldp+71,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r),32);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r),5);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r),5);
    bufp->fullBit(oldp+74,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+76,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                          >> 4U)))));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__commit_trap));
    bufp->fullBit(oldp+78,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+79,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0x14U)))));
    bufp->fullQData(oldp+80,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info),33);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm),32);
    bufp->fullBit(oldp+83,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs1en));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs2en));
    bufp->fullCData(oldp+85,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 7U))),5);
    bufp->fullBit(oldp+86,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rdwen));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_wbck_o_valid));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_ebreak));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_ld));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_stamo));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp_prdt));
    bufp->fullIData(oldp+94,(((IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                               ? 3U : 0x1fU)),32);
    bufp->fullBit(oldp+95,((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    bufp->fullBit(oldp+96,((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    bufp->fullBit(oldp+97,((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_valid));
    bufp->fullBit(oldp+101,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                           >> 4U)))));
    bufp->fullBit(oldp+102,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                           >> 5U)))));
    bufp->fullIData(oldp+103,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm),32);
    bufp->fullQData(oldp+104,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info),33);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc),32);
    bufp->fullBit(oldp+107,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                           >> 5U)))));
    bufp->fullIData(oldp+108,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2),32);
    bufp->fullQData(oldp+109,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info),33);
    bufp->fullBit(oldp+111,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add));
    bufp->fullBit(oldp+112,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 6U)))));
    bufp->fullBit(oldp+113,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+114,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+115,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+116,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu));
    bufp->fullIData(oldp+117,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm),32);
    bufp->fullQData(oldp+118,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info),33);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc),32);
    bufp->fullBit(oldp+121,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0x13U)))));
    bufp->fullIData(oldp+122,((0x1ffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info))),17);
    bufp->fullBit(oldp+123,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_or));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_xor));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_cin));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_addsub));
    bufp->fullIData(oldp+130,((0x1fffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info))),21);
    bufp->fullCData(oldp+131,((3U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                             >> 6U)))),2);
    bufp->fullBit(oldp+132,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                           >> 8U)))));
    bufp->fullBit(oldp+133,((0U == (3U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                  >> 6U))))));
    bufp->fullBit(oldp+134,((1U == (3U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                  >> 6U))))));
    bufp->fullBit(oldp+135,((2U == (3U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                  >> 6U))))));
    bufp->fullIData(oldp+136,((0x1fffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info))),21);
    bufp->fullBit(oldp+137,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+138,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+139,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_o_hsked));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_set));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_ena));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_set));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_nxt));
    bufp->fullBit(oldp+147,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_i_ready));
    bufp->fullBit(oldp+148,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_dfflr__DOT__qout_r));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_flag_dffrs__DOT__qout_r));
    bufp->fullCData(oldp+152,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+153,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+154,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jal));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jalr));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bxx));
    bufp->fullIData(oldp+158,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp_imm),32);
    bufp->fullCData(oldp+159,((0x7fU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),7);
    bufp->fullCData(oldp+160,((7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+161,((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+162,((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
    bufp->fullBit(oldp+163,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+164,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+165,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+166,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+167,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+168,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+169,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+170,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 2U)))));
    bufp->fullBit(oldp+171,((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+172,((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+173,((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+174,((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 5U)))));
    bufp->fullBit(oldp+175,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+176,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+177,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+178,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+179,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+180,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+181,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+182,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+183,((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+184,((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+185,((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+186,((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+187,((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+188,((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                      >> 0x19U))));
    bufp->fullBit(oldp+189,((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+190,((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+191,((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+192,((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+193,((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+194,((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+195,((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                    >> 0x19U))));
    bufp->fullBit(oldp+196,((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                      >> 0x19U))));
    bufp->fullBit(oldp+197,((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+198,((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+199,((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+200,((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+201,((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+202,((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+203,((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+204,((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+205,((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+206,((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+207,((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+208,((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
    bufp->fullBit(oldp+209,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 7U)))));
    bufp->fullBit(oldp+210,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_load));
    bufp->fullBit(oldp+211,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_store));
    bufp->fullBit(oldp+212,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op_imm));
    bufp->fullBit(oldp+213,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op));
    bufp->fullBit(oldp+214,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_system));
    bufp->fullBit(oldp+215,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_auipc));
    bufp->fullBit(oldp+216,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_beq));
    bufp->fullBit(oldp+217,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_bne));
    bufp->fullBit(oldp+218,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_ebreak));
    bufp->fullBit(oldp+219,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_addi));
    bufp->fullBit(oldp+220,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_sltiu));
    bufp->fullBit(oldp+221,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_add));
    bufp->fullBit(oldp+222,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_sltu));
    bufp->fullBit(oldp+223,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op) 
                             & (IData)((0x4000U == 
                                        (0xfe007000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))))));
    bufp->fullBit(oldp+224,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op) 
                             & (IData)((0x6000U == 
                                        (0xfe007000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))))));
    bufp->fullBit(oldp+225,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_nop));
    bufp->fullBit(oldp+226,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_load) 
                             & (0x2000U == (0x7000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)))));
    bufp->fullBit(oldp+227,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_store) 
                             & (0x2000U == (0x7000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)))));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_op));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__need_imm));
    bufp->fullIData(oldp+230,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
    bufp->fullBit(oldp+231,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__amoldst_op));
    bufp->fullCData(oldp+232,((3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+233,((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                   >> 0xeU))));
    bufp->fullIData(oldp+234,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__agu_info_bus),21);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
    bufp->fullIData(oldp+238,((0xfffff000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    bufp->fullBit(oldp+240,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
    bufp->fullIData(oldp+241,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__core.__PVT__rf2ifu_rs1),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__core.__PVT__agu_icb_cmd_addr),32);
    bufp->fullIData(oldp+275,(vlSymsp->TOP__core.__PVT__agu_icb_cmd_wdata),32);
    bufp->fullCData(oldp+276,(vlSymsp->TOP__core.__PVT__agu_icb_cmd_wmask),4);
    bufp->fullIData(oldp+277,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_rs2),32);
    bufp->fullIData(oldp+278,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs1),32);
    bufp->fullIData(oldp+279,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs2),32);
    bufp->fullIData(oldp+280,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_wbck_o_wdat),32);
    bufp->fullIData(oldp+281,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1),32);
    bufp->fullIData(oldp+282,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2),32);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1),32);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2),32);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1),32);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2),32);
    bufp->fullIData(oldp+287,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1),32);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2),32);
    bufp->fullIData(oldp+289,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1),32);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2),32);
    bufp->fullIData(oldp+291,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                                << 0x1bU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+292,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                << 0x1bU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                                             >> 5U))),32);
    bufp->fullQData(oldp+293,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1),33);
    bufp->fullQData(oldp+295,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2),33);
    bufp->fullQData(oldp+297,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1),33);
    bufp->fullQData(oldp+299,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2),33);
    bufp->fullQData(oldp+301,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res),33);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res),32);
    bufp->fullBit(oldp+307,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt));
    bufp->fullIData(oldp+308,(((IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                                ? 1U : 0U)),32);
    bufp->fullBit(oldp+309,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_ena));
    bufp->fullCData(oldp+310,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_rdidx),5);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen),32);
    bufp->fullBit(oldp+312,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_wbck__DOT__wbck_sel_alu));
    bufp->fullBit(oldp+313,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+314,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+315,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+316,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+317,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+318,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+319,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+320,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+321,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+322,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+323,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+324,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+325,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+327,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+328,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+329,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+330,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+331,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+332,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+333,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+335,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+336,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+337,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+338,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+339,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+340,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+341,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+342,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+343,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    bufp->fullBit(oldp+344,(vlSelf->clk));
    bufp->fullBit(oldp+345,(vlSelf->rst));
    bufp->fullIData(oldp+346,(vlSelf->inspect_pc),32);
    bufp->fullIData(oldp+347,(vlSelf->pc_rtvec),32);
    bufp->fullBit(oldp+348,(vlSelf->ifu_req_valid));
    bufp->fullBit(oldp+349,(vlSelf->ifu_req_ready));
    bufp->fullIData(oldp+350,(vlSelf->ifu_req_pc),32);
    bufp->fullBit(oldp+351,(vlSelf->ifu_rsp_valid));
    bufp->fullBit(oldp+352,(vlSelf->ifu_rsp_ready));
    bufp->fullIData(oldp+353,(vlSelf->ifu_rsp_instr),32);
    bufp->fullIData(oldp+354,((0xfffffffeU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre)),32);
    bufp->fullIData(oldp+355,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat),32);
    bufp->fullBit(oldp+356,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.reset_flag_r));
    bufp->fullCData(oldp+357,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+358,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+359,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__prdt_pc_add_op1),32);
    bufp->fullIData(oldp+360,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre),32);
    bufp->fullIData(oldp+361,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op1),32);
    bufp->fullBit(oldp+362,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+363,((1U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+364,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 0x14U)))));
    bufp->fullCData(oldp+365,((0x1fU & (vlSelf->ifu_rsp_instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+366,((0x7fU & vlSelf->ifu_rsp_instr)),7);
    bufp->fullCData(oldp+367,((7U & (vlSelf->ifu_rsp_instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+368,((vlSelf->ifu_rsp_instr 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+369,((3U == (3U & vlSelf->ifu_rsp_instr))));
    bufp->fullBit(oldp+370,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+371,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+372,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+373,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+374,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+375,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+376,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+377,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 2U)))));
    bufp->fullBit(oldp+378,((0U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+379,((1U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+380,((2U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+381,((3U == (3U & (vlSelf->ifu_rsp_instr 
                                          >> 5U)))));
    bufp->fullBit(oldp+382,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+383,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+384,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+385,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+386,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+387,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+388,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+389,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+390,((0U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+391,((0x20U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+392,((1U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+393,((5U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+394,((9U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+395,((0xdU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->fullBit(oldp+396,((0x15U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+397,((0x21U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+398,((0x11U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+399,((0x2dU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+400,((0x7fU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+401,((4U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+402,((8U == (vlSelf->ifu_rsp_instr 
                                    >> 0x19U))));
    bufp->fullBit(oldp+403,((0xcU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->fullBit(oldp+404,((0x2cU == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+405,((0x10U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+406,((0x14U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+407,((0x60U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+408,((0x70U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+409,((0x50U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+410,((0x68U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+411,((0x78U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+412,((0x51U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+413,((0x71U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+414,((0x61U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+415,((0x69U == (vlSelf->ifu_rsp_instr 
                                       >> 0x19U))));
    bufp->fullBit(oldp+416,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                             >> 7U)))));
    bufp->fullBit(oldp+417,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op) 
                             & (IData)((0x4000U == 
                                        (0xfe007000U 
                                         & vlSelf->ifu_rsp_instr))))));
    bufp->fullBit(oldp+418,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op) 
                             & (IData)((0x6000U == 
                                        (0xfe007000U 
                                         & vlSelf->ifu_rsp_instr))))));
    bufp->fullBit(oldp+419,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_load) 
                             & (0x2000U == (0x7000U 
                                            & vlSelf->ifu_rsp_instr)))));
    bufp->fullBit(oldp+420,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_store) 
                             & (0x2000U == (0x7000U 
                                            & vlSelf->ifu_rsp_instr)))));
    bufp->fullCData(oldp+421,((3U & (vlSelf->ifu_rsp_instr 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+422,((1U & (vlSelf->ifu_rsp_instr 
                                   >> 0xeU))));
    bufp->fullIData(oldp+423,((0xfffff000U & vlSelf->ifu_rsp_instr)),32);
    bufp->fullBit(oldp+424,(vlSymsp->TOP__core.__PVT__lsu_o_valid));
    bufp->fullBit(oldp+425,(1U));
    bufp->fullIData(oldp+426,(vlSymsp->TOP__core.__PVT__lsu_o_wbck_wdat),32);
    bufp->fullBit(oldp+427,(vlSymsp->TOP__core.__PVT__lsu_o_cmt_ld));
    bufp->fullBit(oldp+428,(vlSymsp->TOP__core.__PVT__lsu_o_cmt_st));
    bufp->fullBit(oldp+429,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__oitf_ret_rdwen));
    bufp->fullCData(oldp+430,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__oitf_ret_rdidx),5);
    bufp->fullBit(oldp+431,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_excp_o_ready));
    bufp->fullBit(oldp+432,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_excp_o_valid));
    bufp->fullIData(oldp+433,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_excp_o_pc),32);
    bufp->fullIData(oldp+434,(0U),32);
    bufp->fullIData(oldp+435,(0x45U),32);
    bufp->fullBit(oldp+436,(0U));
    bufp->fullIData(oldp+437,(4U),32);
    bufp->fullIData(oldp+438,(1U),32);
    bufp->fullIData(oldp+439,(5U),32);
    bufp->fullIData(oldp+440,(0x20U),32);
}
