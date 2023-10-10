// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux41_double.h for the primary calling header

#include "verilated.h"

#include "VMux41_double__Syms.h"
#include "VMux41_double___024root.h"

VL_ATTR_COLD void VMux41_double___024root___eval_initial__TOP(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_initial__TOP\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->Mux41_double__DOT____Vtogcov__F_Wire)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Mux41_double__DOT____Vtogcov__F_Wire 
            = (1U | (IData)(vlSelf->Mux41_double__DOT____Vtogcov__F_Wire));
    }
    vlSelf->F_Wire = 3U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux41_double___024root___dump_triggers__stl(VMux41_double___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMux41_double___024root___eval_triggers__stl(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMux41_double___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VMux41_double___024root___stl_sequent__TOP__0(VMux41_double___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void VMux41_double___024root___configure_coverage(VMux41_double___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/Mux41_double.v", 2, 14, ".Mux41_double", "v_toggle/Mux41_double", "X0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/Mux41_double.v", 2, 14, ".Mux41_double", "v_toggle/Mux41_double", "X0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "vsrc/Mux41_double.v", 3, 14, ".Mux41_double", "v_toggle/Mux41_double", "X1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "vsrc/Mux41_double.v", 3, 14, ".Mux41_double", "v_toggle/Mux41_double", "X1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "vsrc/Mux41_double.v", 4, 14, ".Mux41_double", "v_toggle/Mux41_double", "X2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "vsrc/Mux41_double.v", 4, 14, ".Mux41_double", "v_toggle/Mux41_double", "X2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "vsrc/Mux41_double.v", 5, 14, ".Mux41_double", "v_toggle/Mux41_double", "X3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "vsrc/Mux41_double.v", 5, 14, ".Mux41_double", "v_toggle/Mux41_double", "X3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "vsrc/Mux41_double.v", 6, 14, ".Mux41_double", "v_toggle/Mux41_double", "Y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "vsrc/Mux41_double.v", 6, 14, ".Mux41_double", "v_toggle/Mux41_double", "Y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "vsrc/Mux41_double.v", 8, 15, ".Mux41_double", "v_toggle/Mux41_double", "F_Wire[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "vsrc/Mux41_double.v", 8, 15, ".Mux41_double", "v_toggle/Mux41_double", "F_Wire[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "vsrc/Mux41_double.v", 10, 11, ".Mux41_double", "v_toggle/Mux41_double", "F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "vsrc/Mux41_double.v", 10, 11, ".Mux41_double", "v_toggle/Mux41_double", "F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "vsrc/Mux41_double.v", 13, 4, ".Mux41_double", "v_line/Mux41_double", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "vsrc/Mux41_double.v", 14, 4, ".Mux41_double", "v_line/Mux41_double", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "vsrc/Mux41_double.v", 15, 4, ".Mux41_double", "v_line/Mux41_double", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "vsrc/Mux41_double.v", 16, 4, ".Mux41_double", "v_line/Mux41_double", "case", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "vsrc/Mux41_double.v", 17, 3, ".Mux41_double", "v_line/Mux41_double", "case", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "vsrc/Mux41_double.v", 11, 1, ".Mux41_double", "v_line/Mux41_double", "block", "11-12");
}
