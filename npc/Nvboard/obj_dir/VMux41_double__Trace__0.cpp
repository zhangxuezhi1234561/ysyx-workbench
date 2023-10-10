// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMux41_double__Syms.h"


void VMux41_double___024root__trace_chg_sub_0(VMux41_double___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMux41_double___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root__trace_chg_top_0\n"); );
    // Init
    VMux41_double___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux41_double___024root*>(voidSelf);
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMux41_double___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VMux41_double___024root__trace_chg_sub_0(VMux41_double___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->X0),2);
    bufp->chgCData(oldp+1,(vlSelf->X1),2);
    bufp->chgCData(oldp+2,(vlSelf->X2),2);
    bufp->chgCData(oldp+3,(vlSelf->X3),2);
    bufp->chgCData(oldp+4,(vlSelf->Y),2);
    bufp->chgCData(oldp+5,(vlSelf->F_Wire),2);
    bufp->chgCData(oldp+6,(vlSelf->Mux41_double__DOT__F),2);
}

void VMux41_double___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root__trace_cleanup\n"); );
    // Init
    VMux41_double___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux41_double___024root*>(voidSelf);
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
