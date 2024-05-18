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
        bufp->chgIData(oldp+0,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_imm),32);
        bufp->chgQData(oldp+1,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_info),33);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_op_imm));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_system));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_auipc));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_ebreak));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_addi));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_op));
        bufp->chgIData(oldp+9,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+14,((0xfffffffeU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre)),32);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_hsked));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_ena));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_nxt));
        bufp->chgIData(oldp+19,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_add_op1),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+21,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_clr));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_ena));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_nxt));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_ena));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_nxt));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__new_req_condi));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_ena));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_nxt));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+31,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__core.__PVT__ifu_o_ready));
        bufp->chgIData(oldp+33,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r),32);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r),5);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r),5);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__commit_trap));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_ena));
        bufp->chgCData(oldp+40,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 7U))),5);
        bufp->chgBit(oldp+41,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+42,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0x14U)))));
        bufp->chgQData(oldp+43,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info),33);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm),32);
        bufp->chgBit(oldp+46,((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+47,((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+48,((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 7U)))));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__alu_cmt_ebreak));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
        bufp->chgIData(oldp+51,(((IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                                  ? 3U : 0x1fU)),32);
        bufp->chgBit(oldp+52,((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid));
        bufp->chgBit(oldp+54,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                             >> 4U)))));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu));
        bufp->chgIData(oldp+56,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm),32);
        bufp->chgQData(oldp+57,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info),33);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc),32);
        bufp->chgBit(oldp+60,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                             >> 0x13U)))));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add));
        bufp->chgIData(oldp+62,((0x1fffffU & (IData)(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info))),21);
        bufp->chgBit(oldp+63,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                             >> 0xfU)))));
        bufp->chgBit(oldp+64,((1U & (IData)((vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                             >> 0x10U)))));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_o_hsked));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_set));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_ena));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_set));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_nxt));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_i_ready));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_newpend_dfflr__DOT__qout_r));
        bufp->chgBit(oldp+74,((1U & (~ (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_flag_dffrs__DOT__qout_r)))));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid_pre));
        bufp->chgIData(oldp+76,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r),32);
        bufp->chgIData(oldp+77,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_req_dfflr__DOT__qout_r)
                                  ? 0U : 4U)),32);
        bufp->chgBit(oldp+78,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__reset_flag_dffrs__DOT__qout_r));
        bufp->chgCData(oldp+79,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+80,((0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+81,((0x7fU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),7);
        bufp->chgCData(oldp+82,((7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+83,((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+84,((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
        bufp->chgBit(oldp+85,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 2U)))));
        bufp->chgBit(oldp+86,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 2U)))));
        bufp->chgBit(oldp+87,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 2U)))));
        bufp->chgBit(oldp+88,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 2U)))));
        bufp->chgBit(oldp+89,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 2U)))));
        bufp->chgBit(oldp+90,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 2U)))));
        bufp->chgBit(oldp+91,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 2U)))));
        bufp->chgBit(oldp+92,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 2U)))));
        bufp->chgBit(oldp+93,((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 5U)))));
        bufp->chgBit(oldp+94,((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 5U)))));
        bufp->chgBit(oldp+95,((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 5U)))));
        bufp->chgBit(oldp+96,((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 5U)))));
        bufp->chgBit(oldp+97,((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+98,((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+99,((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+100,((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+101,((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+102,((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+103,((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+104,((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+105,((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+106,((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+107,((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+108,((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+109,((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+110,((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 0x19U))));
        bufp->chgBit(oldp+111,((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+112,((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+113,((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+114,((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+115,((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+116,((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+117,((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                       >> 0x19U))));
        bufp->chgBit(oldp+118,((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 0x19U))));
        bufp->chgBit(oldp+119,((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+120,((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+121,((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+122,((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+123,((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+124,((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+125,((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+126,((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+127,((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+128,((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+129,((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+130,((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                          >> 0x19U))));
        bufp->chgBit(oldp+131,((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                >> 7U)))));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_op_imm));
        bufp->chgBit(oldp+133,((IData)(((0x20U == (0x60U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                        & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__VdfgTmp_hc3fc61f5__0)))));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_system));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_auipc));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_ebreak));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_addi));
        bufp->chgBit(oldp+138,(((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_addi) 
                                & (IData)(((0U == (0xf8f80U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                          >> 0x14U)))))))));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_op));
        bufp->chgIData(oldp+140,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__alu_info_bus),21);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_i_imm),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_s_imm),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_b_imm),32);
        bufp->chgIData(oldp+144,((0xfffff000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__rv32_j_imm),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+146,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0]),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[1]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[2]),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[3]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[4]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[5]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[6]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[7]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[8]),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[9]),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[10]),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[11]),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[12]),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[13]),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[14]),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[15]),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[16]),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[17]),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[18]),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[19]),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[20]),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[21]),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[22]),32);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[23]),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[24]),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[25]),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[26]),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[27]),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[28]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[29]),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[30]),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[31]),32);
        bufp->chgBit(oldp+179,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__out_flag_r));
        bufp->chgIData(oldp+180,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+210,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_rs1),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_rs2),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs1),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__disp_alu_rs2),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2),32);
        bufp->chgIData(oldp+220,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[2U] 
                                   << 0x1fU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                                >> 1U))),32);
        bufp->chgIData(oldp+221,(((vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                   << 0x1fU) | (vlSymsp->TOP__core.inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                                >> 1U))),32);
        bufp->chgQData(oldp+222,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1),33);
        bufp->chgQData(oldp+224,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2),33);
        bufp->chgQData(oldp+226,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1),33);
        bufp->chgQData(oldp+228,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2),33);
        bufp->chgQData(oldp+230,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res),33);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+232,(vlSymsp->TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen),32);
        bufp->chgBit(oldp+233,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+247,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+251,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1));
    }
    bufp->chgBit(oldp+264,(vlSelf->clk));
    bufp->chgBit(oldp+265,(vlSelf->rst));
    bufp->chgIData(oldp+266,(vlSelf->pc_rtvec),32);
    bufp->chgBit(oldp+267,(vlSelf->ifu_req_valid));
    bufp->chgBit(oldp+268,(vlSelf->ifu_req_ready));
    bufp->chgIData(oldp+269,(vlSelf->ifu_req_pc),32);
    bufp->chgBit(oldp+270,(vlSelf->ifu_rsp_valid));
    bufp->chgBit(oldp+271,(vlSelf->ifu_rsp_ready));
    bufp->chgIData(oldp+272,(vlSelf->ifu_rsp_instr),32);
    bufp->chgBit(oldp+273,(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.reset_flag_r));
    bufp->chgBit(oldp+274,((0U != (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0xfU)))));
    bufp->chgBit(oldp+275,((0U != (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0x14U)))));
    bufp->chgCData(oldp+276,((0x1fU & (vlSelf->ifu_rsp_instr 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+277,((0x1fU & (vlSelf->ifu_rsp_instr 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+278,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0xfU)))));
    bufp->chgBit(oldp+279,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 0x14U)))));
    bufp->chgBit(oldp+280,((0U != (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 7U)))));
    bufp->chgCData(oldp+281,((0x1fU & (vlSelf->ifu_rsp_instr 
                                       >> 7U))),5);
    bufp->chgCData(oldp+282,((0x7fU & vlSelf->ifu_rsp_instr)),7);
    bufp->chgCData(oldp+283,((7U & (vlSelf->ifu_rsp_instr 
                                    >> 0xcU))),3);
    bufp->chgCData(oldp+284,((vlSelf->ifu_rsp_instr 
                              >> 0x19U)),7);
    bufp->chgBit(oldp+285,((3U == (3U & vlSelf->ifu_rsp_instr))));
    bufp->chgBit(oldp+286,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+287,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+288,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+289,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+290,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+291,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+292,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+293,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 2U)))));
    bufp->chgBit(oldp+294,((0U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+295,((1U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+296,((2U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+297,((3U == (3U & (vlSelf->ifu_rsp_instr 
                                         >> 5U)))));
    bufp->chgBit(oldp+298,((0U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+299,((1U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+300,((2U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+301,((3U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+302,((4U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+303,((5U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+304,((6U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+305,((7U == (7U & (vlSelf->ifu_rsp_instr 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+306,((0U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+307,((0x20U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+308,((1U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+309,((5U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+310,((9U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+311,((0xdU == (vlSelf->ifu_rsp_instr 
                                     >> 0x19U))));
    bufp->chgBit(oldp+312,((0x15U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+313,((0x21U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+314,((0x11U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+315,((0x2dU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+316,((0x7fU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+317,((4U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+318,((8U == (vlSelf->ifu_rsp_instr 
                                   >> 0x19U))));
    bufp->chgBit(oldp+319,((0xcU == (vlSelf->ifu_rsp_instr 
                                     >> 0x19U))));
    bufp->chgBit(oldp+320,((0x2cU == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+321,((0x10U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+322,((0x14U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+323,((0x60U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+324,((0x70U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+325,((0x50U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+326,((0x68U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+327,((0x78U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+328,((0x51U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+329,((0x71U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+330,((0x61U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+331,((0x69U == (vlSelf->ifu_rsp_instr 
                                      >> 0x19U))));
    bufp->chgBit(oldp+332,((0U == (0x1fU & (vlSelf->ifu_rsp_instr 
                                            >> 7U)))));
    bufp->chgBit(oldp+333,((IData)(((0x20U == (0x60U 
                                               & vlSelf->ifu_rsp_instr)) 
                                    & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__VdfgTmp_hc3fc61f5__0)))));
    bufp->chgBit(oldp+334,(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__rv32_addi) 
                            & (IData)(((0U == (0xf8f80U 
                                               & vlSelf->ifu_rsp_instr)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->ifu_rsp_instr 
                                                      >> 0x14U)))))))));
    bufp->chgIData(oldp+335,((0xfffff000U & vlSelf->ifu_rsp_instr)),32);
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
