// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_MUXKEY__N4_K2_D20_H_
#define VERILATED_VCORE_MUXKEY__N4_K2_D20_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcore__Syms;

class Vcore_MuxKey__N4_K2_D20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__key,1,0);
    CData/*0:0*/ __PVT__i0__DOT__hit;
    CData/*0:0*/ i0__DOT____Vtogcov__hit;
    VL_OUT(__PVT__out,31,0);
    VL_INW(__PVT__lut,135,0,5);
    VlWide<5>/*135:0*/ __Vtogcov__lut;
    IData/*31:0*/ __PVT__i0__DOT__lut_out;
    IData/*31:0*/ i0__DOT____Vtogcov__lut_out;
    VlUnpacked<QData/*33:0*/, 4> __PVT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> __PVT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 4> __PVT__i0__DOT__data_list;
    VlUnpacked<QData/*33:0*/, 4> i0__DOT____Vtogcov__pair_list;
    VlUnpacked<CData/*1:0*/, 4> i0__DOT____Vtogcov__key_list;
    VlUnpacked<IData/*31:0*/, 4> i0__DOT____Vtogcov__data_list;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_MuxKey__N4_K2_D20(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_MuxKey__N4_K2_D20();
    VL_UNCOPYABLE(Vcore_MuxKey__N4_K2_D20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
