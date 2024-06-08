// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_MuxKey__N4_K2_D20.h"
#include "Vcore__Syms.h"

VL_INLINE_OPT void Vcore_MuxKey__N4_K2_D20___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_inst__0(Vcore_MuxKey__N4_K2_D20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_MuxKey__N4_K2_D20___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_inst__0\n"); );
    // Body
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                   == vlSelf->__PVT__i0__DOT__key_list
                                   [0U]);
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [1U]));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [2U]));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [3U]));
    vlSelf->__PVT__i0__DOT__lut_out = ((- (IData)(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                   == 
                                                   vlSelf->__PVT__i0__DOT__key_list
                                                   [0U]))) 
                                       & vlSelf->__PVT__i0__DOT__data_list
                                       [0U]);
    vlSelf->__PVT__i0__DOT__lut_out = (vlSelf->__PVT__i0__DOT__lut_out 
                                       | ((- (IData)(
                                                     ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [1U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [1U]));
    vlSelf->__PVT__i0__DOT__lut_out = (vlSelf->__PVT__i0__DOT__lut_out 
                                       | ((- (IData)(
                                                     ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [2U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [2U]));
    vlSelf->__PVT__i0__DOT__lut_out = (vlSelf->__PVT__i0__DOT__lut_out 
                                       | ((- (IData)(
                                                     ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [3U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [3U]));
    vlSelf->__PVT__out = vlSelf->__PVT__i0__DOT__lut_out;
    if (((IData)(vlSelf->__PVT__i0__DOT__hit) ^ (IData)(vlSelf->i0__DOT____Vtogcov__hit))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__hit = vlSelf->__PVT__i0__DOT__hit;
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffffeU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (1U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffffdU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (2U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffffbU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (4U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffff7U 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (8U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffffefU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x10U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffffdfU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x20U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffffbfU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x40U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffff7fU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x80U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffeffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x100U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffdffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x200U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffbffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x400U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffff7ffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x800U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffefffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x1000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffdfffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x2000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffbfffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x4000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffff7fffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x8000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffeffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x10000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffdffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x20000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffbffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x40000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfff7ffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x80000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffefffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x100000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffdfffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x200000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffbfffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x400000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xff7fffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x800000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfeffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x1000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfdffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x2000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfbffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x4000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xf7ffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x8000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                        ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xefffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x10000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                        ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xdfffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x20000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                        ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xbfffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x40000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if (((vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0x7fffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x80000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
}
