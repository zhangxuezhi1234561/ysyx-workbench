// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_sirv_gnrl_dfflr.h"

VL_ATTR_COLD void Vcore_sirv_gnrl_dfflr___configure_coverage(Vcore_sirv_gnrl_dfflr* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_sirv_gnrl_dfflr___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1800]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, "", "v_toggle/sirv_gnrl_dfflr", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, "", "v_toggle/sirv_gnrl_dfflr", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, "", "v_toggle/sirv_gnrl_dfflr", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2266]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, "", "v_branch/sirv_gnrl_dfflr", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2267]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, "", "v_branch/sirv_gnrl_dfflr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2268]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, "", "v_line/sirv_gnrl_dfflr", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2269]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, "", "v_line/sirv_gnrl_dfflr", "block", "15-16");
}
