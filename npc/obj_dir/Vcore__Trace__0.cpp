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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__prdt_taken));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr));
        bufp->chgIData(oldp+6,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm),32);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bjp_req));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__jalr_rs1x1_dep));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep));
        bufp->chgIData(oldp+11,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_imm),32);
        bufp->chgQData(oldp+12,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_info),33);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op_imm));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_system));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_auipc));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_ebreak));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_addi));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_nop));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_op));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__need_imm));
        bufp->chgIData(oldp+23,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
        bufp->chgIData(oldp+29,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+30,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_hsked));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_clr));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_ena));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_nxt));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_ena));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_nxt));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bpu2rf_rs1_ena));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_ena));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_ena));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bpu_wait));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_new_req));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid_pre));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__new_req_condi));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_ena));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_nxt));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_ena));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_nxt));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+53,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__core.__PVT__ifu_o_ready));
        bufp->chgIData(oldp+56,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r),32);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r),5);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r),5);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__commit_trap));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_ena));
        bufp->chgCData(oldp+64,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 7U))),5);
        bufp->chgBit(oldp+65,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+66,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0x14U)))));
        bufp->chgQData(oldp+67,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info),33);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm),32);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs1en));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs2en));
        bufp->chgBit(oldp+72,((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 7U)))));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_ebreak));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_bjp_prdt));
        bufp->chgIData(oldp+77,(((IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                                  ? 3U : 0x1fU)),32);
        bufp->chgBit(oldp+78,((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
        bufp->chgBit(oldp+79,((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid));
        bufp->chgBit(oldp+82,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                             >> 4U)))));
        bufp->chgBit(oldp+83,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                             >> 5U)))));
        bufp->chgIData(oldp+84,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm),32);
        bufp->chgQData(oldp+85,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info),33);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc),32);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add));
        bufp->chgBit(oldp+89,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                             >> 0xeU)))));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm),32);
        bufp->chgQData(oldp+92,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info),33);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc),32);
        bufp->chgBit(oldp+95,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                             >> 0x13U)))));
        bufp->chgIData(oldp+96,((0x1ffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info))),17);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2));
        bufp->chgIData(oldp+99,((0x1fffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info))),21);
        bufp->chgBit(oldp+100,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+101,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+102,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_o_hsked));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_set));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_ena));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_set));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_nxt));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_i_ready));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_dfflr__DOT__qout_r));
        bufp->chgIData(oldp+112,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r),32);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__bjp_final_dfflr__DOT__qout_r));
        bufp->chgIData(oldp+114,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op2),32);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_minidec__DOT__dec_bjp_test_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_flag_dffrs__DOT__qout_r));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r));
        bufp->chgCData(oldp+122,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+123,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jal));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_jalr));
        bufp->chgIData(oldp+127,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_bjp_imm),32);
        bufp->chgCData(oldp+128,((0x7fU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),7);
        bufp->chgCData(oldp+129,((7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+130,((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+131,((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
        bufp->chgBit(oldp+132,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+133,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+134,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+135,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+136,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+137,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+138,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+139,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 2U)))));
        bufp->chgBit(oldp+140,((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 5U)))));
        bufp->chgBit(oldp+141,((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 5U)))));
        bufp->chgBit(oldp+142,((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 5U)))));
        bufp->chgBit(oldp+143,((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 5U)))));
        bufp->chgBit(oldp+144,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+145,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+146,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+147,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+148,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+149,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+150,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+151,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+152,((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+153,((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+154,((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+155,((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+156,((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+157,((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 0x19U))));
        bufp->chgBit(oldp+158,((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+159,((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+160,((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+161,((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+162,((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+163,((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+164,((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+165,((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 0x19U))));
        bufp->chgBit(oldp+166,((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+167,((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+168,((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+169,((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+170,((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+171,((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+172,((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+173,((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+174,((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+175,((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+176,((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+177,((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+178,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                >> 7U)))));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op_imm));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_system));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_auipc));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_ebreak));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_addi));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_nop));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_op));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__need_imm));
        bufp->chgIData(oldp+188,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
        bufp->chgIData(oldp+192,((0xfffff000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
        bufp->chgBit(oldp+194,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_imm_sel_i));
        bufp->chgIData(oldp+195,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__bjp_info_bus),17);
        bufp->chgBit(oldp+196,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+197,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[1]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[2]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[3]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[4]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[5]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[6]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[7]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[8]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[9]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[10]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[11]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[12]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[13]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[14]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[15]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[16]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[17]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[18]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[19]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[20]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[21]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[22]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[23]),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[24]),32);
        bufp->chgIData(oldp+224,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[25]),32);
        bufp->chgIData(oldp+225,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[26]),32);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[27]),32);
        bufp->chgIData(oldp+227,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[28]),32);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[29]),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[30]),32);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[31]),32);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+239,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+240,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+241,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+248,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+249,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+251,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+253,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+254,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+255,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+257,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+260,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen),32);
        bufp->chgBit(oldp+261,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+287,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+288,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+289,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+290,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+291,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+292,(vlSymsp->TOP__core.__PVT__rf2ifu_rs1),32);
        bufp->chgIData(oldp+293,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_rs2),32);
        bufp->chgIData(oldp+294,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat),32);
        bufp->chgIData(oldp+295,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs1),32);
        bufp->chgIData(oldp+296,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs2),32);
        bufp->chgIData(oldp+297,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_o_wbck_wdat),32);
        bufp->chgIData(oldp+298,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1),32);
        bufp->chgIData(oldp+299,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2),32);
        bufp->chgIData(oldp+300,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1),32);
        bufp->chgIData(oldp+301,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2),32);
        bufp->chgIData(oldp+302,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1),32);
        bufp->chgIData(oldp+303,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2),32);
        bufp->chgIData(oldp+304,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1),32);
        bufp->chgIData(oldp+305,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2),32);
        bufp->chgIData(oldp+306,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[2U] 
                                   << 0x1eU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[1U] 
                                                >> 2U))),32);
        bufp->chgIData(oldp+307,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[1U] 
                                   << 0x1eU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hf8805e99__0[0U] 
                                                >> 2U))),32);
        bufp->chgQData(oldp+308,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1),33);
        bufp->chgQData(oldp+310,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2),33);
        bufp->chgQData(oldp+312,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1),33);
        bufp->chgQData(oldp+314,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2),33);
        bufp->chgQData(oldp+316,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res),33);
    }
    bufp->chgBit(oldp+318,(vlSelf->clk));
    bufp->chgBit(oldp+319,(vlSelf->rst));
    bufp->chgIData(oldp+320,(vlSelf->inspect_pc),32);
    bufp->chgIData(oldp+321,(vlSelf->pc_rtvec),32);
    bufp->chgBit(oldp+322,(vlSelf->ifu_req_valid));
    bufp->chgBit(oldp+323,(vlSelf->ifu_req_ready));
    bufp->chgIData(oldp+324,(vlSelf->ifu_req_pc),32);
    bufp->chgBit(oldp+325,(vlSelf->ifu_rsp_valid));
    bufp->chgBit(oldp+326,(vlSelf->ifu_rsp_ready));
    bufp->chgIData(oldp+327,(vlSelf->ifu_rsp_instr),32);
    bufp->chgIData(oldp+328,((0xfffffffeU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre)),32);
    bufp->chgIData(oldp+329,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__publicgetsignal__Vstatic__j),32);
    bufp->chgBit(oldp+330,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.reset_flag_r));
    bufp->chgCData(oldp+331,((0x1fU & (vlSelf->ifu_rsp_instr 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+332,((0x1fU & (vlSelf->ifu_rsp_instr 
                                       >> 0x14U))),5);
    bufp->chgIData(oldp+333,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__prdt_pc_add_op1),32);
    bufp->chgIData(oldp+334,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre),32);
    bufp->chgIData(oldp+335,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op1),32);
    bufp->chgBit(oldp+336,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0xfU)))));
    bufp->chgBit(oldp+337,((1U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0xfU)))));
    bufp->chgBit(oldp+338,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0x14U)))));
    bufp->chgBit(oldp+339,((0U != (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 7U)))));
    bufp->chgCData(oldp+340,((0x1fU & (vlSelf->ifu_rsp_instr 
                                       >> 7U))),5);
    bufp->chgCData(oldp+341,((0x7fU & vlSelf->ifu_rsp_instr)),7);
    bufp->chgCData(oldp+342,((7U & (vlSelf->ifu_rsp_instr 
                                    >> 0xcU))),3);
    bufp->chgCData(oldp+343,((vlSelf->ifu_rsp_instr 
                              >> 0x19U)),7);
    bufp->chgBit(oldp+344,((3U == (3U & vlSelf->ifu_rsp_instr))));
    bufp->chgBit(oldp+345,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+346,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+347,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+348,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+349,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+350,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+351,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+352,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+353,((0U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+354,((1U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+355,((2U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+356,((3U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+357,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+358,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+359,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+360,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+361,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+362,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+363,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+364,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+365,((0U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+366,((0x20U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+367,((1U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+368,((5U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+369,((9U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+370,((0xdU == (vlSelf->ifu_rsp_instr 
                                     >> 0x19U))));
    bufp->chgBit(oldp+371,((0x15U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+372,((0x21U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+373,((0x11U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+374,((0x2dU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+375,((0x7fU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+376,((4U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+377,((8U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+378,((0xcU == (vlSelf->ifu_rsp_instr 
                                     >> 0x19U))));
    bufp->chgBit(oldp+379,((0x2cU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+380,((0x10U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+381,((0x14U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+382,((0x60U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+383,((0x70U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+384,((0x50U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+385,((0x68U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+386,((0x78U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+387,((0x51U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+388,((0x71U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+389,((0x61U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+390,((0x69U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+391,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 7U)))));
    bufp->chgIData(oldp+392,((0xfffff000U & vlSelf->ifu_rsp_instr)),32);
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
