// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_sirv_gnrl_dfflr.h"

VL_INLINE_OPT void Vcore_sirv_gnrl_dfflr___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0(Vcore_sirv_gnrl_dfflr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dfflr___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->TOP.rst) {
        if (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked) {
            vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked)))) {
            vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        }
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dfflr___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__1(Vcore_sirv_gnrl_dfflr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dfflr___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr__1\n"); );
    // Body
    if (vlSymsp->TOP.rst) {
        if (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_hsked) {
            vlSelf->__PVT__qout_r = (0xfffffffeU & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre);
        }
    } else {
        vlSelf->__PVT__qout_r = 0U;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dfflr___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0(Vcore_sirv_gnrl_dfflr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dfflr___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->TOP.rst) {
        if (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_set) {
            vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__qout_r = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_set)))) {
            vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__qout_r = 0U;
    }
}

VL_INLINE_OPT void Vcore_sirv_gnrl_dfflr___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0(Vcore_sirv_gnrl_dfflr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_sirv_gnrl_dfflr___nba_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->TOP.rst) {
        if (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_hsked) {
            vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
            vlSelf->__PVT__qout_r = vlSymsp->TOP.ifu_rsp_instr;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_hsked)))) {
            vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__qout_r = 0U;
    }
}
