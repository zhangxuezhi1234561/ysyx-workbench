// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMux41_double__Syms.h"


VL_ATTR_COLD void VMux41_double___024root__trace_init_sub__TOP__0(VMux41_double___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"X0", false,-1, 1,0);
    tracep->declBus(c+2,"X1", false,-1, 1,0);
    tracep->declBus(c+3,"X2", false,-1, 1,0);
    tracep->declBus(c+4,"X3", false,-1, 1,0);
    tracep->declBus(c+5,"Y", false,-1, 1,0);
    tracep->declBus(c+6,"F_Wire", false,-1, 1,0);
    tracep->pushNamePrefix("Mux41_double ");
    tracep->declBus(c+1,"X0", false,-1, 1,0);
    tracep->declBus(c+2,"X1", false,-1, 1,0);
    tracep->declBus(c+3,"X2", false,-1, 1,0);
    tracep->declBus(c+4,"X3", false,-1, 1,0);
    tracep->declBus(c+5,"Y", false,-1, 1,0);
    tracep->declBus(c+6,"F_Wire", false,-1, 1,0);
    tracep->declBus(c+7,"F", false,-1, 1,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VMux41_double___024root__trace_init_top(VMux41_double___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root__trace_init_top\n"); );
    // Body
    VMux41_double___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMux41_double___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMux41_double___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMux41_double___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMux41_double___024root__trace_register(VMux41_double___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMux41_double___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMux41_double___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMux41_double___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMux41_double___024root__trace_full_sub_0(VMux41_double___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMux41_double___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root__trace_full_top_0\n"); );
    // Init
    VMux41_double___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux41_double___024root*>(voidSelf);
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMux41_double___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMux41_double___024root__trace_full_sub_0(VMux41_double___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux41_double___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->X0),2);
    bufp->fullCData(oldp+2,(vlSelf->X1),2);
    bufp->fullCData(oldp+3,(vlSelf->X2),2);
    bufp->fullCData(oldp+4,(vlSelf->X3),2);
    bufp->fullCData(oldp+5,(vlSelf->Y),2);
    bufp->fullCData(oldp+6,(vlSelf->F_Wire),2);
    bufp->fullCData(oldp+7,(vlSelf->Mux41_double__DOT__F),2);
}
