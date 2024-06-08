// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vcore.h"
#include "Vcore__Syms.h"
#include "verilated_dpi.h"


void Vcore::publicgetsignal(svLogicVecVal* out_rf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root::publicgetsignal\n"); );
    // Init
    VlUnpacked<IData/*31:0*/, 32> out_rf__Vcvt;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        out_rf__Vcvt[__Vi0] = 0;
    }
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("publicgetsignal");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vcore__Vcb_publicgetsignal_t __Vcb = (Vcore__Vcb_publicgetsignal_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vcore__Syms*)(__Vscopep->symsp()), out_rf__Vcvt);
    for (size_t out_rf__Vidx = 0; out_rf__Vidx < 32; ++out_rf__Vidx) VL_SET_SVLV_I(32, out_rf + 1 * out_rf__Vidx, (&out_rf__Vcvt[0])[out_rf__Vidx]);
}
