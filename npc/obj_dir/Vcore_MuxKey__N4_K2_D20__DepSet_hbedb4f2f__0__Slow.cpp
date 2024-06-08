// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_MuxKey__N4_K2_D20.h"

VL_ATTR_COLD void Vcore_MuxKey__N4_K2_D20___ctor_var_reset(Vcore_MuxKey__N4_K2_D20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_MuxKey__N4_K2_D20___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__key = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(136, vlSelf->__PVT__lut);
    VL_RAND_RESET_W(136, vlSelf->__Vtogcov__lut);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->i0__DOT____Vtogcov__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->i0__DOT____Vtogcov__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->i0__DOT____Vtogcov__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->i0__DOT____Vtogcov__lut_out = VL_RAND_RESET_I(32);
    vlSelf->i0__DOT____Vtogcov__hit = VL_RAND_RESET_I(1);
}
