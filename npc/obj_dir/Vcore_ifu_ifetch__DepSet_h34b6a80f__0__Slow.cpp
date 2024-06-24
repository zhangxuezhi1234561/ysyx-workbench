// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_ifu_ifetch.h"

VL_ATTR_COLD void Vcore_ifu_ifetch___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__reset_req_r))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_r = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__pc_newpend_r))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_r = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__out_flag_r))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_r = vlSelf->__PVT__out_flag_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ifu_prdt_taken_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ifu_prdt_taken_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r;
    }
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x0))) {
        vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x0 
            = (0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                               >> 0xfU)));
    }
    if (((1U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x1))) {
        vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x1 
            = (1U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                               >> 0xfU)));
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_r))) {
        vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_r 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->out_flag_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->out_flag_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__out_flag_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    vlSelf->reset_flag_r = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    vlSelf->__PVT__reset_req_set = ((~ (IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)) 
                                    & (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r));
    vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn 
        = ((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                            >> 0xfU))) & (1U != (0x1fU 
                                                 & (vlSymsp->TOP.ifu_rsp_instr 
                                                    >> 0xfU))));
    if (((IData)(vlSelf->reset_flag_r) ^ (IData)(vlSelf->__Vtogcov__reset_flag_r))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_flag_r = vlSelf->reset_flag_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_set) ^ (IData)(vlSelf->__Vtogcov__reset_req_set))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_set = vlSelf->__PVT__reset_req_set;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1xn))) {
        vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1xn 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn;
    }
}

VL_ATTR_COLD void Vcore_ifu_ifetch___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_jal))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_jal = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_jalr))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_jalr = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr;
    }
    vlSelf->__PVT__bpu2rf_rs1_ena = ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                                     & ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                        & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                           & (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn))));
    vlSelf->__PVT__prdt_taken = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal) 
                                 | (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr));
    vlSelf->__PVT__prdt_pc_add_op1 = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal)
                                       ? vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r
                                       : (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                           & (0U == 
                                              (0xf8000U 
                                               & vlSymsp->TOP.ifu_rsp_instr)))
                                           ? 0U : (
                                                   ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                                    & (0x8000U 
                                                       == 
                                                       (0xf8000U 
                                                        & vlSymsp->TOP.ifu_rsp_instr)))
                                                    ? vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r
                                                    : vlSymsp->TOP__core.__PVT__rf2ifu_rs1)));
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_rs1en))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs1en = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_bjp))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_rs2en))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs2en = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en;
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (1U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (2U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (4U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (8U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x100U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x200U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x400U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x800U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x1000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x2000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x4000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x8000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x100000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x200000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x400000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x800000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x1000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x2000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x4000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x8000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
          ^ vlSelf->__Vtogcov__minidec_bjp_imm) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0x7fffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if (((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) ^ (IData)(vlSelf->__Vtogcov__bpu2rf_rs1_ena))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bpu2rf_rs1_ena = vlSelf->__PVT__bpu2rf_rs1_ena;
    }
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena 
        = ((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) | (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt 
        = (1U & ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                 | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)));
    vlSelf->__PVT__ifu_new_req = (1U & ((~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)) 
                                        & (~ (IData)(vlSelf->__PVT__bpu2rf_rs1_ena))));
    if (((IData)(vlSelf->__PVT__prdt_taken) ^ (IData)(vlSelf->__Vtogcov__prdt_taken))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_taken = vlSelf->__PVT__prdt_taken;
    }
    vlSelf->__PVT__bjp_req = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp) 
                              & (IData)(vlSelf->__PVT__prdt_taken));
    if ((1U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (1U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (2U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (4U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (8U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0x7fffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena))) {
        vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt))) {
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt;
    }
    if (((IData)(vlSelf->__PVT__ifu_new_req) ^ (IData)(vlSelf->__Vtogcov__ifu_new_req))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_new_req = vlSelf->__PVT__ifu_new_req;
    }
    vlSelf->__PVT__ifu_req_valid_pre = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
                                        | (IData)(vlSelf->__PVT__ifu_new_req));
    if (((IData)(vlSelf->__PVT__bjp_req) ^ (IData)(vlSelf->__Vtogcov__bjp_req))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bjp_req = vlSelf->__PVT__bjp_req;
    }
    if (vlSelf->__PVT__bjp_req) {
        vlSelf->__PVT__pc_add_op2 = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm;
        vlSelf->__PVT__pc_add_op1 = vlSelf->__PVT__prdt_pc_add_op1;
    } else if (vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) {
        vlSelf->__PVT__pc_add_op2 = 0U;
        vlSelf->__PVT__pc_add_op1 = vlSymsp->TOP.pc_rtvec;
    } else {
        vlSelf->__PVT__pc_add_op2 = 4U;
        vlSelf->__PVT__pc_add_op1 = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid_pre))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid_pre = vlSelf->__PVT__ifu_req_valid_pre;
    }
    if ((1U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (1U & vlSelf->__PVT__pc_add_op2));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (2U & vlSelf->__PVT__pc_add_op2));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (4U & vlSelf->__PVT__pc_add_op2));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (8U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if (((vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((1U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (1U & vlSelf->__PVT__pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (2U & vlSelf->__PVT__pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (4U & vlSelf->__PVT__pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (8U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if (((vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    vlSelf->__PVT__pc_nxt_pre = (vlSelf->__PVT__pc_add_op1 
                                 + vlSelf->__PVT__pc_add_op2);
    if ((1U & (vlSelf->__PVT__pc_nxt_pre ^ vlSelf->__Vtogcov__pc_nxt_pre))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_nxt_pre = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_nxt_pre) 
                                         | (1U & vlSelf->__PVT__pc_nxt_pre));
    }
}

VL_ATTR_COLD void Vcore_ifu_ifetch___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__2(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__2\n"); );
    // Body
    vlSelf->__PVT__ifu_ir_o_hsked = ((IData)(vlSymsp->TOP__core.__PVT__ifu_o_ready) 
                                     & (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r));
    if (((IData)(vlSelf->__PVT__ifu_ir_o_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_o_hsked))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_o_hsked = vlSelf->__PVT__ifu_ir_o_hsked;
    }
    vlSelf->__PVT__ifu_ir_i_ready = (1U & ((~ (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r)) 
                                           | (IData)(vlSelf->__PVT__ifu_ir_o_hsked)));
    if (((IData)(vlSelf->__PVT__ifu_ir_i_ready) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_i_ready))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_i_ready = vlSelf->__PVT__ifu_ir_i_ready;
    }
    vlSelf->__PVT__ir_pc_vld_set = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & (IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r));
    vlSelf->__PVT__ifu_rsp_ready = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & ((~ (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)) 
                                       & (IData)(vlSymsp->TOP.ifu_req_ready)));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_set) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_set))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_set = vlSelf->__PVT__ir_pc_vld_set;
    }
    vlSelf->__PVT__ir_pc_vld_ena = ((IData)(vlSelf->__PVT__ir_pc_vld_set) 
                                    | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_pc_vld_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                          | (IData)(vlSelf->__PVT__ir_pc_vld_set)));
    vlSelf->__PVT__ifu_rsp_hsked = ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                    & (IData)(vlSelf->__PVT__ifu_rsp_ready));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_ena) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_ena))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_ena = vlSelf->__PVT__ir_pc_vld_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_nxt))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_nxt = vlSelf->__PVT__ir_pc_vld_nxt;
    }
    if (((IData)(vlSelf->__PVT__ifu_rsp_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_hsked))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_hsked = vlSelf->__PVT__ifu_rsp_hsked;
    }
    vlSelf->__PVT__ir_valid_ena = ((IData)(vlSelf->__PVT__ifu_rsp_hsked) 
                                   | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_valid_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                         | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    vlSelf->__PVT__ir_rs2idx_ena = ((IData)(vlSelf->__PVT__ifu_rsp_hsked) 
                                    & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en));
    vlSelf->__PVT__ir_rs1idx_ena = (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en) 
                                     & (IData)(vlSelf->__PVT__ifu_rsp_hsked)) 
                                    | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena));
    vlSelf->__PVT__new_req_condi = (1U & ((~ (IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r)) 
                                          | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    if (((IData)(vlSelf->__PVT__ir_valid_ena) ^ (IData)(vlSelf->__Vtogcov__ir_valid_ena))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_ena = vlSelf->__PVT__ir_valid_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_valid_nxt))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_nxt = vlSelf->__PVT__ir_valid_nxt;
    }
    if (((IData)(vlSelf->__PVT__ir_rs2idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs2idx_ena))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs2idx_ena = vlSelf->__PVT__ir_rs2idx_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_rs1idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs1idx_ena))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs1idx_ena = vlSelf->__PVT__ir_rs1idx_ena;
    }
    if (((IData)(vlSelf->__PVT__new_req_condi) ^ (IData)(vlSelf->__Vtogcov__new_req_condi))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__new_req_condi = vlSelf->__PVT__new_req_condi;
    }
    vlSelf->__PVT__ifu_req_valid = ((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
                                    & (IData)(vlSelf->__PVT__new_req_condi));
    vlSelf->__PVT__ifu_req_hsked = ((IData)(vlSelf->__PVT__ifu_req_valid) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_req_hsked))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_hsked = vlSelf->__PVT__ifu_req_hsked;
    }
    vlSelf->__PVT__out_flag_ena = ((IData)(vlSelf->__PVT__ifu_req_hsked) 
                                   | (IData)(vlSelf->__PVT__ifu_rsp_hsked));
    vlSelf->__PVT__out_flag_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_rsp_hsked)) 
                                         | (IData)(vlSelf->__PVT__ifu_req_hsked)));
    vlSelf->__PVT__pc_newpend_ena = ((IData)(vlSelf->__PVT__ifu_req_hsked) 
                                     | (IData)(vlSelf->__PVT__ir_pc_vld_set));
    vlSelf->__PVT__pc_newpend_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ir_pc_vld_set)) 
                                           | (IData)(vlSelf->__PVT__ifu_req_hsked)));
    vlSelf->__PVT__reset_req_clr = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
                                    & (IData)(vlSelf->__PVT__ifu_req_hsked));
    if (((IData)(vlSelf->__PVT__out_flag_ena) ^ (IData)(vlSelf->__Vtogcov__out_flag_ena))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_ena = vlSelf->__PVT__out_flag_ena;
    }
    if (((IData)(vlSelf->__PVT__out_flag_nxt) ^ (IData)(vlSelf->__Vtogcov__out_flag_nxt))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_nxt = vlSelf->__PVT__out_flag_nxt;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_ena) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_ena))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_ena = vlSelf->__PVT__pc_newpend_ena;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_nxt) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_nxt))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_nxt = vlSelf->__PVT__pc_newpend_nxt;
    }
    if (((IData)(vlSelf->__PVT__reset_req_clr) ^ (IData)(vlSelf->__Vtogcov__reset_req_clr))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_clr = vlSelf->__PVT__reset_req_clr;
    }
    vlSelf->__PVT__reset_req_ena = ((IData)(vlSelf->__PVT__reset_req_set) 
                                    | (IData)(vlSelf->__PVT__reset_req_clr));
    vlSelf->__PVT__reset_req_nxt = (1U & ((~ (IData)(vlSelf->__PVT__reset_req_clr)) 
                                          | (IData)(vlSelf->__PVT__reset_req_set)));
    if (((IData)(vlSelf->__PVT__reset_req_ena) ^ (IData)(vlSelf->__Vtogcov__reset_req_ena))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_ena = vlSelf->__PVT__reset_req_ena;
    }
    if (((IData)(vlSelf->__PVT__reset_req_nxt) ^ (IData)(vlSelf->__Vtogcov__reset_req_nxt))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_nxt = vlSelf->__PVT__reset_req_nxt;
    }
}

VL_ATTR_COLD void Vcore_ifu_ifetch___configure_coverage(Vcore_ifu_ifetch* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 6, 13, "", "v_toggle/ifu_ifetch", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 7, 13, "", "v_toggle/ifu_ifetch", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 9, 22, "", "v_toggle/ifu_ifetch", "inspect_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 10, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 13, 13, "", "v_toggle/ifu_ifetch", "ifu_req_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 14, 13, "", "v_toggle/ifu_ifetch", "ifu_req_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 15, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 18, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 19, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 20, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 27, 33, "", "v_toggle/ifu_ifetch", "ifu_o_prdt_taken", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 28, 13, "", "v_toggle/ifu_ifetch", "ifu_o_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 29, 13, "", "v_toggle/ifu_ifetch", "ifu_o_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 30, 13, "", "v_toggle/ifu_ifetch", "ifu_o_pc_vld", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 36, 13, "", "v_toggle/ifu_ifetch", "ifu_req_hsked", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 37, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp_hsked", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 38, 13, "", "v_toggle/ifu_ifetch", "ifu_ir_o_hsked", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 41, 13, "", "v_toggle/ifu_ifetch", "reset_flag_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 45, 13, "", "v_toggle/ifu_ifetch", "reset_req_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 46, 13, "", "v_toggle/ifu_ifetch", "reset_req_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 47, 13, "", "v_toggle/ifu_ifetch", "reset_req_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 48, 13, "", "v_toggle/ifu_ifetch", "reset_req_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 49, 13, "", "v_toggle/ifu_ifetch", "reset_req_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 53, 13, "", "v_toggle/ifu_ifetch", "ifu_reset_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 56, 13, "", "v_toggle/ifu_ifetch", "ir_valid_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 57, 13, "", "v_toggle/ifu_ifetch", "ir_valid_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 58, 13, "", "v_toggle/ifu_ifetch", "ir_valid_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 59, 13, "", "v_toggle/ifu_ifetch", "ir_valid_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 60, 13, "", "v_toggle/ifu_ifetch", "ir_valid_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 62, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 63, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 64, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 65, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 66, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 68, 13, "", "v_toggle/ifu_ifetch", "ifu_ir_i_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 70, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 91, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 93, 13, "", "v_toggle/ifu_ifetch", "prdt_taken", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 94, 13, "", "v_toggle/ifu_ifetch", "ifu_prdt_taken_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 98, 13, "", "v_toggle/ifu_ifetch", "ir_r_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 107, 13, "", "v_toggle/ifu_ifetch", "minidec_rs1en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 108, 13, "", "v_toggle/ifu_ifetch", "minidec_rs2en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 109, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 109, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 109, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 109, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 109, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 110, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 110, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 110, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 110, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 110, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 114, 13, "", "v_toggle/ifu_ifetch", "bpu2rf_rs1_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 116, 13, "", "v_toggle/ifu_ifetch", "ir_rs1idx_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 117, 13, "", "v_toggle/ifu_ifetch", "ir_rs2idx_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 118, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 118, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 118, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 118, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 118, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 119, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 119, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 119, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 119, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 119, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "pc_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 146, 13, "", "v_toggle/ifu_ifetch", "minidec_bjp", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 147, 13, "", "v_toggle/ifu_ifetch", "minidec_jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 148, 13, "", "v_toggle/ifu_ifetch", "minidec_jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 13, "", "v_toggle/ifu_ifetch", "bpu_wait", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1389]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1391]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1392]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1393]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1394]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1395]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1396]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1397]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1398]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1399]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1400]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1401]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1402]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1403]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1404]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1405]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1406]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1407]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1408]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1409]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1410]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1411]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1412]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1413]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1414]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1415]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1416]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1417]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1418]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1419]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1420]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 172, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 197, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 199, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1421]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1422]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 202, 13, "", "v_toggle/ifu_ifetch", "bjp_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1423]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1424]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1425]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1426]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1427]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1428]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1429]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1430]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1431]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1432]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1433]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1434]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1435]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1436]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1437]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1438]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1439]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1440]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1441]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1442]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1443]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1444]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1445]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1446]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1447]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1448]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1449]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1450]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1451]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1452]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1453]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1454]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 204, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1455]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1456]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1457]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1458]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1459]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1460]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1461]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1462]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1463]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1464]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1465]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1466]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1467]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1468]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1469]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1470]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1471]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1472]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1473]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1474]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1475]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1476]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1477]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1478]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1479]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1480]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1481]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1482]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1483]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1484]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1485]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1486]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 208, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1487]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 217, 13, "", "v_toggle/ifu_ifetch", "ifu_new_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1488]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 218, 13, "", "v_toggle/ifu_ifetch", "ifu_req_valid_pre", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 220, 13, "", "v_toggle/ifu_ifetch", "out_flag_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1489]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 221, 13, "", "v_toggle/ifu_ifetch", "out_flag_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1490]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 222, 13, "", "v_toggle/ifu_ifetch", "new_req_condi", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 226, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp2ir_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 230, 13, "", "v_toggle/ifu_ifetch", "pc_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 237, 13, "", "v_toggle/ifu_ifetch", "out_flag_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1491]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 239, 13, "", "v_toggle/ifu_ifetch", "out_flag_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1492]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 240, 13, "", "v_toggle/ifu_ifetch", "out_flag_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 245, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 246, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1493]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 247, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1494]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 248, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 5, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 6, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 8, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 9, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1495]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 12, 14, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1496]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 16, 3, ".reset_flag_dffrs", "v_branch/sirv_gnrl_dffrs__D1", "if", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1497]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 16, 4, ".reset_flag_dffrs", "v_branch/sirv_gnrl_dffrs__D1", "else", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1498]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 14, 1, ".reset_flag_dffrs", "v_line/sirv_gnrl_dffrs__D1", "block", "14-15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1499]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1500]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".reset_req_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1501]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".reset_req_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1502]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".reset_req_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1503]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".reset_req_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1504]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1505]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_valid_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1506]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_valid_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1507]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_valid_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1508]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_valid_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1509]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1510]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_pc_vld_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1511]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_pc_vld_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1512]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_pc_vld_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1513]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_pc_vld_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1514]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1515]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ifu_prdt_taken_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1516]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ifu_prdt_taken_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1517]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ifu_prdt_taken_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1518]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ifu_prdt_taken_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1519]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_rs1idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1520]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_rs1idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1521]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_rs1idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1522]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_rs1idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1523]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_rs2idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1524]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_rs2idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1525]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_rs2idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1526]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_rs2idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 6, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 10, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 11, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 12, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 12, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 12, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 12, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 12, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 13, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 13, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 13, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 13, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 13, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 15, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 16, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 18, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 18, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 18, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 18, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 18, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 19, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 4, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 5, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 7, 23, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 9, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 10, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 12, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 15, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "bpu_wait", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 16, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_taken", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1389]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1391]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1392]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1393]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1394]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1395]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1396]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1397]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1398]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1399]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1400]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1401]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1402]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1403]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1404]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1405]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1406]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1407]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1408]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1409]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1410]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1411]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1412]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1413]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1414]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1415]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1416]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1417]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1418]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1419]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1420]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 20, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_i_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 22, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "bpu2rf_rs1_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 23, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "ir_valid_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1527]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 29, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1x0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1528]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 30, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1x1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1529]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 31, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1xn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 33, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "jalr_rs1x1_dep", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 34, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "jalr_rs1xn_dep", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 36, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "jalr_rs1xn_dep_ir_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1530]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 38, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 39, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1530]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 40, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1531]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 41, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1532]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 42, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1531]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1532]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1530]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1533]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1534]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1535]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1536]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1537]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1491]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1492]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1489]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1538]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1539]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".out_flag_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1540]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".out_flag_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1541]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".out_flag_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1542]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".out_flag_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1493]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1494]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1543]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1544]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".pc_newpend_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1545]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".pc_newpend_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1546]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".pc_newpend_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1547]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".pc_newpend_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
}
