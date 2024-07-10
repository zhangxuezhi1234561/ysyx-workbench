// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_ifu_ifetch.h"

VL_INLINE_OPT void Vcore_ifu_ifetch___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Body
    if (((IData)(vlSelf->reset_flag_r) ^ (IData)(vlSelf->__Vtogcov__reset_flag_r))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_flag_r = vlSelf->reset_flag_r;
    }
    if (((0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x0))) {
        vlSymsp->__Vcoverage[1984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x0 
            = (0U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                               >> 0xfU)));
    }
    if (((1U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x1))) {
        vlSymsp->__Vcoverage[1985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1x1 
            = (1U == (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                               >> 0xfU)));
    }
    vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn 
        = ((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                            >> 0xfU))) & (1U != (0x1fU 
                                                 & (vlSymsp->TOP.ifu_rsp_instr 
                                                    >> 0xfU))));
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1xn))) {
        vlSymsp->__Vcoverage[1986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__dec_jalr_rs1xn 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_jal))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_jal = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jal;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_jalr))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_jalr = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr;
    }
    vlSelf->__PVT__bpu2rf_rs1_ena = ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                                     & ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                        & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                           & (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn))));
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_rs1en))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs1en = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs1en;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bxx) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_bxx))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs2en = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_rs2en;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp) 
         ^ (IData)(vlSelf->__Vtogcov__minidec_bjp))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp;
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (1U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (2U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (4U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
               ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (8U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                  ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x100U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x200U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x400U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                   ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x800U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x1000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x2000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x4000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                    ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x8000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                     ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x80000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x100000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x200000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x400000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                      ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x800000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x1000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x2000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x4000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                       ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x8000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x10000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x20000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
                        ^ vlSelf->__Vtogcov__minidec_bjp_imm))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_bjp_imm = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__minidec_bjp_imm) 
                                              | (0x40000000U 
                                                 & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm 
          ^ vlSelf->__Vtogcov__minidec_bjp_imm) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bpu2rf_rs1_ena = vlSelf->__PVT__bpu2rf_rs1_ena;
    }
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena 
        = ((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) | (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt 
        = (1U & ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                 | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)));
    vlSelf->__PVT__ifu_new_req = (1U & ((~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)) 
                                        & (~ (IData)(vlSelf->__PVT__bpu2rf_rs1_ena))));
    vlSelf->__PVT__ifu_rsp_ready = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & ((~ (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)) 
                                       & (IData)(vlSymsp->TOP.ifu_req_ready)));
    if ((1U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (1U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (2U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (4U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (8U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0x7fffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((IData)(vlSelf->__PVT__prdt_taken) ^ (IData)(vlSelf->__Vtogcov__prdt_taken))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_taken = vlSelf->__PVT__prdt_taken;
    }
    vlSelf->__PVT__bjp_req = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp) 
                              & (IData)(vlSelf->__PVT__prdt_taken));
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena))) {
        vlSymsp->__Vcoverage[1988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt))) {
        vlSymsp->__Vcoverage[1989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt;
    }
    if (((IData)(vlSelf->__PVT__ifu_new_req) ^ (IData)(vlSelf->__Vtogcov__ifu_new_req))) {
        vlSymsp->__Vcoverage[1944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_new_req = vlSelf->__PVT__ifu_new_req;
    }
    vlSelf->__PVT__ifu_req_valid_pre = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
                                        | (IData)(vlSelf->__PVT__ifu_new_req));
    vlSelf->__PVT__ifu_rsp_hsked = ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                    & (IData)(vlSelf->__PVT__ifu_rsp_ready));
    if (((IData)(vlSelf->__PVT__bjp_req) ^ (IData)(vlSelf->__Vtogcov__bjp_req))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid_pre = vlSelf->__PVT__ifu_req_valid_pre;
    }
    if (((IData)(vlSelf->__PVT__ifu_rsp_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_hsked))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (1U & vlSelf->__PVT__pc_add_op2));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (2U & vlSelf->__PVT__pc_add_op2));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (4U & vlSelf->__PVT__pc_add_op2));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (8U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if (((vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((1U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (1U & vlSelf->__PVT__pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (2U & vlSelf->__PVT__pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (4U & vlSelf->__PVT__pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (8U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if (((vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    vlSelf->__PVT__pc_nxt_pre = (vlSelf->__PVT__pc_add_op1 
                                 + vlSelf->__PVT__pc_add_op2);
    if (((IData)(vlSelf->__PVT__ir_valid_ena) ^ (IData)(vlSelf->__Vtogcov__ir_valid_ena))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_ena = vlSelf->__PVT__ir_valid_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_valid_nxt))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_nxt = vlSelf->__PVT__ir_valid_nxt;
    }
    if (((IData)(vlSelf->__PVT__ir_rs2idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs2idx_ena))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs2idx_ena = vlSelf->__PVT__ir_rs2idx_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_rs1idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs1idx_ena))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs1idx_ena = vlSelf->__PVT__ir_rs1idx_ena;
    }
    if (((IData)(vlSelf->__PVT__new_req_condi) ^ (IData)(vlSelf->__Vtogcov__new_req_condi))) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__new_req_condi = vlSelf->__PVT__new_req_condi;
    }
    vlSelf->__PVT__ifu_req_valid = ((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
                                    & (IData)(vlSelf->__PVT__new_req_condi));
    if ((1U & (vlSelf->__PVT__pc_nxt_pre ^ vlSelf->__Vtogcov__pc_nxt_pre))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_nxt_pre = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_nxt_pre) 
                                         | (1U & vlSelf->__PVT__pc_nxt_pre));
    }
    vlSelf->__PVT__ifu_req_hsked = ((IData)(vlSelf->__PVT__ifu_req_valid) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_req_hsked))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_ena = vlSelf->__PVT__out_flag_ena;
    }
    if (((IData)(vlSelf->__PVT__out_flag_nxt) ^ (IData)(vlSelf->__Vtogcov__out_flag_nxt))) {
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_nxt = vlSelf->__PVT__out_flag_nxt;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_ena) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_ena))) {
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_ena = vlSelf->__PVT__pc_newpend_ena;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_nxt) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_nxt))) {
        vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_nxt = vlSelf->__PVT__pc_newpend_nxt;
    }
    if (((IData)(vlSelf->__PVT__reset_req_clr) ^ (IData)(vlSelf->__Vtogcov__reset_req_clr))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_clr = vlSelf->__PVT__reset_req_clr;
    }
    vlSelf->__PVT__reset_req_ena = ((IData)(vlSelf->__PVT__reset_req_set) 
                                    | (IData)(vlSelf->__PVT__reset_req_clr));
    vlSelf->__PVT__reset_req_nxt = (1U & ((~ (IData)(vlSelf->__PVT__reset_req_clr)) 
                                          | (IData)(vlSelf->__PVT__reset_req_set)));
    if (((IData)(vlSelf->__PVT__reset_req_ena) ^ (IData)(vlSelf->__Vtogcov__reset_req_ena))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_ena = vlSelf->__PVT__reset_req_ena;
    }
    if (((IData)(vlSelf->__PVT__reset_req_nxt) ^ (IData)(vlSelf->__Vtogcov__reset_req_nxt))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_nxt = vlSelf->__PVT__reset_req_nxt;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1955].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1960].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1965].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1983].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1994].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[1999].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[2004].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP.rst) {
        vlSymsp->__Vcoverage[1954].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->__PVT__reset_req_ena) {
            vlSymsp->__Vcoverage[1957].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__reset_req_dfflr__DOT__qout_r 
                = vlSelf->__PVT__reset_req_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__reset_req_ena)))) {
            vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_valid_ena) {
            vlSymsp->__Vcoverage[1962].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r 
                = vlSelf->__PVT__ir_valid_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_valid_ena)))) {
            vlSymsp->__Vcoverage[1963].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_pc_vld_ena) {
            vlSymsp->__Vcoverage[1967].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r 
                = vlSelf->__PVT__ir_pc_vld_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_pc_vld_ena)))) {
            vlSymsp->__Vcoverage[1968].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_rs2idx_ena) {
            vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_rs2idx_dfflr__DOT__qout_r 
                = (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                            >> 0x14U));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_rs2idx_ena)))) {
            vlSymsp->__Vcoverage[1981].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena) {
            vlSymsp->__Vcoverage[1991].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r 
                = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena)))) {
            vlSymsp->__Vcoverage[1992].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__out_flag_ena) {
            vlSymsp->__Vcoverage[1996].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__out_flag_dfflr__DOT__qout_r 
                = vlSelf->__PVT__out_flag_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__out_flag_ena)))) {
            vlSymsp->__Vcoverage[1997].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__pc_newpend_ena) {
            vlSymsp->__Vcoverage[2001].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r 
                = vlSelf->__PVT__pc_newpend_nxt;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__pc_newpend_ena)))) {
            vlSymsp->__Vcoverage[2002].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ir_rs1idx_ena) {
            vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ir_rs1idx_dfflr__DOT__qout_r 
                = (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                            >> 0xfU));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ir_rs1idx_ena)))) {
            vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__ifu_rsp_hsked) {
            vlSymsp->__Vcoverage[1972].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r 
                = vlSelf->__PVT__prdt_taken;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ifu_rsp_hsked)))) {
            vlSymsp->__Vcoverage[1973].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__out_flag_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r = 0U;
        vlSelf->__PVT__reset_req_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ir_rs2idx_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ir_rs1idx_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r = 0U;
        vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        vlSymsp->__Vcoverage[1953].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1959].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1964].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1982].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1993].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1998].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r = 1U;
    } else {
        vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r = 0U;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__pc_newpend_r))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_r = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[2000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__out_flag_r))) {
        vlSymsp->__Vcoverage[1946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_r = vlSelf->__PVT__out_flag_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__out_flag_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->out_flag_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->out_flag_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__out_flag_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    }
    vlSelf->reset_flag_r = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_r))) {
        vlSymsp->__Vcoverage[1987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_r 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__reset_req_r))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_r = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    vlSelf->__PVT__reset_req_set = ((~ (IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)) 
                                    & (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r));
    if (((IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ifu_prdt_taken_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ifu_prdt_taken_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ifu_prdt_taken_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->reset_flag_r) ^ (IData)(vlSelf->__Vtogcov__reset_flag_r))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_flag_r = vlSelf->reset_flag_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_set) ^ (IData)(vlSelf->__Vtogcov__reset_req_set))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_set = vlSelf->__PVT__reset_req_set;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1\n"); );
    // Body
    vlSelf->__PVT__ifu_ir_o_hsked = ((IData)(vlSymsp->TOP__core.__PVT__ifu_o_ready) 
                                     & (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r));
    if (((IData)(vlSelf->__PVT__ifu_ir_o_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_o_hsked))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_o_hsked = vlSelf->__PVT__ifu_ir_o_hsked;
    }
    vlSelf->__PVT__ifu_ir_i_ready = (1U & ((~ (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r)) 
                                           | (IData)(vlSelf->__PVT__ifu_ir_o_hsked)));
    if (((IData)(vlSelf->__PVT__ifu_ir_i_ready) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_i_ready))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_i_ready = vlSelf->__PVT__ifu_ir_i_ready;
    }
    vlSelf->__PVT__ir_pc_vld_set = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & (IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_set) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_set))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_set = vlSelf->__PVT__ir_pc_vld_set;
    }
    vlSelf->__PVT__ir_pc_vld_ena = ((IData)(vlSelf->__PVT__ir_pc_vld_set) 
                                    | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_pc_vld_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                          | (IData)(vlSelf->__PVT__ir_pc_vld_set)));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_ena) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_ena))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_ena = vlSelf->__PVT__ir_pc_vld_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_nxt))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_nxt = vlSelf->__PVT__ir_pc_vld_nxt;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_comb__TOP__core__inst_ifu__inst_ifu_ifetch__0(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_comb__TOP__core__inst_ifu__inst_ifu_ifetch__0\n"); );
    // Body
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
    if ((1U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffeU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (1U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffdU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (2U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffffbU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (4U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffff7U 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (8U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffefU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffdfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffffbfU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffff7fU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffeffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffdffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffffbffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffff7ffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffefffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffdfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffffbfffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__prdt_pc_add_op1 
                    ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffff7fffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffeffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffdffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfffbffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__prdt_pc_add_op1 
                     ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfff7ffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffefffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x100000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffdfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x200000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xffbfffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x400000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__prdt_pc_add_op1 
                      ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xff7fffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x800000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfeffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x1000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfdffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x2000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xfbffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x4000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                       ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xf7ffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x8000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xefffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x10000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xdfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x20000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__prdt_pc_add_op1 
                        ^ vlSelf->__Vtogcov__prdt_pc_add_op1))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0xbfffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x40000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    if (((vlSelf->__PVT__prdt_pc_add_op1 ^ vlSelf->__Vtogcov__prdt_pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prdt_pc_add_op1 = ((0x7fffffffU 
                                               & vlSelf->__Vtogcov__prdt_pc_add_op1) 
                                              | (0x80000000U 
                                                 & vlSelf->__PVT__prdt_pc_add_op1));
    }
    vlSelf->__PVT__pc_add_op1 = ((IData)(vlSelf->__PVT__bjp_req)
                                  ? vlSelf->__PVT__prdt_pc_add_op1
                                  : ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                      ? vlSymsp->TOP.pc_rtvec
                                      : vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    if ((1U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (1U & vlSelf->__PVT__pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (2U & vlSelf->__PVT__pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (4U & vlSelf->__PVT__pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (8U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if (((vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__2(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__2\n"); );
    // Body
    vlSelf->__PVT__bpu2rf_rs1_ena = ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                                     & ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                        & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_jalr) 
                                           & (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__dec_jalr_rs1xn))));
    vlSelf->__PVT__pc_add_op2 = ((IData)(vlSelf->__PVT__bjp_req)
                                  ? vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__PVT__dec_bjp_imm
                                  : ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                      ? 0U : 4U));
    if (((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) ^ (IData)(vlSelf->__Vtogcov__bpu2rf_rs1_ena))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bpu2rf_rs1_ena = vlSelf->__PVT__bpu2rf_rs1_ena;
    }
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena 
        = ((IData)(vlSelf->__PVT__bpu2rf_rs1_ena) | (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r));
    vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt 
        = (1U & ((~ (IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_dfflrs__DOT__qout_r)) 
                 | (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)));
    vlSelf->__PVT__ifu_new_req = (1U & ((~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)) 
                                        & (~ (IData)(vlSelf->__PVT__bpu2rf_rs1_ena))));
    vlSelf->__PVT__ifu_rsp_ready = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & ((~ (IData)(vlSelf->__PVT__bpu2rf_rs1_ena)) 
                                       & (IData)(vlSymsp->TOP.ifu_req_ready)));
    if ((1U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (1U & vlSelf->__PVT__pc_add_op2));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (2U & vlSelf->__PVT__pc_add_op2));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (4U & vlSelf->__PVT__pc_add_op2));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (8U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if (((vlSelf->__PVT__pc_add_op2 ^ vlSelf->__Vtogcov__pc_add_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op2));
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena))) {
        vlSymsp->__Vcoverage[1988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_ena 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_ena;
    }
    if (((IData)(vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt) 
         ^ (IData)(vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt))) {
        vlSymsp->__Vcoverage[1989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_ifu_litebpu__DOT____Vtogcov__rs1xn_rdrf_nxt 
            = vlSelf->__PVT__inst_ifu_litebpu__DOT__rs1xn_rdrf_nxt;
    }
    if (((IData)(vlSelf->__PVT__ifu_new_req) ^ (IData)(vlSelf->__Vtogcov__ifu_new_req))) {
        vlSymsp->__Vcoverage[1944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_new_req = vlSelf->__PVT__ifu_new_req;
    }
    vlSelf->__PVT__ifu_req_valid_pre = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
                                        | (IData)(vlSelf->__PVT__ifu_new_req));
    vlSelf->__PVT__ifu_rsp_hsked = ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                    & (IData)(vlSelf->__PVT__ifu_rsp_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid_pre))) {
        vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid_pre = vlSelf->__PVT__ifu_req_valid_pre;
    }
    if (((IData)(vlSelf->__PVT__ifu_rsp_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_hsked))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_ena = vlSelf->__PVT__ir_valid_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_valid_nxt))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_nxt = vlSelf->__PVT__ir_valid_nxt;
    }
    if (((IData)(vlSelf->__PVT__ir_rs2idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs2idx_ena))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs2idx_ena = vlSelf->__PVT__ir_rs2idx_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_rs1idx_ena) ^ (IData)(vlSelf->__Vtogcov__ir_rs1idx_ena))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_rs1idx_ena = vlSelf->__PVT__ir_rs1idx_ena;
    }
    if (((IData)(vlSelf->__PVT__new_req_condi) ^ (IData)(vlSelf->__Vtogcov__new_req_condi))) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__new_req_condi = vlSelf->__PVT__new_req_condi;
    }
    vlSelf->__PVT__ifu_req_valid = ((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
                                    & (IData)(vlSelf->__PVT__new_req_condi));
    vlSelf->__PVT__ifu_req_hsked = ((IData)(vlSelf->__PVT__ifu_req_valid) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_req_hsked))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_ena = vlSelf->__PVT__out_flag_ena;
    }
    if (((IData)(vlSelf->__PVT__out_flag_nxt) ^ (IData)(vlSelf->__Vtogcov__out_flag_nxt))) {
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_nxt = vlSelf->__PVT__out_flag_nxt;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_ena) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_ena))) {
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_ena = vlSelf->__PVT__pc_newpend_ena;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_nxt) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_nxt))) {
        vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_nxt = vlSelf->__PVT__pc_newpend_nxt;
    }
    if (((IData)(vlSelf->__PVT__reset_req_clr) ^ (IData)(vlSelf->__Vtogcov__reset_req_clr))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_clr = vlSelf->__PVT__reset_req_clr;
    }
    vlSelf->__PVT__reset_req_ena = ((IData)(vlSelf->__PVT__reset_req_set) 
                                    | (IData)(vlSelf->__PVT__reset_req_clr));
    vlSelf->__PVT__reset_req_nxt = (1U & ((~ (IData)(vlSelf->__PVT__reset_req_clr)) 
                                          | (IData)(vlSelf->__PVT__reset_req_set)));
    if (((IData)(vlSelf->__PVT__reset_req_ena) ^ (IData)(vlSelf->__Vtogcov__reset_req_ena))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_ena = vlSelf->__PVT__reset_req_ena;
    }
    if (((IData)(vlSelf->__PVT__reset_req_nxt) ^ (IData)(vlSelf->__Vtogcov__reset_req_nxt))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_nxt = vlSelf->__PVT__reset_req_nxt;
    }
}

VL_INLINE_OPT void Vcore_ifu_ifetch___nba_comb__TOP__core__inst_ifu__inst_ifu_ifetch__1(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___nba_comb__TOP__core__inst_ifu__inst_ifu_ifetch__1\n"); );
    // Body
    vlSelf->__PVT__pc_nxt_pre = (vlSelf->__PVT__pc_add_op1 
                                 + vlSelf->__PVT__pc_add_op2);
    if ((1U & (vlSelf->__PVT__pc_nxt_pre ^ vlSelf->__Vtogcov__pc_nxt_pre))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_nxt_pre = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_nxt_pre) 
                                         | (1U & vlSelf->__PVT__pc_nxt_pre));
    }
}
