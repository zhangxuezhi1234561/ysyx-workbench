// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_REG__W20_R0_H_
#define VERILATED_VCORE_REG__W20_R0_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcore__Syms;

class Vcore_Reg__W20_R0 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__wen,0,0);
    CData/*0:0*/ __Vtogcov__wen;
    VL_IN(__PVT__din,31,0);
    VL_OUT(__PVT__dout,31,0);
    IData/*31:0*/ __Vtogcov__dout;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_Reg__W20_R0(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_Reg__W20_R0();
    VL_UNCOPYABLE(Vcore_Reg__W20_R0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
