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
    // Body
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->__Vtogcov__dec_rs1x0))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_rs1x0 = (0U == (0x1fU 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0xfU)));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0x14U))) ^ (IData)(vlSelf->__Vtogcov__dec_rs2x0))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_rs2x0 = (0U == (0x1fU 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x14U)));
    }
    if (((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__dec_rdwen))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_rdwen = (0U != (0x1fU 
                                               & (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 7U)));
    }
    if (((3U == (3U & vlSymsp->TOP.ifu_rsp_instr)) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_1_0_11))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_1_0_11 = (3U == (3U 
                                                   & vlSymsp->TOP.ifu_rsp_instr));
    }
    if (((0U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_000))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((1U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_001))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((2U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_010))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((3U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_011))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((4U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_100))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((5U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_101))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((6U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_110))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((7U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 2U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_111))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 2U)));
    }
    if (((0U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_00))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_00 = (0U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((1U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_01))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_01 = (1U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((2U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_10))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_10 = (2U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((3U == (3U & (vlSymsp->TOP.ifu_rsp_instr >> 5U))) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_11))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_11 = (3U == (3U 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 5U)));
    }
    if (((0U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_000))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((1U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_001))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((2U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_010))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((3U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_011))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((4U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_100))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((5U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_101))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((6U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_110))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((7U == (7U & (vlSymsp->TOP.ifu_rsp_instr >> 0xcU))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func3_111))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP.ifu_rsp_instr 
                                               >> 0xcU)));
    }
    if (((0U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000000))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000000 = (0U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x20U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100000))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100000 = (0x20U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((1U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000001))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000001 = (1U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((5U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000101))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000101 = (5U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((9U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001001))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001001 = (9U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0xdU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001101))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001101 = (0xdU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x15U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010101))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010101 = (0x15U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x21U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100001))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100001 = (0x21U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x11U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010001))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010001 = (0x11U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x2dU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101101))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101101 = (0x2dU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x7fU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111111))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111111 = (0x7fU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((4U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000100))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000100 = (4U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((8U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001000))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001000 = (8U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0xcU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001100))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001100 = (0xcU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x2cU == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101100))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101100 = (0x2cU 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x10U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010000))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010000 = (0x10U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x14U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010100))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010100 = (0x14U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x60U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100000))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100000 = (0x60U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x70U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110000))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110000 = (0x70U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x50U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010000))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010000 = (0x50U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x68U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101000))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101000 = (0x68U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x78U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111000))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111000 = (0x78U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x51U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010001))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010001 = (0x51U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x71U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110001))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110001 = (0x71U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x61U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100001))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100001 = (0x61U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0x69U == (vlSymsp->TOP.ifu_rsp_instr >> 0x19U)) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101001))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101001 = (0x69U 
                                                 == 
                                                 (vlSymsp->TOP.ifu_rsp_instr 
                                                  >> 0x19U));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__rv32_rd_x0))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__PVT__rv32_i_imm = (((- (IData)((vlSymsp->TOP.ifu_rsp_instr 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSymsp->TOP.ifu_rsp_instr 
                                              >> 0x14U));
    vlSelf->__VdfgTmp_hc3fc61f5__0 = (IData)((0x13U 
                                              == (0x1fU 
                                                  & vlSymsp->TOP.ifu_rsp_instr)));
    if ((1U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (1U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (2U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (4U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (8U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if (((vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (1U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (2U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (4U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (8U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if (((vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (1U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (2U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (4U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (8U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((IData)(vlSelf->__PVT__rv32_auipc) ^ (IData)(vlSelf->__Vtogcov__rv32_auipc))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_auipc = vlSelf->__PVT__rv32_auipc;
    }
    if ((1U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (1U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (2U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (4U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (8U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((IData)(((0x20U == (0x60U & vlSymsp->TOP.ifu_rsp_instr)) 
                  & (IData)(vlSelf->__VdfgTmp_hc3fc61f5__0))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_op))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op = (IData)(((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP.ifu_rsp_instr)) 
                                              & (IData)(vlSelf->__VdfgTmp_hc3fc61f5__0)));
    }
    vlSelf->__PVT__rv32_system = (IData)(((0x60U == 
                                           (0x60U & vlSymsp->TOP.ifu_rsp_instr)) 
                                          & (IData)(vlSelf->__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_op_imm = (IData)(((0U == (0x60U 
                                                  & vlSymsp->TOP.ifu_rsp_instr)) 
                                          & (IData)(vlSelf->__VdfgTmp_hc3fc61f5__0)));
    if (((IData)(vlSelf->__PVT__rv32_system) ^ (IData)(vlSelf->__Vtogcov__rv32_system))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op_imm = vlSelf->__PVT__rv32_op_imm;
    }
    vlSelf->__PVT__dec_imm = ((- (IData)((IData)(vlSelf->__PVT__rv32_op_imm))) 
                              & vlSelf->__PVT__rv32_i_imm);
    vlSelf->__PVT__alu_info_bus = ((0x1e7fffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_auipc) 
                                       << 0x10U) | 
                                      ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                       << 0xfU)));
    vlSelf->__PVT__rv32_addi = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                & (0U == (0x7000U & vlSymsp->TOP.ifu_rsp_instr)));
    if (((IData)(vlSelf->__PVT__rv32_ebreak) ^ (IData)(vlSelf->__Vtogcov__rv32_ebreak))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_ebreak = vlSelf->__PVT__rv32_ebreak;
    }
    vlSelf->__PVT__alu_op = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                             | (IData)(vlSelf->__PVT__rv32_ebreak));
    if ((1U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (1U & vlSelf->__PVT__dec_imm));
    }
    if ((2U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (2U & vlSelf->__PVT__dec_imm));
    }
    if ((4U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (4U & vlSelf->__PVT__dec_imm));
    }
    if ((8U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (8U & vlSelf->__PVT__dec_imm));
    }
    if ((0x10U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10U & vlSelf->__PVT__dec_imm));
    }
    if ((0x20U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20U & vlSelf->__PVT__dec_imm));
    }
    if ((0x40U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40U & vlSelf->__PVT__dec_imm));
    }
    if ((0x80U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80U & vlSelf->__PVT__dec_imm));
    }
    if ((0x100U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x100U & vlSelf->__PVT__dec_imm));
    }
    if ((0x200U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x200U & vlSelf->__PVT__dec_imm));
    }
    if ((0x400U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x400U & vlSelf->__PVT__dec_imm));
    }
    if ((0x800U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x800U & vlSelf->__PVT__dec_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x1000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x2000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x4000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x8000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80000U & vlSelf->__PVT__dec_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x100000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x200000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x400000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x800000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x1000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x2000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x4000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x8000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x10000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x20000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x40000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if (((vlSelf->__PVT__dec_imm ^ vlSelf->__Vtogcov__dec_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_imm = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__dec_imm) 
                                      | (0x80000000U 
                                         & vlSelf->__PVT__dec_imm));
    }
    if (((IData)(vlSelf->__PVT__rv32_addi) ^ (IData)(vlSelf->__Vtogcov__rv32_addi))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_addi = vlSelf->__PVT__rv32_addi;
    }
    if ((((IData)(vlSelf->__PVT__rv32_addi) & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xf8f80U 
                                                         & vlSymsp->TOP.ifu_rsp_instr)) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSymsp->TOP.ifu_rsp_instr 
                                                                      >> 0x14U))))))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_nop))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_nop = ((IData)(vlSelf->__PVT__rv32_addi) 
                                       & (IData)(((0U 
                                                   == 
                                                   (0xf8f80U 
                                                    & vlSymsp->TOP.ifu_rsp_instr)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSymsp->TOP.ifu_rsp_instr 
                                                                 >> 0x14U)))))));
    }
    vlSelf->__PVT__alu_info_bus = ((0x1fffe0U & vlSelf->__PVT__alu_info_bus) 
                                   | (8U | ((IData)(vlSelf->__PVT__rv32_addi) 
                                            << 4U)));
    if (((IData)(vlSelf->__PVT__alu_op) ^ (IData)(vlSelf->__Vtogcov__alu_op))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_op = vlSelf->__PVT__alu_op;
    }
    if ((1U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (1U & vlSelf->__PVT__alu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (2U & vlSelf->__PVT__alu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (4U & vlSelf->__PVT__alu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (8U & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0xfffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    vlSelf->__PVT__dec_info = ((- (QData)((IData)(vlSelf->__PVT__alu_op))) 
                               & (QData)((IData)(vlSelf->__PVT__alu_info_bus)));
    if ((1U & ((IData)(vlSelf->__PVT__dec_info) ^ (IData)(vlSelf->__Vtogcov__dec_info)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dec_info = ((0x1fffffffeULL 
                                        & vlSelf->__Vtogcov__dec_info) 
                                       | (IData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__dec_info)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__dec_info >> 1U)) 
               ^ (IData)((vlSelf->__Vtogcov__dec_info 
                          >> 1U))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
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
    // Body
    if (((3U == (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
         ^ (IData)(vlSelf->__Vtogcov__opcode_1_0_11))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_1_0_11 = (3U == (3U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if (((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_000))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_001))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_010))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_011))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_100))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_101))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_110))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 2U))) ^ (IData)(vlSelf->__Vtogcov__opcode_4_2_111))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_4_2_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 2U)));
    }
    if (((0U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_00))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_00 = (0U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((1U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_01))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_01 = (1U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((2U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_10))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_10 = (2U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((3U == (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 5U))) ^ (IData)(vlSelf->__Vtogcov__opcode_6_5_11))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__opcode_6_5_11 = (3U == (3U 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 5U)));
    }
    if (((0U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_000))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_000 = (0U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((1U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_001))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_001 = (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((2U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_010))) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_010 = (2U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((3U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_011))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_011 = (3U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((4U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_100))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_100 = (4U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((5U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_101))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_101 = (5U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((6U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_110))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_110 = (6U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((7U == (7U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       >> 0xcU))) ^ (IData)(vlSelf->__Vtogcov__rv32_func3_111))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func3_111 = (7U == 
                                             (7U & 
                                              (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                               >> 0xcU)));
    }
    if (((0U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000000))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000000 = (0U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x20U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100000))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100000 = (0x20U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((1U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000001))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000001 = (1U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((5U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000101))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000101 = (5U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((9U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001001))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001001 = (9U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0xdU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001101))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001101 = (0xdU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x15U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010101))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010101 = (0x15U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x21U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0100001))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0100001 = (0x21U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x11U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010001))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010001 = (0x11U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x2dU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101101))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101101 = (0x2dU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x7fU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111111))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111111 = (0x7fU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((4U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0000100))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0000100 = (4U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((8U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                 >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001000))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001000 = (8U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0xcU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0001100))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0001100 = (0xcU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x2cU == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0101100))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0101100 = (0x2cU 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x10U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010000))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010000 = (0x10U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x14U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_0010100))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_0010100 = (0x14U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x60U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100000))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100000 = (0x60U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x70U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110000))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110000 = (0x70U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x50U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010000))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010000 = (0x50U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x68U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101000))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101000 = (0x68U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x78U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1111000))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1111000 = (0x78U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x51U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1010001))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1010001 = (0x51U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x71U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1110001))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1110001 = (0x71U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x61U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1100001))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1100001 = (0x61U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0x69U == (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    >> 0x19U)) ^ (IData)(vlSelf->__Vtogcov__rv32_func7_1101001))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_func7_1101001 = (0x69U 
                                                 == 
                                                 (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                  >> 0x19U));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 7U))) ^ (IData)(vlSelf->__Vtogcov__rv32_rd_x0))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__PVT__rv32_i_imm = (((- (IData)((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                              >> 0x14U));
    vlSelf->__PVT__rv32_auipc = (IData)((0x17U == (0x7fU 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    vlSelf->__VdfgTmp_hc3fc61f5__0 = (IData)((0x13U 
                                              == (0x1fU 
                                                  & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    if ((1U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (1U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (2U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (4U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (8U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if (((vlSelf->__PVT__rv32_s_imm ^ vlSelf->__Vtogcov__rv32_s_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_s_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_s_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_s_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (1U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (2U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (4U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (8U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if (((vlSelf->__PVT__rv32_b_imm ^ vlSelf->__Vtogcov__rv32_b_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_b_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_b_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_b_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (1U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (2U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (4U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (8U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if (((vlSelf->__PVT__rv32_j_imm ^ vlSelf->__Vtogcov__rv32_j_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_j_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_j_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_j_imm));
    }
    if ((1U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (1U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((2U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (2U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((4U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (4U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((8U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (8U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80U & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((vlSelf->__PVT__rv32_i_imm ^ vlSelf->__Vtogcov__rv32_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_i_imm = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rv32_i_imm) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rv32_i_imm));
    }
    if (((IData)(vlSelf->__PVT__rv32_auipc) ^ (IData)(vlSelf->__Vtogcov__rv32_auipc))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_auipc = vlSelf->__PVT__rv32_auipc;
    }
    if (((IData)(((0x20U == (0x60U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                  & (IData)(vlSelf->__VdfgTmp_hc3fc61f5__0))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_op))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op = (IData)(((0x20U 
                                               == (0x60U 
                                                   & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                              & (IData)(vlSelf->__VdfgTmp_hc3fc61f5__0)));
    }
    vlSelf->__PVT__rv32_system = (IData)(((0x60U == 
                                           (0x60U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                          & (IData)(vlSelf->__VdfgTmp_hc3fc61f5__0)));
    vlSelf->__PVT__rv32_op_imm = (IData)(((0U == (0x60U 
                                                  & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                          & (IData)(vlSelf->__VdfgTmp_hc3fc61f5__0)));
    if (((IData)(vlSelf->__PVT__rv32_system) ^ (IData)(vlSelf->__Vtogcov__rv32_system))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_op_imm = vlSelf->__PVT__rv32_op_imm;
    }
    vlSelf->__PVT__dec_imm = ((- (IData)((IData)(vlSelf->__PVT__rv32_op_imm))) 
                              & vlSelf->__PVT__rv32_i_imm);
    vlSelf->__PVT__alu_info_bus = ((0x1e7fffU & vlSelf->__PVT__alu_info_bus) 
                                   | (((IData)(vlSelf->__PVT__rv32_auipc) 
                                       << 0x10U) | 
                                      ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                       << 0xfU)));
    vlSelf->__PVT__rv32_addi = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                                & (0U == (0x7000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)));
    if (((IData)(vlSelf->__PVT__rv32_ebreak) ^ (IData)(vlSelf->__Vtogcov__rv32_ebreak))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_ebreak = vlSelf->__PVT__rv32_ebreak;
    }
    vlSelf->__PVT__alu_op = ((IData)(vlSelf->__PVT__rv32_op_imm) 
                             | (IData)(vlSelf->__PVT__rv32_ebreak));
    if (((IData)(vlSelf->__PVT__rv32_addi) ^ (IData)(vlSelf->__Vtogcov__rv32_addi))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_addi = vlSelf->__PVT__rv32_addi;
    }
    if ((((IData)(vlSelf->__PVT__rv32_addi) & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xf8f80U 
                                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                                      >> 0x14U))))))) 
         ^ (IData)(vlSelf->__Vtogcov__rv32_nop))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rv32_nop = ((IData)(vlSelf->__PVT__rv32_addi) 
                                       & (IData)(((0U 
                                                   == 
                                                   (0xf8f80U 
                                                    & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                                 >> 0x14U)))))));
    }
    vlSelf->__PVT__alu_info_bus = ((0x1fffe0U & vlSelf->__PVT__alu_info_bus) 
                                   | (8U | ((IData)(vlSelf->__PVT__rv32_addi) 
                                            << 4U)));
    if (((IData)(vlSelf->__PVT__alu_op) ^ (IData)(vlSelf->__Vtogcov__alu_op))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_op = vlSelf->__PVT__alu_op;
    }
    if ((1U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffeU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (1U & vlSelf->__PVT__alu_info_bus));
    }
    if ((2U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffdU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (2U & vlSelf->__PVT__alu_info_bus));
    }
    if ((4U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffffbU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (4U & vlSelf->__PVT__alu_info_bus));
    }
    if ((8U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffff7U 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (8U & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffefU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffdfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fffbfU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fff7fU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffeffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x200U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffdffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x200U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x400U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ffbffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x400U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x800U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1ff7ffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x800U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x1000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fefffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x1000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x2000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fdfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x2000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x4000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1fbfffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x4000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x8000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1f7fffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x8000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x10000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1effffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x10000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x20000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1dffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x20000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x40000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x1bffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x40000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x80000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0x17ffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x80000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    if ((0x100000U & (vlSelf->__PVT__alu_info_bus ^ vlSelf->__Vtogcov__alu_info_bus))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__alu_info_bus = ((0xfffffU 
                                            & vlSelf->__Vtogcov__alu_info_bus) 
                                           | (0x100000U 
                                              & vlSelf->__PVT__alu_info_bus));
    }
    vlSelf->__PVT__dec_info = ((- (QData)((IData)(vlSelf->__PVT__alu_op))) 
                               & (QData)((IData)(vlSelf->__PVT__alu_info_bus)));
}
