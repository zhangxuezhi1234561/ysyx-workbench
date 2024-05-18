// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_Reg__W20_R0.h"

VL_ATTR_COLD void Vcore_Reg__W20_R0___ctor_var_reset(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__din = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dout = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wen = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__dout = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__wen = VL_RAND_RESET_I(1);
}
