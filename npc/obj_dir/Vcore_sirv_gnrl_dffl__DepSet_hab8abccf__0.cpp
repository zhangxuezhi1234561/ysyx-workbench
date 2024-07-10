// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_sirv_gnrl_dffl.h"

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__qout_r = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1)))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
         ^ (IData)(vlSelf->__Vtogcov__lden))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lden = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1;
    }
}
