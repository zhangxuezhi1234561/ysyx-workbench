// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux41_double.h for the primary calling header

#include "verilated.h"

#include "VMux41_double___024root.h"

void VMux41_double___024root___ico_sequent__TOP__0(VMux41_double___024root* vlSelf);

void VMux41_double___024root___eval_ico(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VMux41_double___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VMux41_double___024root___eval_act(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_act\n"); );
}

void VMux41_double___024root___nba_sequent__TOP__0(VMux41_double___024root* vlSelf);

void VMux41_double___024root___eval_nba(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VMux41_double___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VMux41_double___024root___eval_triggers__ico(VMux41_double___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__ico(VMux41_double___024root* vlSelf);
#endif  // VL_DEBUG
void VMux41_double___024root___eval_triggers__act(VMux41_double___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__act(VMux41_double___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__nba(VMux41_double___024root* vlSelf);
#endif  // VL_DEBUG

void VMux41_double___024root___eval(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VMux41_double___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VMux41_double___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Mux41_double.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VMux41_double___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VMux41_double___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VMux41_double___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/Mux41_double.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VMux41_double___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VMux41_double___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Mux41_double.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VMux41_double___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VMux41_double___024root___eval_debug_assertions(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->X0 & 0xfcU))) {
        Verilated::overWidthError("X0");}
    if (VL_UNLIKELY((vlSelf->X1 & 0xfcU))) {
        Verilated::overWidthError("X1");}
    if (VL_UNLIKELY((vlSelf->X2 & 0xfcU))) {
        Verilated::overWidthError("X2");}
    if (VL_UNLIKELY((vlSelf->X3 & 0xfcU))) {
        Verilated::overWidthError("X3");}
    if (VL_UNLIKELY((vlSelf->Y & 0xfcU))) {
        Verilated::overWidthError("Y");}
}
#endif  // VL_DEBUG
