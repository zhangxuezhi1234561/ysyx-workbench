// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_Reg__W20_R0.h"
#include "Vcore__Syms.h"

VL_ATTR_COLD void Vcore_Reg__W20_R0___stl_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_Reg__W20_R0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___stl_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__genblk1__BRA__1__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
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

VL_ATTR_COLD void Vcore_Reg__W20_R0___configure_coverage(Vcore_Reg__W20_R0* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_Reg__W20_R0___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/Reg.v", 3, 9, "", "v_toggle/Reg__W20_R0", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/Reg.v", 4, 9, "", "v_toggle/Reg__W20_R0", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "vsrc/Reg.v", 5, 21, "", "v_toggle/Reg__W20_R0", "din[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1037]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1038]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1039]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1040]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1041]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1042]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1043]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1044]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1045]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1046]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1047]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1048]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1049]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1050]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1051]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1052]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1053]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1054]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1055]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1056]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1057]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1058]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1059]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1060]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1061]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1062]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1063]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1064]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1065]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1066]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1067]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1068]), first, "vsrc/Reg.v", 6, 26, "", "v_toggle/Reg__W20_R0", "dout[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1069]), first, "vsrc/Reg.v", 7, 9, "", "v_toggle/Reg__W20_R0", "wen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1070]), first, "vsrc/Reg.v", 11, 10, "", "v_branch/Reg__W20_R0", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1071]), first, "vsrc/Reg.v", 11, 11, "", "v_branch/Reg__W20_R0", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1072]), first, "vsrc/Reg.v", 10, 5, "", "v_line/Reg__W20_R0", "elsif", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1073]), first, "vsrc/Reg.v", 9, 3, "", "v_line/Reg__W20_R0", "block", "9");
}
