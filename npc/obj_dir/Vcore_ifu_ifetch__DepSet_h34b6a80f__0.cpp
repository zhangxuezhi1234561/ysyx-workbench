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
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_flag_r = vlSelf->reset_flag_r;
    }
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x0))) {
        vlSymsp->__Vcoverage[1600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x0 
            = (0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                               >> 0xfU)));
    }
    if (((1U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x1))) {
        vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x1 
            = (1U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                               >> 0xfU)));
    }
    vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn 
        = ((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                            >> 0xfU))) & (1U != (0x1fU 
                                                 & (vlSymsp->TOP.ifu_rsp_instr 
                                                    >> 0xfU))));
    vlSelf->__PVT__pc_add_op1 = ((IData)(vlSelf->__PVT__bjp_final_dfflr__DOT__qout_r)
                                  ? vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r
                                  : ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                      ? vlSymsp->TOP.pc_rtvec
                                      : vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1xn))) {
        vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1xn 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn;
    }
    if ((1U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (1U & vlSelf->__PVT__pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (2U & vlSelf->__PVT__pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (4U & vlSelf->__PVT__pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (8U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if (((vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    vlSelf->__PVT__pc_nxt_pre = (vlSelf->__PVT__pc_add_op1 
                                 + vlSelf->__PVT__pc_add_op2);
    if ((1U & (vlSelf->__PVT__pc_nxt_pre ^ vlSelf->__Vtogcov__pc_nxt_pre))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_nxt_pre = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_nxt_pre) 
                                         | (1U & vlSelf->__PVT__pc_nxt_pre));
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1\n"); );
    // Init
    CData/*0:0*/ inst_ifu_litebpu__DOT____VdfgTmp_he0f13d46__0;
    inst_ifu_litebpu__DOT____VdfgTmp_he0f13d46__0 = 0;
    // Body
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_jal))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_jal = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_jalr))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_jalr = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr;
    }
    vlSelf->__PVT__prdt_taken = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal) 
                                 | (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr));
    inst_ifu_litebpu__DOT____VdfgTmp_he0f13d46__0 = 
        ((IData)(vlSymsp->TOP.ifu_rsp_valid) & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr));
    vlSelf->__PVT__prdt_pc_add_op1 = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal)
                                       ? (0xfffffffeU 
                                          & vlSelf->__PVT__pc_nxt_pre)
                                       : (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                           & (0U == 
                                              (0xf8000U 
                                               & vlSymsp->TOP.ifu_rsp_instr)))
                                           ? 0U : (
                                                   ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                                    & (0x8000U 
                                                       == 
                                                       (0xf8000U 
                                                        & vlSymsp->TOP.ifu_rsp_instr)))
                                                    ? vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r
                                                    : vlSymsp->TOP__core.__PVT__rf2ifu_rs1)));
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_rs1en))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs1en = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_bjp))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp;
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (1U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (2U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (4U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (8U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x100U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x200U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x400U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x800U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x1000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x2000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x4000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x8000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x100000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x200000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x400000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x800000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x1000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x2000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x4000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x8000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
          ^ vlSelf->__Vtogcov__minidec_bjp_imm) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0x7fffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_rs2en))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs2en = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en;
    }
    if (((IData)(vlSelf->__PVT__prdt_taken) ^ (IData)(vlSelf->__Vtogcov__prdt_taken))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_taken = vlSelf->__PVT__prdt_taken;
    }
    vlSelf->__PVT__bjp_req = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp) 
                              & (IData)(vlSelf->__PVT__prdt_taken));
    vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1x1_dep 
        = ((IData)(inst_ifu_litebpu__DOT____VdfgTmp_he0f13d46__0) 
           & (0x8000U == (0xf8000U & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep 
        = ((IData)(inst_ifu_litebpu__DOT____VdfgTmp_he0f13d46__0) 
           & (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn));
    if ((1U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (1U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (2U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (4U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (8U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0x7fffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((IData)(vlSelf->__PVT__bjp_req) ^ (IData)(vlSelf->__Vtogcov__bjp_req))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_req = vlSelf->__PVT__bjp_req;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1x1_dep) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__jalr_rs1x1_dep))) {
        vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__jalr_rs1x1_dep 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1x1_dep;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__jalr_rs1xn_dep))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__jalr_rs1xn_dep 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep;
    }
    vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr 
        = ((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep) 
           & (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__jalr_rs1xn_dep_ir_clr))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__jalr_rs1xn_dep_ir_clr 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr;
    }
    vlSelf->__PVT__bpu2rf_rs1_ena = ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                                     & ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                        & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                           & ((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn) 
                                              & ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep)) 
                                                 | (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr))))));
    if (((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) ^ (IData)(vlSelf->__Vtogcov__bpu2rf_rs1_ena))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bpu2rf_rs1_ena = vlSelf->__PVT__bpu2rf_rs1_ena;
    }
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena 
        = ((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) | (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt 
        = (1U & ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                 | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)));
    vlSelf->__PVT__bpu_wait = ((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1x1_dep) 
                               | ((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep) 
                                  | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)));
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt;
    }
    if (((IData)(vlSelf->__PVT__bpu_wait) ^ (IData)(vlSelf->__Vtogcov__bpu_wait))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bpu_wait = vlSelf->__PVT__bpu_wait;
    }
    vlSelf->__PVT__ifu_new_req = (1U & ((~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)) 
                                        & (~ (IData)(vlSelf->__PVT__bpu_wait))));
    vlSelf->__PVT__ifu_rsp_ready = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & ((~ (IData)(vlSelf->__PVT__bpu_wait)) 
                                       & (IData)(vlSymsp->TOP.ifu_req_ready)));
    if (((IData)(vlSelf->__PVT__ifu_new_req) ^ (IData)(vlSelf->__Vtogcov__ifu_new_req))) {
        vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_new_req = vlSelf->__PVT__ifu_new_req;
    }
    vlSelf->__PVT__ifu_req_valid_pre = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
                                        | (IData)(vlSelf->__PVT__ifu_new_req));
    vlSelf->__PVT__ifu_rsp_hsked = ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                    & (IData)(vlSelf->__PVT__ifu_rsp_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid_pre))) {
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid_pre = vlSelf->__PVT__ifu_req_valid_pre;
    }
    if (((IData)(vlSelf->__PVT__ifu_rsp_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_hsked))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_hsked = vlSelf->__PVT__ifu_rsp_hsked;
    }
    vlSelf->__PVT__ir_valid_ena = ((IData)(vlSelf->__PVT__ifu_rsp_hsked) 
                                   | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_valid_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                         | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    vlSelf->__PVT__ir_rs2idx_ena = ((IData)(vlSelf->__PVT__ifu_rsp_hsked) 
                                    & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en));
    vlSelf->__PVT__ir_rs1idx_ena = (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en) 
                                     & (IData)(vlSelf->__PVT__ifu_rsp_hsked)) 
                                    | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena));
    vlSelf->__PVT__new_req_condi = (1U & ((~ (IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r)) 
                                          | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    if (((IData)(vlSelf->__PVT__ir_valid_ena) ^ (IData)(vlSelf->__Vtogcov__ir_valid_ena))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_ena = vlSelf->__PVT__ir_valid_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_valid_nxt))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_nxt = vlSelf->__PVT__ir_valid_nxt;
    }
    if (((IData)(vlSelf->__PVT__ir_rs2idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs2idx_ena))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs2idx_ena = vlSelf->__PVT__ir_rs2idx_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_rs1idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs1idx_ena))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs1idx_ena = vlSelf->__PVT__ir_rs1idx_ena;
    }
    if (((IData)(vlSelf->__PVT__new_req_condi) ^ (IData)(vlSelf->__Vtogcov__new_req_condi))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__new_req_condi = vlSelf->__PVT__new_req_condi;
    }
    vlSelf->__PVT__ifu_req_valid = ((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
                                    & (IData)(vlSelf->__PVT__new_req_condi));
    vlSelf->__PVT__ifu_req_hsked = ((IData)(vlSelf->__PVT__ifu_req_valid) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_req_hsked))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_ena = vlSelf->__PVT__out_flag_ena;
    }
    if (((IData)(vlSelf->__PVT__out_flag_nxt) ^ (IData)(vlSelf->__Vtogcov__out_flag_nxt))) {
        vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_nxt = vlSelf->__PVT__out_flag_nxt;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_ena) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_ena))) {
        vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_ena = vlSelf->__PVT__pc_newpend_ena;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_nxt) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_nxt))) {
        vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_nxt = vlSelf->__PVT__pc_newpend_nxt;
    }
    if (((IData)(vlSelf->__PVT__reset_req_clr) ^ (IData)(vlSelf->__Vtogcov__reset_req_clr))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_clr = vlSelf->__PVT__reset_req_clr;
    }
    vlSelf->__PVT__reset_req_ena = ((IData)(vlSelf->__PVT__reset_req_set) 
                                    | (IData)(vlSelf->__PVT__reset_req_clr));
    vlSelf->__PVT__reset_req_nxt = (1U & ((~ (IData)(vlSelf->__PVT__reset_req_clr)) 
                                          | (IData)(vlSelf->__PVT__reset_req_set)));
    if (((IData)(vlSelf->__PVT__reset_req_ena) ^ (IData)(vlSelf->__Vtogcov__reset_req_ena))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_ena = vlSelf->__PVT__reset_req_ena;
    }
    if (((IData)(vlSelf->__PVT__reset_req_nxt) ^ (IData)(vlSelf->__Vtogcov__reset_req_nxt))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_nxt = vlSelf->__PVT__reset_req_nxt;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1570].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1575].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1593].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1623].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1564].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1596].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->__PVT__reset_req_ena) {
            vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__reset_req_dfflr__DOT__qout_r 
                = vlSelf->__PVT__reset_req_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__reset_req_ena)))) {
            vlSymsp->__Vcoverage[1568].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_valid_ena) {
            vlSymsp->__Vcoverage[1572].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r 
                = vlSelf->__PVT__ir_valid_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_valid_ena)))) {
            vlSymsp->__Vcoverage[1573].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_pc_vld_ena) {
            vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r 
                = vlSelf->__PVT__ir_pc_vld_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_pc_vld_ena)))) {
            vlSymsp->__Vcoverage[1578].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_rs2idx_ena) {
            vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_rs2idx_dfflr__DOT__qout_r 
                = (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                            >> 0x14U));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_rs2idx_ena)))) {
            vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena) {
            vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r 
                = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena)))) {
            vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__out_flag_ena) {
            vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__out_flag_dfflr__DOT__qout_r 
                = vlSelf->__PVT__out_flag_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__out_flag_ena)))) {
            vlSymsp->__Vcoverage[1621].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__pc_newpend_ena) {
            vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r 
                = vlSelf->__PVT__pc_newpend_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__pc_newpend_ena)))) {
            vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_rs1idx_ena) {
            vlSymsp->__Vcoverage[1586].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_rs1idx_dfflr__DOT__qout_r 
                = (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                            >> 0xfU));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_rs1idx_ena)))) {
            vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ifu_req_hsked) {
            vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__bjp_final_dfflr__DOT__qout_r 
                = vlSelf->__PVT__bjp_req;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ifu_req_hsked)))) {
            vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ifu_rsp_hsked) {
            vlSymsp->__Vcoverage[1582].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r 
                = vlSelf->__PVT__prdt_taken;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ifu_rsp_hsked)))) {
            vlSymsp->__Vcoverage[1583].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__out_flag_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r = 0U;
        vlSelf->__PVT__bjp_final_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__reset_req_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ir_rs2idx_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ir_rs1idx_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1569].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1574].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1579].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1584].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1588].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1592].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1598].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1622].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r = 1U;
    } else {
        vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r = 0U;
    }
    vlSelf->__PVT__inst_ifu_minidec__DOT__dec_bjp_test_dfflr__DOT__qout_r 
        = ((IData)(vlSymsp->TOP.rst) & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__pc_newpend_r))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_r = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__out_flag_r))) {
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_r = vlSelf->__PVT__out_flag_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->out_flag_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->out_flag_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__out_flag_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    }
    vlSelf->reset_flag_r = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_r))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_r 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_minidec__DOT__dec_bjp_test_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_minidec__DOT____Vtogcov__minidec_dec_bjp_test))) {
        vlSymsp->__Vcoverage[1594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_minidec__DOT____Vtogcov__minidec_dec_bjp_test 
            = vlSelf->__PVT__inst_ifu_minidec__DOT__dec_bjp_test_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_minidec__DOT__dec_bjp_test_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_minidec__DOT__dec_bjp_test_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_minidec__DOT__dec_bjp_test_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__inst_ifu_minidec__DOT__dec_bjp_test_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__bjp_final_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__bjp_final))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_final = vlSelf->__PVT__bjp_final_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__bjp_final_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->bjp_final_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->bjp_final_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__bjp_final_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__reset_req_r))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_r = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    vlSelf->__PVT__reset_req_set = ((~ (IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)) 
                                    & (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r));
    if (((IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ifu_prdt_taken_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ifu_prdt_taken_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->reset_flag_r) ^ (IData)(vlSelf->__Vtogcov__reset_flag_r))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_flag_r = vlSelf->reset_flag_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_set) ^ (IData)(vlSelf->__Vtogcov__reset_req_set))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_set = vlSelf->__PVT__reset_req_set;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x100U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x200U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x400U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x800U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x1000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x2000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x4000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x8000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x10000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x20000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x40000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x80000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x100000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x200000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x400000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x800000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x1000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x2000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x4000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x8000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x10000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x20000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__pc_r_final))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x40000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__pc_r_final) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r_final = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_r_final) 
                                         | (0x80000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_r_final_dfflr.__PVT__qout_r));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffffffeU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffffffdU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffffffbU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffffff7U & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffffffefU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffffffdfU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffffffbfU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffffff7fU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffffeffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffffdffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffffbffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffff7ffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffffefffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x1000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffffdfffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x2000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffffbfffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x4000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffff7fffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x8000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffeffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x10000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffdffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x20000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfffbffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x40000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfff7ffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x80000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffefffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x100000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffdfffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x200000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xffbfffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x400000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xff7fffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x800000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfeffffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x1000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfdffffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x2000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xfbffffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x4000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xf7ffffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x8000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xefffffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x10000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xdfffffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x20000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0xbfffffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x40000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1_final = 
            ((0x7fffffffU & vlSelf->__Vtogcov__prdt_pc_add_op1_final) 
             | (0x80000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffffffeU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffffffdU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffffffbU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffffff7U & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffffffefU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffffffdfU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffffffbfU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffffff7fU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffffeffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffffdffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffffbffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffff7ffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffffefffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x1000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffffdfffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x2000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffffbfffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x4000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffff7fffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x8000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffeffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x10000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffdffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x20000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfffbffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x40000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfff7ffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x80000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffefffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x100000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffdfffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x200000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xffbfffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x400000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xff7fffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x800000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfeffffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x1000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfdffffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x2000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xfbffffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x4000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xf7ffffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x8000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xefffffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x10000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xdfffffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x20000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0xbfffffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x40000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op2_final = 
            ((0x7fffffffU & vlSelf->__Vtogcov__prdt_pc_add_op2_final) 
             | (0x80000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r));
    }
    if (vlSelf->__PVT__bjp_final_dfflr__DOT__qout_r) {
        vlSelf->__PVT__pc_add_op2 = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_dfflr.__PVT__qout_r;
        vlSelf->__PVT__pc_add_op1 = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_dfflr.__PVT__qout_r;
    } else if (vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) {
        vlSelf->__PVT__pc_add_op2 = 0U;
        vlSelf->__PVT__pc_add_op1 = vlSymsp->TOP.pc_rtvec;
    } else {
        vlSelf->__PVT__pc_add_op2 = 4U;
        vlSelf->__PVT__pc_add_op1 = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r;
    }
    if ((1U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (1U & vlSelf->__PVT__pc_add_op2));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (2U & vlSelf->__PVT__pc_add_op2));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (4U & vlSelf->__PVT__pc_add_op2));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (8U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if (((vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((1U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (1U & vlSelf->__PVT__pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (2U & vlSelf->__PVT__pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (4U & vlSelf->__PVT__pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (8U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if (((vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    vlSelf->__PVT__pc_nxt_pre = (vlSelf->__PVT__pc_add_op1 
                                 + vlSelf->__PVT__pc_add_op2);
    if ((1U & (vlSelf->__PVT__pc_nxt_pre ^ vlSelf->__Vtogcov__pc_nxt_pre))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_o_hsked = vlSelf->__PVT__ifu_ir_o_hsked;
    }
    vlSelf->__PVT__ifu_ir_i_ready = (1U & ((~ (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r)) 
                                           | (IData)(vlSelf->__PVT__ifu_ir_o_hsked)));
    if (((IData)(vlSelf->__PVT__ifu_ir_i_ready) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_i_ready))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_i_ready = vlSelf->__PVT__ifu_ir_i_ready;
    }
    vlSelf->__PVT__ir_pc_vld_set = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & (IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_set) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_set))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_set = vlSelf->__PVT__ir_pc_vld_set;
    }
    vlSelf->__PVT__ir_pc_vld_ena = ((IData)(vlSelf->__PVT__ir_pc_vld_set) 
                                    | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_pc_vld_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                          | (IData)(vlSelf->__PVT__ir_pc_vld_set)));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_ena) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_ena))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_ena = vlSelf->__PVT__ir_pc_vld_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_nxt))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_nxt = vlSelf->__PVT__ir_pc_vld_nxt;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__3(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__3\n"); );
    // Body
    vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr 
        = ((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep) 
           & (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__jalr_rs1xn_dep_ir_clr))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__jalr_rs1xn_dep_ir_clr 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr;
    }
    vlSelf->__PVT__bpu2rf_rs1_ena = ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                                     & ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                        & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                           & ((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn) 
                                              & ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep)) 
                                                 | (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep_ir_clr))))));
    if (((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) ^ (IData)(vlSelf->__Vtogcov__bpu2rf_rs1_ena))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bpu2rf_rs1_ena = vlSelf->__PVT__bpu2rf_rs1_ena;
    }
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena 
        = ((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) | (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt 
        = (1U & ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                 | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)));
    vlSelf->__PVT__bpu_wait = ((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1x1_dep) 
                               | ((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__jalr_rs1xn_dep) 
                                  | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)));
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt;
    }
    if (((IData)(vlSelf->__PVT__bpu_wait) ^ (IData)(vlSelf->__Vtogcov__bpu_wait))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bpu_wait = vlSelf->__PVT__bpu_wait;
    }
    vlSelf->__PVT__ifu_new_req = (1U & ((~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)) 
                                        & (~ (IData)(vlSelf->__PVT__bpu_wait))));
    vlSelf->__PVT__ifu_rsp_ready = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & ((~ (IData)(vlSelf->__PVT__bpu_wait)) 
                                       & (IData)(vlSymsp->TOP.ifu_req_ready)));
    if (((IData)(vlSelf->__PVT__ifu_new_req) ^ (IData)(vlSelf->__Vtogcov__ifu_new_req))) {
        vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_new_req = vlSelf->__PVT__ifu_new_req;
    }
    vlSelf->__PVT__ifu_req_valid_pre = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
                                        | (IData)(vlSelf->__PVT__ifu_new_req));
    vlSelf->__PVT__ifu_rsp_hsked = ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                    & (IData)(vlSelf->__PVT__ifu_rsp_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid_pre))) {
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid_pre = vlSelf->__PVT__ifu_req_valid_pre;
    }
    if (((IData)(vlSelf->__PVT__ifu_rsp_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_hsked))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_hsked = vlSelf->__PVT__ifu_rsp_hsked;
    }
    vlSelf->__PVT__ir_valid_ena = ((IData)(vlSelf->__PVT__ifu_rsp_hsked) 
                                   | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_valid_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                         | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    vlSelf->__PVT__ir_rs2idx_ena = ((IData)(vlSelf->__PVT__ifu_rsp_hsked) 
                                    & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en));
    vlSelf->__PVT__ir_rs1idx_ena = (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en) 
                                     & (IData)(vlSelf->__PVT__ifu_rsp_hsked)) 
                                    | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena));
    vlSelf->__PVT__new_req_condi = (1U & ((~ (IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r)) 
                                          | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    if (((IData)(vlSelf->__PVT__ir_valid_ena) ^ (IData)(vlSelf->__Vtogcov__ir_valid_ena))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_ena = vlSelf->__PVT__ir_valid_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_valid_nxt))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_nxt = vlSelf->__PVT__ir_valid_nxt;
    }
    if (((IData)(vlSelf->__PVT__ir_rs2idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs2idx_ena))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs2idx_ena = vlSelf->__PVT__ir_rs2idx_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_rs1idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs1idx_ena))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs1idx_ena = vlSelf->__PVT__ir_rs1idx_ena;
    }
    if (((IData)(vlSelf->__PVT__new_req_condi) ^ (IData)(vlSelf->__Vtogcov__new_req_condi))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__new_req_condi = vlSelf->__PVT__new_req_condi;
    }
    vlSelf->__PVT__ifu_req_valid = ((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
                                    & (IData)(vlSelf->__PVT__new_req_condi));
    vlSelf->__PVT__ifu_req_hsked = ((IData)(vlSelf->__PVT__ifu_req_valid) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_req_hsked))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_ena = vlSelf->__PVT__out_flag_ena;
    }
    if (((IData)(vlSelf->__PVT__out_flag_nxt) ^ (IData)(vlSelf->__Vtogcov__out_flag_nxt))) {
        vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_nxt = vlSelf->__PVT__out_flag_nxt;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_ena) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_ena))) {
        vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_ena = vlSelf->__PVT__pc_newpend_ena;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_nxt) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_nxt))) {
        vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_nxt = vlSelf->__PVT__pc_newpend_nxt;
    }
    if (((IData)(vlSelf->__PVT__reset_req_clr) ^ (IData)(vlSelf->__Vtogcov__reset_req_clr))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_clr = vlSelf->__PVT__reset_req_clr;
    }
    vlSelf->__PVT__reset_req_ena = ((IData)(vlSelf->__PVT__reset_req_set) 
                                    | (IData)(vlSelf->__PVT__reset_req_clr));
    vlSelf->__PVT__reset_req_nxt = (1U & ((~ (IData)(vlSelf->__PVT__reset_req_clr)) 
                                          | (IData)(vlSelf->__PVT__reset_req_set)));
    if (((IData)(vlSelf->__PVT__reset_req_ena) ^ (IData)(vlSelf->__Vtogcov__reset_req_ena))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_ena = vlSelf->__PVT__reset_req_ena;
    }
    if (((IData)(vlSelf->__PVT__reset_req_nxt) ^ (IData)(vlSelf->__Vtogcov__reset_req_nxt))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_nxt = vlSelf->__PVT__reset_req_nxt;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_comb__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_comb__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Body
    vlSelf->__PVT__prdt_pc_add_op1 = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal)
                                       ? (0xfffffffeU 
                                          & vlSelf->__PVT__pc_nxt_pre)
                                       : (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                           & (0U == 
                                              (0xf8000U 
                                               & vlSymsp->TOP.ifu_rsp_instr)))
                                           ? 0U : (
                                                   ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                                    & (0x8000U 
                                                       == 
                                                       (0xf8000U 
                                                        & vlSymsp->TOP.ifu_rsp_instr)))
                                                    ? vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r
                                                    : vlSymsp->TOP__core.__PVT__rf2ifu_rs1)));
    if ((1U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (1U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (2U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (4U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (8U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0x7fffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
}
