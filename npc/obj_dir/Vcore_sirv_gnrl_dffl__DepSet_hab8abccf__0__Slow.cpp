// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_sirv_gnrl_dffl.h"

VL_ATTR_COLD void Vcore_sirv_gnrl_dffl___stl_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0(Vcore_sirv_gnrl_dffl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___stl_sequent__TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl__0\n"); );
    // Body
    if ((1U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffeU & vlSelf->__Vtogcov__qout) 
                                   | (1U & vlSelf->__PVT__qout_r));
    }
    if ((2U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffdU & vlSelf->__Vtogcov__qout) 
                                   | (2U & vlSelf->__PVT__qout_r));
    }
    if ((4U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffffbU & vlSelf->__Vtogcov__qout) 
                                   | (4U & vlSelf->__PVT__qout_r));
    }
    if ((8U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffff7U & vlSelf->__Vtogcov__qout) 
                                   | (8U & vlSelf->__PVT__qout_r));
    }
    if ((0x10U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffefU & vlSelf->__Vtogcov__qout) 
                                   | (0x10U & vlSelf->__PVT__qout_r));
    }
    if ((0x20U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffdfU & vlSelf->__Vtogcov__qout) 
                                   | (0x20U & vlSelf->__PVT__qout_r));
    }
    if ((0x40U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffffbfU & vlSelf->__Vtogcov__qout) 
                                   | (0x40U & vlSelf->__PVT__qout_r));
    }
    if ((0x80U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffff7fU & vlSelf->__Vtogcov__qout) 
                                   | (0x80U & vlSelf->__PVT__qout_r));
    }
    if ((0x100U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffeffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100U & vlSelf->__PVT__qout_r));
    }
    if ((0x200U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffdffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200U & vlSelf->__PVT__qout_r));
    }
    if ((0x400U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffffbffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400U & vlSelf->__PVT__qout_r));
    }
    if ((0x800U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffff7ffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffefffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffdfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffffbfffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffff7fffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffeffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffdffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfffbffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000U & vlSelf->__PVT__qout_r));
    }
    if ((0x80000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfff7ffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000U & vlSelf->__PVT__qout_r));
    }
    if ((0x100000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffefffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x100000U & vlSelf->__PVT__qout_r));
    }
    if ((0x200000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffdfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x200000U & vlSelf->__PVT__qout_r));
    }
    if ((0x400000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xffbfffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x400000U & vlSelf->__PVT__qout_r));
    }
    if ((0x800000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xff7fffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x800000U & vlSelf->__PVT__qout_r));
    }
    if ((0x1000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfeffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x1000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x2000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfdffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x2000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x4000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xfbffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x4000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x8000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xf7ffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x8000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x10000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xefffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x10000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x20000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xdfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x20000000U & vlSelf->__PVT__qout_r));
    }
    if ((0x40000000U & (vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0xbfffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x40000000U & vlSelf->__PVT__qout_r));
    }
    if (((vlSelf->__PVT__qout_r ^ vlSelf->__Vtogcov__qout) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__qout = ((0x7fffffffU & vlSelf->__Vtogcov__qout) 
                                   | (0x80000000U & vlSelf->__PVT__qout_r));
    }
}

VL_ATTR_COLD void Vcore_sirv_gnrl_dffl___configure_coverage(Vcore_sirv_gnrl_dffl* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dffl___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2018]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 5, 23, "", "v_toggle/sirv_gnrl_dffl", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 6, 23, "", "v_toggle/sirv_gnrl_dffl", "dnxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 7, 23, "", "v_toggle/sirv_gnrl_dffl", "qout[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 9, 23, "", "v_toggle/sirv_gnrl_dffl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 12, 14, "", "v_toggle/sirv_gnrl_dffl", "qout_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2019]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 16, 3, "", "v_branch/sirv_gnrl_dffl", "if", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2020]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 16, 4, "", "v_branch/sirv_gnrl_dffl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2021]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffl.v", 14, 1, "", "v_line/sirv_gnrl_dffl", "block", "14-15");
}
