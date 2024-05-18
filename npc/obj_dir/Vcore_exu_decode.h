// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_EXU_DECODE_H_
#define VERILATED_VCORE_EXU_DECODE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vcore__Syms;

class Vcore_exu_decode final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__dec_rs1x0,0,0);
        VL_OUT8(__PVT__dec_rs2x0,0,0);
        VL_OUT8(__PVT__dec_rs1en,0,0);
        VL_OUT8(__PVT__dec_rs2en,0,0);
        VL_OUT8(__PVT__dec_rdwen,0,0);
        VL_OUT8(__PVT__dec_rs1idx,4,0);
        VL_OUT8(__PVT__dec_rs2idx,4,0);
        VL_OUT8(__PVT__dec_rdidx,4,0);
        CData/*0:0*/ __PVT__rv32_op_imm;
        CData/*0:0*/ __PVT__rv32_system;
        CData/*0:0*/ __PVT__rv32_auipc;
        CData/*0:0*/ __PVT__rv32_ebreak;
        CData/*0:0*/ __PVT__rv32_addi;
        CData/*0:0*/ __PVT__alu_op;
        CData/*0:0*/ __Vtogcov__dec_rs1x0;
        CData/*0:0*/ __Vtogcov__dec_rs2x0;
        CData/*0:0*/ __Vtogcov__dec_rdwen;
        CData/*0:0*/ __Vtogcov__opcode_1_0_11;
        CData/*0:0*/ __Vtogcov__opcode_4_2_000;
        CData/*0:0*/ __Vtogcov__opcode_4_2_001;
        CData/*0:0*/ __Vtogcov__opcode_4_2_010;
        CData/*0:0*/ __Vtogcov__opcode_4_2_011;
        CData/*0:0*/ __Vtogcov__opcode_4_2_100;
        CData/*0:0*/ __Vtogcov__opcode_4_2_101;
        CData/*0:0*/ __Vtogcov__opcode_4_2_110;
        CData/*0:0*/ __Vtogcov__opcode_4_2_111;
        CData/*0:0*/ __Vtogcov__opcode_6_5_00;
        CData/*0:0*/ __Vtogcov__opcode_6_5_01;
        CData/*0:0*/ __Vtogcov__opcode_6_5_10;
        CData/*0:0*/ __Vtogcov__opcode_6_5_11;
        CData/*0:0*/ __Vtogcov__rv32_func3_000;
        CData/*0:0*/ __Vtogcov__rv32_func3_001;
        CData/*0:0*/ __Vtogcov__rv32_func3_010;
        CData/*0:0*/ __Vtogcov__rv32_func3_011;
        CData/*0:0*/ __Vtogcov__rv32_func3_100;
        CData/*0:0*/ __Vtogcov__rv32_func3_101;
        CData/*0:0*/ __Vtogcov__rv32_func3_110;
        CData/*0:0*/ __Vtogcov__rv32_func3_111;
        CData/*0:0*/ __Vtogcov__rv32_func7_0000000;
        CData/*0:0*/ __Vtogcov__rv32_func7_0100000;
        CData/*0:0*/ __Vtogcov__rv32_func7_0000001;
        CData/*0:0*/ __Vtogcov__rv32_func7_0000101;
        CData/*0:0*/ __Vtogcov__rv32_func7_0001001;
        CData/*0:0*/ __Vtogcov__rv32_func7_0001101;
        CData/*0:0*/ __Vtogcov__rv32_func7_0010101;
        CData/*0:0*/ __Vtogcov__rv32_func7_0100001;
        CData/*0:0*/ __Vtogcov__rv32_func7_0010001;
        CData/*0:0*/ __Vtogcov__rv32_func7_0101101;
        CData/*0:0*/ __Vtogcov__rv32_func7_1111111;
        CData/*0:0*/ __Vtogcov__rv32_func7_0000100;
        CData/*0:0*/ __Vtogcov__rv32_func7_0001000;
        CData/*0:0*/ __Vtogcov__rv32_func7_0001100;
        CData/*0:0*/ __Vtogcov__rv32_func7_0101100;
        CData/*0:0*/ __Vtogcov__rv32_func7_0010000;
        CData/*0:0*/ __Vtogcov__rv32_func7_0010100;
        CData/*0:0*/ __Vtogcov__rv32_func7_1100000;
        CData/*0:0*/ __Vtogcov__rv32_func7_1110000;
        CData/*0:0*/ __Vtogcov__rv32_func7_1010000;
        CData/*0:0*/ __Vtogcov__rv32_func7_1101000;
        CData/*0:0*/ __Vtogcov__rv32_func7_1111000;
        CData/*0:0*/ __Vtogcov__rv32_func7_1010001;
        CData/*0:0*/ __Vtogcov__rv32_func7_1110001;
        CData/*0:0*/ __Vtogcov__rv32_func7_1100001;
        CData/*0:0*/ __Vtogcov__rv32_func7_1101001;
    };
    struct {
        CData/*0:0*/ __Vtogcov__rv32_rd_x0;
        CData/*0:0*/ __Vtogcov__rv32_op_imm;
        CData/*0:0*/ __Vtogcov__rv32_op;
        CData/*0:0*/ __Vtogcov__rv32_system;
        CData/*0:0*/ __Vtogcov__rv32_auipc;
        CData/*0:0*/ __Vtogcov__rv32_ebreak;
        CData/*0:0*/ __Vtogcov__rv32_addi;
        CData/*0:0*/ __Vtogcov__rv32_nop;
        CData/*0:0*/ __Vtogcov__alu_op;
        CData/*0:0*/ __VdfgTmp_hc3fc61f5__0;
        VL_IN(__PVT__rv32_instr,31,0);
        VL_IN(__PVT__i_pc,31,0);
        VL_OUT(__PVT__dec_imm,31,0);
        VL_OUT(__PVT__dec_pc,31,0);
        IData/*20:0*/ __PVT__alu_info_bus;
        IData/*31:0*/ __PVT__rv32_i_imm;
        IData/*31:0*/ __PVT__rv32_s_imm;
        IData/*31:0*/ __PVT__rv32_b_imm;
        IData/*31:0*/ __PVT__rv32_j_imm;
        IData/*31:0*/ __Vtogcov__dec_imm;
        IData/*20:0*/ __Vtogcov__alu_info_bus;
        IData/*31:0*/ __Vtogcov__rv32_i_imm;
        IData/*31:0*/ __Vtogcov__rv32_s_imm;
        IData/*31:0*/ __Vtogcov__rv32_b_imm;
        IData/*31:0*/ __Vtogcov__rv32_j_imm;
        VL_OUT64(__PVT__dec_info,32,0);
        QData/*32:0*/ __Vtogcov__dec_info;
    };

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_exu_decode(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_exu_decode();
    VL_UNCOPYABLE(Vcore_exu_decode);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
