// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux41_double.h for the primary calling header

#include "verilated.h"

#include "VMux41_double__Syms.h"
#include "VMux41_double___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__ico(VMux41_double___024root* vlSelf);
#endif  // VL_DEBUG

void VMux41_double___024root___eval_triggers__ico(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMux41_double___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VMux41_double___024root___ico_sequent__TOP__0(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->X0) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X0)))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__X0 = 
            ((2U & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X0)) 
             | (1U & (IData)(vlSelf->X0)));
    }
    if ((2U & ((IData)(vlSelf->X0) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X0)))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__X0 = 
            ((1U & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X0)) 
             | (2U & (IData)(vlSelf->X0)));
    }
    if ((1U & ((IData)(vlSelf->X1) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X1)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__X1 = 
            ((2U & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X1)) 
             | (1U & (IData)(vlSelf->X1)));
    }
    if ((2U & ((IData)(vlSelf->X1) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X1)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__X1 = 
            ((1U & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X1)) 
             | (2U & (IData)(vlSelf->X1)));
    }
    if ((1U & ((IData)(vlSelf->X2) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X2)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__X2 = 
            ((2U & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X2)) 
             | (1U & (IData)(vlSelf->X2)));
    }
    if ((2U & ((IData)(vlSelf->X2) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X2)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__X2 = 
            ((1U & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X2)) 
             | (2U & (IData)(vlSelf->X2)));
    }
    if ((1U & ((IData)(vlSelf->X3) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X3)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__X3 = 
            ((2U & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X3)) 
             | (1U & (IData)(vlSelf->X3)));
    }
    if ((2U & ((IData)(vlSelf->X3) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X3)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__X3 = 
            ((1U & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__X3)) 
             | (2U & (IData)(vlSelf->X3)));
    }
    if ((1U & ((IData)(vlSelf->Y) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__Y)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__Y = (
                                                   (2U 
                                                    & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__Y)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->Y)));
    }
    if ((2U & ((IData)(vlSelf->Y) ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__Y)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__Y = (
                                                   (1U 
                                                    & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__Y)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->Y)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__act(VMux41_double___024root* vlSelf);
#endif  // VL_DEBUG

void VMux41_double___024root___eval_triggers__act(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((((((IData)(vlSelf->X0) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__X0)) 
                                         | ((IData)(vlSelf->X1) 
                                            != (IData)(vlSelf->__Vtrigrprev__TOP__X1))) 
                                        | ((IData)(vlSelf->X2) 
                                           != (IData)(vlSelf->__Vtrigrprev__TOP__X2))) 
                                       | ((IData)(vlSelf->X3) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__X3))) 
                                      | ((IData)(vlSelf->Y) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__Y)));
    vlSelf->__Vtrigrprev__TOP__X0 = vlSelf->X0;
    vlSelf->__Vtrigrprev__TOP__X1 = vlSelf->X1;
    vlSelf->__Vtrigrprev__TOP__X2 = vlSelf->X2;
    vlSelf->__Vtrigrprev__TOP__X3 = vlSelf->X3;
    vlSelf->__Vtrigrprev__TOP__Y = vlSelf->Y;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMux41_double___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VMux41_double___024root___nba_sequent__TOP__0(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
    if ((0U == (IData)(vlSelf->Y))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT__F = vlSelf->X0;
    } else {
        vlSelf->Mux41_double__DOT__F = ((1U == (IData)(vlSelf->Y))
                                         ? (IData)(vlSelf->X1)
                                         : ((2U == (IData)(vlSelf->Y))
                                             ? (IData)(vlSelf->X2)
                                             : ((3U 
                                                 == (IData)(vlSelf->Y))
                                                 ? (IData)(vlSelf->X3)
                                                 : 0U)));
    }
    if ((0U != (IData)(vlSelf->Y))) {
        if ((1U != (IData)(vlSelf->Y))) {
            if ((2U != (IData)(vlSelf->Y))) {
                if ((3U != (IData)(vlSelf->Y))) {
                    vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
                }
                if ((3U == (IData)(vlSelf->Y))) {
                    vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U == (IData)(vlSelf->Y))) {
                vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->Y))) {
            vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->Mux41_double__DOT__F) 
               ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__F)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__F = (
                                                   (2U 
                                                    & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__F)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->Mux41_double__DOT__F)));
    }
    if ((2U & ((IData)(vlSelf->Mux41_double__DOT__F) 
               ^ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__F)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__F = (
                                                   (1U 
                                                    & (IData)(vlSelf->Mux41_double__DOT____Vtogcov__F)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->Mux41_double__DOT__F)));
    }
}
