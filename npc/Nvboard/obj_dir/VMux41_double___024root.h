// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMux41_double.h for the primary calling header

#ifndef VERILATED_VMUX41_DOUBLE___024ROOT_H_
#define VERILATED_VMUX41_DOUBLE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VMux41_double__Syms;

class VMux41_double___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(X0,1,0);
    VL_IN8(X1,1,0);
    VL_IN8(X2,1,0);
    VL_IN8(X3,1,0);
    VL_IN8(Y,1,0);
    VL_OUT8(F_Wire,1,0);
    CData/*1:0*/ Mux41_double__DOT__F;
    CData/*1:0*/ Mux41_double__DOT____Vtogcov__X0;
    CData/*1:0*/ Mux41_double__DOT____Vtogcov__X1;
    CData/*1:0*/ Mux41_double__DOT____Vtogcov__X2;
    CData/*1:0*/ Mux41_double__DOT____Vtogcov__X3;
    CData/*1:0*/ Mux41_double__DOT____Vtogcov__Y;
    CData/*1:0*/ Mux41_double__DOT____Vtogcov__F_Wire;
    CData/*1:0*/ Mux41_double__DOT____Vtogcov__F;
    CData/*1:0*/ __Vtrigrprev__TOP__X0;
    CData/*1:0*/ __Vtrigrprev__TOP__X1;
    CData/*1:0*/ __Vtrigrprev__TOP__X2;
    CData/*1:0*/ __Vtrigrprev__TOP__X3;
    CData/*1:0*/ __Vtrigrprev__TOP__Y;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMux41_double__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMux41_double___024root(VMux41_double__Syms* symsp, const char* v__name);
    ~VMux41_double___024root();
    VL_UNCOPYABLE(VMux41_double___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
