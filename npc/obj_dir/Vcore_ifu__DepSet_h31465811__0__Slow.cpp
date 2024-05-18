// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_ifu.h"

VL_ATTR_COLD void Vcore_ifu___ctor_var_reset(Vcore_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_ifu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_rtvec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_o_ir = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_o_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_o_rs1idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ifu_o_rs2idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ifu_o_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_o_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_req_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifu_rsp_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifu_o_pc_vld = VL_RAND_RESET_I(1);
}
