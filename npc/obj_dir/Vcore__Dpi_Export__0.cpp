// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vcore.h"
#include "Vcore__Syms.h"
#include "verilated_dpi.h"


void Vcore::npctrap(svBit* req_ebreak) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root::npctrap\n"); );
    // Init
    CData/*0:0*/ req_ebreak__Vcvt;
    req_ebreak__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("npctrap");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vcore__Vcb_npctrap_t __Vcb = (Vcore__Vcb_npctrap_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vcore__Syms*)(__Vscopep->symsp()), req_ebreak__Vcvt);
    for (size_t req_ebreak__Vidx = 0; req_ebreak__Vidx < 1; ++req_ebreak__Vidx) *req_ebreak = req_ebreak__Vcvt;
}
