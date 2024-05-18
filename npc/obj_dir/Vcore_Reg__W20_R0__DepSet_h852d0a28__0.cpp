// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_Reg__W20_R0.h"
#include "Vcore__Syms.h"

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__3__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__4__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__5__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__6__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__7__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__8__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__9__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__10__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__11__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__12__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__13__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__14__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__15__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__16__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__17__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__18__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__19__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__20__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__21__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__22__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__23__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__24__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__25__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__26__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__27__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__28__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__29__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__30__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__dout = 0U;
    } else if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
        vlSelf->__PVT__dout = vlSymsp->TOP__core.__PVT__inst_exu__DOT__rf_wbck_wdat;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) {
            vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5)))) {
            vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffeU & vlSelf->__Vtogcov__dout) 
                                   | (1U & vlSelf->__PVT__dout));
    }
    if ((2U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffdU & vlSelf->__Vtogcov__dout) 
                                   | (2U & vlSelf->__PVT__dout));
    }
    if ((4U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffffbU & vlSelf->__Vtogcov__dout) 
                                   | (4U & vlSelf->__PVT__dout));
    }
    if ((8U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffff7U & vlSelf->__Vtogcov__dout) 
                                   | (8U & vlSelf->__PVT__dout));
    }
    if ((0x10U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffefU & vlSelf->__Vtogcov__dout) 
                                   | (0x10U & vlSelf->__PVT__dout));
    }
    if ((0x20U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffdfU & vlSelf->__Vtogcov__dout) 
                                   | (0x20U & vlSelf->__PVT__dout));
    }
    if ((0x40U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffffbfU & vlSelf->__Vtogcov__dout) 
                                   | (0x40U & vlSelf->__PVT__dout));
    }
    if ((0x80U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffff7fU & vlSelf->__Vtogcov__dout) 
                                   | (0x80U & vlSelf->__PVT__dout));
    }
    if ((0x100U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffeffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100U & vlSelf->__PVT__dout));
    }
    if ((0x200U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffdffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200U & vlSelf->__PVT__dout));
    }
    if ((0x400U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffffbffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400U & vlSelf->__PVT__dout));
    }
    if ((0x800U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffff7ffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800U & vlSelf->__PVT__dout));
    }
    if ((0x1000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffefffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000U & vlSelf->__PVT__dout));
    }
    if ((0x2000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffdfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000U & vlSelf->__PVT__dout));
    }
    if ((0x4000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffffbfffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000U & vlSelf->__PVT__dout));
    }
    if ((0x8000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffff7fffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000U & vlSelf->__PVT__dout));
    }
    if ((0x10000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffeffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000U & vlSelf->__PVT__dout));
    }
    if ((0x20000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffdffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000U & vlSelf->__PVT__dout));
    }
    if ((0x40000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfffbffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000U & vlSelf->__PVT__dout));
    }
    if ((0x80000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfff7ffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000U & vlSelf->__PVT__dout));
    }
    if ((0x100000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffefffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x100000U & vlSelf->__PVT__dout));
    }
    if ((0x200000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffdfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x200000U & vlSelf->__PVT__dout));
    }
    if ((0x400000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xffbfffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x400000U & vlSelf->__PVT__dout));
    }
    if ((0x800000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xff7fffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x800000U & vlSelf->__PVT__dout));
    }
    if ((0x1000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfeffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x1000000U & vlSelf->__PVT__dout));
    }
    if ((0x2000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfdffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x2000000U & vlSelf->__PVT__dout));
    }
    if ((0x4000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xfbffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x4000000U & vlSelf->__PVT__dout));
    }
    if ((0x8000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xf7ffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x8000000U & vlSelf->__PVT__dout));
    }
    if ((0x10000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xefffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x10000000U & vlSelf->__PVT__dout));
    }
    if ((0x20000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xdfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x20000000U & vlSelf->__PVT__dout));
    }
    if ((0x40000000U & (vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0xbfffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x40000000U & vlSelf->__PVT__dout));
    }
    if (((vlSelf->__PVT__dout ^ vlSelf->__Vtogcov__dout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dout = ((0x7fffffffU & vlSelf->__Vtogcov__dout) 
                                   | (0x80000000U & vlSelf->__PVT__dout));
    }
}

VL_INLINE_OPT void Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__1(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___nba_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__31__KET____DOT__rfno0__DOT__rf_dffl__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5) 
         ^ (IData)(vlSelf->__Vtogcov__wen))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wen = vlSymsp->TOP__core.inst_exu__DOT__inst_RegisterFile__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__rfno0__DOT__rf_dffl____pinNumber5;
    }
}
