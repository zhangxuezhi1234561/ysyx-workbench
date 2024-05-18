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
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_r = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__pc_newpend_r))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_r = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__out_flag_r) ^ (IData)(vlSelf->__Vtogcov__out_flag_r))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_r = vlSelf->__PVT__out_flag_r;
    }
    if ((1U ^ ((IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_new_req)))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_new_req = (1U & (~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)));
    }
    if (((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0xfU))) ^ (IData)(vlSelf->__Vtogcov__minidec_rs1en))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs1en = (0U != (0x1fU 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 0xfU)));
    }
    if (((0U != (0x1fU & (vlSymsp->TOP.ifu_rsp_instr 
                          >> 0x14U))) ^ (IData)(vlSelf->__Vtogcov__minidec_rs2en))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__minidec_rs2en = (0U != (0x1fU 
                                                   & (vlSymsp->TOP.ifu_rsp_instr 
                                                      >> 0x14U)));
    }
    if (((IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_flag_dffrs__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->reset_req_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__reset_req_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_valid_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->ir_pc_vld_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__ir_pc_vld_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->pc_newpend_dfflr__DOT____Vtogcov__qout_r 
            = vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r;
    }
    vlSelf->reset_flag_r = vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r;
    vlSelf->__PVT__reset_req_set = ((~ (IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)) 
                                    & (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r));
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffffeU & vlSelf->__Vtogcov__pc_r) 
                                   | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffffdU & vlSelf->__Vtogcov__pc_r) 
                                   | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffffbU & vlSelf->__Vtogcov__pc_r) 
                                   | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffff7U & vlSelf->__Vtogcov__pc_r) 
                                   | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffffefU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffffdfU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffffbfU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffff7fU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffeffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffdffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffffbffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffff7ffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffefffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x1000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffdfffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x2000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffffbfffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x4000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffff7fffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x8000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffeffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x10000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffdffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x20000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfffbffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x40000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfff7ffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x80000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffefffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x100000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffdfffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x200000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xffbfffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x400000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xff7fffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x800000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfeffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x1000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfdffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x2000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xfbffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x4000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xf7ffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x8000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xefffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x10000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xdfffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x20000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__pc_r))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0xbfffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x40000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__pc_r) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_r = ((0x7fffffffU & vlSelf->__Vtogcov__pc_r) 
                                   | (0x80000000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((1U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                 ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffffeU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((2U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                 ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffffdU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((4U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                 ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op2) 
                                         | ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                             ? 0U : 4U));
    }
    if ((8U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                 ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffff7U 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x10U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                    ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffffefU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x20U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                    ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffffdfU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x40U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                    ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffffbfU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x80U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                    ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffff7fU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x100U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                     ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffeffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x200U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                     ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffdffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x400U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                     ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffffbffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x800U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                     ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffff7ffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x1000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                      ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffefffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x2000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                      ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffdfffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x4000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                      ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffffbfffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x8000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                      ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffff7fffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x10000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                       ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffeffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x20000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                       ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffdffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x40000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                       ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfffbffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x80000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                       ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfff7ffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x100000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                        ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffefffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x200000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                        ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffdfffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x400000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                        ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xffbfffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x800000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                        ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xff7fffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x1000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                         ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfeffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x2000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                         ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfdffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x4000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                         ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xfbffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x8000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                         ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xf7ffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x10000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                          ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xefffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x20000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                          ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xdfffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if ((0x40000000U & (((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                          ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0xbfffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    if (((((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
            ? 0U : 4U) ^ vlSelf->__Vtogcov__pc_add_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op2 = (0x7fffffffU 
                                         & vlSelf->__Vtogcov__pc_add_op2);
    }
    vlSelf->__PVT__ifu_req_valid_pre = (1U & ((~ (IData)(vlSelf->__PVT__reset_flag_dffrs__DOT__qout_r)) 
                                              | (IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)));
    vlSelf->__PVT__pc_add_op1 = ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                  ? vlSymsp->TOP.pc_rtvec
                                  : vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r);
    if (((IData)(vlSelf->reset_flag_r) ^ (IData)(vlSelf->__Vtogcov__reset_flag_r))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_flag_r = vlSelf->reset_flag_r;
    }
    if (((IData)(vlSelf->__PVT__reset_req_set) ^ (IData)(vlSelf->__Vtogcov__reset_req_set))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_set = vlSelf->__PVT__reset_req_set;
    }
    if (((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid_pre))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid_pre = vlSelf->__PVT__ifu_req_valid_pre;
    }
    if ((1U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (1U & vlSelf->__PVT__pc_add_op1));
    }
    if ((2U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (2U & vlSelf->__PVT__pc_add_op1));
    }
    if ((4U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (4U & vlSelf->__PVT__pc_add_op1));
    }
    if ((8U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (8U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80U & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    if (((vlSelf->__PVT__pc_add_op1 ^ vlSelf->__Vtogcov__pc_add_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_add_op1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__pc_add_op1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__pc_add_op1));
    }
    vlSelf->__PVT__pc_nxt_pre = (vlSelf->__PVT__pc_add_op1 
                                 + ((IData)(vlSelf->__PVT__reset_req_dfflr__DOT__qout_r)
                                     ? 0U : 4U));
    if ((1U & (vlSelf->__PVT__pc_nxt_pre ^ vlSelf->__Vtogcov__pc_nxt_pre))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_nxt_pre = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__pc_nxt_pre) 
                                         | (1U & vlSelf->__PVT__pc_nxt_pre));
    }
}

VL_ATTR_COLD void Vcore_ifu_ifetch___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1(Vcore_ifu_ifetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___stl_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__1\n"); );
    // Body
    vlSelf->__PVT__ifu_ir_o_hsked = ((IData)(vlSymsp->TOP__core.__PVT__ifu_o_ready) 
                                     & (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r));
    if (((IData)(vlSelf->__PVT__ifu_ir_o_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_o_hsked))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_o_hsked = vlSelf->__PVT__ifu_ir_o_hsked;
    }
    vlSelf->__PVT__ifu_ir_i_ready = (1U & ((~ (IData)(vlSelf->__PVT__ir_valid_dfflr__DOT__qout_r)) 
                                           | (IData)(vlSelf->__PVT__ifu_ir_o_hsked)));
    if (((IData)(vlSelf->__PVT__ifu_ir_i_ready) ^ (IData)(vlSelf->__Vtogcov__ifu_ir_i_ready))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_ir_i_ready = vlSelf->__PVT__ifu_ir_i_ready;
    }
    vlSelf->__PVT__ir_pc_vld_set = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & (IData)(vlSelf->__PVT__pc_newpend_dfflr__DOT__qout_r));
    vlSelf->__PVT__ifu_rsp_ready = ((IData)(vlSelf->__PVT__ifu_ir_i_ready) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_set) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_set))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_set = vlSelf->__PVT__ir_pc_vld_set;
    }
    vlSelf->__PVT__ir_pc_vld_ena = ((IData)(vlSelf->__PVT__ir_pc_vld_set) 
                                    | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_pc_vld_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                          | (IData)(vlSelf->__PVT__ir_pc_vld_set)));
    vlSelf->__PVT__ifu_rsp_hsked = ((IData)(vlSymsp->TOP.ifu_rsp_valid) 
                                    & (IData)(vlSelf->__PVT__ifu_rsp_ready));
    if (((IData)(vlSelf->__PVT__ir_pc_vld_ena) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_ena))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_ena = vlSelf->__PVT__ir_pc_vld_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_pc_vld_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_pc_vld_nxt))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_pc_vld_nxt = vlSelf->__PVT__ir_pc_vld_nxt;
    }
    if (((IData)(vlSelf->__PVT__ifu_rsp_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_hsked))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_hsked = vlSelf->__PVT__ifu_rsp_hsked;
    }
    vlSelf->__PVT__ir_valid_ena = ((IData)(vlSelf->__PVT__ifu_rsp_hsked) 
                                   | (IData)(vlSelf->__PVT__ifu_ir_o_hsked));
    vlSelf->__PVT__ir_valid_nxt = (1U & ((~ (IData)(vlSelf->__PVT__ifu_ir_o_hsked)) 
                                         | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    vlSelf->__PVT__new_req_condi = (1U & ((~ (IData)(vlSelf->__PVT__out_flag_r)) 
                                          | (IData)(vlSelf->__PVT__ifu_rsp_hsked)));
    if (((IData)(vlSelf->__PVT__ir_valid_ena) ^ (IData)(vlSelf->__Vtogcov__ir_valid_ena))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_ena = vlSelf->__PVT__ir_valid_ena;
    }
    if (((IData)(vlSelf->__PVT__ir_valid_nxt) ^ (IData)(vlSelf->__Vtogcov__ir_valid_nxt))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ir_valid_nxt = vlSelf->__PVT__ir_valid_nxt;
    }
    if (((IData)(vlSelf->__PVT__new_req_condi) ^ (IData)(vlSelf->__Vtogcov__new_req_condi))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__new_req_condi = vlSelf->__PVT__new_req_condi;
    }
    vlSelf->__PVT__ifu_req_valid = ((IData)(vlSelf->__PVT__ifu_req_valid_pre) 
                                    & (IData)(vlSelf->__PVT__new_req_condi));
    vlSelf->__PVT__ifu_req_hsked = ((IData)(vlSelf->__PVT__ifu_req_valid) 
                                    & (IData)(vlSymsp->TOP.ifu_req_ready));
    if (((IData)(vlSelf->__PVT__ifu_req_hsked) ^ (IData)(vlSelf->__Vtogcov__ifu_req_hsked))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_ena = vlSelf->__PVT__out_flag_ena;
    }
    if (((IData)(vlSelf->__PVT__out_flag_nxt) ^ (IData)(vlSelf->__Vtogcov__out_flag_nxt))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_flag_nxt = vlSelf->__PVT__out_flag_nxt;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_ena) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_ena))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_ena = vlSelf->__PVT__pc_newpend_ena;
    }
    if (((IData)(vlSelf->__PVT__pc_newpend_nxt) ^ (IData)(vlSelf->__Vtogcov__pc_newpend_nxt))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_newpend_nxt = vlSelf->__PVT__pc_newpend_nxt;
    }
    if (((IData)(vlSelf->__PVT__reset_req_clr) ^ (IData)(vlSelf->__Vtogcov__reset_req_clr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_clr = vlSelf->__PVT__reset_req_clr;
    }
    vlSelf->__PVT__reset_req_ena = ((IData)(vlSelf->__PVT__reset_req_set) 
                                    | (IData)(vlSelf->__PVT__reset_req_clr));
    vlSelf->__PVT__reset_req_nxt = (1U & ((~ (IData)(vlSelf->__PVT__reset_req_clr)) 
                                          | (IData)(vlSelf->__PVT__reset_req_set)));
    if (((IData)(vlSelf->__PVT__reset_req_ena) ^ (IData)(vlSelf->__Vtogcov__reset_req_ena))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_ena = vlSelf->__PVT__reset_req_ena;
    }
    if (((IData)(vlSelf->__PVT__reset_req_nxt) ^ (IData)(vlSelf->__Vtogcov__reset_req_nxt))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_req_nxt = vlSelf->__PVT__reset_req_nxt;
    }
}

VL_ATTR_COLD void Vcore_ifu_ifetch___configure_coverage(Vcore_ifu_ifetch* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ifu_ifetch___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/ifu_ifetch.v", 6, 13, "", "v_toggle/ifu_ifetch", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/ifu_ifetch.v", 7, 13, "", "v_toggle/ifu_ifetch", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "vsrc/ifu_ifetch.v", 8, 22, "", "v_toggle/ifu_ifetch", "pc_rtvec[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "vsrc/ifu_ifetch.v", 11, 13, "", "v_toggle/ifu_ifetch", "ifu_req_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "vsrc/ifu_ifetch.v", 12, 13, "", "v_toggle/ifu_ifetch", "ifu_req_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "vsrc/ifu_ifetch.v", 13, 23, "", "v_toggle/ifu_ifetch", "ifu_req_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "vsrc/ifu_ifetch.v", 16, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "vsrc/ifu_ifetch.v", 17, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "vsrc/ifu_ifetch.v", 18, 24, "", "v_toggle/ifu_ifetch", "ifu_rsp_instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "vsrc/ifu_ifetch.v", 21, 24, "", "v_toggle/ifu_ifetch", "ifu_o_ir[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "vsrc/ifu_ifetch.v", 22, 27, "", "v_toggle/ifu_ifetch", "ifu_o_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "vsrc/ifu_ifetch.v", 23, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "vsrc/ifu_ifetch.v", 23, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "vsrc/ifu_ifetch.v", 23, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "vsrc/ifu_ifetch.v", 23, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "vsrc/ifu_ifetch.v", 23, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "vsrc/ifu_ifetch.v", 24, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "vsrc/ifu_ifetch.v", 24, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "vsrc/ifu_ifetch.v", 24, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "vsrc/ifu_ifetch.v", 24, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "vsrc/ifu_ifetch.v", 24, 22, "", "v_toggle/ifu_ifetch", "ifu_o_rs2idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "vsrc/ifu_ifetch.v", 25, 13, "", "v_toggle/ifu_ifetch", "ifu_o_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "vsrc/ifu_ifetch.v", 26, 13, "", "v_toggle/ifu_ifetch", "ifu_o_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "vsrc/ifu_ifetch.v", 27, 13, "", "v_toggle/ifu_ifetch", "ifu_o_pc_vld", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1006]), first, "vsrc/ifu_ifetch.v", 30, 13, "", "v_toggle/ifu_ifetch", "ifu_req_hsked", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1007]), first, "vsrc/ifu_ifetch.v", 31, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp_hsked", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1008]), first, "vsrc/ifu_ifetch.v", 32, 13, "", "v_toggle/ifu_ifetch", "ifu_ir_o_hsked", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1009]), first, "vsrc/ifu_ifetch.v", 35, 13, "", "v_toggle/ifu_ifetch", "reset_flag_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1010]), first, "vsrc/ifu_ifetch.v", 39, 13, "", "v_toggle/ifu_ifetch", "reset_req_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1011]), first, "vsrc/ifu_ifetch.v", 40, 13, "", "v_toggle/ifu_ifetch", "reset_req_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1012]), first, "vsrc/ifu_ifetch.v", 41, 13, "", "v_toggle/ifu_ifetch", "reset_req_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1013]), first, "vsrc/ifu_ifetch.v", 42, 13, "", "v_toggle/ifu_ifetch", "reset_req_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1014]), first, "vsrc/ifu_ifetch.v", 43, 13, "", "v_toggle/ifu_ifetch", "reset_req_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1010]), first, "vsrc/ifu_ifetch.v", 47, 13, "", "v_toggle/ifu_ifetch", "ifu_reset_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1007]), first, "vsrc/ifu_ifetch.v", 50, 13, "", "v_toggle/ifu_ifetch", "ir_valid_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1015]), first, "vsrc/ifu_ifetch.v", 51, 13, "", "v_toggle/ifu_ifetch", "ir_valid_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1008]), first, "vsrc/ifu_ifetch.v", 52, 13, "", "v_toggle/ifu_ifetch", "ir_valid_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1016]), first, "vsrc/ifu_ifetch.v", 53, 13, "", "v_toggle/ifu_ifetch", "ir_valid_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "vsrc/ifu_ifetch.v", 54, 13, "", "v_toggle/ifu_ifetch", "ir_valid_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1008]), first, "vsrc/ifu_ifetch.v", 56, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1017]), first, "vsrc/ifu_ifetch.v", 57, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1018]), first, "vsrc/ifu_ifetch.v", 58, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "vsrc/ifu_ifetch.v", 59, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1019]), first, "vsrc/ifu_ifetch.v", 60, 13, "", "v_toggle/ifu_ifetch", "ir_pc_vld_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1020]), first, "vsrc/ifu_ifetch.v", 62, 13, "", "v_toggle/ifu_ifetch", "ifu_ir_i_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1021]), first, "vsrc/ifu_ifetch.v", 64, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1006]), first, "vsrc/ifu_ifetch.v", 66, 13, "", "v_toggle/ifu_ifetch", "out_flag_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1007]), first, "vsrc/ifu_ifetch.v", 67, 13, "", "v_toggle/ifu_ifetch", "out_flag_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1022]), first, "vsrc/ifu_ifetch.v", 68, 13, "", "v_toggle/ifu_ifetch", "out_flag_r", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1023]), first, "vsrc/ifu_ifetch.v", 71, 13, "", "v_toggle/ifu_ifetch", "out_flag_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1024]), first, "vsrc/ifu_ifetch.v", 72, 13, "", "v_toggle/ifu_ifetch", "out_flag_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1025]), first, "vsrc/ifu_ifetch.v", 75, 13, "", "v_toggle/ifu_ifetch", "new_req_condi", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1026]), first, "vsrc/ifu_ifetch.v", 99, 13, "", "v_toggle/ifu_ifetch", "ifu_new_req", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1027]), first, "vsrc/ifu_ifetch.v", 100, 13, "", "v_toggle/ifu_ifetch", "ifu_req_valid_pre", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "vsrc/ifu_ifetch.v", 103, 13, "", "v_toggle/ifu_ifetch", "ifu_rsp2ir_ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1028]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1029]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1030]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1031]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1032]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1033]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1034]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1035]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1036]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1037]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1038]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1039]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1040]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1041]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1042]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1043]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1044]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1045]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1046]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1047]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1048]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1049]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1050]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1051]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1052]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1053]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1054]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1055]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1056]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1057]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1058]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1059]), first, "vsrc/ifu_ifetch.v", 110, 23, "", "v_toggle/ifu_ifetch", "pc_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 111, 22, "", "v_toggle/ifu_ifetch", "pc_incr_ofst[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1060]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1061]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1062]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1063]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1064]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1065]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1066]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1067]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1068]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1069]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1070]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1071]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1072]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1073]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1074]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1075]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1076]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1077]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1078]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1079]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1080]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1081]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1082]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1083]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1084]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1085]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1086]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1087]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1088]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1089]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1090]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1091]), first, "vsrc/ifu_ifetch.v", 112, 22, "", "v_toggle/ifu_ifetch", "pc_add_op1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1093]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1094]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1095]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1096]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1097]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1098]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1099]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1100]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1101]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1102]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1103]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1104]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1105]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1106]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1107]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1108]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1109]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1110]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1111]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1112]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1113]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1114]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1115]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1116]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1117]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1118]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1119]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1120]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1121]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1122]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1123]), first, "vsrc/ifu_ifetch.v", 113, 22, "", "v_toggle/ifu_ifetch", "pc_add_op2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "vsrc/ifu_ifetch.v", 114, 22, "", "v_toggle/ifu_ifetch", "pc_nxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1124]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "vsrc/ifu_ifetch.v", 115, 22, "", "v_toggle/ifu_ifetch", "pc_nxt_pre[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1006]), first, "vsrc/ifu_ifetch.v", 120, 13, "", "v_toggle/ifu_ifetch", "pc_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1028]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1029]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1030]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1031]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1032]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1033]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1034]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1035]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1036]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1037]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1038]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1039]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1040]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1041]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1042]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1043]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1044]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1045]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1046]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1047]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1048]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1049]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1050]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1051]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1052]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1053]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1054]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1055]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1056]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1057]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1058]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1059]), first, "vsrc/ifu_ifetch.v", 127, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_nxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "vsrc/ifu_ifetch.v", 128, 23, "", "v_toggle/ifu_ifetch", "ifu_pc_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1006]), first, "vsrc/ifu_ifetch.v", 136, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1018]), first, "vsrc/ifu_ifetch.v", 137, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_clr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1125]), first, "vsrc/ifu_ifetch.v", 138, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1126]), first, "vsrc/ifu_ifetch.v", 139, 13, "", "v_toggle/ifu_ifetch", "pc_newpend_nxt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1127]), first, "vsrc/ifu_ifetch.v", 151, 13, "", "v_toggle/ifu_ifetch", "minidec_rs1en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1128]), first, "vsrc/ifu_ifetch.v", 152, 13, "", "v_toggle/ifu_ifetch", "minidec_rs2en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "vsrc/ifu_ifetch.v", 153, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "vsrc/ifu_ifetch.v", 153, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "vsrc/ifu_ifetch.v", 153, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "vsrc/ifu_ifetch.v", 153, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "vsrc/ifu_ifetch.v", 153, 22, "", "v_toggle/ifu_ifetch", "minidec_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "vsrc/ifu_ifetch.v", 154, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "vsrc/ifu_ifetch.v", 154, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "vsrc/ifu_ifetch.v", 154, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "vsrc/ifu_ifetch.v", 154, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "vsrc/ifu_ifetch.v", 154, 22, "", "v_toggle/ifu_ifetch", "minidec_rs2idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1127]), first, "vsrc/ifu_ifetch.v", 156, 13, "", "v_toggle/ifu_ifetch", "ir_rs1idx_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1128]), first, "vsrc/ifu_ifetch.v", 157, 13, "", "v_toggle/ifu_ifetch", "ir_rs2idx_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "vsrc/ifu_ifetch.v", 158, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "vsrc/ifu_ifetch.v", 158, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "vsrc/ifu_ifetch.v", 158, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "vsrc/ifu_ifetch.v", 158, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "vsrc/ifu_ifetch.v", 158, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "vsrc/ifu_ifetch.v", 159, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "vsrc/ifu_ifetch.v", 159, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "vsrc/ifu_ifetch.v", 159, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "vsrc/ifu_ifetch.v", 159, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "vsrc/ifu_ifetch.v", 159, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "vsrc/ifu_ifetch.v", 161, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "vsrc/ifu_ifetch.v", 161, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "vsrc/ifu_ifetch.v", 161, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "vsrc/ifu_ifetch.v", 161, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "vsrc/ifu_ifetch.v", 161, 22, "", "v_toggle/ifu_ifetch", "ir_rs1idx_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "vsrc/ifu_ifetch.v", 162, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "vsrc/ifu_ifetch.v", 162, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "vsrc/ifu_ifetch.v", 162, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "vsrc/ifu_ifetch.v", 162, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "vsrc/ifu_ifetch.v", 162, 22, "", "v_toggle/ifu_ifetch", "ir_rs2idx_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "vsrc/ifu_ifetch.v", 182, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_r[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1007]), first, "vsrc/ifu_ifetch.v", 183, 13, "", "v_toggle/ifu_ifetch", "ir_r_ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "vsrc/ifu_ifetch.v", 184, 24, "", "v_toggle/ifu_ifetch", "ifu_ir_nxt[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "vsrc/sirv_gnrl_dffrs.v", 5, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1009]), first, "vsrc/sirv_gnrl_dffrs.v", 6, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/sirv_gnrl_dffrs.v", 8, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/sirv_gnrl_dffrs.v", 9, 23, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1129]), first, "vsrc/sirv_gnrl_dffrs.v", 12, 14, ".reset_flag_dffrs", "v_toggle/sirv_gnrl_dffrs__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1130]), first, "vsrc/sirv_gnrl_dffrs.v", 16, 3, ".reset_flag_dffrs", "v_branch/sirv_gnrl_dffrs__D1", "if", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1131]), first, "vsrc/sirv_gnrl_dffrs.v", 16, 4, ".reset_flag_dffrs", "v_branch/sirv_gnrl_dffrs__D1", "else", "19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1132]), first, "vsrc/sirv_gnrl_dffrs.v", 14, 1, ".reset_flag_dffrs", "v_line/sirv_gnrl_dffrs__D1", "block", "14-15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1013]), first, "vsrc/sirv_gnrl_dfflr.v", 5, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1014]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1010]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/sirv_gnrl_dfflr.v", 9, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/sirv_gnrl_dfflr.v", 10, 23, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1133]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".reset_req_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1134]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 8, ".reset_req_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1135]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 9, ".reset_req_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1136]), first, "vsrc/sirv_gnrl_dfflr.v", 17, 3, ".reset_req_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1137]), first, "vsrc/sirv_gnrl_dfflr.v", 15, 1, ".reset_req_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/Reg.v", 3, 9, ".out_flag_reg", "v_toggle/Reg__Rz1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/Reg.v", 4, 9, ".out_flag_reg", "v_toggle/Reg__Rz1", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1024]), first, "vsrc/Reg.v", 5, 21, ".out_flag_reg", "v_toggle/Reg__Rz1", "din[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1022]), first, "vsrc/Reg.v", 6, 26, ".out_flag_reg", "v_toggle/Reg__Rz1", "dout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1023]), first, "vsrc/Reg.v", 7, 9, ".out_flag_reg", "v_toggle/Reg__Rz1", "wen", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1138]), first, "vsrc/Reg.v", 11, 10, ".out_flag_reg", "v_branch/Reg__Rz1", "if", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1139]), first, "vsrc/Reg.v", 11, 11, ".out_flag_reg", "v_branch/Reg__Rz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1140]), first, "vsrc/Reg.v", 10, 5, ".out_flag_reg", "v_line/Reg__Rz1", "elsif", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1141]), first, "vsrc/Reg.v", 9, 3, ".out_flag_reg", "v_line/Reg__Rz1", "block", "9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1015]), first, "vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1016]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1142]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_valid_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1143]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_valid_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1144]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_valid_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1145]), first, "vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_valid_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1146]), first, "vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_valid_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1017]), first, "vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1019]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1147]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_pc_vld_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1148]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_pc_vld_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1149]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_pc_vld_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1150]), first, "vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_pc_vld_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1151]), first, "vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_pc_vld_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1125]), first, "vsrc/sirv_gnrl_dfflr.v", 5, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1126]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1021]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/sirv_gnrl_dfflr.v", 9, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/sirv_gnrl_dfflr.v", 10, 23, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1152]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".pc_newpend_dfflr", "v_toggle/sirv_gnrl_dfflr__D1", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1153]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 8, ".pc_newpend_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 9, ".pc_newpend_dfflr", "v_branch/sirv_gnrl_dfflr__D1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1155]), first, "vsrc/sirv_gnrl_dfflr.v", 17, 3, ".pc_newpend_dfflr", "v_line/sirv_gnrl_dfflr__D1", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1156]), first, "vsrc/sirv_gnrl_dfflr.v", 15, 1, ".pc_newpend_dfflr", "v_line/sirv_gnrl_dfflr__D1", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1127]), first, "vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs1idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1157]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_rs1idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1158]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_rs1idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1159]), first, "vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_rs1idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1160]), first, "vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_rs1idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1128]), first, "vsrc/sirv_gnrl_dfflr.v", 5, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "lden", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "vsrc/sirv_gnrl_dfflr.v", 6, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "dnxt[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "vsrc/sirv_gnrl_dfflr.v", 7, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/sirv_gnrl_dfflr.v", 9, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/sirv_gnrl_dfflr.v", 10, 23, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "vsrc/sirv_gnrl_dfflr.v", 13, 14, ".ir_rs2idx_dfflr", "v_toggle/sirv_gnrl_dfflr__D5", "qout_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1161]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 8, ".ir_rs2idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1162]), first, "vsrc/sirv_gnrl_dfflr.v", 19, 9, ".ir_rs2idx_dfflr", "v_branch/sirv_gnrl_dfflr__D5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1163]), first, "vsrc/sirv_gnrl_dfflr.v", 17, 3, ".ir_rs2idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "elsif", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1164]), first, "vsrc/sirv_gnrl_dfflr.v", 15, 1, ".ir_rs2idx_dfflr", "v_line/sirv_gnrl_dfflr__D5", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "vsrc/ifu_minidec.v", 5, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1127]), first, "vsrc/ifu_minidec.v", 7, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1128]), first, "vsrc/ifu_minidec.v", 8, 13, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "vsrc/ifu_minidec.v", 9, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs1idx[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "vsrc/ifu_minidec.v", 10, 22, ".inst_ifu_minidec", "v_toggle/ifu_minidec", "dec_rs2idx[4]", "");
}
