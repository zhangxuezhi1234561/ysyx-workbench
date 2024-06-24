// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_exu_decode.h"

VL_ATTR_COLD void Vcore_exu_decode___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0(Vcore_exu_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_exu_decode___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0\n"); );
    // Init
    IData/*31:0*/ __VdfgTmp_h056a0087__0;
    __VdfgTmp_h056a0087__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc3fc61f5__0;
    __VdfgTmp_hc3fc61f5__0 = 0;
    // Body
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0x14U))) ^ (IData)(vlSelf->__Vtogcov__dec_rs2x0))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_rs2x0 = (0U == (0x1fU 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x14U)));
    }
    if (((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__dec_rdwen))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_rdwen = (0U != (0x1fU 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 7U)));
    }
    if (((3U == (3U & vlSymsp->TOP.ifu_rsp_instr)) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_1_0_11))) {
        vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_1_0_11 = (3U == (3U 
                                                   & vlSymsp->TOP.ifu_rsp_instr));
    }
    if (((0U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_000))) {
        vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((1U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_001))) {
        vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((2U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_010))) {
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((3U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_011))) {
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((4U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_100))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((5U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_101))) {
        vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((6U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_110))) {
        vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((7U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_111))) {
        vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((0U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_00))) {
        vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_00 = (0U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((1U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_01))) {
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_01 = (1U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((2U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_10))) {
        vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_10 = (2U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((3U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_11))) {
        vlSymsp->__Vcoverage[1564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_11 = (3U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((0U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_000))) {
        vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((1U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_001))) {
        vlSymsp->__Vcoverage[1566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((2U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_010))) {
        vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((3U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_011))) {
        vlSymsp->__Vcoverage[1568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((4U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_100))) {
        vlSymsp->__Vcoverage[1569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((5U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_101))) {
        vlSymsp->__Vcoverage[1570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((6U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_110))) {
        vlSymsp->__Vcoverage[1571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((7U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_111))) {
        vlSymsp->__Vcoverage[1572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((0U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000000))) {
        vlSymsp->__Vcoverage[1573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000000 = (0U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x20U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100000))) {
        vlSymsp->__Vcoverage[1574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100000 = (0x20U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((1U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000001))) {
        vlSymsp->__Vcoverage[1575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000001 = (1U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((5U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000101))) {
        vlSymsp->__Vcoverage[1576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000101 = (5U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((9U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001001))) {
        vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001001 = (9U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0xdU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001101))) {
        vlSymsp->__Vcoverage[1578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001101 = (0xdU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x15U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010101))) {
        vlSymsp->__Vcoverage[1579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010101 = (0x15U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x21U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100001))) {
        vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100001 = (0x21U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x11U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010001))) {
        vlSymsp->__Vcoverage[1581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010001 = (0x11U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x2dU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101101))) {
        vlSymsp->__Vcoverage[1582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101101 = (0x2dU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x7fU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111111))) {
        vlSymsp->__Vcoverage[1583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111111 = (0x7fU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((4U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000100))) {
        vlSymsp->__Vcoverage[1584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000100 = (4U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((8U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001000))) {
        vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001000 = (8U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0xcU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001100))) {
        vlSymsp->__Vcoverage[1586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001100 = (0xcU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x2cU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101100))) {
        vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101100 = (0x2cU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x10U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010000))) {
        vlSymsp->__Vcoverage[1588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010000 = (0x10U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x14U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010100))) {
        vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010100 = (0x14U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x60U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100000))) {
        vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100000 = (0x60U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x70U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110000))) {
        vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110000 = (0x70U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x50U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010000))) {
        vlSymsp->__Vcoverage[1592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010000 = (0x50U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x68U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101000))) {
        vlSymsp->__Vcoverage[1593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101000 = (0x68U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x78U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111000))) {
        vlSymsp->__Vcoverage[1594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111000 = (0x78U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x51U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010001))) {
        vlSymsp->__Vcoverage[1595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010001 = (0x51U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x71U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110001))) {
        vlSymsp->__Vcoverage[1596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110001 = (0x71U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x61U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100001))) {
        vlSymsp->__Vcoverage[1597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100001 = (0x61U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x69U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101001))) {
        vlSymsp->__Vcoverage[1598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101001 = (0x69U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__rv32_rd_x0))) {
        vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_rd_x0 = (0U == (0x1fU 
                                                & (vlSymsp->TOP.ifu_rsp_instr 
                                                   >> 7U)));
    }
    if (((IData)(vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__dec_bjp_test))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_test = vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->decode_dec_bjp_test_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->decode_dec_bjp_test_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r;
    }
    vlSelf->__PVT__rv32_s_imm = (((- (IData)((vlSymsp->TOP.ifu_rsp_instr 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP.ifu_rsp_instr 
                                                    >> 7U))));
    vlSelf->__PVT__rv32_b_imm = (((- (IData)((vlSymsp->TOP.ifu_rsp_instr 
                                              >> 0x1fU))) 
                                  << 0xdU) | ((0x1000U 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP.ifu_rsp_instr 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP.ifu_rsp_instr 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP.ifu_rsp_instr 
                                                          >> 7U))))));
    vlSelf->__PVT__rv32_i_imm = (((- (IData)((vlSymsp->TOP.ifu_rsp_instr 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSymsp->TOP.ifu_rsp_instr 
                                              >> 0x14U));
    vlSelf->__PVT__rv32_j_imm = (((- (IData)((vlSymsp->TOP.ifu_rsp_instr 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSymsp->TOP.ifu_rsp_instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP.ifu_rsp_instr) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP.ifu_rsp_instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP.ifu_rsp_instr 
                                                           >> 0x14U))))));
    vlSelf->__PVT__rv32_auipc = (IData)((0x17U == (0x7fU 
                                                   & vlSymsp->TOP.ifu_rsp_instr)));
    __VdfgTmp_hc3fc61f5__0 = (IData)((0x13U == (0x1fU 
                                                & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__dec_jal = (IData)((0x6fU == (0x7fU 
                                                & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__dec_jalr = (IData)((0x67U == (0x7fU 
                                                 & vlSymsp->TOP.ifu_rsp_instr)));
    if ((1U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (1U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (2U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (4U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (8U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if (((vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (1U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (2U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (4U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (8U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if (((vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (1U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (2U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (4U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (8U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (1U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (2U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (4U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (8U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((IData)(vlSelf->__PVT__rv32_auipc) ^ (IData)(vlSelf->__Vtogcov__rv32_auipc))) {
        vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_auipc = vlSelf->__PVT__rv32_auipc;
    }
    vlSelf->__PVT__rv32_op = (IData)(((0x20U == (0x60U 
                                                 & vlSymsp->TOP.ifu_rsp_instr)) 
                                      & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_system = (IData)(((0x60U == 
                                           (0x60U & vlSymsp->TOP.ifu_rsp_instr)) 
                                          & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_op_imm = (IData)(((0U == (0x60U 
                                                  & vlSymsp->TOP.ifu_rsp_instr)) 
                                          & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__dec_rs1en = ((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                                                 >> 0xfU))) 
                                & ((~ (IData)(vlSelf->__PVT__dec_jal)) 
                                   & (~ (IData)(vlSelf->__PVT__rv32_auipc))));
    __VdfgTmp_h056a0087__0 = ((- (IData)((IData)(vlSelf->__PVT__dec_jal))) 
                              & vlSelf->__PVT__rv32_j_imm);
    vlSelf->__PVT__dec_bjp = ((IData)(vlSelf->__PVT__dec_jal) 
                              | (IData)(vlSelf->__PVT__dec_jalr));
    if (((IData)(vlSelf->__PVT__rv32_op) ^ (IData)(vlSelf->__Vtogcov__rv32_op))) {
        vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op = vlSelf->__PVT__rv32_op;
    }
    vlSelf->__PVT__dec_rs2en = (IData)(((0U != (0x1f00000U 
                                                & vlSymsp->TOP.ifu_rsp_instr)) 
                                        | (IData)(vlSelf->__PVT__rv32_op)));
    if (((IData)(vlSelf->__PVT__rv32_system) ^ (IData)(vlSelf->__Vtogcov__rv32_system))) {
        vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_system = vlSelf->__PVT__rv32_system;
    }
    vlSelf->__PVT__rv32_ebreak = ((IData)(vlSelf->__PVT__rv32_system) 
                                  & (IData)((0x100000U 
                                             == (0xfff07000U 
                                                 & vlSymsp->TOP.ifu_rsp_instr))));
    vlSelf->__PVT__alu_info_bus = ((0x17ffffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_system) 
                                       & (IData)((0x100000U 
                                                  == 
                                                  (0xfff07000U 
                                                   & vlSymsp->TOP.ifu_rsp_instr)))) 
                                      << 0x13U));
    if (((IData)(vlSelf->__PVT__rv32_op_imm) ^ (IData)(vlSelf->__Vtogcov__rv32_op_imm))) {
        vlSymsp->__Vcoverage[1600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op_imm = vlSelf->__PVT__rv32_op_imm;
    }
    vlSelf->__PVT__rv32_imm_sel_i = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                     | (IData)(vlSelf->__PVT__dec_jalr));
    vlSelf->__PVT__rv32_addi = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                & (0U == (0x7000U & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__dec_bjp_imm = (__VdfgTmp_h056a0087__0 
                                  | ((- (IData)((IData)(vlSelf->__PVT__dec_jalr))) 
                                     & vlSelf->__PVT__rv32_i_imm));
    vlSelf->__PVT__bjp_info_bus = ((0x1ffcfU & vlSelf->__PVT__bjp_info_bus) 
                                   | ((IData)(vlSelf->__PVT__dec_bjp) 
                                      << 4U));
    if (((IData)(vlSelf->__PVT__rv32_ebreak) ^ (IData)(vlSelf->__Vtogcov__rv32_ebreak))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_ebreak = vlSelf->__PVT__rv32_ebreak;
    }
    vlSelf->__PVT__alu_op = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                             | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                | (IData)(vlSelf->__PVT__rv32_ebreak)));
    if (((IData)(vlSelf->__PVT__rv32_imm_sel_i) ^ (IData)(vlSelf->__Vtogcov__rv32_imm_sel_i))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_imm_sel_i = vlSelf->__PVT__rv32_imm_sel_i;
    }
    vlSelf->__PVT__dec_imm = (((- (IData)((IData)(vlSelf->__PVT__rv32_imm_sel_i))) 
                               & vlSelf->__PVT__rv32_i_imm) 
                              | ((0xfffff000U & ((- (IData)((IData)(vlSelf->__PVT__rv32_auipc))) 
                                                 & vlSymsp->TOP.ifu_rsp_instr)) 
                                 | __VdfgTmp_h056a0087__0));
    vlSelf->__PVT__need_imm = ((IData)(vlSelf->__PVT__rv32_imm_sel_i) 
                               | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                  | (IData)(vlSelf->__PVT__dec_jal)));
    if (((IData)(vlSelf->__PVT__rv32_addi) ^ (IData)(vlSelf->__Vtogcov__rv32_addi))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_addi = vlSelf->__PVT__rv32_addi;
    }
    vlSelf->__PVT__alu_info_bus = ((0x1fffe0U & vlSelf->__PVT__alu_info_bus) 
                                   | (8U | (((IData)(vlSelf->__PVT__rv32_addi) 
                                             | (IData)(vlSelf->__PVT__rv32_auipc)) 
                                            << 4U)));
    vlSelf->__PVT__rv32_nop = ((IData)(vlSelf->__PVT__rv32_addi) 
                               & (IData)(((0U == (0xf8f80U 
                                                  & vlSymsp->TOP.ifu_rsp_instr)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (vlSymsp->TOP.ifu_rsp_instr 
                                                         >> 0x14U)))))));
    if ((1U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffeU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (1U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((2U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffdU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (2U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((4U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffbU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (4U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((8U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fff7U 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (8U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffefU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffdfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffbfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ff7fU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1feffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fdffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fbffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1f7ffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1efffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1dfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1bfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x17fffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0xffffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if (((IData)(vlSelf->__PVT__alu_op) ^ (IData)(vlSelf->__Vtogcov__alu_op))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_op = vlSelf->__PVT__alu_op;
    }
    if ((1U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (1U & vlSelf->__PVT__dec_imm));
    }
    if ((2U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (2U & vlSelf->__PVT__dec_imm));
    }
    if ((4U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (4U & vlSelf->__PVT__dec_imm));
    }
    if ((8U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (8U & vlSelf->__PVT__dec_imm));
    }
    if ((0x10U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10U & vlSelf->__PVT__dec_imm));
    }
    if ((0x20U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20U & vlSelf->__PVT__dec_imm));
    }
    if ((0x40U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40U & vlSelf->__PVT__dec_imm));
    }
    if ((0x80U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80U & vlSelf->__PVT__dec_imm));
    }
    if ((0x100U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x100U & vlSelf->__PVT__dec_imm));
    }
    if ((0x200U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x200U & vlSelf->__PVT__dec_imm));
    }
    if ((0x400U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x400U & vlSelf->__PVT__dec_imm));
    }
    if ((0x800U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x800U & vlSelf->__PVT__dec_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x1000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x2000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x4000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x8000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x100000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x200000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x400000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x800000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x1000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x2000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x4000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x8000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if (((vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if (((IData)(vlSelf->__PVT__need_imm) ^ (IData)(vlSelf->__Vtogcov__need_imm))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__need_imm = vlSelf->__PVT__need_imm;
    }
    if (((IData)(vlSelf->__PVT__rv32_nop) ^ (IData)(vlSelf->__Vtogcov__rv32_nop))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_nop = vlSelf->__PVT__rv32_nop;
    }
    vlSelf->__PVT__alu_info_bus = ((0x1c3fffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_nop) 
                                       << 0x11U) | 
                                      (((IData)(vlSelf->__PVT__rv32_auipc) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->__PVT__need_imm) 
                                         << 0xfU) | 
                                        ((IData)(vlSelf->__PVT__rv32_auipc) 
                                         << 0xeU)))));
    if ((1U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (1U & vlSelf->__PVT__alu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (2U & vlSelf->__PVT__alu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (4U & vlSelf->__PVT__alu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (8U & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0xfffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    vlSelf->__PVT__dec_info = (((- (QData)((IData)(vlSelf->__PVT__alu_op))) 
                                & (QData)((IData)(vlSelf->__PVT__alu_info_bus))) 
                               | ((- (QData)((IData)(vlSelf->__PVT__dec_bjp))) 
                                  & (QData)((IData)(vlSelf->__PVT__bjp_info_bus))));
    if ((1U & ((IData)(vlSelf->__PVT__dec_info) ^ (IData)(vlSelf->__Vtogcov__dec_info)))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffffeULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | (IData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__dec_info)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 1U))))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffffdULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 1U))))) 
                                          << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 2U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 2U))))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffffbULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 2U))))) 
                                          << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 3U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 3U))))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffff7ULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 3U))))) 
                                          << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 4U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 4U))))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffffffefULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 4U))))) 
                                          << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 5U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 5U))))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffffffdfULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 5U))))) 
                                          << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 6U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 6U))))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffffffbfULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 6U))))) 
                                          << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 7U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 7U))))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffffff7fULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 7U))))) 
                                          << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 8U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 8U))))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffeffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 8U))))) 
                                          << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 9U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 9U))))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffdffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 9U))))) 
                                          << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0xaU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0xaU))))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffbffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0xaU))))) 
                                          << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0xbU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0xbU))))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffff7ffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0xbU))))) 
                                          << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0xcU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0xcU))))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffffefffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0xcU))))) 
                                          << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0xdU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0xdU))))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffffdfffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0xdU))))) 
                                          << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0xeU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0xeU))))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffffbfffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0xeU))))) 
                                          << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0xfU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0xfU))))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffff7fffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0xfU))))) 
                                          << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x10U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x10U))))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffeffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x10U))))) 
                                          << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x11U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x11U))))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffdffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x11U))))) 
                                          << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x12U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x12U))))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffbffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x12U))))) 
                                          << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x13U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x13U))))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fff7ffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x13U))))) 
                                          << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x14U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x14U))))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffefffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x14U))))) 
                                          << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x15U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x15U))))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffdfffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x15U))))) 
                                          << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x16U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x16U))))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ffbfffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x16U))))) 
                                          << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x17U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x17U))))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1ff7fffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x17U))))) 
                                          << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x18U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x18U))))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1feffffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x18U))))) 
                                          << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x19U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x19U))))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fdffffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x19U))))) 
                                          << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x1aU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x1aU))))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fbffffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x1aU))))) 
                                          << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x1bU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x1bU))))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1f7ffffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x1bU))))) 
                                          << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x1cU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x1cU))))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1efffffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x1cU))))) 
                                          << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x1dU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x1dU))))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1dfffffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x1dU))))) 
                                          << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x1eU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x1eU))))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1bfffffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x1eU))))) 
                                          << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 0x1fU)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 0x1fU))))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x17fffffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x1fU))))) 
                                          << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__dec_info ^ vlSelf->__Vtogcov__dec_info) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0xffffffffULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__dec_info 
                                                                      >> 0x20U))))) 
                                          << 0x20U));
    }
}

VL_ATTR_COLD void Vcore_exu_decode___stl_sequent__TOP__core__inst_exu__DOT__inst_exu_decode__0(Vcore_exu_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_exu_decode___stl_sequent__TOP__core__inst_exu__DOT__inst_exu_decode__0\n"); );
    // Init
    IData/*31:0*/ __VdfgTmp_h056a0087__0;
    __VdfgTmp_h056a0087__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc3fc61f5__0;
    __VdfgTmp_hc3fc61f5__0 = 0;
    // Body
    if (((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_1_0_11))) {
        vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_1_0_11 = (3U == (3U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if (((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_000))) {
        vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_001))) {
        vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_010))) {
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_011))) {
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_100))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_101))) {
        vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_110))) {
        vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_111))) {
        vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_00))) {
        vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_00 = (0U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_01))) {
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_01 = (1U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_10))) {
        vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_10 = (2U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_11))) {
        vlSymsp->__Vcoverage[1564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_11 = (3U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_000))) {
        vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_001))) {
        vlSymsp->__Vcoverage[1566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_010))) {
        vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_011))) {
        vlSymsp->__Vcoverage[1568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_100))) {
        vlSymsp->__Vcoverage[1569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_101))) {
        vlSymsp->__Vcoverage[1570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_110))) {
        vlSymsp->__Vcoverage[1571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_111))) {
        vlSymsp->__Vcoverage[1572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000000))) {
        vlSymsp->__Vcoverage[1573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000000 = (0U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100000))) {
        vlSymsp->__Vcoverage[1574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100000 = (0x20U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000001))) {
        vlSymsp->__Vcoverage[1575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000001 = (1U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000101))) {
        vlSymsp->__Vcoverage[1576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000101 = (5U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001001))) {
        vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001001 = (9U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001101))) {
        vlSymsp->__Vcoverage[1578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001101 = (0xdU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010101))) {
        vlSymsp->__Vcoverage[1579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010101 = (0x15U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100001))) {
        vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100001 = (0x21U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010001))) {
        vlSymsp->__Vcoverage[1581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010001 = (0x11U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101101))) {
        vlSymsp->__Vcoverage[1582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101101 = (0x2dU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111111))) {
        vlSymsp->__Vcoverage[1583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111111 = (0x7fU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000100))) {
        vlSymsp->__Vcoverage[1584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000100 = (4U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001000))) {
        vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001000 = (8U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001100))) {
        vlSymsp->__Vcoverage[1586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001100 = (0xcU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101100))) {
        vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101100 = (0x2cU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010000))) {
        vlSymsp->__Vcoverage[1588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010000 = (0x10U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010100))) {
        vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010100 = (0x14U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100000))) {
        vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100000 = (0x60U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110000))) {
        vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110000 = (0x70U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010000))) {
        vlSymsp->__Vcoverage[1592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010000 = (0x50U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101000))) {
        vlSymsp->__Vcoverage[1593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101000 = (0x68U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111000))) {
        vlSymsp->__Vcoverage[1594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111000 = (0x78U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010001))) {
        vlSymsp->__Vcoverage[1595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010001 = (0x51U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110001))) {
        vlSymsp->__Vcoverage[1596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110001 = (0x71U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100001))) {
        vlSymsp->__Vcoverage[1597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100001 = (0x61U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101001))) {
        vlSymsp->__Vcoverage[1598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101001 = (0x69U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__rv32_rd_x0))) {
        vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_rd_x0 = (0U == (0x1fU 
                                                & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                   >> 7U)));
    }
    if (((IData)(vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__dec_bjp_test))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_test = vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->decode_dec_bjp_test_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->decode_dec_bjp_test_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r;
    }
    vlSelf->__PVT__rv32_s_imm = (((- (IData)((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                    >> 7U))));
    vlSelf->__PVT__rv32_b_imm = (((- (IData)((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                              >> 0x1fU))) 
                                  << 0xdU) | ((0x1000U 
                                               & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                          >> 7U))))));
    vlSelf->__PVT__rv32_i_imm = (((- (IData)((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                              >> 0x14U));
    vlSelf->__PVT__rv32_j_imm = (((- (IData)((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                           >> 0x14U))))));
    vlSelf->__PVT__dec_jalr = (IData)((0x67U == (0x7fU 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->__PVT__dec_jal = (IData)((0x6fU == (0x7fU 
                                                & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->__PVT__rv32_auipc = (IData)((0x17U == (0x7fU 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    __VdfgTmp_hc3fc61f5__0 = (IData)((0x13U == (0x1fU 
                                                & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    if ((1U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (1U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (2U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (4U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (8U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if (((vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (1U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (2U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (4U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (8U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if (((vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (1U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (2U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (4U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (8U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (1U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (2U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (4U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (8U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((IData)(vlSelf->__PVT__dec_jalr) ^ (IData)(vlSelf->__Vtogcov__dec_jalr))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_jalr = vlSelf->__PVT__dec_jalr;
    }
    if (((IData)(vlSelf->__PVT__dec_jal) ^ (IData)(vlSelf->__Vtogcov__dec_jal))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_jal = vlSelf->__PVT__dec_jal;
    }
    __VdfgTmp_h056a0087__0 = ((- (IData)((IData)(vlSelf->__PVT__dec_jal))) 
                              & vlSelf->__PVT__rv32_j_imm);
    vlSelf->__PVT__dec_bjp = ((IData)(vlSelf->__PVT__dec_jal) 
                              | (IData)(vlSelf->__PVT__dec_jalr));
    if (((IData)(vlSelf->__PVT__rv32_auipc) ^ (IData)(vlSelf->__Vtogcov__rv32_auipc))) {
        vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_auipc = vlSelf->__PVT__rv32_auipc;
    }
    vlSelf->__PVT__dec_rs1en = ((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                 >> 0xfU))) 
                                & ((~ (IData)(vlSelf->__PVT__dec_jal)) 
                                   & (~ (IData)(vlSelf->__PVT__rv32_auipc))));
    vlSelf->__PVT__rv32_op = (IData)(((0x20U == (0x60U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                      & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_system = (IData)(((0x60U == 
                                           (0x60U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                          & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_op_imm = (IData)(((0U == (0x60U 
                                                  & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                          & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__dec_bjp_imm = (__VdfgTmp_h056a0087__0 
                                  | ((- (IData)((IData)(vlSelf->__PVT__dec_jalr))) 
                                     & vlSelf->__PVT__rv32_i_imm));
    if (((IData)(vlSelf->__PVT__dec_bjp) ^ (IData)(vlSelf->__Vtogcov__dec_bjp))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp = vlSelf->__PVT__dec_bjp;
    }
    vlSelf->__PVT__bjp_info_bus = ((0x1ffcfU & vlSelf->__PVT__bjp_info_bus) 
                                   | (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r) 
                                       << 5U) | ((IData)(vlSelf->__PVT__dec_bjp) 
                                                 << 4U)));
    if (((IData)(vlSelf->__PVT__rv32_op) ^ (IData)(vlSelf->__Vtogcov__rv32_op))) {
        vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op = vlSelf->__PVT__rv32_op;
    }
    vlSelf->__PVT__dec_rs2en = (IData)(((0U != (0x1f00000U 
                                                & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                        | (IData)(vlSelf->__PVT__rv32_op)));
    if (((IData)(vlSelf->__PVT__rv32_system) ^ (IData)(vlSelf->__Vtogcov__rv32_system))) {
        vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_system = vlSelf->__PVT__rv32_system;
    }
    vlSelf->__PVT__rv32_ebreak = ((IData)(vlSelf->__PVT__rv32_system) 
                                  & (IData)((0x100000U 
                                             == (0xfff07000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
    vlSelf->__PVT__alu_info_bus = ((0x17ffffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_system) 
                                       & (IData)((0x100000U 
                                                  == 
                                                  (0xfff07000U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)))) 
                                      << 0x13U));
    if (((IData)(vlSelf->__PVT__rv32_op_imm) ^ (IData)(vlSelf->__Vtogcov__rv32_op_imm))) {
        vlSymsp->__Vcoverage[1600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op_imm = vlSelf->__PVT__rv32_op_imm;
    }
    vlSelf->__PVT__rv32_imm_sel_i = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                     | (IData)(vlSelf->__PVT__dec_jalr));
    vlSelf->__PVT__rv32_addi = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                & (0U == (0x7000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    if ((1U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (1U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((2U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (2U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((4U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (4U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((8U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (8U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x10U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x10U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x20U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x20U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x40U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x40U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x80U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x80U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x100U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x100U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x200U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x200U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x400U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x400U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x800U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x800U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x1000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x2000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x4000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x8000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x10000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x20000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x40000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x80000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x100000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x200000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x400000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x800000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x1000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x2000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x4000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x8000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x10000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x20000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x40000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if (((vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x80000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((1U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffeU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (1U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((2U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffdU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (2U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((4U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffbU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (4U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((8U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fff7U 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (8U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffefU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffdfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffbfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ff7fU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1feffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fdffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fbffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1f7ffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1efffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1dfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1bfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x17fffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0xffffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if (((IData)(vlSelf->__PVT__rv32_ebreak) ^ (IData)(vlSelf->__Vtogcov__rv32_ebreak))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_ebreak = vlSelf->__PVT__rv32_ebreak;
    }
    vlSelf->__PVT__alu_op = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                             | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                | (IData)(vlSelf->__PVT__rv32_ebreak)));
    if (((IData)(vlSelf->__PVT__rv32_imm_sel_i) ^ (IData)(vlSelf->__Vtogcov__rv32_imm_sel_i))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_imm_sel_i = vlSelf->__PVT__rv32_imm_sel_i;
    }
    vlSelf->__PVT__dec_imm = (((- (IData)((IData)(vlSelf->__PVT__rv32_imm_sel_i))) 
                               & vlSelf->__PVT__rv32_i_imm) 
                              | ((0xfffff000U & ((- (IData)((IData)(vlSelf->__PVT__rv32_auipc))) 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                 | __VdfgTmp_h056a0087__0));
    vlSelf->__PVT__need_imm = ((IData)(vlSelf->__PVT__rv32_imm_sel_i) 
                               | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                  | (IData)(vlSelf->__PVT__dec_jal)));
    if (((IData)(vlSelf->__PVT__rv32_addi) ^ (IData)(vlSelf->__Vtogcov__rv32_addi))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_addi = vlSelf->__PVT__rv32_addi;
    }
    vlSelf->__PVT__alu_info_bus = ((0x1fffe0U & vlSelf->__PVT__alu_info_bus) 
                                   | (8U | (((IData)(vlSelf->__PVT__rv32_addi) 
                                             | (IData)(vlSelf->__PVT__rv32_auipc)) 
                                            << 4U)));
    vlSelf->__PVT__rv32_nop = ((IData)(vlSelf->__PVT__rv32_addi) 
                               & (IData)(((0U == (0xf8f80U 
                                                  & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                         >> 0x14U)))))));
    if (((IData)(vlSelf->__PVT__alu_op) ^ (IData)(vlSelf->__Vtogcov__alu_op))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_op = vlSelf->__PVT__alu_op;
    }
    if (((IData)(vlSelf->__PVT__need_imm) ^ (IData)(vlSelf->__Vtogcov__need_imm))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__need_imm = vlSelf->__PVT__need_imm;
    }
    if (((IData)(vlSelf->__PVT__rv32_nop) ^ (IData)(vlSelf->__Vtogcov__rv32_nop))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_nop = vlSelf->__PVT__rv32_nop;
    }
    vlSelf->__PVT__alu_info_bus = ((0x1c3fffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_nop) 
                                       << 0x11U) | 
                                      (((IData)(vlSelf->__PVT__rv32_auipc) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->__PVT__need_imm) 
                                         << 0xfU) | 
                                        ((IData)(vlSelf->__PVT__rv32_auipc) 
                                         << 0xeU)))));
    if ((1U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (1U & vlSelf->__PVT__alu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (2U & vlSelf->__PVT__alu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (4U & vlSelf->__PVT__alu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (8U & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0xfffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    vlSelf->__PVT__dec_info = (((- (QData)((IData)(vlSelf->__PVT__alu_op))) 
                                & (QData)((IData)(vlSelf->__PVT__alu_info_bus))) 
                               | ((- (QData)((IData)(vlSelf->__PVT__dec_bjp))) 
                                  & (QData)((IData)(vlSelf->__PVT__bjp_info_bus))));
}

VL_ATTR_COLD void Vcore_exu_decode___configure_coverage(Vcore_exu_decode* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_exu_decode___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 4, 13, "", "v_toggle/exu_decode", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 5, 13, "", "v_toggle/exu_decode", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 7, 24, "", "v_toggle/exu_decode", "rv32_instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 8, 27, "", "v_toggle/exu_decode", "i_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 9, 33, "", "v_toggle/exu_decode", "i_prdt_taken", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1527]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 12, 13, "", "v_toggle/exu_decode", "dec_rs1x0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 13, 13, "", "v_toggle/exu_decode", "dec_rs2x0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 14, 13, "", "v_toggle/exu_decode", "dec_rs1en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 15, 13, "", "v_toggle/exu_decode", "dec_rs2en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 16, 13, "", "v_toggle/exu_decode", "dec_rdwen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 17, 22, "", "v_toggle/exu_decode", "dec_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 17, 22, "", "v_toggle/exu_decode", "dec_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 17, 22, "", "v_toggle/exu_decode", "dec_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 17, 22, "", "v_toggle/exu_decode", "dec_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 17, 22, "", "v_toggle/exu_decode", "dec_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 18, 22, "", "v_toggle/exu_decode", "dec_rs2idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 18, 22, "", "v_toggle/exu_decode", "dec_rs2idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 18, 22, "", "v_toggle/exu_decode", "dec_rs2idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 18, 22, "", "v_toggle/exu_decode", "dec_rs2idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 18, 22, "", "v_toggle/exu_decode", "dec_rs2idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 19, 22, "", "v_toggle/exu_decode", "dec_rdidx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 19, 22, "", "v_toggle/exu_decode", "dec_rdidx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 19, 22, "", "v_toggle/exu_decode", "dec_rdidx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 19, 22, "", "v_toggle/exu_decode", "dec_rdidx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 19, 22, "", "v_toggle/exu_decode", "dec_rdidx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 20, 30, "", "v_toggle/exu_decode", "dec_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 21, 27, "", "v_toggle/exu_decode", "dec_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 22, 22, "", "v_toggle/exu_decode", "dec_info[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 24, 13, "", "v_toggle/exu_decode", "dec_bjp", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 25, 13, "", "v_toggle/exu_decode", "dec_jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 26, 13, "", "v_toggle/exu_decode", "dec_jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 28, 22, "", "v_toggle/exu_decode", "dec_jalr_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 28, 22, "", "v_toggle/exu_decode", "dec_jalr_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 28, 22, "", "v_toggle/exu_decode", "dec_jalr_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 28, 22, "", "v_toggle/exu_decode", "dec_jalr_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 28, 22, "", "v_toggle/exu_decode", "dec_jalr_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 29, 30, "", "v_toggle/exu_decode", "dec_bjp_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 33, 21, "", "v_toggle/exu_decode", "opcode[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 33, 21, "", "v_toggle/exu_decode", "opcode[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 33, 21, "", "v_toggle/exu_decode", "opcode[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 33, 21, "", "v_toggle/exu_decode", "opcode[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 33, 21, "", "v_toggle/exu_decode", "opcode[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 33, 21, "", "v_toggle/exu_decode", "opcode[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 33, 21, "", "v_toggle/exu_decode", "opcode[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 34, 21, "", "v_toggle/exu_decode", "rv32_rd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 34, 21, "", "v_toggle/exu_decode", "rv32_rd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 34, 21, "", "v_toggle/exu_decode", "rv32_rd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 34, 21, "", "v_toggle/exu_decode", "rv32_rd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 34, 21, "", "v_toggle/exu_decode", "rv32_rd[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 35, 21, "", "v_toggle/exu_decode", "rv32_func3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 35, 21, "", "v_toggle/exu_decode", "rv32_func3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 35, 21, "", "v_toggle/exu_decode", "rv32_func3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 36, 21, "", "v_toggle/exu_decode", "rv32_rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 36, 21, "", "v_toggle/exu_decode", "rv32_rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 36, 21, "", "v_toggle/exu_decode", "rv32_rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 36, 21, "", "v_toggle/exu_decode", "rv32_rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 36, 21, "", "v_toggle/exu_decode", "rv32_rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 37, 21, "", "v_toggle/exu_decode", "rv32_rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 37, 21, "", "v_toggle/exu_decode", "rv32_rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 37, 21, "", "v_toggle/exu_decode", "rv32_rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 37, 21, "", "v_toggle/exu_decode", "rv32_rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 37, 21, "", "v_toggle/exu_decode", "rv32_rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 38, 21, "", "v_toggle/exu_decode", "rv32_func7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 38, 21, "", "v_toggle/exu_decode", "rv32_func7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 38, 21, "", "v_toggle/exu_decode", "rv32_func7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 38, 21, "", "v_toggle/exu_decode", "rv32_func7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 38, 21, "", "v_toggle/exu_decode", "rv32_func7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 38, 21, "", "v_toggle/exu_decode", "rv32_func7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 38, 21, "", "v_toggle/exu_decode", "rv32_func7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1552]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 41, 10, "", "v_toggle/exu_decode", "opcode_1_0_11", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1553]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 43, 10, "", "v_toggle/exu_decode", "opcode_4_2_000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1554]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 44, 10, "", "v_toggle/exu_decode", "opcode_4_2_001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1555]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 45, 10, "", "v_toggle/exu_decode", "opcode_4_2_010", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1556]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 46, 10, "", "v_toggle/exu_decode", "opcode_4_2_011", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1557]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 47, 10, "", "v_toggle/exu_decode", "opcode_4_2_100", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1558]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 48, 10, "", "v_toggle/exu_decode", "opcode_4_2_101", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1559]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 49, 10, "", "v_toggle/exu_decode", "opcode_4_2_110", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1560]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 50, 10, "", "v_toggle/exu_decode", "opcode_4_2_111", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1561]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 52, 10, "", "v_toggle/exu_decode", "opcode_6_5_00", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1562]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 53, 10, "", "v_toggle/exu_decode", "opcode_6_5_01", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1563]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 54, 10, "", "v_toggle/exu_decode", "opcode_6_5_10", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1564]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 55, 10, "", "v_toggle/exu_decode", "opcode_6_5_11", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1565]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 58, 10, "", "v_toggle/exu_decode", "rv32_func3_000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1566]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 59, 10, "", "v_toggle/exu_decode", "rv32_func3_001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1567]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 60, 10, "", "v_toggle/exu_decode", "rv32_func3_010", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1568]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 61, 10, "", "v_toggle/exu_decode", "rv32_func3_011", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1569]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 62, 10, "", "v_toggle/exu_decode", "rv32_func3_100", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1570]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 63, 10, "", "v_toggle/exu_decode", "rv32_func3_101", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1571]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 64, 10, "", "v_toggle/exu_decode", "rv32_func3_110", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1572]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 65, 10, "", "v_toggle/exu_decode", "rv32_func3_111", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1573]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 68, 10, "", "v_toggle/exu_decode", "rv32_func7_0000000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1574]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 69, 10, "", "v_toggle/exu_decode", "rv32_func7_0100000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1575]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 70, 10, "", "v_toggle/exu_decode", "rv32_func7_0000001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1576]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 71, 10, "", "v_toggle/exu_decode", "rv32_func7_0000101", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1577]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 72, 10, "", "v_toggle/exu_decode", "rv32_func7_0001001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1578]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 73, 10, "", "v_toggle/exu_decode", "rv32_func7_0001101", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1579]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 74, 10, "", "v_toggle/exu_decode", "rv32_func7_0010101", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1580]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 75, 10, "", "v_toggle/exu_decode", "rv32_func7_0100001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1581]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 76, 10, "", "v_toggle/exu_decode", "rv32_func7_0010001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1582]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 77, 10, "", "v_toggle/exu_decode", "rv32_func7_0101101", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1583]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 78, 10, "", "v_toggle/exu_decode", "rv32_func7_1111111", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1584]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 79, 10, "", "v_toggle/exu_decode", "rv32_func7_0000100", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1585]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 80, 10, "", "v_toggle/exu_decode", "rv32_func7_0001000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1586]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 81, 10, "", "v_toggle/exu_decode", "rv32_func7_0001100", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1587]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 82, 10, "", "v_toggle/exu_decode", "rv32_func7_0101100", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1588]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 83, 10, "", "v_toggle/exu_decode", "rv32_func7_0010000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1589]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 84, 10, "", "v_toggle/exu_decode", "rv32_func7_0010100", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1590]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 85, 10, "", "v_toggle/exu_decode", "rv32_func7_1100000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1591]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 86, 10, "", "v_toggle/exu_decode", "rv32_func7_1110000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1592]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 87, 10, "", "v_toggle/exu_decode", "rv32_func7_1010000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1593]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 88, 10, "", "v_toggle/exu_decode", "rv32_func7_1101000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1594]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 89, 10, "", "v_toggle/exu_decode", "rv32_func7_1111000", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1595]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 90, 10, "", "v_toggle/exu_decode", "rv32_func7_1010001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1596]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 91, 10, "", "v_toggle/exu_decode", "rv32_func7_1110001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1597]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 92, 10, "", "v_toggle/exu_decode", "rv32_func7_1100001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1598]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 93, 10, "", "v_toggle/exu_decode", "rv32_func7_1101001", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1527]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 95, 10, "", "v_toggle/exu_decode", "rv32_rs1_x0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 96, 10, "", "v_toggle/exu_decode", "rv32_rs2_x0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1599]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 97, 10, "", "v_toggle/exu_decode", "rv32_rd_x0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 100, 13, "", "v_toggle/exu_decode", "rv32_jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 101, 13, "", "v_toggle/exu_decode", "rv32_jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1600]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 103, 13, "", "v_toggle/exu_decode", "rv32_op_imm", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1601]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 104, 13, "", "v_toggle/exu_decode", "rv32_op", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1602]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 105, 13, "", "v_toggle/exu_decode", "rv32_system", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1603]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 106, 13, "", "v_toggle/exu_decode", "rv32_auipc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1603]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 107, 13, "", "v_toggle/exu_decode", "rv32_lui", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1604]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 111, 13, "", "v_toggle/exu_decode", "rv32_ebreak", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1605]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 114, 13, "", "v_toggle/exu_decode", "rv32_addi", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1606]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 116, 13, "", "v_toggle/exu_decode", "rv32_nop", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1604]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 118, 13, "", "v_toggle/exu_decode", "ecall_ebreak", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1607]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 121, 13, "", "v_toggle/exu_decode", "alu_op", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1608]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 125, 13, "", "v_toggle/exu_decode", "need_imm", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1609]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1610]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1611]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1612]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1613]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1614]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1615]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1616]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1617]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1618]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1619]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1620]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1621]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1622]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1623]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1624]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1625]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1626]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1627]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1628]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1629]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 127, 211, "", "v_toggle/exu_decode", "alu_info_bus[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 139, 13, "", "v_toggle/exu_decode", "rv32_need_rs1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 144, 13, "", "v_toggle/exu_decode", "rv32_need_rs2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 147, 13, "", "v_toggle/exu_decode", "rv32_need_rd", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1630]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1631]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1632]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1633]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1634]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1635]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1636]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1637]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1638]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1639]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1640]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1641]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1642]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1643]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1644]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1645]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1646]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1647]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1648]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1649]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1650]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1651]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1652]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1653]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1654]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1655]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1656]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1657]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1658]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1659]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1660]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1661]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 151, 17, "", "v_toggle/exu_decode", "rv32_i_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1662]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1663]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1664]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1665]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1666]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1667]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1668]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1669]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1670]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1671]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1672]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1673]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1674]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1675]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1676]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1677]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1678]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1679]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1680]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1681]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1682]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1683]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1684]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1685]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1686]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1687]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1688]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1689]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1690]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1691]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1692]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1693]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 155, 17, "", "v_toggle/exu_decode", "rv32_s_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1694]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1695]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1696]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1697]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1698]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1699]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1700]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1701]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1702]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1703]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1704]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1705]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1706]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1707]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1708]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1709]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1710]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1711]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1712]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1713]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1714]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1715]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1716]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1717]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1718]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1719]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1720]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1721]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1722]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1723]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1724]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1725]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 160, 17, "", "v_toggle/exu_decode", "rv32_b_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 168, 17, "", "v_toggle/exu_decode", "rv32_u_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1726]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1727]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1728]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1729]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1730]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1731]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1732]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1733]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1734]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1735]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1736]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1737]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1738]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1739]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1740]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1741]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1742]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1743]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1744]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1745]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1746]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1747]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1748]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1749]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1750]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1751]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1752]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1753]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1754]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1755]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1756]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1757]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 169, 17, "", "v_toggle/exu_decode", "rv32_j_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1758]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 178, 13, "", "v_toggle/exu_decode", "rv32_imm_sel_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 179, 13, "", "v_toggle/exu_decode", "rv32_imm_sel_jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1630]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1631]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1632]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1633]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1634]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1635]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1636]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1637]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1638]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1639]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1640]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1641]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1642]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1643]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1644]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1645]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1646]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1647]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1648]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1649]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1650]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1651]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1652]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1653]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1654]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1655]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1656]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1657]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1658]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1659]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1660]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1661]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 180, 21, "", "v_toggle/exu_decode", "rv32_jalr_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1603]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 181, 13, "", "v_toggle/exu_decode", "rv32_imm_sel_u", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 182, 13, "", "v_toggle/exu_decode", "rv32_imm_sel_j", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 183, 13, "", "v_toggle/exu_decode", "rv32_imm_sel_jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1726]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1727]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1728]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1729]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1730]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1731]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1732]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1733]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1734]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1735]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1736]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1737]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1738]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1739]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1740]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1741]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1742]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1743]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1744]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1745]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1746]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1747]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1748]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1749]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1750]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1751]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1752]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1753]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1754]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1755]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1756]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1757]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 184, 21, "", "v_toggle/exu_decode", "rv32_jal_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 186, 21, "", "v_toggle/exu_decode", "rv32_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1608]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 193, 13, "", "v_toggle/exu_decode", "rv32_need_imm", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 221, 13, "", "v_toggle/exu_decode", "bjp_op", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1759]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1760]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1761]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1762]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1763]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1764]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1765]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1766]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1767]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1768]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1769]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1770]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1771]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1772]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1773]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1774]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1775]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 223, 174, "", "v_toggle/exu_decode", "bjp_info_bus[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1776]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/exu_decode.v", 240, 10, "", "v_toggle/exu_decode", "dec_bjp_test", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".decode_dec_bjp_test_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1605]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".decode_dec_bjp_test_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1776]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".decode_dec_bjp_test_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".decode_dec_bjp_test_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".decode_dec_bjp_test_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1777]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".decode_dec_bjp_test_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1778]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".decode_dec_bjp_test_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1779]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".decode_dec_bjp_test_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1780]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".decode_dec_bjp_test_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1781]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".decode_dec_bjp_test_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
}
