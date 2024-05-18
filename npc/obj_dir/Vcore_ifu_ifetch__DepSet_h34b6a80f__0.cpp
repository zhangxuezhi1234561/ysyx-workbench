// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_ifu_ifetch.h"

VL_INLINE_OPT void Vcore_ifu_ifetch___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Body
    if (((IData)(vlSelf->reset_flag_r) ^ (IData)(vlSelf->__Vtogcov__reset_flag_r))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_flag_r = vlSelf->reset_flag_r;
    }
    if (((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->__Vtogcov__minidec_rs1en))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs1en = (0U != (0x1fU 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 0xfU)));
    }
    if (((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0x14U))) ^ (IData)(vlSelf->__Vtogcov__minidec_rs2en))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs2en = (0U != (0x1fU 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 0x14U)));
    }
    vlSelf->__PVT__ifu_rsp_ready = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    vlSelf->__PVT__pc_add_op1 = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                  ? vlSymsp->TOP.pc_rtvec
                                  : vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r);
    vlSelf->__PVT__ifu_rsp_hsked = ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                    & (IData)(vlSelf->__PVT__ifu_rsp_ready));
    if ((1U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (1U & vlSelf->__PVT__pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (2U & vlSelf->__PVT__pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (4U & vlSelf->__PVT__pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (8U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if (((vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    vlSelf->__PVT__pc_nxt_pre = (vlSelf->__PVT__pc_add_op1 
                                 + ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                     ? 0U : 4U));
    if (((IData)(vlSelf->__PVT__ifu_rsp_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_hsked))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_hsked = vlSelf->__PVT__ifu_rsp_hsked;
    }
    vlSelf->__PVT__ir_valid_ena = ((IData)(vlSelf->__PVT__ifu_rsp_hsked) 
                                   | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_valid_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                         | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    vlSelf->__PVT__new_req_condi = (1U & ((~ (IData)(vlSelf->__PVT__out_flag_r)) 
                                          | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    if ((1U & (vlSelf->__PVT__pc_nxt_pre ^ vlSelf->__Vtogcov__pc_nxt_pre))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_nxt_pre = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_nxt_pre) 
                                         | (1U & vlSelf->__PVT__pc_nxt_pre));
    }
    if (((IData)(vlSelf->__PVT__ir_valid_ena) ^ (IData)(vlSelf->__Vtogcov__ir_valid_ena))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_ena = vlSelf->__PVT__ir_valid_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_valid_nxt))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_nxt = vlSelf->__PVT__ir_valid_nxt;
    }
    if (((IData)(vlSelf->__PVT__new_req_condi) ^ (IData)(vlSelf->__Vtogcov__new_req_condi))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__new_req_condi = vlSelf->__PVT__new_req_condi;
    }
    vlSelf->__PVT__ifu_req_valid = ((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
                                    & (IData)(vlSelf->__PVT__new_req_condi));
    vlSelf->__PVT__ifu_req_hsked = ((IData)(vlSelf->__PVT__ifu_req_valid) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_req_hsked))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_hsked = vlSelf->__PVT__ifu_req_hsked;
    }
    vlSelf->__PVT__out_flag_ena = ((IData)(vlSelf->__PVT__ifu_req_hsked) 
                                   | (IData)(vlSelf->__PVT__ifu_rsp_hsked));
    vlSelf->__PVT__out_flag_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_rsp_hsked)) 
                                         | (IData)(vlSelf->__PVT__ifu_req_hsked)));
    vlSelf->__PVT__pc_newpend_ena = ((IData)(vlSelf->__PVT__ifu_req_hsked) 
                                     | (IData)(vlSelf->__PVT__ir_pc_vld_set));
    vlSelf->__PVT__pc_newpend_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ir_pc_vld_set)) 
                                           | (IData)(vlSelf->__PVT__ifu_req_hsked)));
    vlSelf->__PVT__reset_req_clr = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
                                    & (IData)(vlSelf->__PVT__ifu_req_hsked));
    if (((IData)(vlSelf->__PVT__out_flag_ena) ^ (IData)(vlSelf->__Vtogcov__out_flag_ena))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_ena = vlSelf->__PVT__out_flag_ena;
    }
    if (((IData)(vlSelf->__PVT__out_flag_nxt) ^ (IData)(vlSelf->__Vtogcov__out_flag_nxt))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_nxt = vlSelf->__PVT__out_flag_nxt;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_ena) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_ena))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_ena = vlSelf->__PVT__pc_newpend_ena;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_nxt) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_nxt))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_nxt = vlSelf->__PVT__pc_newpend_nxt;
    }
    if (((IData)(vlSelf->__PVT__reset_req_clr) ^ (IData)(vlSelf->__Vtogcov__reset_req_clr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_clr = vlSelf->__PVT__reset_req_clr;
    }
    vlSelf->__PVT__reset_req_ena = ((IData)(vlSelf->__PVT__reset_req_set) 
                                    | (IData)(vlSelf->__PVT__reset_req_clr));
    vlSelf->__PVT__reset_req_nxt = (1U & ((~ (IData)(vlSelf->__PVT__reset_req_clr)) 
                                          | (IData)(vlSelf->__PVT__reset_req_set)));
    if (((IData)(vlSelf->__PVT__reset_req_ena) ^ (IData)(vlSelf->__Vtogcov__reset_req_ena))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_ena = vlSelf->__PVT__reset_req_ena;
    }
    if (((IData)(vlSelf->__PVT__reset_req_nxt) ^ (IData)(vlSelf->__Vtogcov__reset_req_nxt))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_nxt = vlSelf->__PVT__reset_req_nxt;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->__PVT__reset_req_ena) {
            vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__reset_req_dfflr__DOT__qout_r 
                = vlSelf->__PVT__reset_req_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__reset_req_ena)))) {
            vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_valid_ena) {
            vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r 
                = vlSelf->__PVT__ir_valid_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_valid_ena)))) {
            vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_pc_vld_ena) {
            vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r 
                = vlSelf->__PVT__ir_pc_vld_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_pc_vld_ena)))) {
            vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__pc_newpend_ena) {
            vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r 
                = vlSelf->__PVT__pc_newpend_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__pc_newpend_ena)))) {
            vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                             >> 0xfU)))) {
            vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_rs1idx_dfflr__DOT__qout_r 
                = (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                            >> 0xfU));
        }
        if ((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                             >> 0xfU)))) {
            vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                             >> 0x14U)))) {
            vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_rs2idx_dfflr__DOT__qout_r 
                = (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                            >> 0x14U));
        }
        if ((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                             >> 0x14U)))) {
            vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__reset_req_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ir_rs2idx_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ir_rs1idx_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r = 1U;
    } else {
        vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r = 0U;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__pc_newpend_r))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_r = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    if ((1U ^ ((IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_new_req)))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_new_req = (1U & (~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)));
    }
    if (((IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    }
    vlSelf->reset_flag_r = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__reset_req_r))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_r = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    vlSelf->__PVT__reset_req_set = ((~ (IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)) 
                                    & (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r));
    if ((1U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                 ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffffeU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((2U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                 ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffffdU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((4U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                 ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                             ? 0U : 4U));
    }
    if ((8U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                 ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffff7U 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x10U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                    ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffffefU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x20U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                    ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffffdfU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x40U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                    ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffffbfU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x80U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                    ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffff7fU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x100U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                     ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffeffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x200U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                     ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffdffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x400U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                     ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffbffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x800U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                     ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffff7ffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x1000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                      ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffefffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x2000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                      ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffdfffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x4000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                      ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffbfffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x8000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                      ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffff7fffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x10000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                       ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffeffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x20000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                       ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffdffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x40000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                       ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffbffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x80000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                       ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfff7ffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x100000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                        ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffefffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x200000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                        ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffdfffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x400000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                        ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffbfffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x800000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                        ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xff7fffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x1000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                         ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfeffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x2000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                         ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfdffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x4000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                         ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfbffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x8000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                         ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xf7ffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x10000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                          ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xefffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x20000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                          ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xdfffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x40000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                          ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xbfffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if (((((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
            ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0x7fffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    vlSelf->__PVT__ifu_req_valid_pre = (1U & ((~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)) 
                                              | (IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)));
    if (((IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->reset_flag_r) ^ (IData)(vlSelf->__Vtogcov__reset_flag_r))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_flag_r = vlSelf->reset_flag_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_set) ^ (IData)(vlSelf->__Vtogcov__reset_req_set))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_set = vlSelf->__PVT__reset_req_set;
    }
    if (((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid_pre))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid_pre = vlSelf->__PVT__ifu_req_valid_pre;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffffeU & vlSelf->__Vtogcov__pc_r) 
                                   | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffffdU & vlSelf->__Vtogcov__pc_r) 
                                   | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffffbU & vlSelf->__Vtogcov__pc_r) 
                                   | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffff7U & vlSelf->__Vtogcov__pc_r) 
                                   | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffffefU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffffdfU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffffbfU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffff7fU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffeffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffdffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffbffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffff7ffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffefffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x1000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffdfffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x2000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffbfffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x4000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffff7fffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x8000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffeffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x10000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffdffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x20000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffbffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x40000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfff7ffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x80000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffefffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x100000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffdfffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x200000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffbfffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x400000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xff7fffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x800000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfeffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x1000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfdffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x2000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfbffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x4000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xf7ffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x8000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xefffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x10000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xdfffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x20000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xbfffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x40000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__pc_r) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0x7fffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x80000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    vlSelf->__PVT__pc_add_op1 = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                  ? vlSymsp->TOP.pc_rtvec
                                  : vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r);
    if ((1U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (1U & vlSelf->__PVT__pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (2U & vlSelf->__PVT__pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (4U & vlSelf->__PVT__pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (8U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if (((vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    vlSelf->__PVT__pc_nxt_pre = (vlSelf->__PVT__pc_add_op1 
                                 + ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                     ? 0U : 4U));
    if ((1U & (vlSelf->__PVT__pc_nxt_pre ^ vlSelf->__Vtogcov__pc_nxt_pre))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_nxt_pre = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_nxt_pre) 
                                         | (1U & vlSelf->__PVT__pc_nxt_pre));
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__2(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__2\n"); );
    // Body
    vlSelf->__PVT__ifu_ir_o_hsked = ((IData)(vlSymsp->TOP__core.__PVT__ifu_o_ready) 
                                     & (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r));
    if (((IData)(vlSelf->__PVT__ifu_ir_o_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_o_hsked))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_o_hsked = vlSelf->__PVT__ifu_ir_o_hsked;
    }
    vlSelf->__PVT__ifu_ir_i_ready = (1U & ((~ (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r)) 
                                           | (IData)(vlSelf->__PVT__ifu_ir_o_hsked)));
    if (((IData)(vlSelf->__PVT__ifu_ir_i_ready) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_i_ready))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_i_ready = vlSelf->__PVT__ifu_ir_i_ready;
    }
    vlSelf->__PVT__ir_pc_vld_set = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & (IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r));
    vlSelf->__PVT__ifu_rsp_ready = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_set) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_set))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_set = vlSelf->__PVT__ir_pc_vld_set;
    }
    vlSelf->__PVT__ir_pc_vld_ena = ((IData)(vlSelf->__PVT__ir_pc_vld_set) 
                                    | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_pc_vld_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                          | (IData)(vlSelf->__PVT__ir_pc_vld_set)));
    vlSelf->__PVT__ifu_rsp_hsked = ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                    & (IData)(vlSelf->__PVT__ifu_rsp_ready));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_ena) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_ena))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_ena = vlSelf->__PVT__ir_pc_vld_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_nxt))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_nxt = vlSelf->__PVT__ir_pc_vld_nxt;
    }
    if (((IData)(vlSelf->__PVT__ifu_rsp_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_hsked))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_hsked = vlSelf->__PVT__ifu_rsp_hsked;
    }
    vlSelf->__PVT__ir_valid_ena = ((IData)(vlSelf->__PVT__ifu_rsp_hsked) 
                                   | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_valid_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                         | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    if (((IData)(vlSelf->__PVT__ir_valid_ena) ^ (IData)(vlSelf->__Vtogcov__ir_valid_ena))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_ena = vlSelf->__PVT__ir_valid_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_valid_nxt))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_nxt = vlSelf->__PVT__ir_valid_nxt;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__3(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__3\n"); );
    // Body
    vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__out_flag_r = 0U;
    } else if (vlSelf->__PVT__out_flag_ena) {
        vlSelf->__PVT__out_flag_r = vlSelf->__PVT__out_flag_nxt;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSelf->__PVT__out_flag_ena) {
            vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__out_flag_ena)))) {
            vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->__PVT__out_flag_r) ^ (IData)(vlSelf->__Vtogcov__out_flag_r))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_r = vlSelf->__PVT__out_flag_r;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_comb__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_comb__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Body
    vlSelf->__PVT__new_req_condi = (1U & ((~ (IData)(vlSelf->__PVT__out_flag_r)) 
                                          | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    if (((IData)(vlSelf->__PVT__new_req_condi) ^ (IData)(vlSelf->__Vtogcov__new_req_condi))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__new_req_condi = vlSelf->__PVT__new_req_condi;
    }
    vlSelf->__PVT__ifu_req_valid = ((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
                                    & (IData)(vlSelf->__PVT__new_req_condi));
    vlSelf->__PVT__ifu_req_hsked = ((IData)(vlSelf->__PVT__ifu_req_valid) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_req_hsked))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_hsked = vlSelf->__PVT__ifu_req_hsked;
    }
    vlSelf->__PVT__out_flag_ena = ((IData)(vlSelf->__PVT__ifu_req_hsked) 
                                   | (IData)(vlSelf->__PVT__ifu_rsp_hsked));
    vlSelf->__PVT__out_flag_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_rsp_hsked)) 
                                         | (IData)(vlSelf->__PVT__ifu_req_hsked)));
    vlSelf->__PVT__pc_newpend_ena = ((IData)(vlSelf->__PVT__ifu_req_hsked) 
                                     | (IData)(vlSelf->__PVT__ir_pc_vld_set));
    vlSelf->__PVT__pc_newpend_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ir_pc_vld_set)) 
                                           | (IData)(vlSelf->__PVT__ifu_req_hsked)));
    vlSelf->__PVT__reset_req_clr = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
                                    & (IData)(vlSelf->__PVT__ifu_req_hsked));
    if (((IData)(vlSelf->__PVT__out_flag_ena) ^ (IData)(vlSelf->__Vtogcov__out_flag_ena))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_ena = vlSelf->__PVT__out_flag_ena;
    }
    if (((IData)(vlSelf->__PVT__out_flag_nxt) ^ (IData)(vlSelf->__Vtogcov__out_flag_nxt))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_nxt = vlSelf->__PVT__out_flag_nxt;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_ena) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_ena))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_ena = vlSelf->__PVT__pc_newpend_ena;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_nxt) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_nxt))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_nxt = vlSelf->__PVT__pc_newpend_nxt;
    }
    if (((IData)(vlSelf->__PVT__reset_req_clr) ^ (IData)(vlSelf->__Vtogcov__reset_req_clr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_clr = vlSelf->__PVT__reset_req_clr;
    }
    vlSelf->__PVT__reset_req_ena = ((IData)(vlSelf->__PVT__reset_req_set) 
                                    | (IData)(vlSelf->__PVT__reset_req_clr));
    vlSelf->__PVT__reset_req_nxt = (1U & ((~ (IData)(vlSelf->__PVT__reset_req_clr)) 
                                          | (IData)(vlSelf->__PVT__reset_req_set)));
    if (((IData)(vlSelf->__PVT__reset_req_ena) ^ (IData)(vlSelf->__Vtogcov__reset_req_ena))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_ena = vlSelf->__PVT__reset_req_ena;
    }
    if (((IData)(vlSelf->__PVT__reset_req_nxt) ^ (IData)(vlSelf->__Vtogcov__reset_req_nxt))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_nxt = vlSelf->__PVT__reset_req_nxt;
    }
}
