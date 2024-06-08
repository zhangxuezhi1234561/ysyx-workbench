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
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcore_sirv_gnrl_dfflr___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1313]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, "", "v_toggle/sirv_gnrl_dfflr", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1389]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, "", "v_toggle/sirv_gnrl_dfflr", "dnxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1458]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1459]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1460]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1461]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1462]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1463]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1464]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1465]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1466]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1467]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1468]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1469]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1470]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1471]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1472]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1473]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1474]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1475]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1476]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1477]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1478]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1479]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1480]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1481]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1482]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1483]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1484]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1485]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1486]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1487]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1488]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1489]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, "", "v_toggle/sirv_gnrl_dfflr", "qout[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, "", "v_toggle/sirv_gnrl_dfflr", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, "", "v_toggle/sirv_gnrl_dfflr", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1458]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1459]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1460]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1461]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1462]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1463]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1464]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1465]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1466]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1467]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1468]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1469]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1470]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1471]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1472]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1473]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1474]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1475]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1476]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1477]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1478]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1479]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1480]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1481]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1482]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1483]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1484]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1485]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1486]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1487]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1488]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1489]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, "", "v_toggle/sirv_gnrl_dfflr", "qout_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1863]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, "", "v_branch/sirv_gnrl_dfflr", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1864]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, "", "v_branch/sirv_gnrl_dfflr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1865]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, "", "v_line/sirv_gnrl_dfflr", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1866]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, "", "v_line/sirv_gnrl_dfflr", "block", "15-16");
}
