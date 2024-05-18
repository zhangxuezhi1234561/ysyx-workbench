// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_exu_decode.h"

VL_ATTR_COLD void Vcore_exu_decode___ctor_var_reset(Vcore_exu_decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_exu_decode___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rv32_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec_rs1x0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_rs2x0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_rs1en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_rs2en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_rdwen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dec_rs1idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dec_rs2idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dec_rdidx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__dec_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dec_info = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__rv32_op_imm = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rv32_system = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rv32_auipc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rv32_ebreak = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rv32_addi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_op = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_info_bus = VL_RAND_RESET_I(21);
    vlSelf->__PVT__rv32_i_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rv32_s_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rv32_b_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rv32_j_imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__dec_rs1x0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__dec_rs2x0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__dec_rdwen = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__dec_imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__dec_info = VL_RAND_RESET_Q(33);
    vlSelf->__Vtogcov__opcode_1_0_11 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_4_2_000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_4_2_001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_4_2_010 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_4_2_011 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_4_2_100 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_4_2_101 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_4_2_110 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_4_2_111 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_6_5_00 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_6_5_01 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_6_5_10 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__opcode_6_5_11 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func3_000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func3_001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func3_010 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func3_011 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func3_100 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func3_101 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func3_110 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func3_111 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0000000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0100000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0000001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0000101 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0001001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0001101 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0010101 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0100001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0010001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0101101 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1111111 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0000100 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0001000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0001100 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0101100 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0010000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_0010100 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1100000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1110000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1010000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1101000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1111000 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1010001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1110001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1100001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_func7_1101001 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_rd_x0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_op_imm = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_op = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_system = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_auipc = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_ebreak = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_addi = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rv32_nop = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__alu_op = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__alu_info_bus = VL_RAND_RESET_I(21);
    vlSelf->__Vtogcov__rv32_i_imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rv32_s_imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rv32_b_imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rv32_j_imm = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_hc3fc61f5__0 = 0;
}
