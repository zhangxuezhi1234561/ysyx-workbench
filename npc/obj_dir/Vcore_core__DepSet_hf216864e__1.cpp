// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_core.h"

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__4(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__4\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_ready))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_ready = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid;
    }
}

VL_INLINE_OPT void Vcore_core___nba_comb__TOP__core__1(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__1\n"); );
    // Body
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x100U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x200U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x400U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x800U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x1000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x2000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x4000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x8000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x100000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x200000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x400000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x800000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x1000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x2000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x4000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x8000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
          ^ vlSelf->__Vtogcov__ifu_req_pc) >> 0x1fU)) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
}
