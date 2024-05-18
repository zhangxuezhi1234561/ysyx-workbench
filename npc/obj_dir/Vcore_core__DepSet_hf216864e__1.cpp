// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_core.h"

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__5(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__5\n"); );
    // Body
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x80U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x100U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x180U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x200U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x280U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x300U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x380U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x400U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x480U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x500U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x580U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x600U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x680U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x700U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x780U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x800U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x880U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x900U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0x980U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xa00U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xa80U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xb00U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xb80U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xc00U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xc80U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xd00U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xd80U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xe00U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xe80U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xf00U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber1 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
           & (0xf80U == (0xf80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
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
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
               ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
               ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
               ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                  ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                  ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                  ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                  ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                   ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                   ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                   ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                   ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                    ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                    ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                    ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                    ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                     ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                     ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                     ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                     ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                      ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                      ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                      ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                      ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                       ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                       ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                       ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                       ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                        ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                        ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
                        ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen 
          ^ vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_RegisterFile__DOT____Vtogcov__rf_wen) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_wen));
    }
}
