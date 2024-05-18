// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_core.h"

extern "C" void npc_stop(int a);

VL_INLINE_OPT void Vcore_core____Vdpiimwrap_inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__npc_stop_TOP__core(IData/*31:0*/ a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core____Vdpiimwrap_inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__npc_stop_TOP__core\n"); );
    // Body
    int a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    npc_stop(a__Vcvt);
}

VL_INLINE_OPT void Vcore_core___ico_sequent__TOP__core__0(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_sequent__TOP__core__0\n"); );
    // Body
    if (((IData)(vlSymsp->TOP.clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSymsp->TOP.clk;
    }
    if (((IData)(vlSymsp->TOP.rst) ^ (IData)(vlSelf->__Vtogcov__rst))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rst = vlSymsp->TOP.rst;
    }
    if (((IData)(vlSymsp->TOP.ifu_req_ready) ^ (IData)(vlSelf->__Vtogcov__ifu_req_ready))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_ready = vlSymsp->TOP.ifu_req_ready;
    }
    if (((IData)(vlSymsp->TOP.ifu_rsp_valid) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_valid))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_valid = vlSymsp->TOP.ifu_rsp_valid;
    }
    if ((1U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffffeU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (1U & vlSymsp->TOP.pc_rtvec));
    }
    if ((2U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffffdU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (2U & vlSymsp->TOP.pc_rtvec));
    }
    if ((4U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffffbU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (4U & vlSymsp->TOP.pc_rtvec));
    }
    if ((8U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffff7U 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (8U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x10U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffffefU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x10U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x20U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffffdfU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x20U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x40U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffffbfU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x40U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x80U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffff7fU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x80U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x100U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffeffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x100U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x200U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffdffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x200U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x400U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffbffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x400U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x800U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffff7ffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x800U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x1000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffefffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x1000U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x2000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffdfffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x2000U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x4000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffbfffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x4000U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x8000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffff7fffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x8000U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x10000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffeffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x10000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x20000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffdffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x20000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x40000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffbffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x40000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x80000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfff7ffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x80000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x100000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffefffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x100000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x200000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffdfffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x200000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x400000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffbfffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x400000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x800000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xff7fffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x800000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x1000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfeffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x2000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfdffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x4000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfbffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x8000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xf7ffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x10000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xefffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x20000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xdfffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x40000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xbfffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if (((vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0x7fffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((1U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (1U & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((2U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (2U & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((4U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (4U & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((8U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (8U & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x10U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x10U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x20U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x20U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x40U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x40U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x80U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x80U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x100U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x100U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x200U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x200U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x400U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x400U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x800U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x800U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x1000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x2000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x4000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x8000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x10000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x20000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x40000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x80000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x100000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x200000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x400000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x800000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x1000000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x2000000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x4000000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x8000000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x10000000U & (vlSymsp->TOP.ifu_rsp_instr 
                        ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x20000000U & (vlSymsp->TOP.ifu_rsp_instr 
                        ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x40000000U & (vlSymsp->TOP.ifu_rsp_instr 
                        ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if (((vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0x7fffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x80000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
}

VL_INLINE_OPT void Vcore_core___ico_sequent__TOP__core__1(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_sequent__TOP__core__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_ready))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_ready = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready;
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x100U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x200U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x400U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x800U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x1000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x2000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x4000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x8000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x100000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x200000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x400000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x800000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x1000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x2000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x4000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x8000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
          ^ vlSelf->__Vtogcov__ifu_req_pc) >> 0x1fU)) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid;
    }
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__0(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
    Vcore_core____Vdpiimwrap_inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__npc_stop_TOP__core(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak);
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__1(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_o_pc_vld))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc_vld = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r;
    }
    if ((1U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0x1eU & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (1U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0x1dU & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (2U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0x1bU & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (4U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0x17U & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (8U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
                  ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0xfU & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (0x10U 
                                              & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0x1eU & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (1U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0x1dU & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (2U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0x1bU & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (4U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0x17U & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (8U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
                  ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0xfU & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (0x10U 
                                              & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_o_valid))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_valid = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r;
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffffeU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffffdU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffffbU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffff7U 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffffefU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffffdfU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffffbfU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffff7fU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffeffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffdffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffbffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffff7ffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffefffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x1000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffdfffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x2000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffbfffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x4000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffff7fffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x8000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffeffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffdffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffbffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfff7ffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffefffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffdfffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffbfffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xff7fffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfeffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfdffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfbffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xf7ffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xefffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xdfffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xbfffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__ifu_o_pc) >> 0x1fU)) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0x7fffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rs1x0))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rs1x0 
            = (0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 0xfU)));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 0x14U))) ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rs2x0))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rs2x0 
            = (0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 0x14U)));
    }
    if (((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rs1en))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rs1en 
            = (0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 0xfU)));
    }
    if (((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 0x14U))) ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rs2en))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rs2en 
            = (0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 0x14U)));
    }
    if (((0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 7U))) ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rdwen))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rdwen 
            = (0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 7U)));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffffeU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffffdU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffffbU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffff7U 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffffefU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffffdfU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffffbfU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffff7fU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffeffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffdffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffbffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffff7ffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffefffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x1000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffdfffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x2000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffbfffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x4000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffff7fffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x8000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffeffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffdffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffbffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfff7ffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffefffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffdfffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffbfffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xff7fffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfeffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfdffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfbffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xf7ffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xefffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xdfffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xbfffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__ifu_o_ir) >> 0x1fU)) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0x7fffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__2(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__2\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
               ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (1U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((2U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
               ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (2U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((4U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
               ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (4U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((8U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
               ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (8U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x10U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x20U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x40U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x80U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x100U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x200U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x400U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x800U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x1000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x2000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x4000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x8000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x10000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x20000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x40000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x80000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x100000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x200000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x400000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x800000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x1000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x2000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x4000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x8000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x10000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x20000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x40000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if (((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
          ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x80000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if (((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_op))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_op 
            = (0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info) 
               ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_info)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__ifu_o_ready = (IData)((0ULL == (7ULL 
                                                   & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
        = ((- (IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
        = ((- (IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu 
        = ((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
           & (0U != (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                              >> 7U))));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid 
        = ((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
           & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
        = ((- (QData)((IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))))) 
           & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info);
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x100U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x200U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x400U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x800U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x1000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x2000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x4000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x8000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x100000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x200000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x400000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x800000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x1000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x2000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x4000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x8000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
          ^ vlSelf->__Vtogcov__ifu_req_pc) >> 0x1fU)) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if (((IData)(vlSelf->__PVT__ifu_o_ready) ^ (IData)(vlSelf->__Vtogcov__ifu_o_ready))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ready = vlSelf->__PVT__ifu_o_ready;
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_valid))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_valid 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid 
        = ((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
           & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid));
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 4U)) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_add)))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_add 
            = (1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                             >> 4U)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info)))) {
        vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak = 
        ((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
         & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                    >> 0x13U)));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu) 
           & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                      >> 4U)));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_valid))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_valid 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid;
    }
    vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena = ((0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                      >> 7U))) 
                                                 & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_ebreak))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_ebreak 
            = vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak;
    }
    vlSelf->__PVT__inst_exu__DOT__commit_trap = ((IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak) 
                                                 & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_add))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_add 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_ena))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_ena 
            = vlSelf->__PVT__inst_exu__DOT__rf_wbck_ena;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__commit_trap) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__commit_trap))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__commit_trap 
            = vlSelf->__PVT__inst_exu__DOT__commit_trap;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__commit_trap) 
           & (IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT____Vtogcov__alu_excp_flush_req_ebreak))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT____Vtogcov__alu_excp_flush_req_ebreak 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak;
    }
    if ((1U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                 ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (1U | (0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause));
    }
    if ((2U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                 ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (2U | (0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause));
    }
    if ((4U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                 ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause) 
               | ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                   ? 0U : 4U));
    }
    if ((8U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                 ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause) 
               | ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                   ? 0U : 8U));
    }
    if ((0x10U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                    ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause) 
               | ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                   ? 0U : 0x10U));
    }
    if ((0x20U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                    ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x40U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                    ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x80U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                    ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x100U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                     ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x200U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                     ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x400U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                     ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x800U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                     ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x1000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                      ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x2000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                      ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x4000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                      ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x8000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                      ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x10000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                       ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x20000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                       ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x40000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                       ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x80000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                       ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x100000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                        ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x200000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                        ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x400000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                        ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x800000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                        ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x1000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                         ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x2000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                         ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x4000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                         ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x8000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                         ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x10000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                          ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x20000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                          ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x40000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                          ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if (((((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
            ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__3(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__3\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_ready))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_ready = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready;
    }
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__4(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__4\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffffeU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (1U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffffdU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (2U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffffbU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (4U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffff7U 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (8U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffffefU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x10U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffffdfU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x20U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffffbfU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x40U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffff7fU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x80U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffeffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x100U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffdffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x200U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffbffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x400U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffff7ffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x800U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffefffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x1000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffdfffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x2000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffbfffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x4000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffff7fffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x8000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffeffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x10000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffdffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x20000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffbffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x40000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfff7ffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x80000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffefffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x100000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffdfffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x200000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffbfffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x400000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xff7fffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x800000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfeffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x1000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfdffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x2000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfbffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x4000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xf7ffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x8000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xefffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x10000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xdfffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x20000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xbfffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x40000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__rf2ifu_x1) >> 0x1fU)) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0x7fffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x80000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[1U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[2U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[3U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[4U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[5U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[6U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[7U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[8U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[9U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0xaU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0xbU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0xcU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0xdU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0xeU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0xfU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x10U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x11U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x12U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x13U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x14U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x15U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x16U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x17U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x18U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x19U] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x1aU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x1bU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x1cU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x1dU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x1eU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
    vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r[0x1fU] 
        = vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r;
}

VL_INLINE_OPT void Vcore_core___nba_comb__TOP__core__0(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__0\n"); );
    // Body
    vlSelf->__PVT__inst_exu__DOT__rf_rs1 = vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r
        [vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r];
    vlSelf->__PVT__inst_exu__DOT__rf_rs2 = vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r
        [vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r];
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid;
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (1U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (2U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (4U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (8U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x10U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x20U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x40U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x80U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x100U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x200U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x400U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x800U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x1000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x2000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x4000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x8000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x10000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x20000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x40000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x80000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x100000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x200000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x400000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x800000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__rf_rs1 ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs1 = 
            ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs1) 
             | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs1));
    }
    vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 = (vlSelf->__PVT__inst_exu__DOT__rf_rs1 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                                    >> 0xfU))))));
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (1U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (2U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (4U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (8U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x10U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x20U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x40U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x80U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x100U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x200U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x400U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x800U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x1000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x2000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x4000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x8000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x10000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x20000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x40000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x80000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x100000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x200000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x400000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x800000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__rf_rs2 ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 = (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                                    >> 0x14U))))));
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
          ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
        = ((- (IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1);
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
          ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
        = ((- (IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2);
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
        = ((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                          >> 0x10U))) ? vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc
            : vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1);
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
        = ((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                          >> 0xfU))) ? vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm
            : vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2);
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
        = ((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
           & (((IData)((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1)) 
                         << 0x20U) | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2)))) 
               << 1U) | (1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                       >> 4U)))));
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
        = ((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
           & (((IData)((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1)) 
                         << 0x20U) | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2)))) 
               >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2))) 
                                     >> 0x20U)) << 1U)));
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[2U] 
        = ((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
           & ((IData)(((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1)) 
                         << 0x20U) | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2))) 
                       >> 0x20U)) >> 0x1fU));
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 1U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (1U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                        >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 2U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 1U)))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (2U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                        >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 3U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 2U)))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (4U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                        >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 4U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 3U)))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (8U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                        >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 5U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 4U)))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x10U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                           >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 6U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 5U)))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x20U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                           >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 7U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 6U)))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x40U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                           >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 8U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 7U)))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x80U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                           >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 9U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 8U)))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x100U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                            >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0xaU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 9U)))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x200U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                            >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0xbU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 0xaU)))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x400U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                            >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0xcU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 0xbU)))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x800U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                            >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0xdU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 0xcU)))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x1000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                             >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0xeU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 0xdU)))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x2000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                             >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0xfU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 0xeU)))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x4000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                             >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x10U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0xfU)))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x8000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                             >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x11U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x10U)))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x10000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                              >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x12U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x11U)))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x20000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                              >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x13U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x12U)))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x40000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                              >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x14U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x13U)))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x80000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                              >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x15U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x14U)))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x100000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                               >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x16U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x15U)))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x200000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                               >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x17U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x16U)))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x400000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                               >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x18U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x17U)))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x800000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                               >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x19U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x18U)))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x1000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x1aU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x19U)))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x2000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x1bU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x1aU)))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x4000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x1cU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x1bU)))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x8000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x1dU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x1cU)))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x10000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                 >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x1eU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x1dU)))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x20000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                 >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                >> 0x1fU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x1eU)))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x40000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                 >> 1U)));
    }
    if ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[2U] 
         ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            >> 0x1fU))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[2U] 
                  << 0x1fU));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 1U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (1U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                        >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 2U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 1U)))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (2U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                        >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 3U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 2U)))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (4U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                        >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 4U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 3U)))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (8U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                        >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 5U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 4U)))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x10U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                           >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 6U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 5U)))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x20U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                           >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 7U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 6U)))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x40U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                           >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 8U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 7U)))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x80U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                           >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 9U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 8U)))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x100U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                            >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0xaU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 9U)))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x200U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                            >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0xbU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 0xaU)))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x400U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                            >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0xcU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 0xbU)))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x800U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                            >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0xdU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 0xcU)))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x1000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                             >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0xeU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 0xdU)))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x2000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                             >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0xfU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 0xeU)))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x4000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                             >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x10U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0xfU)))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x8000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                             >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x11U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x10U)))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x10000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                              >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x12U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x11U)))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x20000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                              >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x13U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x12U)))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x40000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                              >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x14U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x13U)))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x80000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                              >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x15U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x14U)))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x100000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                               >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x16U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x15U)))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x200000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                               >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x17U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x16U)))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x400000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                               >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x18U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x17U)))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x800000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                               >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x19U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x18U)))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x1000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x1aU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x19U)))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x2000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x1bU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x1aU)))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x4000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x1cU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x1bU)))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x8000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x1dU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x1cU)))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x10000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                 >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x1eU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x1dU)))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x20000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                 >> 1U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                >> 0x1fU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x1eU)))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x40000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                 >> 1U)));
    }
    if ((1U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
               ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                  >> 0x1fU)))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                  << 0x1fU));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
        = (((QData)((IData)((1U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[2U]))) 
            << 0x20U) | (QData)((IData)(((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[2U] 
                                          << 0x1fU) 
                                         | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                            >> 1U)))));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
        = (((QData)((IData)((1U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U]))) 
            << 0x20U) | (QData)((IData)(((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[1U] 
                                          << 0x1fU) 
                                         | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_ha18644de__0[0U] 
                                            >> 1U)))));
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1)))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
        = ((- (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add))) 
           & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1);
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2)))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
        = ((- (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add))) 
           & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2);
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1)))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2)))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
        = (0x1ffffffffULL & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                             + vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2));
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res)))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
        = ((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add))) 
           & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res));
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_res) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res));
    }
    vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat = ((- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
                                                  & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_res);
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat 
          ^ vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_wbck_wdat) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__rf_wbck_wdat));
    }
}
