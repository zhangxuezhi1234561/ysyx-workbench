// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_SIRV_GNRL_DFFLR_H_
#define VERILATED_VCORE_SIRV_GNRL_DFFLR_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcore__Syms;

class Vcore_sirv_gnrl_dfflr final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__lden,0,0);
    VL_IN(__PVT__dnxt,31,0);
    VL_OUT(__PVT__qout,31,0);
    IData/*31:0*/ __PVT__qout_r;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_sirv_gnrl_dfflr(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_sirv_gnrl_dfflr();
    VL_UNCOPYABLE(Vcore_sirv_gnrl_dfflr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
