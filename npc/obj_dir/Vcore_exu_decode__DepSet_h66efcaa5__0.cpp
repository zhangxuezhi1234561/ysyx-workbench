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
    IData/*31:0*/ __VdfgTmp_hf164caa5__0;
    __VdfgTmp_hf164caa5__0 = 0;
    IData/*31:0*/ __VdfgTmp_h056a0087__0;
    __VdfgTmp_h056a0087__0 = 0;
    CData/*0:0*/ __VdfgTmp_h43ab29a7__0;
    __VdfgTmp_h43ab29a7__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2f17b007__0;
    __VdfgTmp_h2f17b007__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc3fc61f5__0;
    __VdfgTmp_hc3fc61f5__0 = 0;
    // Body
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0x14U))) ^ (IData)(vlSelf->__Vtogcov__dec_rs2x0))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_rs2x0 = (0U == (0x1fU 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x14U)));
    }
    if (((3U == (3U & vlSymsp->TOP.ifu_rsp_instr)) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_1_0_11))) {
        vlSymsp->__Vcoverage[2022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_1_0_11 = (3U == (3U 
                                                   & vlSymsp->TOP.ifu_rsp_instr));
    }
    if (((0U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_000))) {
        vlSymsp->__Vcoverage[2023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((1U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_001))) {
        vlSymsp->__Vcoverage[2024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((2U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_010))) {
        vlSymsp->__Vcoverage[2025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((3U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_011))) {
        vlSymsp->__Vcoverage[2026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((4U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_100))) {
        vlSymsp->__Vcoverage[2027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((5U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_101))) {
        vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((6U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_110))) {
        vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((7U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_111))) {
        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((0U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_00))) {
        vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_00 = (0U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((1U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_01))) {
        vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_01 = (1U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((2U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_10))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_10 = (2U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((3U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_11))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_11 = (3U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((0U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_000))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((1U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_001))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((2U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_010))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((3U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_011))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((4U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_100))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((5U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_101))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((6U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_110))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((7U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_111))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((0U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000000))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000000 = (0U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x20U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100000))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100000 = (0x20U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((1U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000001))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000001 = (1U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((5U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000101))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000101 = (5U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((9U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001001))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001001 = (9U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0xdU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001101))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001101 = (0xdU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x15U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010101))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010101 = (0x15U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x21U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100001))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100001 = (0x21U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x11U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010001))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010001 = (0x11U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x2dU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101101))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101101 = (0x2dU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x7fU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111111))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111111 = (0x7fU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((4U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000100))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000100 = (4U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((8U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001000))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001000 = (8U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0xcU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001100))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001100 = (0xcU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x2cU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101100))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101100 = (0x2cU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x10U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010000))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010000 = (0x10U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x14U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010100))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010100 = (0x14U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x60U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100000))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100000 = (0x60U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x70U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110000))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110000 = (0x70U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x50U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010000))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010000 = (0x50U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x68U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101000))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101000 = (0x68U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x78U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111000))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111000 = (0x78U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x51U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010001))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010001 = (0x51U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x71U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110001))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110001 = (0x71U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x61U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100001))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100001 = (0x61U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x69U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101001))) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101001 = (0x69U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__rv32_rd_x0))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__PVT__rv32_auipc = (IData)((0x17U == (0x7fU 
                                                   & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__rv32_i_imm = (((- (IData)((vlSymsp->TOP.ifu_rsp_instr 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSymsp->TOP.ifu_rsp_instr 
                                              >> 0x14U));
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
    __VdfgTmp_hc3fc61f5__0 = (IData)((0x13U == (0x1fU 
                                                & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__dec_jal = (IData)((0x6fU == (0x7fU 
                                                & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__dec_jalr = (IData)((0x67U == (0x7fU 
                                                 & vlSymsp->TOP.ifu_rsp_instr)));
    __VdfgTmp_h2f17b007__0 = (IData)((3U == (0x1fU 
                                             & vlSymsp->TOP.ifu_rsp_instr)));
    if ((1U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (1U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (2U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (4U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (8U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if (((vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if (((IData)(vlSelf->__PVT__rv32_auipc) ^ (IData)(vlSelf->__Vtogcov__rv32_auipc))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_auipc = vlSelf->__PVT__rv32_auipc;
    }
    if ((1U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (1U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (2U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (4U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (8U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (1U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (2U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (4U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (8U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if (((vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (1U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (2U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (4U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (8U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    vlSelf->__PVT__rv32_system = (IData)(((0x60U == 
                                           (0x60U & vlSymsp->TOP.ifu_rsp_instr)) 
                                          & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_op = (IData)(((0x20U == (0x60U 
                                                 & vlSymsp->TOP.ifu_rsp_instr)) 
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
    __VdfgTmp_h43ab29a7__0 = ((IData)(vlSelf->__PVT__dec_jal) 
                              | (IData)(vlSelf->__PVT__dec_jalr));
    vlSelf->__PVT__bjp_info_bus = ((0x1efffU & vlSelf->__PVT__bjp_info_bus) 
                                   | ((IData)(((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSymsp->TOP.ifu_rsp_instr)) 
                                               & (IData)(__VdfgTmp_h2f17b007__0))) 
                                      << 0xcU));
    vlSelf->__PVT__rv32_load = (IData)(((0U == (0x60U 
                                                & vlSymsp->TOP.ifu_rsp_instr)) 
                                        & (IData)(__VdfgTmp_h2f17b007__0)));
    vlSelf->__PVT__rv32_store = (IData)(((0x20U == 
                                          (0x60U & vlSymsp->TOP.ifu_rsp_instr)) 
                                         & (IData)(__VdfgTmp_h2f17b007__0)));
    vlSelf->__PVT__dec_bxx = (IData)(((0x60U == (0x60U 
                                                 & vlSymsp->TOP.ifu_rsp_instr)) 
                                      & (IData)(__VdfgTmp_h2f17b007__0)));
    if (((IData)(vlSelf->__PVT__rv32_system) ^ (IData)(vlSelf->__Vtogcov__rv32_system))) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->__PVT__rv32_op) ^ (IData)(vlSelf->__Vtogcov__rv32_op))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op = vlSelf->__PVT__rv32_op;
    }
    if ((((IData)(vlSelf->__PVT__rv32_op) & (IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0xfe007000U 
                                                      & vlSymsp->TOP.ifu_rsp_instr)))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_xor))) {
        vlSymsp->__Vcoverage[2083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_xor = ((IData)(vlSelf->__PVT__rv32_op) 
                                       & (IData)((0x4000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSymsp->TOP.ifu_rsp_instr))));
    }
    if ((((IData)(vlSelf->__PVT__rv32_op) & (IData)(
                                                    (0x6000U 
                                                     == 
                                                     (0xfe007000U 
                                                      & vlSymsp->TOP.ifu_rsp_instr)))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_or))) {
        vlSymsp->__Vcoverage[2084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_or = ((IData)(vlSelf->__PVT__rv32_op) 
                                      & (IData)((0x6000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSymsp->TOP.ifu_rsp_instr))));
    }
    vlSelf->__PVT__alu_info_bus = ((0x1fffbfU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_op) 
                                       & (IData)((0x4000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSymsp->TOP.ifu_rsp_instr)))) 
                                      << 6U));
    vlSelf->__PVT__alu_info_bus = ((0x1ffbffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_op) 
                                       & (IData)((0x6000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSymsp->TOP.ifu_rsp_instr)))) 
                                      << 0xaU));
    vlSelf->__PVT__rv32_add = ((IData)(vlSelf->__PVT__rv32_op) 
                               & (IData)((0U == (0xfe007000U 
                                                 & vlSymsp->TOP.ifu_rsp_instr))));
    vlSelf->__PVT__rv32_sltu = ((IData)(vlSelf->__PVT__rv32_op) 
                                & (IData)((0x3000U 
                                           == (0xfe007000U 
                                               & vlSymsp->TOP.ifu_rsp_instr))));
    if (((IData)(vlSelf->__PVT__rv32_op_imm) ^ (IData)(vlSelf->__Vtogcov__rv32_op_imm))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op_imm = vlSelf->__PVT__rv32_op_imm;
    }
    vlSelf->__PVT__rv32_sltiu = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                 & (0x3000U == (0x7000U 
                                                & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__rv32_addi = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                & (0U == (0x7000U & vlSymsp->TOP.ifu_rsp_instr)));
    if (((IData)(vlSelf->__PVT__rv32_load) ^ (IData)(vlSelf->__Vtogcov__rv32_load))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_load = vlSelf->__PVT__rv32_load;
    }
    if ((((IData)(vlSelf->__PVT__rv32_load) & (0x2000U 
                                               == (0x7000U 
                                                   & vlSymsp->TOP.ifu_rsp_instr))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_lw))) {
        vlSymsp->__Vcoverage[2086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_lw = ((IData)(vlSelf->__PVT__rv32_load) 
                                      & (0x2000U == 
                                         (0x7000U & vlSymsp->TOP.ifu_rsp_instr)));
    }
    vlSelf->__PVT__rv32_imm_sel_i = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                     | ((IData)(vlSelf->__PVT__dec_jalr) 
                                        | (IData)(vlSelf->__PVT__rv32_load)));
    if (((IData)(vlSelf->__PVT__rv32_store) ^ (IData)(vlSelf->__Vtogcov__rv32_store))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_store = vlSelf->__PVT__rv32_store;
    }
    if ((((IData)(vlSelf->__PVT__rv32_store) & (0x2000U 
                                                == 
                                                (0x7000U 
                                                 & vlSymsp->TOP.ifu_rsp_instr))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_sw))) {
        vlSymsp->__Vcoverage[2087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_sw = ((IData)(vlSelf->__PVT__rv32_store) 
                                      & (0x2000U == 
                                         (0x7000U & vlSymsp->TOP.ifu_rsp_instr)));
    }
    vlSelf->__PVT__amoldst_op = ((IData)(vlSelf->__PVT__rv32_load) 
                                 | (IData)(vlSelf->__PVT__rv32_store));
    vlSelf->__PVT__agu_info_bus = ((0x1ffe00U & vlSelf->__PVT__agu_info_bus) 
                                   | (9U | ((0x1c0U 
                                             & (vlSymsp->TOP.ifu_rsp_instr 
                                                >> 6U)) 
                                            | (((IData)(vlSelf->__PVT__rv32_store) 
                                                << 5U) 
                                               | ((IData)(vlSelf->__PVT__rv32_load) 
                                                  << 4U)))));
    vlSelf->__PVT__dec_rdwen = ((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                                                 >> 7U))) 
                                & (~ ((IData)(vlSelf->__PVT__dec_bxx) 
                                      | (IData)(vlSelf->__PVT__rv32_store))));
    vlSelf->__PVT__dec_rs2en = ((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                                                 >> 0x14U))) 
                                & ((IData)(vlSelf->__PVT__dec_bxx) 
                                   | ((IData)(vlSelf->__PVT__rv32_store) 
                                      | (IData)(vlSelf->__PVT__rv32_op))));
    vlSelf->__PVT__rv32_beq = ((IData)(vlSelf->__PVT__dec_bxx) 
                               & (0U == (0x7000U & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__rv32_bne = ((IData)(vlSelf->__PVT__dec_bxx) 
                               & (0x1000U == (0x7000U 
                                              & vlSymsp->TOP.ifu_rsp_instr)));
    vlSelf->__PVT__dec_bjp = ((IData)(__VdfgTmp_h43ab29a7__0) 
                              | (IData)(vlSelf->__PVT__dec_bxx));
    __VdfgTmp_hf164caa5__0 = ((- (IData)((IData)(vlSelf->__PVT__dec_bxx))) 
                              & vlSelf->__PVT__rv32_b_imm);
    if (((IData)(vlSelf->__PVT__rv32_ebreak) ^ (IData)(vlSelf->__Vtogcov__rv32_ebreak))) {
        vlSymsp->__Vcoverage[2078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_ebreak = vlSelf->__PVT__rv32_ebreak;
    }
    vlSelf->__PVT__alu_op = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                             | (((1U != (vlSymsp->TOP.ifu_rsp_instr 
                                         >> 0x19U)) 
                                 & (IData)(vlSelf->__PVT__rv32_op)) 
                                | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                   | (IData)(vlSelf->__PVT__rv32_ebreak))));
    if (((IData)(vlSelf->__PVT__rv32_add) ^ (IData)(vlSelf->__Vtogcov__rv32_add))) {
        vlSymsp->__Vcoverage[2081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_add = vlSelf->__PVT__rv32_add;
    }
    if (((IData)(vlSelf->__PVT__rv32_sltu) ^ (IData)(vlSelf->__Vtogcov__rv32_sltu))) {
        vlSymsp->__Vcoverage[2082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_sltu = vlSelf->__PVT__rv32_sltu;
    }
    if (((IData)(vlSelf->__PVT__rv32_sltiu) ^ (IData)(vlSelf->__Vtogcov__rv32_sltiu))) {
        vlSymsp->__Vcoverage[2080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_sltiu = vlSelf->__PVT__rv32_sltiu;
    }
    if (((IData)(vlSelf->__PVT__rv32_addi) ^ (IData)(vlSelf->__Vtogcov__rv32_addi))) {
        vlSymsp->__Vcoverage[2079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_addi = vlSelf->__PVT__rv32_addi;
    }
    vlSelf->__PVT__alu_info_bus = ((0x1fffe0U & vlSelf->__PVT__alu_info_bus) 
                                   | (8U | (((IData)(vlSelf->__PVT__rv32_addi) 
                                             | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                                | (IData)(vlSelf->__PVT__rv32_add))) 
                                            << 4U)));
    vlSelf->__PVT__rv32_nop = ((IData)(vlSelf->__PVT__rv32_addi) 
                               & (IData)(((0U == (0xf8f80U 
                                                  & vlSymsp->TOP.ifu_rsp_instr)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (vlSymsp->TOP.ifu_rsp_instr 
                                                         >> 0x14U)))))));
    if (((IData)(vlSelf->__PVT__rv32_imm_sel_i) ^ (IData)(vlSelf->__Vtogcov__rv32_imm_sel_i))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_imm_sel_i = vlSelf->__PVT__rv32_imm_sel_i;
    }
    vlSelf->__PVT__agu_info_bus = ((0xfffffU & vlSelf->__PVT__agu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_imm_sel_i) 
                                       | ((IData)(vlSelf->__PVT__rv32_store) 
                                          | ((IData)(vlSelf->__PVT__dec_bxx) 
                                             | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                                | (IData)(vlSelf->__PVT__dec_jal))))) 
                                      << 0x14U));
    vlSelf->__PVT__need_imm = ((IData)(vlSelf->__PVT__rv32_imm_sel_i) 
                               | ((IData)(vlSelf->__PVT__rv32_store) 
                                  | ((IData)(vlSelf->__PVT__dec_bxx) 
                                     | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                        | (IData)(vlSelf->__PVT__dec_jal)))));
    if (((IData)(vlSelf->__PVT__amoldst_op) ^ (IData)(vlSelf->__Vtogcov__amoldst_op))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__amoldst_op = vlSelf->__PVT__amoldst_op;
    }
    if (((IData)(vlSelf->__PVT__dec_rdwen) ^ (IData)(vlSelf->__Vtogcov__dec_rdwen))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_rdwen = vlSelf->__PVT__dec_rdwen;
    }
    if (((IData)(vlSelf->__PVT__rv32_beq) ^ (IData)(vlSelf->__Vtogcov__rv32_beq))) {
        vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_beq = vlSelf->__PVT__rv32_beq;
    }
    if (((IData)(vlSelf->__PVT__rv32_bne) ^ (IData)(vlSelf->__Vtogcov__rv32_bne))) {
        vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_bne = vlSelf->__PVT__rv32_bne;
    }
    vlSelf->__PVT__bjp_info_bus = ((0x1ff0fU & vlSelf->__PVT__bjp_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_bne) 
                                       << 7U) | (((IData)(vlSelf->__PVT__rv32_beq) 
                                                  << 6U) 
                                                 | ((IData)(__VdfgTmp_h43ab29a7__0) 
                                                    << 4U))));
    vlSelf->__PVT__dec_imm = (((- (IData)((IData)(vlSelf->__PVT__rv32_imm_sel_i))) 
                               & vlSelf->__PVT__rv32_i_imm) 
                              | (((- (IData)((IData)(vlSelf->__PVT__rv32_store))) 
                                  & vlSelf->__PVT__rv32_s_imm) 
                                 | (__VdfgTmp_hf164caa5__0 
                                    | ((0xfffff000U 
                                        & ((- (IData)((IData)(vlSelf->__PVT__rv32_auipc))) 
                                           & vlSymsp->TOP.ifu_rsp_instr)) 
                                       | __VdfgTmp_h056a0087__0))));
    vlSelf->__PVT__dec_bjp_imm = (__VdfgTmp_h056a0087__0 
                                  | (((- (IData)((IData)(vlSelf->__PVT__dec_jalr))) 
                                      & vlSelf->__PVT__rv32_i_imm) 
                                     | __VdfgTmp_hf164caa5__0));
    if (((IData)(vlSelf->__PVT__alu_op) ^ (IData)(vlSelf->__Vtogcov__alu_op))) {
        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_op = vlSelf->__PVT__alu_op;
    }
    if (((IData)(vlSelf->__PVT__rv32_nop) ^ (IData)(vlSelf->__Vtogcov__rv32_nop))) {
        vlSymsp->__Vcoverage[2085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_nop = vlSelf->__PVT__rv32_nop;
    }
    if ((1U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (1U & vlSelf->__PVT__agu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (2U & vlSelf->__PVT__agu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (4U & vlSelf->__PVT__agu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (8U & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0xfffffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x100000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if (((IData)(vlSelf->__PVT__need_imm) ^ (IData)(vlSelf->__Vtogcov__need_imm))) {
        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__need_imm = vlSelf->__PVT__need_imm;
    }
    vlSelf->__PVT__alu_info_bus = ((0x1c1fffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_nop) 
                                       << 0x11U) | 
                                      (((IData)(vlSelf->__PVT__rv32_auipc) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->__PVT__need_imm) 
                                         << 0xfU) | 
                                        (((IData)(vlSelf->__PVT__rv32_auipc) 
                                          << 0xeU) 
                                         | (((IData)(vlSelf->__PVT__rv32_sltu) 
                                             | (IData)(vlSelf->__PVT__rv32_sltiu)) 
                                            << 0xdU))))));
    if ((1U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffeU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (1U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((2U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffdU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (2U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((4U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffbU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (4U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((8U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fff7U 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (8U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffefU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffdfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffbfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ff7fU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1feffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fdffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fbffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1f7ffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1efffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1dfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1bfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x17fffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0xffffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((1U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (1U & vlSelf->__PVT__dec_imm));
    }
    if ((2U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (2U & vlSelf->__PVT__dec_imm));
    }
    if ((4U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (4U & vlSelf->__PVT__dec_imm));
    }
    if ((8U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (8U & vlSelf->__PVT__dec_imm));
    }
    if ((0x10U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10U & vlSelf->__PVT__dec_imm));
    }
    if ((0x20U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20U & vlSelf->__PVT__dec_imm));
    }
    if ((0x40U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40U & vlSelf->__PVT__dec_imm));
    }
    if ((0x80U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80U & vlSelf->__PVT__dec_imm));
    }
    if ((0x100U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x100U & vlSelf->__PVT__dec_imm));
    }
    if ((0x200U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x200U & vlSelf->__PVT__dec_imm));
    }
    if ((0x400U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x400U & vlSelf->__PVT__dec_imm));
    }
    if ((0x800U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x800U & vlSelf->__PVT__dec_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x1000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x2000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x4000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x8000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x100000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x200000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x400000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x800000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x1000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x2000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x4000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x8000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if (((vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((1U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (1U & vlSelf->__PVT__alu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (2U & vlSelf->__PVT__alu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (4U & vlSelf->__PVT__alu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (8U & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0xfffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    vlSelf->__PVT__dec_info = (((- (QData)((IData)(vlSelf->__PVT__alu_op))) 
                                & (QData)((IData)(vlSelf->__PVT__alu_info_bus))) 
                               | (((- (QData)((IData)(vlSelf->__PVT__amoldst_op))) 
                                   & (QData)((IData)(vlSelf->__PVT__agu_info_bus))) 
                                  | ((- (QData)((IData)(vlSelf->__PVT__dec_bjp))) 
                                     & (QData)((IData)(vlSelf->__PVT__bjp_info_bus)))));
    if ((1U & ((IData)(vlSelf->__PVT__dec_info) ^ (IData)(vlSelf->__Vtogcov__dec_info)))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffffeULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | (IData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__dec_info)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 1U))))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
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

VL_INLINE_OPT void Vcore_exu_decode___nba_sequent__TOP__core__inst_exu__DOT__inst_exu_decode__0(Vcore_exu_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_exu_decode___nba_sequent__TOP__core__inst_exu__DOT__inst_exu_decode__0\n"); );
    // Init
    IData/*31:0*/ __VdfgTmp_hf164caa5__0;
    __VdfgTmp_hf164caa5__0 = 0;
    IData/*31:0*/ __VdfgTmp_h056a0087__0;
    __VdfgTmp_h056a0087__0 = 0;
    CData/*0:0*/ __VdfgTmp_h43ab29a7__0;
    __VdfgTmp_h43ab29a7__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2f17b007__0;
    __VdfgTmp_h2f17b007__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc3fc61f5__0;
    __VdfgTmp_hc3fc61f5__0 = 0;
    // Body
    if (((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_1_0_11))) {
        vlSymsp->__Vcoverage[2022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_1_0_11 = (3U == (3U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if (((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_000))) {
        vlSymsp->__Vcoverage[2023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_001))) {
        vlSymsp->__Vcoverage[2024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_010))) {
        vlSymsp->__Vcoverage[2025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_011))) {
        vlSymsp->__Vcoverage[2026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_100))) {
        vlSymsp->__Vcoverage[2027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_101))) {
        vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_110))) {
        vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_111))) {
        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_00))) {
        vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_00 = (0U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_01))) {
        vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_01 = (1U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_10))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_10 = (2U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_11))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_11 = (3U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_000))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_001))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_010))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_011))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_100))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_101))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_110))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_111))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000000))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000000 = (0U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100000))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100000 = (0x20U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000001))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000001 = (1U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000101))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000101 = (5U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001001))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001001 = (9U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001101))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001101 = (0xdU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010101))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010101 = (0x15U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100001))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100001 = (0x21U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010001))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010001 = (0x11U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101101))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101101 = (0x2dU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111111))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111111 = (0x7fU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000100))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000100 = (4U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001000))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001000 = (8U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001100))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001100 = (0xcU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101100))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101100 = (0x2cU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010000))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010000 = (0x10U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010100))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010100 = (0x14U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100000))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100000 = (0x60U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110000))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110000 = (0x70U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010000))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010000 = (0x50U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101000))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101000 = (0x68U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111000))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111000 = (0x78U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010001))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010001 = (0x51U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110001))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110001 = (0x71U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100001))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100001 = (0x61U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101001))) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101001 = (0x69U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__rv32_rd_x0))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__PVT__rv32_i_imm = (((- (IData)((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                              >> 0x14U));
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
    __VdfgTmp_h2f17b007__0 = (IData)((3U == (0x1fU 
                                             & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    if ((1U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (1U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (2U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (4U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (8U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if (((vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (1U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (2U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (4U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (8U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[2163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (1U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (2U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (4U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (8U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if (((vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (1U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (2U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (4U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (8U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((IData)(vlSelf->__PVT__dec_jalr) ^ (IData)(vlSelf->__Vtogcov__dec_jalr))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_jalr = vlSelf->__PVT__dec_jalr;
    }
    if (((IData)(vlSelf->__PVT__dec_jal) ^ (IData)(vlSelf->__Vtogcov__dec_jal))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_jal = vlSelf->__PVT__dec_jal;
    }
    __VdfgTmp_h056a0087__0 = ((- (IData)((IData)(vlSelf->__PVT__dec_jal))) 
                              & vlSelf->__PVT__rv32_j_imm);
    __VdfgTmp_h43ab29a7__0 = ((IData)(vlSelf->__PVT__dec_jal) 
                              | (IData)(vlSelf->__PVT__dec_jalr));
    if (((IData)(vlSelf->__PVT__rv32_auipc) ^ (IData)(vlSelf->__Vtogcov__rv32_auipc))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_auipc = vlSelf->__PVT__rv32_auipc;
    }
    vlSelf->__PVT__dec_rs1en = ((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                 >> 0xfU))) 
                                & ((~ (IData)(vlSelf->__PVT__dec_jal)) 
                                   & (~ (IData)(vlSelf->__PVT__rv32_auipc))));
    vlSelf->__PVT__rv32_system = (IData)(((0x60U == 
                                           (0x60U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                          & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_op = (IData)(((0x20U == (0x60U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                      & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_op_imm = (IData)(((0U == (0x60U 
                                                  & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                          & (IData)(__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__bjp_info_bus = ((0x1efffU & vlSelf->__PVT__bjp_info_bus) 
                                   | ((IData)(((0x60U 
                                                == 
                                                (0x60U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                               & (IData)(__VdfgTmp_h2f17b007__0))) 
                                      << 0xcU));
    vlSelf->__PVT__rv32_load = (IData)(((0U == (0x60U 
                                                & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                        & (IData)(__VdfgTmp_h2f17b007__0)));
    vlSelf->__PVT__rv32_store = (IData)(((0x20U == 
                                          (0x60U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                         & (IData)(__VdfgTmp_h2f17b007__0)));
    vlSelf->__PVT__dec_bxx = (IData)(((0x60U == (0x60U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                      & (IData)(__VdfgTmp_h2f17b007__0)));
    if (((IData)(vlSelf->__PVT__rv32_system) ^ (IData)(vlSelf->__Vtogcov__rv32_system))) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->__PVT__rv32_op) ^ (IData)(vlSelf->__Vtogcov__rv32_op))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op = vlSelf->__PVT__rv32_op;
    }
    if ((((IData)(vlSelf->__PVT__rv32_op) & (IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0xfe007000U 
                                                      & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_xor))) {
        vlSymsp->__Vcoverage[2083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_xor = ((IData)(vlSelf->__PVT__rv32_op) 
                                       & (IData)((0x4000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
    }
    if ((((IData)(vlSelf->__PVT__rv32_op) & (IData)(
                                                    (0x6000U 
                                                     == 
                                                     (0xfe007000U 
                                                      & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_or))) {
        vlSymsp->__Vcoverage[2084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_or = ((IData)(vlSelf->__PVT__rv32_op) 
                                      & (IData)((0x6000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
    }
    vlSelf->__PVT__alu_info_bus = ((0x1fffbfU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_op) 
                                       & (IData)((0x4000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)))) 
                                      << 6U));
    vlSelf->__PVT__alu_info_bus = ((0x1ffbffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_op) 
                                       & (IData)((0x6000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)))) 
                                      << 0xaU));
    vlSelf->__PVT__rv32_add = ((IData)(vlSelf->__PVT__rv32_op) 
                               & (IData)((0U == (0xfe007000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
    vlSelf->__PVT__rv32_sltu = ((IData)(vlSelf->__PVT__rv32_op) 
                                & (IData)((0x3000U 
                                           == (0xfe007000U 
                                               & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))));
    if (((IData)(vlSelf->__PVT__rv32_op_imm) ^ (IData)(vlSelf->__Vtogcov__rv32_op_imm))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op_imm = vlSelf->__PVT__rv32_op_imm;
    }
    vlSelf->__PVT__rv32_sltiu = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                 & (0x3000U == (0x7000U 
                                                & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->__PVT__rv32_addi = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                & (0U == (0x7000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    if (((IData)(vlSelf->__PVT__rv32_load) ^ (IData)(vlSelf->__Vtogcov__rv32_load))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_load = vlSelf->__PVT__rv32_load;
    }
    if ((((IData)(vlSelf->__PVT__rv32_load) & (0x2000U 
                                               == (0x7000U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_lw))) {
        vlSymsp->__Vcoverage[2086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_lw = ((IData)(vlSelf->__PVT__rv32_load) 
                                      & (0x2000U == 
                                         (0x7000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    }
    vlSelf->__PVT__rv32_imm_sel_i = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                     | ((IData)(vlSelf->__PVT__dec_jalr) 
                                        | (IData)(vlSelf->__PVT__rv32_load)));
    if (((IData)(vlSelf->__PVT__rv32_store) ^ (IData)(vlSelf->__Vtogcov__rv32_store))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_store = vlSelf->__PVT__rv32_store;
    }
    if ((((IData)(vlSelf->__PVT__rv32_store) & (0x2000U 
                                                == 
                                                (0x7000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_sw))) {
        vlSymsp->__Vcoverage[2087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_sw = ((IData)(vlSelf->__PVT__rv32_store) 
                                      & (0x2000U == 
                                         (0x7000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    }
    vlSelf->__PVT__amoldst_op = ((IData)(vlSelf->__PVT__rv32_load) 
                                 | (IData)(vlSelf->__PVT__rv32_store));
    vlSelf->__PVT__agu_info_bus = ((0x1ffe00U & vlSelf->__PVT__agu_info_bus) 
                                   | (9U | ((0x1c0U 
                                             & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                >> 6U)) 
                                            | (((IData)(vlSelf->__PVT__rv32_store) 
                                                << 5U) 
                                               | ((IData)(vlSelf->__PVT__rv32_load) 
                                                  << 4U)))));
    if (((IData)(vlSelf->__PVT__dec_bxx) ^ (IData)(vlSelf->__Vtogcov__dec_bxx))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bxx = vlSelf->__PVT__dec_bxx;
    }
    vlSelf->__PVT__dec_rs2en = ((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                 >> 0x14U))) 
                                & ((IData)(vlSelf->__PVT__dec_bxx) 
                                   | ((IData)(vlSelf->__PVT__rv32_store) 
                                      | (IData)(vlSelf->__PVT__rv32_op))));
    __VdfgTmp_hf164caa5__0 = ((- (IData)((IData)(vlSelf->__PVT__dec_bxx))) 
                              & vlSelf->__PVT__rv32_b_imm);
    vlSelf->__PVT__dec_rdwen = ((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                 >> 7U))) 
                                & (~ ((IData)(vlSelf->__PVT__dec_bxx) 
                                      | (IData)(vlSelf->__PVT__rv32_store))));
    vlSelf->__PVT__dec_bjp = ((IData)(__VdfgTmp_h43ab29a7__0) 
                              | (IData)(vlSelf->__PVT__dec_bxx));
    vlSelf->__PVT__rv32_beq = ((IData)(vlSelf->__PVT__dec_bxx) 
                               & (0U == (0x7000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->__PVT__rv32_bne = ((IData)(vlSelf->__PVT__dec_bxx) 
                               & (0x1000U == (0x7000U 
                                              & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    if (((IData)(vlSelf->__PVT__rv32_ebreak) ^ (IData)(vlSelf->__Vtogcov__rv32_ebreak))) {
        vlSymsp->__Vcoverage[2078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_ebreak = vlSelf->__PVT__rv32_ebreak;
    }
    vlSelf->__PVT__alu_op = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                             | (((1U != (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                         >> 0x19U)) 
                                 & (IData)(vlSelf->__PVT__rv32_op)) 
                                | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                   | (IData)(vlSelf->__PVT__rv32_ebreak))));
    if (((IData)(vlSelf->__PVT__rv32_add) ^ (IData)(vlSelf->__Vtogcov__rv32_add))) {
        vlSymsp->__Vcoverage[2081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_add = vlSelf->__PVT__rv32_add;
    }
    if (((IData)(vlSelf->__PVT__rv32_sltu) ^ (IData)(vlSelf->__Vtogcov__rv32_sltu))) {
        vlSymsp->__Vcoverage[2082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_sltu = vlSelf->__PVT__rv32_sltu;
    }
    if (((IData)(vlSelf->__PVT__rv32_sltiu) ^ (IData)(vlSelf->__Vtogcov__rv32_sltiu))) {
        vlSymsp->__Vcoverage[2080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_sltiu = vlSelf->__PVT__rv32_sltiu;
    }
    if (((IData)(vlSelf->__PVT__rv32_addi) ^ (IData)(vlSelf->__Vtogcov__rv32_addi))) {
        vlSymsp->__Vcoverage[2079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_addi = vlSelf->__PVT__rv32_addi;
    }
    vlSelf->__PVT__alu_info_bus = ((0x1fffe0U & vlSelf->__PVT__alu_info_bus) 
                                   | (8U | (((IData)(vlSelf->__PVT__rv32_addi) 
                                             | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                                | (IData)(vlSelf->__PVT__rv32_add))) 
                                            << 4U)));
    vlSelf->__PVT__rv32_nop = ((IData)(vlSelf->__PVT__rv32_addi) 
                               & (IData)(((0U == (0xf8f80U 
                                                  & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                         >> 0x14U)))))));
    if (((IData)(vlSelf->__PVT__rv32_imm_sel_i) ^ (IData)(vlSelf->__Vtogcov__rv32_imm_sel_i))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_imm_sel_i = vlSelf->__PVT__rv32_imm_sel_i;
    }
    vlSelf->__PVT__agu_info_bus = ((0xfffffU & vlSelf->__PVT__agu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_imm_sel_i) 
                                       | ((IData)(vlSelf->__PVT__rv32_store) 
                                          | ((IData)(vlSelf->__PVT__dec_bxx) 
                                             | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                                | (IData)(vlSelf->__PVT__dec_jal))))) 
                                      << 0x14U));
    vlSelf->__PVT__need_imm = ((IData)(vlSelf->__PVT__rv32_imm_sel_i) 
                               | ((IData)(vlSelf->__PVT__rv32_store) 
                                  | ((IData)(vlSelf->__PVT__dec_bxx) 
                                     | ((IData)(vlSelf->__PVT__rv32_auipc) 
                                        | (IData)(vlSelf->__PVT__dec_jal)))));
    if (((IData)(vlSelf->__PVT__amoldst_op) ^ (IData)(vlSelf->__Vtogcov__amoldst_op))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__amoldst_op = vlSelf->__PVT__amoldst_op;
    }
    vlSelf->__PVT__dec_bjp_imm = (__VdfgTmp_h056a0087__0 
                                  | (((- (IData)((IData)(vlSelf->__PVT__dec_jalr))) 
                                      & vlSelf->__PVT__rv32_i_imm) 
                                     | __VdfgTmp_hf164caa5__0));
    vlSelf->__PVT__dec_imm = (((- (IData)((IData)(vlSelf->__PVT__rv32_imm_sel_i))) 
                               & vlSelf->__PVT__rv32_i_imm) 
                              | (((- (IData)((IData)(vlSelf->__PVT__rv32_store))) 
                                  & vlSelf->__PVT__rv32_s_imm) 
                                 | (__VdfgTmp_hf164caa5__0 
                                    | ((0xfffff000U 
                                        & ((- (IData)((IData)(vlSelf->__PVT__rv32_auipc))) 
                                           & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                       | __VdfgTmp_h056a0087__0))));
    if (((IData)(vlSelf->__PVT__dec_bjp) ^ (IData)(vlSelf->__Vtogcov__dec_bjp))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp = vlSelf->__PVT__dec_bjp;
    }
    if (((IData)(vlSelf->__PVT__rv32_beq) ^ (IData)(vlSelf->__Vtogcov__rv32_beq))) {
        vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_beq = vlSelf->__PVT__rv32_beq;
    }
    if (((IData)(vlSelf->__PVT__rv32_bne) ^ (IData)(vlSelf->__Vtogcov__rv32_bne))) {
        vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_bne = vlSelf->__PVT__rv32_bne;
    }
    vlSelf->__PVT__bjp_info_bus = ((0x1ff0fU & vlSelf->__PVT__bjp_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_bne) 
                                       << 7U) | (((IData)(vlSelf->__PVT__rv32_beq) 
                                                  << 6U) 
                                                 | (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r) 
                                                     << 5U) 
                                                    | ((IData)(__VdfgTmp_h43ab29a7__0) 
                                                       << 4U)))));
    if (((IData)(vlSelf->__PVT__alu_op) ^ (IData)(vlSelf->__Vtogcov__alu_op))) {
        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_op = vlSelf->__PVT__alu_op;
    }
    if (((IData)(vlSelf->__PVT__rv32_nop) ^ (IData)(vlSelf->__Vtogcov__rv32_nop))) {
        vlSymsp->__Vcoverage[2085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_nop = vlSelf->__PVT__rv32_nop;
    }
    if ((1U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (1U & vlSelf->__PVT__agu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (2U & vlSelf->__PVT__agu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (4U & vlSelf->__PVT__agu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (8U & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__agu_info_bus ^ vlSelf->__Vtogcov__agu_info_bus))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_info_bus = ((0xfffffU 
                                            & vlSelf->__Vtogcov__agu_info_bus) 
                                           | (0x100000U 
                                              & vlSelf->__PVT__agu_info_bus));
    }
    if (((IData)(vlSelf->__PVT__need_imm) ^ (IData)(vlSelf->__Vtogcov__need_imm))) {
        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__need_imm = vlSelf->__PVT__need_imm;
    }
    vlSelf->__PVT__alu_info_bus = ((0x1c1fffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_nop) 
                                       << 0x11U) | 
                                      (((IData)(vlSelf->__PVT__rv32_auipc) 
                                        << 0x10U) | 
                                       (((IData)(vlSelf->__PVT__need_imm) 
                                         << 0xfU) | 
                                        (((IData)(vlSelf->__PVT__rv32_auipc) 
                                          << 0xeU) 
                                         | (((IData)(vlSelf->__PVT__rv32_sltu) 
                                             | (IData)(vlSelf->__PVT__rv32_sltiu)) 
                                            << 0xdU))))));
    if ((1U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffffeU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (1U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((2U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffffdU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (2U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((4U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffffbU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (4U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((8U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffff7U 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (8U & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x10U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffffefU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x10U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x20U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffffdfU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x20U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x40U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffffbfU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x40U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x80U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffff7fU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x80U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x100U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffeffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x100U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x200U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffdffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x200U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x400U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffffbffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x400U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x800U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffff7ffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x800U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffefffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x1000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffdfffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x2000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffffbfffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x4000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffff7fffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x8000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffeffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x10000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffdffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x20000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfffbffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x40000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfff7ffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x80000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffefffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x100000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffdfffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x200000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xffbfffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x400000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xff7fffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x800000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfeffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x1000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfdffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x2000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xfbffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x4000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xf7ffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x8000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xefffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x10000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xdfffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x20000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__dec_bjp_imm))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0xbfffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x40000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if (((vlSelf->__PVT__dec_bjp_imm ^ vlSelf->__Vtogcov__dec_bjp_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_bjp_imm = ((0x7fffffffU 
                                           & vlSelf->__Vtogcov__dec_bjp_imm) 
                                          | (0x80000000U 
                                             & vlSelf->__PVT__dec_bjp_imm));
    }
    if ((1U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffeU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (1U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((2U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffdU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (2U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((4U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fffbU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (4U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((8U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fff7U 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (8U & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffefU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffdfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ffbfU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1ff7fU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1feffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fdffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1fbffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1f7ffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1efffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1dfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x1bfffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0x17fffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__bjp_info_bus ^ vlSelf->__Vtogcov__bjp_info_bus))) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_info_bus = ((0xffffU 
                                            & vlSelf->__Vtogcov__bjp_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__bjp_info_bus));
    }
    if ((1U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (1U & vlSelf->__PVT__alu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (2U & vlSelf->__PVT__alu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (4U & vlSelf->__PVT__alu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (8U & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0xfffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    vlSelf->__PVT__dec_info = (((- (QData)((IData)(vlSelf->__PVT__alu_op))) 
                                & (QData)((IData)(vlSelf->__PVT__alu_info_bus))) 
                               | (((- (QData)((IData)(vlSelf->__PVT__amoldst_op))) 
                                   & (QData)((IData)(vlSelf->__PVT__agu_info_bus))) 
                                  | ((- (QData)((IData)(vlSelf->__PVT__dec_bjp))) 
                                     & (QData)((IData)(vlSelf->__PVT__bjp_info_bus)))));
}
