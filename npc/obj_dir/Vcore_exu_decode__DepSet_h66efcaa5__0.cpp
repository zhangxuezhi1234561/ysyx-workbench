// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_exu_decode.h"

VL_INLINE_OPT void Vcore_exu_decode___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0(Vcore_exu_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_exu_decode___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0\n"); );
    // Init
    IData/*31:0*/ __VdfgTmp_h056a0087__0;
    __VdfgTmp_h056a0087__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc3fc61f5__0;
    __VdfgTmp_hc3fc61f5__0 = 0;
    // Body
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0x14U))) ^ (IData)(vlSelf->__Vtogcov__dec_rs2x0))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_rs2x0 = (0U == (0x1fU 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x14U)));
    }
    if (((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__dec_rdwen))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_rdwen = (0U != (0x1fU 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 7U)));
    }
    if (((3U == (3U & vlSymsp->TOP.ifu_rsp_instr)) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_1_0_11))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_1_0_11 = (3U == (3U 
                                                   & vlSymsp->TOP.ifu_rsp_instr));
    }
    if (((0U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_000))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((1U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_001))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((2U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_010))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((3U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_011))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((4U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_100))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((5U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_101))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((6U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_110))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((7U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_111))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((0U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_00))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_00 = (0U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((1U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_01))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_01 = (1U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((2U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_10))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_10 = (2U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((3U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_11))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_11 = (3U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((0U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_000))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((1U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_001))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((2U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_010))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((3U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_011))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((4U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_100))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((5U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_101))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((6U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_110))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((7U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_111))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((0U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000000))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000000 = (0U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x20U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100000))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100000 = (0x20U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((1U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000001))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000001 = (1U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((5U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000101))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000101 = (5U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((9U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001001))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001001 = (9U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0xdU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001101))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001101 = (0xdU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x15U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010101))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010101 = (0x15U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x21U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100001))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100001 = (0x21U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x11U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010001))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010001 = (0x11U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x2dU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101101))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101101 = (0x2dU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x7fU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111111))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111111 = (0x7fU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((4U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000100))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000100 = (4U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((8U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001000))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001000 = (8U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0xcU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001100))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001100 = (0xcU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x2cU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101100))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101100 = (0x2cU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x10U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010000))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010000 = (0x10U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x14U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010100))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010100 = (0x14U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x60U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100000))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100000 = (0x60U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x70U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110000))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110000 = (0x70U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x50U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010000))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010000 = (0x50U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x68U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101000))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101000 = (0x68U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x78U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111000))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111000 = (0x78U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x51U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010001))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010001 = (0x51U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x71U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110001))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110001 = (0x71U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x61U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100001))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100001 = (0x61U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x69U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101001))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101001 = (0x69U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__rv32_rd_x0))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_rd_x0 = (0U == (0x1fU 
                                                & (vlSymsp->TOP.ifu_rsp_instr 
                                                   >> 7U)));
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
    vlSelf->__PVT__dec_jal = (IData)((0x6fU == (0x7fU 
                                                & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__dec_jalr = (IData)((0x67U == (0x7fU 
                                                 & vlSymsp->TOP.ifu_rsp_instr)));
    __VdfgTmp_hc3fc61f5__0 = (IData)((0x13U == (0x1fU 
                                                & vlSymsp->TOP.ifu_rsp_instr)));
    if ((1U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (1U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (2U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (4U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (8U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if (((vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (1U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (2U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (4U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (8U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if (((vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (1U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (2U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (4U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (8U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (1U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (2U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (4U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (8U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((IData)(vlSelf->__PVT__rv32_auipc) ^ (IData)(vlSelf->__Vtogcov__rv32_auipc))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_auipc = vlSelf->__PVT__rv32_auipc;
    }
    vlSelf->__PVT__dec_rs1en = ((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                                                 >> 0xfU))) 
                                & ((~ (IData)(vlSelf->__PVT__dec_jal)) 
                                   & (~ (IData)(vlSelf->__PVT__rv32_auipc))));
    __VdfgTmp_h056a0087__0 = ((- (IData)((IData)(vlSelf->__PVT__dec_jal))) 
                              & vlSelf->__PVT__rv32_j_imm);
    vlSelf->__PVT__dec_bjp = ((IData)(vlSelf->__PVT__dec_jal) 
                              | (IData)(vlSelf->__PVT__dec_jalr));
    vlSelf->__PVT__rv32_op = (IData)(((0x20U == (0x60U 
                                                 & vlSymsp->TOP.ifu_rsp_instr)) 
                                      & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_system = (IData)(((0x60U == 
                                           (0x60U & vlSymsp->TOP.ifu_rsp_instr)) 
                                          & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_op_imm = (IData)(((0U == (0x60U 
                                                  & vlSymsp->TOP.ifu_rsp_instr)) 
                                          & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__dec_bjp_imm = (__VdfgTmp_h056a0087__0 
                                  | ((- (IData)((IData)(vlSelf->__PVT__dec_jalr))) 
                                     & vlSelf->__PVT__rv32_i_imm));
    vlSelf->__PVT__bjp_info_bus = ((0x1ffcfU & vlSelf->__PVT__bjp_info_bus) 
                                   | ((IData)(vlSelf->__PVT__dec_bjp) 
                                      << 4U));
    if (((IData)(vlSelf->__PVT__rv32_op) ^ (IData)(vlSelf->__Vtogcov__rv32_op))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op = vlSelf->__PVT__rv32_op;
    }
    vlSelf->__PVT__dec_rs2en = (IData)(((0U != (0x1f00000U 
                                                & vlSymsp->TOP.ifu_rsp_instr)) 
                                        | (IData)(vlSelf->__PVT__rv32_op)));
    if (((IData)(vlSelf->__PVT__rv32_system) ^ (IData)(vlSelf->__Vtogcov__rv32_system))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op_imm = vlSelf->__PVT__rv32_op_imm;
    }
    vlSelf->__PVT__rv32_imm_sel_i = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                     | (IData)(vlSelf->__PVT__dec_jalr));
    vlSelf->__PVT__rv32_addi = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                & (0U == (0x7000U & vlSymsp->TOP.ifu_rsp_instr)));
    if ((1U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffeU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (1U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((2U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffdU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (2U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((4U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffbU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (4U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((8U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fff7U 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (8U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffefU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffdfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffbfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ff7fU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1feffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fdffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fbffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1f7ffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1efffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1dfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1bfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x17fffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0xffffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if (((IData)(vlSelf->__PVT__rv32_ebreak) ^ (IData)(vlSelf->__Vtogcov__rv32_ebreak))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_ebreak = vlSelf->__PVT__rv32_ebreak;
    }
    vlSelf->__PVT__alu_op = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                             | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                | (IData)(vlSelf->__PVT__rv32_ebreak)));
    if (((IData)(vlSelf->__PVT__rv32_imm_sel_i) ^ (IData)(vlSelf->__Vtogcov__rv32_imm_sel_i))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->__PVT__alu_op) ^ (IData)(vlSelf->__Vtogcov__alu_op))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_op = vlSelf->__PVT__alu_op;
    }
    if ((1U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (1U & vlSelf->__PVT__dec_imm));
    }
    if ((2U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (2U & vlSelf->__PVT__dec_imm));
    }
    if ((4U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (4U & vlSelf->__PVT__dec_imm));
    }
    if ((8U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (8U & vlSelf->__PVT__dec_imm));
    }
    if ((0x10U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10U & vlSelf->__PVT__dec_imm));
    }
    if ((0x20U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20U & vlSelf->__PVT__dec_imm));
    }
    if ((0x40U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40U & vlSelf->__PVT__dec_imm));
    }
    if ((0x80U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80U & vlSelf->__PVT__dec_imm));
    }
    if ((0x100U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x100U & vlSelf->__PVT__dec_imm));
    }
    if ((0x200U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x200U & vlSelf->__PVT__dec_imm));
    }
    if ((0x400U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x400U & vlSelf->__PVT__dec_imm));
    }
    if ((0x800U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x800U & vlSelf->__PVT__dec_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x1000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x2000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x4000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x8000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x100000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x200000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x400000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x800000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x1000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x2000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x4000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x8000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if (((vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if (((IData)(vlSelf->__PVT__need_imm) ^ (IData)(vlSelf->__Vtogcov__need_imm))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__need_imm = vlSelf->__PVT__need_imm;
    }
    if (((IData)(vlSelf->__PVT__rv32_nop) ^ (IData)(vlSelf->__Vtogcov__rv32_nop))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (1U & vlSelf->__PVT__alu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (2U & vlSelf->__PVT__alu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (4U & vlSelf->__PVT__alu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (8U & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffffeULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | (IData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__dec_info)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 1U))))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
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

VL_INLINE_OPT void Vcore_exu_decode___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0(Vcore_exu_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_exu_decode___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r 
        = ((IData)(vlSymsp->TOP.rst) & (IData)(vlSelf->__PVT__rv32_addi));
    if (((IData)(vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__dec_bjp_test))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_test = vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->decode_dec_bjp_test_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->decode_dec_bjp_test_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__decode_dec_bjp_test_dfflr__DOT__qout_r;
    }
}

VL_INLINE_OPT void Vcore_exu_decode___nba_sequent__TOP__core__inst_exu__DOT__inst_exu_decode__1(Vcore_exu_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_exu_decode___nba_sequent__TOP__core__inst_exu__DOT__inst_exu_decode__1\n"); );
    // Init
    IData/*31:0*/ __VdfgTmp_h056a0087__0;
    __VdfgTmp_h056a0087__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc3fc61f5__0;
    __VdfgTmp_hc3fc61f5__0 = 0;
    // Body
    if (((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_1_0_11))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_1_0_11 = (3U == (3U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if (((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_000))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_001))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_010))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_011))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_100))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_101))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_110))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_111))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_00))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_00 = (0U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_01))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_01 = (1U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_10))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_10 = (2U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_11))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_11 = (3U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_000))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_001))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_010))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_011))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_100))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_101))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_110))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_111))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000000))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000000 = (0U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100000))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100000 = (0x20U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000001))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000001 = (1U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000101))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000101 = (5U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001001))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001001 = (9U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001101))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001101 = (0xdU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010101))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010101 = (0x15U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100001))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100001 = (0x21U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010001))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010001 = (0x11U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101101))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101101 = (0x2dU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111111))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111111 = (0x7fU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000100))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000100 = (4U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001000))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001000 = (8U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001100))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001100 = (0xcU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101100))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101100 = (0x2cU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010000))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010000 = (0x10U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010100))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010100 = (0x14U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100000))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100000 = (0x60U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110000))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110000 = (0x70U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010000))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010000 = (0x50U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101000))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101000 = (0x68U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111000))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111000 = (0x78U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010001))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010001 = (0x51U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110001))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110001 = (0x71U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100001))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100001 = (0x61U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101001))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101001 = (0x69U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__rv32_rd_x0))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_rd_x0 = (0U == (0x1fU 
                                                & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                   >> 7U)));
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
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (1U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (2U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (4U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (8U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if (((vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (1U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (2U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (4U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (8U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if (((vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (1U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (2U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (4U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (8U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (1U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (2U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (4U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (8U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((IData)(vlSelf->__PVT__dec_jalr) ^ (IData)(vlSelf->__Vtogcov__dec_jalr))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_jalr = vlSelf->__PVT__dec_jalr;
    }
    if (((IData)(vlSelf->__PVT__dec_jal) ^ (IData)(vlSelf->__Vtogcov__dec_jal))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_jal = vlSelf->__PVT__dec_jal;
    }
    __VdfgTmp_h056a0087__0 = ((- (IData)((IData)(vlSelf->__PVT__dec_jal))) 
                              & vlSelf->__PVT__rv32_j_imm);
    vlSelf->__PVT__dec_bjp = ((IData)(vlSelf->__PVT__dec_jal) 
                              | (IData)(vlSelf->__PVT__dec_jalr));
    if (((IData)(vlSelf->__PVT__rv32_auipc) ^ (IData)(vlSelf->__Vtogcov__rv32_auipc))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp = vlSelf->__PVT__dec_bjp;
    }
    vlSelf->__PVT__bjp_info_bus = ((0x1ffcfU & vlSelf->__PVT__bjp_info_bus) 
                                   | (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r) 
                                       << 5U) | ((IData)(vlSelf->__PVT__dec_bjp) 
                                                 << 4U)));
    if (((IData)(vlSelf->__PVT__rv32_op) ^ (IData)(vlSelf->__Vtogcov__rv32_op))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op = vlSelf->__PVT__rv32_op;
    }
    vlSelf->__PVT__dec_rs2en = (IData)(((0U != (0x1f00000U 
                                                & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                        | (IData)(vlSelf->__PVT__rv32_op)));
    if (((IData)(vlSelf->__PVT__rv32_system) ^ (IData)(vlSelf->__Vtogcov__rv32_system))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op_imm = vlSelf->__PVT__rv32_op_imm;
    }
    vlSelf->__PVT__rv32_imm_sel_i = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                     | (IData)(vlSelf->__PVT__dec_jalr));
    vlSelf->__PVT__rv32_addi = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                & (0U == (0x7000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    if ((1U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (1U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((2U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (2U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((4U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (4U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((8U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (8U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x10U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x10U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x20U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x20U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x40U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x40U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x80U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x80U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x100U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x100U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x200U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x200U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x400U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x400U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x800U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x800U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x1000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x2000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x4000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x8000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x10000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x20000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x40000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x80000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x100000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x200000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x400000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x800000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x1000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x2000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x4000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x8000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x10000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x20000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x40000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if (((vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x80000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((1U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffeU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (1U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((2U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffdU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (2U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((4U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffbU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (4U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((8U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fff7U 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (8U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffefU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffdfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffbfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ff7fU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1feffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fdffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fbffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1f7ffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1efffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1dfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1bfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x17fffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0xffffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if (((IData)(vlSelf->__PVT__rv32_ebreak) ^ (IData)(vlSelf->__Vtogcov__rv32_ebreak))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_ebreak = vlSelf->__PVT__rv32_ebreak;
    }
    vlSelf->__PVT__alu_op = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                             | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                | (IData)(vlSelf->__PVT__rv32_ebreak)));
    if (((IData)(vlSelf->__PVT__rv32_imm_sel_i) ^ (IData)(vlSelf->__Vtogcov__rv32_imm_sel_i))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_op = vlSelf->__PVT__alu_op;
    }
    if (((IData)(vlSelf->__PVT__need_imm) ^ (IData)(vlSelf->__Vtogcov__need_imm))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__need_imm = vlSelf->__PVT__need_imm;
    }
    if (((IData)(vlSelf->__PVT__rv32_nop) ^ (IData)(vlSelf->__Vtogcov__rv32_nop))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (1U & vlSelf->__PVT__alu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (2U & vlSelf->__PVT__alu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (4U & vlSelf->__PVT__alu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (8U & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
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
