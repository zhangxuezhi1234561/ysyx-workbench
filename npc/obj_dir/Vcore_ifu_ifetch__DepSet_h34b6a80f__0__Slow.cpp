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
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_r = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__pc_newpend_r))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_r = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__out_flag_r))) {
        vlSymsp->__Vcoverage[1959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_r = vlSelf->__PVT__out_flag_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ifu_prdt_taken_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ifu_prdt_taken_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r;
    }
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x0))) {
        vlSymsp->__Vcoverage[1997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x0 
            = (0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                               >> 0xfU)));
    }
    if (((1U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x1))) {
        vlSymsp->__Vcoverage[1998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x1 
            = (1U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                               >> 0xfU)));
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_r))) {
        vlSymsp->__Vcoverage[2000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_r 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[2003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->out_flag_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->out_flag_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__out_flag_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_flag_r = vlSelf->reset_flag_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_set) ^ (IData)(vlSelf->__Vtogcov__reset_req_set))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_set = vlSelf->__PVT__reset_req_set;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1xn))) {
        vlSymsp->__Vcoverage[1999].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_jal = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_jalr))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_jalr = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr;
    }
    vlSelf->__PVT__bpu2rf_rs1_ena = ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                                     & ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                        & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                           & (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn))));
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_rs1en))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs1en = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bxx) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_bxx))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bxx = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bxx;
    }
    vlSelf->__PVT__prdt_pc_add_op1 = (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bxx) 
                                       | (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal))
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
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_rs2en))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs2en = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_bjp))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp;
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (1U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (2U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (4U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (8U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x100U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x200U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x400U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x800U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x1000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x2000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x4000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x8000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x100000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x200000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x400000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x800000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x1000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x2000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x4000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x8000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
          ^ vlSelf->__Vtogcov__minidec_bjp_imm) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0x7fffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    vlSelf->__PVT__prdt_taken = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal) 
                                 | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                    | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bxx) 
                                       & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                                          >> 0x1fU))));
    if (((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) ^ (IData)(vlSelf->__Vtogcov__bpu2rf_rs1_ena))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bpu2rf_rs1_ena = vlSelf->__PVT__bpu2rf_rs1_ena;
    }
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena 
        = ((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) | (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt 
        = (1U & ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                 | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)));
    vlSelf->__PVT__ifu_new_req = (1U & ((~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)) 
                                        & (~ (IData)(vlSelf->__PVT__bpu2rf_rs1_ena))));
    if ((1U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (1U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (2U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (4U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (8U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0x7fffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((IData)(vlSelf->__PVT__prdt_taken) ^ (IData)(vlSelf->__Vtogcov__prdt_taken))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_taken = vlSelf->__PVT__prdt_taken;
    }
    vlSelf->__PVT__bjp_req = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp) 
                              & (IData)(vlSelf->__PVT__prdt_taken));
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena))) {
        vlSymsp->__Vcoverage[2001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt))) {
        vlSymsp->__Vcoverage[2002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt;
    }
    if (((IData)(vlSelf->__PVT__ifu_new_req) ^ (IData)(vlSelf->__Vtogcov__ifu_new_req))) {
        vlSymsp->__Vcoverage[1957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_new_req = vlSelf->__PVT__ifu_new_req;
    }
    vlSelf->__PVT__ifu_req_valid_pre = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
                                        | (IData)(vlSelf->__PVT__ifu_new_req));
    if (((IData)(vlSelf->__PVT__bjp_req) ^ (IData)(vlSelf->__Vtogcov__bjp_req))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid_pre = vlSelf->__PVT__ifu_req_valid_pre;
    }
    if ((1U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (1U & vlSelf->__PVT__pc_add_op2));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (2U & vlSelf->__PVT__pc_add_op2));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (4U & vlSelf->__PVT__pc_add_op2));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (8U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if (((vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((1U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (1U & vlSelf->__PVT__pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (2U & vlSelf->__PVT__pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (4U & vlSelf->__PVT__pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (8U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if (((vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    vlSelf->__PVT__pc_nxt_pre = (vlSelf->__PVT__pc_add_op1 
                                 + vlSelf->__PVT__pc_add_op2);
    if ((1U & (vlSelf->__PVT__pc_nxt_pre ^ vlSelf->__Vtogcov__pc_nxt_pre))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_o_hsked = vlSelf->__PVT__ifu_ir_o_hsked;
    }
    vlSelf->__PVT__ifu_ir_i_ready = (1U & ((~ (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r)) 
                                           | (IData)(vlSelf->__PVT__ifu_ir_o_hsked)));
    if (((IData)(vlSelf->__PVT__ifu_ir_i_ready) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_i_ready))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_i_ready = vlSelf->__PVT__ifu_ir_i_ready;
    }
    vlSelf->__PVT__ir_pc_vld_set = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & (IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r));
    vlSelf->__PVT__ifu_rsp_ready = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & ((~ (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)) 
                                       & (IData)(vlSymsp->TOP.ifu_req_ready)));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_set) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_set))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_set = vlSelf->__PVT__ir_pc_vld_set;
    }
    vlSelf->__PVT__ir_pc_vld_ena = ((IData)(vlSelf->__PVT__ir_pc_vld_set) 
                                    | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_pc_vld_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                          | (IData)(vlSelf->__PVT__ir_pc_vld_set)));
    vlSelf->__PVT__ifu_rsp_hsked = ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                    & (IData)(vlSelf->__PVT__ifu_rsp_ready));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_ena) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_ena))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_ena = vlSelf->__PVT__ir_pc_vld_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_nxt))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_nxt = vlSelf->__PVT__ir_pc_vld_nxt;
    }
    if (((IData)(vlSelf->__PVT__ifu_rsp_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_hsked))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_ena = vlSelf->__PVT__ir_valid_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_valid_nxt))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_nxt = vlSelf->__PVT__ir_valid_nxt;
    }
    if (((IData)(vlSelf->__PVT__ir_rs2idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs2idx_ena))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs2idx_ena = vlSelf->__PVT__ir_rs2idx_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_rs1idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs1idx_ena))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs1idx_ena = vlSelf->__PVT__ir_rs1idx_ena;
    }
    if (((IData)(vlSelf->__PVT__new_req_condi) ^ (IData)(vlSelf->__Vtogcov__new_req_condi))) {
        vlSymsp->__Vcoverage[1960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__new_req_condi = vlSelf->__PVT__new_req_condi;
    }
    vlSelf->__PVT__ifu_req_valid = ((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
                                    & (IData)(vlSelf->__PVT__new_req_condi));
    vlSelf->__PVT__ifu_req_hsked = ((IData)(vlSelf->__PVT__ifu_req_valid) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_req_hsked))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_ena = vlSelf->__PVT__out_flag_ena;
    }
    if (((IData)(vlSelf->__PVT__out_flag_nxt) ^ (IData)(vlSelf->__Vtogcov__out_flag_nxt))) {
        vlSymsp->__Vcoverage[1962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_nxt = vlSelf->__PVT__out_flag_nxt;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_ena) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_ena))) {
        vlSymsp->__Vcoverage[1963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_ena = vlSelf->__PVT__pc_newpend_ena;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_nxt) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_nxt))) {
        vlSymsp->__Vcoverage[1964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_nxt = vlSelf->__PVT__pc_newpend_nxt;
    }
    if (((IData)(vlSelf->__PVT__reset_req_clr) ^ (IData)(vlSelf->__Vtogcov__reset_req_clr))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_clr = vlSelf->__PVT__reset_req_clr;
    }
    vlSelf->__PVT__reset_req_ena = ((IData)(vlSelf->__PVT__reset_req_set) 
                                    | (IData)(vlSelf->__PVT__reset_req_clr));
    vlSelf->__PVT__reset_req_nxt = (1U & ((~ (IData)(vlSelf->__PVT__reset_req_clr)) 
                                          | (IData)(vlSelf->__PVT__reset_req_set)));
    if (((IData)(vlSelf->__PVT__reset_req_ena) ^ (IData)(vlSelf->__Vtogcov__reset_req_ena))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_ena = vlSelf->__PVT__reset_req_ena;
    }
    if (((IData)(vlSelf->__PVT__reset_req_nxt) ^ (IData)(vlSelf->__Vtogcov__reset_req_nxt))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 23, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 24, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 25, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 26, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 27, 33, "", "v_toggle/ifu_ifetch", "ifu_o_prdt_taken", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 28, 13, "", "v_toggle/ifu_ifetch", "ifu_o_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 29, 13, "", "v_toggle/ifu_ifetch", "ifu_o_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 30, 13, "", "v_toggle/ifu_ifetch", "ifu_o_pc_vld", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 32, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_x1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 33, 22, "", "v_toggle/ifu_ifetch", "rf2ifu_rs1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1801]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 36, 13, "", "v_toggle/ifu_ifetch", "ifu_req_hsked", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1802]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 37, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp_hsked", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1803]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 38, 13, "", "v_toggle/ifu_ifetch", "ifu_ir_o_hsked", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1804]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 41, 13, "", "v_toggle/ifu_ifetch", "reset_flag_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1805]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 45, 13, "", "v_toggle/ifu_ifetch", "reset_req_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1806]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 46, 13, "", "v_toggle/ifu_ifetch", "reset_req_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1807]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 47, 13, "", "v_toggle/ifu_ifetch", "reset_req_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1808]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 48, 13, "", "v_toggle/ifu_ifetch", "reset_req_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1809]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 49, 13, "", "v_toggle/ifu_ifetch", "reset_req_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1805]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 53, 13, "", "v_toggle/ifu_ifetch", "ifu_reset_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1802]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 56, 13, "", "v_toggle/ifu_ifetch", "ir_valid_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1810]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 57, 13, "", "v_toggle/ifu_ifetch", "ir_valid_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1803]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 58, 13, "", "v_toggle/ifu_ifetch", "ir_valid_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1811]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 59, 13, "", "v_toggle/ifu_ifetch", "ir_valid_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 60, 13, "", "v_toggle/ifu_ifetch", "ir_valid_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1803]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 62, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1812]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 63, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1813]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 64, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 65, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1814]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 66, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1815]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 68, 13, "", "v_toggle/ifu_ifetch", "ifu_ir_i_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1816]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 70, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_r", "");
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1817]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 93, 13, "", "v_toggle/ifu_ifetch", "prdt_taken", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 94, 13, "", "v_toggle/ifu_ifetch", "ifu_prdt_taken_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 97, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1802]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 98, 13, "", "v_toggle/ifu_ifetch", "ir_r_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1818]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 107, 13, "", "v_toggle/ifu_ifetch", "minidec_rs1en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1819]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 108, 13, "", "v_toggle/ifu_ifetch", "minidec_rs2en", "");
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1820]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 114, 13, "", "v_toggle/ifu_ifetch", "bpu2rf_rs1_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1821]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 116, 13, "", "v_toggle/ifu_ifetch", "ir_rs1idx_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1822]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 117, 13, "", "v_toggle/ifu_ifetch", "ir_rs2idx_ena", "");
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 129, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1823]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 146, 13, "", "v_toggle/ifu_ifetch", "minidec_bjp", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1824]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 147, 13, "", "v_toggle/ifu_ifetch", "minidec_jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1825]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 148, 13, "", "v_toggle/ifu_ifetch", "minidec_jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1826]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 149, 13, "", "v_toggle/ifu_ifetch", "minidec_bxx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1827]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1828]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1829]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1830]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1831]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1832]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1833]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1834]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1835]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1836]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1837]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1838]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1839]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1840]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1841]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1842]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1843]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1844]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1845]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1846]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1847]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1848]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1849]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1850]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1851]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1852]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1853]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1854]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1855]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1856]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1857]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1858]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 150, 22, "", "v_toggle/ifu_ifetch", "minidec_bjp_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 151, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 151, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 151, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 151, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 151, 22, "", "v_toggle/ifu_ifetch", "minidec_jalr_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1820]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 169, 13, "", "v_toggle/ifu_ifetch", "bpu_wait", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1859]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1860]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1861]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1862]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1863]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1864]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1865]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1866]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1867]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1868]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1869]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1870]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1871]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1872]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1873]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1874]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1875]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1876]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1877]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1878]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1879]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1880]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1881]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1882]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1883]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1884]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1885]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1886]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1887]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1888]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1889]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1890]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 170, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1827]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1828]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1829]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1830]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1831]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1832]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1833]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1834]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1835]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1836]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1837]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1838]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1839]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1840]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1841]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1842]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1843]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1844]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1845]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1846]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1847]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1848]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1849]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1850]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1851]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1852]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1853]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1854]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1855]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1856]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1857]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1858]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 171, 23, "", "v_toggle/ifu_ifetch", "prdt_pc_add_op2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 198, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 200, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1891]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 201, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1892]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 203, 13, "", "v_toggle/ifu_ifetch", "bjp_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1893]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1894]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1895]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1896]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1897]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1898]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1899]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1900]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1901]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1902]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1903]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1904]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1905]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1906]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1907]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1908]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1909]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1910]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1911]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1912]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1913]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1914]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1915]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1916]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1917]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1918]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1919]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1920]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1921]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1922]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1923]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1924]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 205, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1925]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1926]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1927]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1928]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1929]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1930]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1931]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1932]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1933]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1934]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1935]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1936]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1937]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1938]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1939]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1940]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1941]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1942]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1943]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1944]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1945]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1946]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1947]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1948]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1949]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1950]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1951]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1952]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1953]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1954]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1955]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1956]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 209, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1957]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 218, 13, "", "v_toggle/ifu_ifetch", "ifu_new_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1958]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 219, 13, "", "v_toggle/ifu_ifetch", "ifu_req_valid_pre", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1802]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 221, 13, "", "v_toggle/ifu_ifetch", "out_flag_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1959]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 222, 13, "", "v_toggle/ifu_ifetch", "out_flag_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1960]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 223, 13, "", "v_toggle/ifu_ifetch", "new_req_condi", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 227, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp2ir_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1801]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 231, 13, "", "v_toggle/ifu_ifetch", "pc_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1801]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 238, 13, "", "v_toggle/ifu_ifetch", "out_flag_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1961]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 240, 13, "", "v_toggle/ifu_ifetch", "out_flag_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1962]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 241, 13, "", "v_toggle/ifu_ifetch", "out_flag_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1801]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 246, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1813]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 247, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1963]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 248, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1964]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_ifetch.v", 249, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 5, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1804]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 6, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 8, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 9, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1965]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 12, 14, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1966]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 16, 3, ".reset_flag_dffrs", "v_branch/sirv_gnrl_dffrs__D1", "if", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1967]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 16, 4, ".reset_flag_dffrs", "v_branch/sirv_gnrl_dffrs__D1", "else", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1968]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dffrs.v", 14, 1, ".reset_flag_dffrs", "v_line/sirv_gnrl_dffrs__D1", "block", "14-15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1808]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1809]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1805]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1969]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1970]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".reset_req_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1971]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".reset_req_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1972]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".reset_req_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1973]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".reset_req_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1810]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1811]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1974]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1975]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_valid_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1976]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_valid_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1977]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_valid_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1978]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_valid_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1812]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1814]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1979]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1980]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_pc_vld_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1981]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_pc_vld_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1982]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_pc_vld_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1983]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_pc_vld_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1802]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1817]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1984]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ifu_prdt_taken_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1985]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ifu_prdt_taken_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1986]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ifu_prdt_taken_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1987]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ifu_prdt_taken_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1988]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ifu_prdt_taken_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1821]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1989]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_rs1idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1990]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_rs1idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1991]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_rs1idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1992]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_rs1idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1822]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1993]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_rs2idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1994]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_rs2idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1995]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_rs2idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1996]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_rs2idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1818]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 7, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1819]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 8, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1823]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 12, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1824]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 13, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1825]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 14, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1826]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 15, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bxx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 16, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 16, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 16, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 16, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 16, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_jalr_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1827]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1828]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1829]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1830]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1831]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1832]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1833]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1834]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1835]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1836]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1837]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1838]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1839]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1840]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1841]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1842]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1843]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1844]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1845]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1846]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1847]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1848]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1849]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1850]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1851]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1852]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1853]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1854]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1855]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1856]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1857]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1858]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_minidec.v", 17, 30, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_bjp_imm[31]", "");
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1824]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 9, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jal", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1825]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 10, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1826]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 11, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bxx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1827]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1828]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1829]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1830]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1831]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1832]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1833]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1834]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1835]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1836]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1837]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1838]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1839]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1840]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1841]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1842]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1843]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1844]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1845]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1846]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1847]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1848]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1849]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1850]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1851]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1852]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1853]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1854]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1855]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1856]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1857]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1858]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 13, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_bjp_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 14, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 14, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 14, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 14, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 14, 22, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1820]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 16, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "bpu_wait", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1817]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 17, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_taken", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1859]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1860]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1861]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1862]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1863]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1864]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1865]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1866]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1867]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1868]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1869]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1870]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1871]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1872]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1873]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1874]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1875]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1876]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1877]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1878]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1879]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1880]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1881]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1882]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1883]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1884]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1885]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1886]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1887]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1888]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1889]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1890]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 18, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1827]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1828]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1829]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1830]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1831]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1832]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1833]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1834]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1835]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1836]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1837]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1838]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1839]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1840]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1841]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1842]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1843]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1844]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1845]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1846]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1847]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1848]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1849]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1850]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1851]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1852]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1853]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1854]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1855]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1856]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1857]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1858]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 19, 27, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "prdt_pc_add_op2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 21, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_i_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1820]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 23, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "bpu2rf_rs1_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1803]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 24, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "ir_valid_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 25, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_x1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 26, 30, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rf2bpu_rs1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1997]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 30, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1x0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1998]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 31, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1x1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1999]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 32, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "dec_jalr_rs1xn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 34, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "jalr_rs1x1_dep", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 35, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "jalr_rs1xn_dep", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 37, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "jalr_rs1xn_dep_ir_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2000]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 39, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1820]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 40, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2000]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 41, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2001]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 42, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2002]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/ifu_litebpu.v", 43, 13, ".inst_ifu_litebpu", "v_toggle/ifu_litebpu", "rs1xn_rdrf_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2001]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2002]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2000]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2003]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2004]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2005]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2006]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2007]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".inst_ifu_litebpu.rs1xn_rdrf_dfflrs", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1961]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1962]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1959]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2008]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".out_flag_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2009]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".out_flag_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2010]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".out_flag_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2011]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".out_flag_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2012]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".out_flag_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1963]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 5, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1964]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 6, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1816]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 7, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 9, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 10, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2013]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 13, 14, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2014]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 8, ".pc_newpend_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2015]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 19, 9, ".pc_newpend_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2016]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 17, 3, ".pc_newpend_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2017]), first, "/home/pro/ysyx/ysyx-workbench/npc/vsrc/sirv_gnrl_dfflr.v", 15, 1, ".pc_newpend_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
}
