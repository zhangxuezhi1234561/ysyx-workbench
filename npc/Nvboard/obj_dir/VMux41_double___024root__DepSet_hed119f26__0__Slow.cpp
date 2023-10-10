// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux41_double.h for the primary calling header

#include "verilated.h"

#include "VMux41_double___024root.h"

VL_ATTR_COLD void VMux41_double___024root___eval_static(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_static\n"); );
}

VL_ATTR_COLD void VMux41_double___024root___eval_initial__TOP(VMux41_double___024root* vlSelf);

VL_ATTR_COLD void VMux41_double___024root___eval_initial(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_initial\n"); );
    // Body
    VMux41_double___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__X0 = vlSelf->X0;
    vlSelf->__Vtrigrprev__TOP__X1 = vlSelf->X1;
    vlSelf->__Vtrigrprev__TOP__X2 = vlSelf->X2;
    vlSelf->__Vtrigrprev__TOP__X3 = vlSelf->X3;
    vlSelf->__Vtrigrprev__TOP__Y = vlSelf->Y;
}

VL_ATTR_COLD void VMux41_double___024root___eval_final(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_final\n"); );
}

VL_ATTR_COLD void VMux41_double___024root___eval_triggers__stl(VMux41_double___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__stl(VMux41_double___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___eval_stl(VMux41_double___024root* vlSelf);

VL_ATTR_COLD void VMux41_double___024root___eval_settle(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VMux41_double___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VMux41_double___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Mux41_double.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VMux41_double___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__stl(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMux41_double___024root___stl_sequent__TOP__0(VMux41_double___024root* vlSelf);

VL_ATTR_COLD void VMux41_double___024root___eval_stl(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VMux41_double___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__ico(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__act(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] X0 or [changed] X1 or [changed] X2 or [changed] X3 or [changed] Y)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__nba(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] X0 or [changed] X1 or [changed] X2 or [changed] X3 or [changed] Y)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMux41_double___024root___ctor_var_reset(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->X0 = VL_RAND_RESET_I(2);
    vlSelf->X1 = VL_RAND_RESET_I(2);
    vlSelf->X2 = VL_RAND_RESET_I(2);
    vlSelf->X3 = VL_RAND_RESET_I(2);
    vlSelf->Y = VL_RAND_RESET_I(2);
    vlSelf->F_Wire = VL_RAND_RESET_I(2);
    vlSelf->Mux41_double__DOT__F = VL_RAND_RESET_I(2);
    vlSelf->Mux41_double__DOT____Vtogcov__X0 = VL_RAND_RESET_I(2);
    vlSelf->Mux41_double__DOT____Vtogcov__X1 = VL_RAND_RESET_I(2);
    vlSelf->Mux41_double__DOT____Vtogcov__X2 = VL_RAND_RESET_I(2);
    vlSelf->Mux41_double__DOT____Vtogcov__X3 = VL_RAND_RESET_I(2);
    vlSelf->Mux41_double__DOT____Vtogcov__Y = VL_RAND_RESET_I(2);
    vlSelf->Mux41_double__DOT____Vtogcov__F_Wire = VL_RAND_RESET_I(2);
    vlSelf->Mux41_double__DOT____Vtogcov__F = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigrprev__TOP__X0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigrprev__TOP__X1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigrprev__TOP__X2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigrprev__TOP__X3 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigrprev__TOP__Y = VL_RAND_RESET_I(2);
    vlSelf->__VactDidInit = 0;
}
