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
    vlSelf->__PVT__inst_exu__DOT__inst_exu_wbck__DOT__wbck_sel_alu 
        = ((~ (IData)(vlSelf->__PVT__inst_exu__DOT__longp_wbck_o_valid)) 
           & (IData)(vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_valid));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_wbck__DOT__wbck_sel_alu) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_wbck__DOT____Vtogcov__wbck_sel_alu))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_wbck__DOT____Vtogcov__wbck_sel_alu 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_wbck__DOT__wbck_sel_alu;
    }
    if (vlSelf->__PVT__inst_exu__DOT__inst_exu_wbck__DOT__wbck_sel_alu) {
        vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena = vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_valid;
        vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx 
            = (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                        >> 7U));
    } else {
        vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena = vlSelf->__PVT__inst_exu__DOT__longp_wbck_o_valid;
        vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx 
            = (0x1fU & (IData)(vlSelf->__PVT__inst_exu__DOT__oitf_ret_rdidx));
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_ena))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_ena 
            = vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena;
    }
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx) 
               ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx 
            = ((0x1eU & (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)) 
               | (1U & (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx) 
               ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx 
            = ((0x1dU & (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)) 
               | (2U & (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx) 
               ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx 
            = ((0x1bU & (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)) 
               | (4U & (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx) 
               ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx 
            = ((0x17U & (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)) 
               | (8U & (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx) 
                  ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx 
            = ((0xfU & (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_rdidx)) 
               | (0x10U & (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    }
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (1U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (2U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (3U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (4U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (5U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (6U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (7U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (8U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (9U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xaU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xbU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xcU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xdU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xeU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xfU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x10U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x11U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x12U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x13U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x14U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x15U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x16U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x17U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x18U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x19U == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x1aU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x1bU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x1cU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x1dU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x1eU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x1fU == (IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_rdidx)));
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
        = (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
            << 0x1fU) | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                          << 0x1eU) | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1) 
                                                                                << 1U)))))))))))))))))))))))))))))));
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
               ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
               ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
               ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
               ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                  ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                  ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                  ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                  ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                   ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                   ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                   ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                   ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                    ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                    ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                    ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                    ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                     ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                     ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                     ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                     ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                      ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                      ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                      ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                      ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                       ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                       ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                       ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                       ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                        ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                        ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                        ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
          ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__5(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__5\n"); );
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
    vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat = ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_wbck__DOT__wbck_sel_alu)
                                                   ? vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat
                                                   : vlSelf->__PVT__inst_exu__DOT__longp_wbck_o_wdat);
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
          ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
}

VL_INLINE_OPT void Vcore_core___nba_comb__TOP__core__2(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__2\n"); );
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
