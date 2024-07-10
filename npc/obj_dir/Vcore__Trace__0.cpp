// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__trace_chg_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_top_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcore___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcore___024root__trace_chg_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_wbck_o_valid));
        bufp->chgIData(oldp+1,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_wbck_o_wdat),32);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_excp_o_ld));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_excp_o_st));
        bufp->chgBit(oldp+4,((1U & (~ (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__longp_wbck_o_valid)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+5,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__prdt_taken));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bxx));
        bufp->chgIData(oldp+12,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm),32);
        bufp->chgBit(oldp+13,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bjp_req));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rdwen));
        bufp->chgIData(oldp+16,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_imm),32);
        bufp->chgQData(oldp+17,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_info),33);
        bufp->chgBit(oldp+19,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_load));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_store));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op_imm));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_system));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_auipc));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_beq));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_bne));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_ebreak));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_addi));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_sltiu));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_add));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_sltu));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_nop));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_op));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__need_imm));
        bufp->chgIData(oldp+35,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
        bufp->chgBit(oldp+36,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__amoldst_op));
        bufp->chgIData(oldp+37,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__agu_info_bus),21);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
        bufp->chgIData(oldp+43,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+44,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_hsked));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_clr));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_ena));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_nxt));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_ena));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_nxt));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bpu2rf_rs1_ena));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_ena));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_ena));
        bufp->chgIData(oldp+56,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op2),32);
        bufp->chgBit(oldp+57,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_new_req));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid_pre));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__new_req_condi));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_ena));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_nxt));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_ena));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_nxt));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+66,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r),32);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__core.__PVT__ifu_o_ready));
        bufp->chgIData(oldp+69,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r),32);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r),5);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r),5);
        bufp->chgBit(oldp+73,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+75,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                             >> 4U)))));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__commit_trap));
        bufp->chgBit(oldp+77,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+78,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0x14U)))));
        bufp->chgQData(oldp+79,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info),33);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm),32);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs1en));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs2en));
        bufp->chgCData(oldp+84,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 7U))),5);
        bufp->chgBit(oldp+85,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rdwen));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_wbck_o_valid));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_ebreak));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_ld));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_stamo));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp_prdt));
        bufp->chgIData(oldp+93,(((IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                                  ? 3U : 0x1fU)),32);
        bufp->chgBit(oldp+94,((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
        bufp->chgBit(oldp+95,((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
        bufp->chgBit(oldp+96,((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_valid));
        bufp->chgBit(oldp+100,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                              >> 4U)))));
        bufp->chgBit(oldp+101,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                              >> 5U)))));
        bufp->chgIData(oldp+102,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm),32);
        bufp->chgQData(oldp+103,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info),33);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc),32);
        bufp->chgBit(oldp+106,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                              >> 5U)))));
        bufp->chgIData(oldp+107,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2),32);
        bufp->chgQData(oldp+108,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info),33);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add));
        bufp->chgBit(oldp+111,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 6U)))));
        bufp->chgBit(oldp+112,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+113,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+114,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu));
        bufp->chgIData(oldp+116,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm),32);
        bufp->chgQData(oldp+117,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info),33);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc),32);
        bufp->chgBit(oldp+120,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0x13U)))));
        bufp->chgIData(oldp+121,((0x1ffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info))),17);
        bufp->chgBit(oldp+122,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_or));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_xor));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_cin));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_addsub));
        bufp->chgIData(oldp+129,((0x1fffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info))),21);
        bufp->chgCData(oldp+130,((3U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                >> 6U)))),2);
        bufp->chgBit(oldp+131,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                              >> 8U)))));
        bufp->chgBit(oldp+132,((0U == (3U & (IData)(
                                                    (vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                     >> 6U))))));
        bufp->chgBit(oldp+133,((1U == (3U & (IData)(
                                                    (vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                     >> 6U))))));
        bufp->chgBit(oldp+134,((2U == (3U & (IData)(
                                                    (vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                     >> 6U))))));
        bufp->chgIData(oldp+135,((0x1fffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info))),21);
        bufp->chgBit(oldp+136,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+137,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+138,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_o_hsked));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_set));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_ena));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_set));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_nxt));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_i_ready));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_flag_dffrs__DOT__qout_r));
        bufp->chgCData(oldp+151,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+152,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+153,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jal));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jalr));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bxx));
        bufp->chgIData(oldp+157,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp_imm),32);
        bufp->chgCData(oldp+158,((0x7fU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),7);
        bufp->chgCData(oldp+159,((7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+160,((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+161,((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
        bufp->chgBit(oldp+162,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+163,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+164,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+165,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+166,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+167,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+168,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+169,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+170,((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 5U)))));
        bufp->chgBit(oldp+171,((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 5U)))));
        bufp->chgBit(oldp+172,((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 5U)))));
        bufp->chgBit(oldp+173,((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 5U)))));
        bufp->chgBit(oldp+174,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+175,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+176,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+177,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+178,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+179,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+180,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+181,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+182,((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+183,((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+184,((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+185,((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+186,((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+187,((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 0x19U))));
        bufp->chgBit(oldp+188,((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+189,((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+190,((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+191,((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+192,((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+193,((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+194,((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+195,((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 0x19U))));
        bufp->chgBit(oldp+196,((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+197,((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+198,((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+199,((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+200,((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+201,((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+202,((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+203,((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+204,((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+205,((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+206,((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+207,((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+208,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                >> 7U)))));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_load));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_store));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op_imm));
        bufp->chgBit(oldp+212,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op));
        bufp->chgBit(oldp+213,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_system));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_auipc));
        bufp->chgBit(oldp+215,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_beq));
        bufp->chgBit(oldp+216,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_bne));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_ebreak));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_addi));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_sltiu));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_add));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_sltu));
        bufp->chgBit(oldp+222,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op) 
                                & (IData)((0x4000U 
                                           == (0xfe007000U 
                                               & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))))));
        bufp->chgBit(oldp+223,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op) 
                                & (IData)((0x6000U 
                                           == (0xfe007000U 
                                               & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))))));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_nop));
        bufp->chgBit(oldp+225,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_load) 
                                & (0x2000U == (0x7000U 
                                               & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)))));
        bufp->chgBit(oldp+226,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_store) 
                                & (0x2000U == (0x7000U 
                                               & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)))));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_op));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__need_imm));
        bufp->chgIData(oldp+229,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
        bufp->chgBit(oldp+230,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__amoldst_op));
        bufp->chgCData(oldp+231,((3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+232,((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                      >> 0xeU))));
        bufp->chgIData(oldp+233,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__agu_info_bus),21);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
        bufp->chgIData(oldp+237,((0xfffff000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),32);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
        bufp->chgBit(oldp+239,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
        bufp->chgIData(oldp+240,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+241,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+248,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+249,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+251,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+253,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+254,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+255,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+257,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+260,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+264,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+265,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+267,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+268,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+269,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+272,(vlSymsp->TOP__core.__PVT__rf2ifu_rs1),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__core.__PVT__agu_icb_cmd_addr),32);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__core.__PVT__agu_icb_cmd_wdata),32);
        bufp->chgCData(oldp+275,(vlSymsp->TOP__core.__PVT__agu_icb_cmd_wmask),4);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_rs2),32);
        bufp->chgIData(oldp+277,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs1),32);
        bufp->chgIData(oldp+278,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs2),32);
        bufp->chgIData(oldp+279,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_wbck_o_wdat),32);
        bufp->chgIData(oldp+280,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1),32);
        bufp->chgIData(oldp+281,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2),32);
        bufp->chgIData(oldp+282,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1),32);
        bufp->chgIData(oldp+283,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2),32);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1),32);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2),32);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1),32);
        bufp->chgIData(oldp+287,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2),32);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1),32);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2),32);
        bufp->chgIData(oldp+290,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                                   << 0x1bU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+291,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                   << 0x1bU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                                                >> 5U))),32);
        bufp->chgQData(oldp+292,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1),33);
        bufp->chgQData(oldp+294,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2),33);
        bufp->chgQData(oldp+296,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1),33);
        bufp->chgQData(oldp+298,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2),33);
        bufp->chgQData(oldp+300,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res),33);
        bufp->chgIData(oldp+302,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1),32);
        bufp->chgIData(oldp+303,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2),32);
        bufp->chgIData(oldp+304,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res),32);
        bufp->chgIData(oldp+305,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res),32);
        bufp->chgBit(oldp+306,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt));
        bufp->chgIData(oldp+307,(((IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                                   ? 1U : 0U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+308,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_ena));
        bufp->chgCData(oldp+309,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_rdidx),5);
        bufp->chgIData(oldp+310,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen),32);
        bufp->chgBit(oldp+311,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_wbck__DOT__wbck_sel_alu));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+321,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+323,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+326,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+327,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+328,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+329,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+330,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+331,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+332,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+340,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+341,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    }
    bufp->chgBit(oldp+343,(vlSelf->clk));
    bufp->chgBit(oldp+344,(vlSelf->rst));
    bufp->chgIData(oldp+345,(vlSelf->inspect_pc),32);
    bufp->chgIData(oldp+346,(vlSelf->pc_rtvec),32);
    bufp->chgBit(oldp+347,(vlSelf->ifu_req_valid));
    bufp->chgBit(oldp+348,(vlSelf->ifu_req_ready));
    bufp->chgIData(oldp+349,(vlSelf->ifu_req_pc),32);
    bufp->chgBit(oldp+350,(vlSelf->ifu_rsp_valid));
    bufp->chgBit(oldp+351,(vlSelf->ifu_rsp_ready));
    bufp->chgIData(oldp+352,(vlSelf->ifu_rsp_instr),32);
    bufp->chgIData(oldp+353,((0xfffffffeU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre)),32);
    bufp->chgIData(oldp+354,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat),32);
    bufp->chgBit(oldp+355,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.reset_flag_r));
    bufp->chgCData(oldp+356,((0x1fU & (vlSelf->ifu_rsp_instr 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+357,((0x1fU & (vlSelf->ifu_rsp_instr 
                                       >> 0x14U))),5);
    bufp->chgIData(oldp+358,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__prdt_pc_add_op1),32);
    bufp->chgIData(oldp+359,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre),32);
    bufp->chgIData(oldp+360,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op1),32);
    bufp->chgBit(oldp+361,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0xfU)))));
    bufp->chgBit(oldp+362,((1U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0xfU)))));
    bufp->chgBit(oldp+363,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0x14U)))));
    bufp->chgCData(oldp+364,((0x1fU & (vlSelf->ifu_rsp_instr 
                                       >> 7U))),5);
    bufp->chgCData(oldp+365,((0x7fU & vlSelf->ifu_rsp_instr)),7);
    bufp->chgCData(oldp+366,((7U & (vlSelf->ifu_rsp_instr 
                                    >> 0xcU))),3);
    bufp->chgCData(oldp+367,((vlSelf->ifu_rsp_instr 
                              >> 0x19U)),7);
    bufp->chgBit(oldp+368,((3U == (3U & vlSelf->ifu_rsp_instr))));
    bufp->chgBit(oldp+369,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+370,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+371,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+372,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+373,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+374,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+375,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+376,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+377,((0U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+378,((1U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+379,((2U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+380,((3U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+381,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+382,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+383,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+384,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+385,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+386,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+387,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+388,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+389,((0U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+390,((0x20U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+391,((1U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+392,((5U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+393,((9U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+394,((0xdU == (vlSelf->ifu_rsp_instr 
                                     >> 0x19U))));
    bufp->chgBit(oldp+395,((0x15U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+396,((0x21U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+397,((0x11U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+398,((0x2dU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+399,((0x7fU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+400,((4U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+401,((8U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+402,((0xcU == (vlSelf->ifu_rsp_instr 
                                     >> 0x19U))));
    bufp->chgBit(oldp+403,((0x2cU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+404,((0x10U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+405,((0x14U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+406,((0x60U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+407,((0x70U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+408,((0x50U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+409,((0x68U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+410,((0x78U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+411,((0x51U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+412,((0x71U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+413,((0x61U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+414,((0x69U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+415,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 7U)))));
    bufp->chgBit(oldp+416,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op) 
                            & (IData)((0x4000U == (0xfe007000U 
                                                   & vlSelf->ifu_rsp_instr))))));
    bufp->chgBit(oldp+417,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op) 
                            & (IData)((0x6000U == (0xfe007000U 
                                                   & vlSelf->ifu_rsp_instr))))));
    bufp->chgBit(oldp+418,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_load) 
                            & (0x2000U == (0x7000U 
                                           & vlSelf->ifu_rsp_instr)))));
    bufp->chgBit(oldp+419,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_store) 
                            & (0x2000U == (0x7000U 
                                           & vlSelf->ifu_rsp_instr)))));
    bufp->chgCData(oldp+420,((3U & (vlSelf->ifu_rsp_instr 
                                    >> 0xcU))),2);
    bufp->chgBit(oldp+421,((1U & (vlSelf->ifu_rsp_instr 
                                  >> 0xeU))));
    bufp->chgIData(oldp+422,((0xfffff000U & vlSelf->ifu_rsp_instr)),32);
}

void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_cleanup\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
