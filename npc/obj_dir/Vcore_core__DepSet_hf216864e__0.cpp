// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_core.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vcore_core____Vdpiimwrap_inst_exu__DOT__inst_RegisterFile__DOT__set_gpr_ptr__Vdpioc2_TOP__core(const VlUnpacked<IData/*31:0*/, 33> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core____Vdpiimwrap_inst_exu__DOT__inst_RegisterFile__DOT__set_gpr_ptr__Vdpioc2_TOP__core\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {32, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void npc_stop(int a, int b);

VL_INLINE_OPT void Vcore_core____Vdpiimwrap_inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__npc_stop_TOP__core(IData/*31:0*/ a, IData/*31:0*/ b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core____Vdpiimwrap_inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__npc_stop_TOP__core\n"); );
    // Body
    int a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    int b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    npc_stop(a__Vcvt, b__Vcvt);
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
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_ready = vlSymsp->TOP.ifu_req_ready;
    }
    if (((IData)(vlSymsp->TOP.ifu_rsp_valid) ^ (IData)(vlSelf->__Vtogcov__ifu_rsp_valid))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_valid = vlSymsp->TOP.ifu_rsp_valid;
    }
    if ((1U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffffeU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (1U & vlSymsp->TOP.pc_rtvec));
    }
    if ((2U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffffdU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (2U & vlSymsp->TOP.pc_rtvec));
    }
    if ((4U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffffbU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (4U & vlSymsp->TOP.pc_rtvec));
    }
    if ((8U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffff7U 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (8U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x10U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffffefU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x10U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x20U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffffdfU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x20U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x40U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffffbfU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x40U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x80U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffff7fU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x80U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x100U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffeffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x100U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x200U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffdffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x200U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x400U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffffbffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x400U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x800U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffff7ffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x800U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x1000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffefffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x1000U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x2000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffdfffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x2000U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x4000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffffbfffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x4000U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x8000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffff7fffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x8000U & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x10000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffeffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x10000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x20000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffdffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x20000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x40000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfffbffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x40000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x80000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfff7ffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x80000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x100000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffefffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x100000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x200000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffdfffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x200000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x400000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xffbfffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x400000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x800000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xff7fffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x800000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x1000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfeffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x2000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfdffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x4000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xfbffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x8000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xf7ffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x10000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xefffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x20000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xdfffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((0x40000000U & (vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0xbfffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if (((vlSymsp->TOP.pc_rtvec ^ vlSelf->__Vtogcov__pc_rtvec) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_rtvec = ((0x7fffffffU 
                                        & vlSelf->__Vtogcov__pc_rtvec) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP.pc_rtvec));
    }
    if ((1U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffffeU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (1U & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((2U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffffdU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (2U & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((4U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffffbU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (4U & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((8U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffff7U 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (8U & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x10U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffffefU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x10U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x20U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffffdfU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x20U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x40U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffffbfU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x40U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x80U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffff7fU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x80U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x100U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffeffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x100U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x200U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffdffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x200U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x400U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffffbffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x400U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x800U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffff7ffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x800U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x1000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffefffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x1000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x2000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffdfffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x2000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x4000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffffbfffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x4000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x8000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffff7fffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x8000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x10000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffeffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x10000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x20000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffdffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x20000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x40000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfffbffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x40000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x80000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfff7ffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x80000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x100000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffefffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x100000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x200000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffdfffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x200000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x400000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xffbfffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x400000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x800000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xff7fffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x800000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x1000000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfeffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x1000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x2000000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfdffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x2000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x4000000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xfbffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x4000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x8000000U & (vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xf7ffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x8000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x10000000U & (vlSymsp->TOP.ifu_rsp_instr 
                        ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xefffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x10000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x20000000U & (vlSymsp->TOP.ifu_rsp_instr 
                        ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xdfffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x20000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if ((0x40000000U & (vlSymsp->TOP.ifu_rsp_instr 
                        ^ vlSelf->__Vtogcov__ifu_rsp_instr))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_instr = ((0xbfffffffU 
                                             & vlSelf->__Vtogcov__ifu_rsp_instr) 
                                            | (0x40000000U 
                                               & vlSymsp->TOP.ifu_rsp_instr));
    }
    if (((vlSymsp->TOP.ifu_rsp_instr ^ vlSelf->__Vtogcov__ifu_rsp_instr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_rsp_ready = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_rsp_ready;
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
               ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                  ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x100U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x200U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x400U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                   ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x800U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x1000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x2000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x4000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                    ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x8000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                     ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x100000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x200000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x400000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                      ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x800000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x1000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x2000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x4000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                       ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x8000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x10000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x20000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
                        ^ vlSelf->__Vtogcov__ifu_req_pc))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x40000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre 
          ^ vlSelf->__Vtogcov__ifu_req_pc) >> 0x1fU)) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_pc = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__ifu_req_pc) 
                                         | (0x80000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_nxt_pre));
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_req_valid))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_req_valid = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_req_valid;
    }
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__0(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__0\n"); );
    // Body
    vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
    Vcore_core____Vdpiimwrap_inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__npc_stop_TOP__core(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak, vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r);
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__1(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__1\n"); );
    // Body
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_o_pc_vld))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc_vld = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_pc_vld_dfflr__DOT__qout_r;
    }
    if ((1U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0x1eU & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (1U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0x1dU & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (2U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0x1bU & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (4U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0x17U & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (8U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r) 
                  ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs2idx = ((0xfU & (IData)(vlSelf->__Vtogcov__ifu_o_rs2idx)) 
                                           | (0x10U 
                                              & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0x1eU & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (1U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0x1dU & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (2U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0x1bU & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (4U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
               ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0x17U & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (8U & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r) 
                  ^ (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_rs1idx = ((0xfU & (IData)(vlSelf->__Vtogcov__ifu_o_rs1idx)) 
                                           | (0x10U 
                                              & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r)));
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_o_valid))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_valid = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r;
    }
    if (((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r) 
         ^ (IData)(vlSelf->__Vtogcov__ifu_o_prdt_taken))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_prdt_taken = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_prdt_taken_dfflr__DOT__qout_r;
    }
    if (((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 0xfU))) ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rs1x0))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rs1x0 
            = (0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 0xfU)));
    }
    if (((0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                          >> 0x14U))) ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rs2x0))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rs2x0 
            = (0U == (0x1fU & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                               >> 0x14U)));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffffeU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffffdU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffffbU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffff7U 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffffefU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffffdfU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffffbfU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffff7fU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffeffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffdffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffffbffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffff7ffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffefffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x1000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffdfffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x2000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffffbfffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x4000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffff7fffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x8000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffeffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffdffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfffbffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfff7ffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffefffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffdfffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xffbfffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xff7fffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfeffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfdffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xfbffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xf7ffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xefffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xdfffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_ir))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0xbfffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__ifu_o_ir) >> 0x1fU)) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ir = ((0x7fffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_ir) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffffeU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffffdU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffffbU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffff7U 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffffefU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffffdfU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffffbfU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffff7fU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffeffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffdffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffffbffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffff7ffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffefffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x1000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffdfffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x2000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffffbfffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x4000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffff7fffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x8000U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffeffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffdffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfffbffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfff7ffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffefffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffdfffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xffbfffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xff7fffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfeffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfdffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xfbffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xf7ffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xefffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xdfffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__ifu_o_pc))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0xbfffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__ifu_o_pc) >> 0x1fU)) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_pc = ((0x7fffffffU 
                                        & vlSelf->__Vtogcov__ifu_o_pc) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x100U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x200U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x400U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x800U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x1000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x2000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x4000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x8000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x10000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x20000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x40000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x80000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x100000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x200000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x400000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x800000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x1000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x2000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x4000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x8000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x10000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x20000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__inspect_pc))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x40000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__inspect_pc) >> 0x1fU)) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inspect_pc = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__inspect_pc) 
                                         | (0x80000000U 
                                            & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__PVT__qout_r));
    }
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__2(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__2\n"); );
    // Init
    CData/*1:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6d5f8c0a__0;
    inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6d5f8c0a__0 = 0;
    CData/*2:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_he3438b4d__0;
    inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_he3438b4d__0 = 0;
    CData/*3:0*/ inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6c6c7f6c__0;
    inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6c6c7f6c__0 = 0;
    // Body
    if (((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs1en) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rs1en))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rs1en 
            = vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs1en;
    }
    if (((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs2en) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rs2en))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rs2en 
            = vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rs2en;
    }
    if (((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rdwen) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_rdwen))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_rdwen 
            = vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rdwen;
    }
    if ((1U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
               ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (1U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((2U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
               ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (2U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((4U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
               ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (4U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((8U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
               ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (8U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x10U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x20U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x40U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x80U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x100U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x200U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x400U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x800U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x1000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x2000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x4000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x8000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x10000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x20000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x40000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x80000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x100000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x200000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x400000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x800000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x1000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x2000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x4000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x8000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x10000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x20000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x40000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if (((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm 
          ^ vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_imm = 
            ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__dec_imm) 
             | (0x80000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm));
    }
    if (((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_op))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_op 
            = (0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)));
    }
    if (((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_op))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_op 
            = (2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)));
    }
    if (((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_op))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_op 
            = (1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info) 
               ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__dec_info)))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT____Vtogcov__dec_info 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__dec_info 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT____Vtogcov__dec_info) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__ifu_o_ready = ((IData)((0ULL == 
                                           (7ULL & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
                                  | ((IData)((2ULL 
                                              == (7ULL 
                                                  & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
                                     | (IData)((1ULL 
                                                == 
                                                (7ULL 
                                                 & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
        = ((- (IData)((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
        = ((- (QData)((IData)((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))))) 
           & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
        = ((- (IData)((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
        = ((- (IData)((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
        = ((- (IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_imm);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
        = ((- (IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__PVT__qout_r);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid 
        = ((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
           & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid 
        = ((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
           & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_valid 
        = ((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
           & (IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_valid_dfflr__DOT__qout_r));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
        = ((- (QData)((IData)((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))))) 
           & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu 
        = ((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
           & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rdwen));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
        = ((- (QData)((IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))))) 
           & vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info);
    if (((IData)(vlSelf->__PVT__ifu_o_ready) ^ (IData)(vlSelf->__Vtogcov__ifu_o_ready))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ifu_o_ready = vlSelf->__PVT__ifu_o_ready;
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_imm) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_imm));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 4U)) ^ (IData)(vlSelf->__Vtogcov__agu_icb_cmd_read)))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_read = (1U & (IData)(
                                                            (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                             >> 4U)));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 5U)) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_o_cmt_stamo)))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_o_cmt_stamo 
            = (1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                             >> 5U)));
    }
    if (((0U == (3U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                               >> 6U)))) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_lsuagu__DOT____Vtogcov__agu_i_size_b))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_lsuagu__DOT____Vtogcov__agu_i_size_b 
            = (0U == (3U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                    >> 6U))));
    }
    if (((1U == (3U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                               >> 6U)))) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_lsuagu__DOT____Vtogcov__agu_i_size_hw))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_lsuagu__DOT____Vtogcov__agu_i_size_hw 
            = (1U == (3U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                    >> 6U))));
    }
    if (((2U == (3U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                               >> 6U)))) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_lsuagu__DOT____Vtogcov__agu_i_size_w))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_lsuagu__DOT____Vtogcov__agu_i_size_w 
            = (2U == (3U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                    >> 6U))));
    }
    vlSelf->__PVT__inst_exu__DOT__alu_cmt_ld = ((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
                                                & (IData)(
                                                          (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                           >> 4U)));
    vlSelf->__PVT__inst_exu__DOT__alu_cmt_stamo = (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                              >> 5U)));
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info)))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_pc) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_imm) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_pc) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc));
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_valid))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_valid 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_valid))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_valid 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_valid) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_valid))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_valid 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_valid;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid 
        = (((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
            & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_valid)) 
           | (((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
               & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_valid)) 
              | ((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
                 & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_valid))));
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 4U)) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_o_cmt_bjp)))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_o_cmt_bjp 
            = (1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                             >> 4U)));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 5U)) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_o_cmt_prdt)))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_o_cmt_prdt 
            = (1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                             >> 5U)));
    }
    vlSelf->__PVT__inst_exu__DOT__alu_cmt_bjp = ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
                                                 & (IData)(
                                                           (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                            >> 4U)));
    vlSelf->__PVT__inst_exu__DOT__alu_cmt_bjp_prdt 
        = ((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))) 
           & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                      >> 5U)));
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info)))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu;
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 6U)) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_xor)))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_xor 
            = (1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                             >> 6U)));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xaU)) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_or)))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_or 
            = (1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                             >> 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xdU)) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_sltu)))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_sltu 
            = (1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                             >> 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xeU)) ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_lui)))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_lui 
            = (1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                             >> 0xeU)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info)))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_info) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu) 
           & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                      >> 0xeU)));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add 
        = (IData)((0x10ULL == (0x20010ULL & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info)));
    inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6d5f8c0a__0 
        = ((2U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                           >> 0xdU)) << 1U)) | (1U 
                                                & (IData)(
                                                          (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                                                           >> 0xeU))));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_ld) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_ld))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_ld 
            = vlSelf->__PVT__inst_exu__DOT__alu_cmt_ld;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_stamo) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_stamo))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_stamo 
            = vlSelf->__PVT__inst_exu__DOT__alu_cmt_stamo;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_valid))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_valid 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid;
    }
    vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_valid 
        = ((IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_rdwen) 
           & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_bjp) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_bjp))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_bjp 
            = vlSelf->__PVT__inst_exu__DOT__alu_cmt_bjp;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_bjp_prdt) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_bjp_prdt))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_bjp_prdt 
            = vlSelf->__PVT__inst_exu__DOT__alu_cmt_bjp_prdt;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_ebreak))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_cmt_ebreak 
            = vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak;
    }
    vlSelf->__PVT__inst_exu__DOT__commit_trap = ((IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak) 
                                                 & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__o_valid));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_mvop2))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_mvop2 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_add))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_add 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu 
        = (1U & (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
                  & (IData)(inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6d5f8c0a__0)) 
                 >> 1U));
    inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_he3438b4d__0 
        = ((4U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                           >> 6U)) << 2U)) | (IData)(inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6d5f8c0a__0));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_valid) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_valid))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_valid 
            = vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_valid;
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__commit_trap) 
         ^ (IData)(vlSelf->inst_exu__DOT____Vtogcov__commit_trap))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__commit_trap 
            = vlSelf->__PVT__inst_exu__DOT__commit_trap;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__commit_trap) 
           & (IData)(vlSelf->__PVT__inst_exu__DOT__alu_cmt_ebreak));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_sltu))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_sltu 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_xor 
        = (1U & (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
                  & (IData)(inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_he3438b4d__0)) 
                 >> 2U));
    inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6c6c7f6c__0 
        = ((8U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                           >> 0xaU)) << 3U)) | (IData)(inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_he3438b4d__0));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT____Vtogcov__alu_excp_flush_req_ebreak))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT____Vtogcov__alu_excp_flush_req_ebreak 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak;
    }
    if ((1U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                 ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (1U | (0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause));
    }
    if ((2U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                 ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (2U | (0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause));
    }
    if ((4U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                 ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause) 
               | ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                   ? 0U : 4U));
    }
    if ((8U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                 ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause) 
               | ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                   ? 0U : 8U));
    }
    if ((0x10U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                    ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause) 
               | ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                   ? 0U : 0x10U));
    }
    if ((0x20U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                    ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x40U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                    ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x80U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                    ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x100U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                     ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x200U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                     ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x400U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                     ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x800U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                     ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x1000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                      ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x2000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                      ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x4000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                      ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x8000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                      ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x10000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                       ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x20000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                       ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x40000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                       ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x80000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                       ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x100000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                        ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x200000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                        ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x400000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                        ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x800000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                        ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x1000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                         ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x2000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                         ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x4000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                         ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x8000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                         ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x10000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                          ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x20000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                          ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if ((0x40000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
                          ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if (((((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_commit__DOT__inst_exu_excp__DOT__alu_excp_flush_req_ebreak)
            ? 3U : 0x1fU) ^ vlSelf->inst_exu__DOT____Vtogcov__cmt_cause) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__cmt_cause 
            = (0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__cmt_cause);
    }
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_xor) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_xor))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_xor 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_xor;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_or 
        = (1U & (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
                  & (IData)(inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6c6c7f6c__0)) 
                 >> 3U));
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hdf482e26__0 
        = (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_add) 
            << 4U) | (IData)(inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h6c6c7f6c__0));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_or) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_or))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_or 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_or;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add 
        = (1U & (((- (IData)((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
                  >> 4U) | ((((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
                              & (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hdf482e26__0)) 
                             >> 4U) | (1U & (((- (IData)(
                                                         (2U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
                                              >> 4U) 
                                             & (IData)(
                                                       (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                        >> 4U)))))));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_add))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__op_add 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_addsub 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add) 
           | (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_addsub) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_addsub))) {
        vlSymsp->__Vcoverage[1622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_addsub 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_addsub;
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_cin 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_addsub) 
           & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_cin) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_cin))) {
        vlSymsp->__Vcoverage[1522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_cin 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_cin;
    }
}

VL_INLINE_OPT void Vcore_core___nba_sequent__TOP__core__3(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__3\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffffeU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (1U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffffdU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (2U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffffbU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (4U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffff7U 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (8U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffffefU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x10U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffffdfU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x20U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffffbfU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x40U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffff7fU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x80U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffeffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x100U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffdffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x200U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffffbffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x400U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffff7ffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x800U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffefffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x1000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffdfffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x2000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffffbfffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x4000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffff7fffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x8000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffeffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x10000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffdffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x20000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfffbffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x40000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfff7ffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x80000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffefffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x100000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffdfffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x200000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xffbfffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x400000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xff7fffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x800000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfeffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x1000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfdffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x2000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xfbffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x4000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xf7ffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x8000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xefffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x10000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xdfffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x20000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                        ^ vlSelf->__Vtogcov__rf2ifu_x1))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_x1 = ((0xbfffffffU 
                                         & vlSelf->__Vtogcov__rf2ifu_x1) 
                                        | (0x40000000U 
                                           & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
          ^ vlSelf->__Vtogcov__rf2ifu_x1) >> 0x1fU)) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (1U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((2U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (2U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((4U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (4U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((8U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
               ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (8U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x10U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x20U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x40U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x80U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x100U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x200U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x400U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x800U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x1000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x2000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x4000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x8000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x10000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x20000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x40000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x80000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x100000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x200000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x400000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x800000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x1000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x2000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x4000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x8000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x10000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x20000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__endcode))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x40000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
    if (((vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r 
          ^ vlSelf->inst_exu__DOT____Vtogcov__endcode) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__endcode = 
            ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__endcode) 
             | (0x80000000U & vlSymsp->TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__PVT__qout_r));
    }
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
    Vcore_core____Vdpiimwrap_inst_exu__DOT__inst_RegisterFile__DOT__set_gpr_ptr__Vdpioc2_TOP__core(vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r);
}

VL_INLINE_OPT void Vcore_core___nba_comb__TOP__core__0(Vcore_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he1515629__0;
    VlWide<3>/*95:0*/ __Vtemp_hb1e3f331__0;
    // Body
    vlSelf->__PVT__inst_exu__DOT__rf_rs2 = vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r
        [vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs2idx_dfflr__DOT__qout_r];
    vlSelf->__PVT__rf2ifu_rs1 = vlSelf->__PVT__inst_exu__DOT__inst_RegisterFile__DOT__rf_r
        [vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ir_rs1idx_dfflr__DOT__qout_r];
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (1U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (2U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (4U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (8U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x10U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x20U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x40U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x80U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x100U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x200U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x400U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x800U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x1000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x2000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x4000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x8000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x10000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x20000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x40000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x80000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x100000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x200000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x400000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x800000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__rf_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__rf_rs2 = 
            ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
             | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__rf_rs2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__rf_rs2 ^ vlSelf->inst_exu__DOT____Vtogcov__rf_rs2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffffffeU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (1U & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((2U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffffffdU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (2U & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((4U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffffffbU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (4U & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((8U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffffff7U 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (8U & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x10U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffffffefU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x10U & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x20U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffffffdfU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x20U & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x40U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffffffbfU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x40U & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x80U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffffff7fU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x80U & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x100U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffffeffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x100U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x200U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffffdffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x200U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x400U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffffbffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x400U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x800U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffff7ffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x800U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x1000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffffefffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x1000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x2000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffffdfffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x2000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x4000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffffbfffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x4000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x8000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffff7fffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x8000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x10000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffeffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x10000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x20000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffdffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x20000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x40000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfffbffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x40000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x80000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfff7ffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x80000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x100000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffefffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x100000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x200000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffdfffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x200000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x400000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xffbfffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x400000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x800000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xff7fffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x800000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x1000000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfeffffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x1000000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x2000000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfdffffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x2000000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x4000000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xfbffffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x4000000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x8000000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xf7ffffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x8000000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x10000000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xefffffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x10000000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x20000000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xdfffffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x20000000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if ((0x40000000U & (vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0xbfffffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x40000000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    if (((vlSelf->__PVT__rf2ifu_rs1 ^ vlSelf->__Vtogcov__rf2ifu_rs1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf2ifu_rs1 = ((0x7fffffffU 
                                          & vlSelf->__Vtogcov__rf2ifu_rs1) 
                                         | (0x80000000U 
                                            & vlSelf->__PVT__rf2ifu_rs1));
    }
    vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 = (vlSelf->__PVT__rf2ifu_rs1 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__PVT__qout_r 
                                                                    >> 0xfU))))));
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2 
          ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
        = ((- (IData)((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
        = ((- (IData)((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
        = ((- (IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs2);
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
               ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1 
          ^ vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__disp_alu_rs1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
        = ((- (IData)((1U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
        = ((- (IData)((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1);
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
        = ((- (IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
           & vlSelf->__PVT__inst_exu__DOT__disp_alu_rs1);
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_i_rs2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2));
    }
    vlSelf->__PVT__agu_icb_cmd_wdata = (((- (IData)(
                                                    (0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                                 >> 6U)))))) 
                                         & ((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2))))) 
                                        | (((- (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                                    >> 6U)))))) 
                                            & ((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2))) 
                                           | ((- (IData)(
                                                         (2U 
                                                          == 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                                      >> 6U)))))) 
                                              & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_rs2)));
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2));
    }
    if ((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                       >> 4U)))) {
        vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 = 4U;
        vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_pc;
    } else {
        vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs2;
        vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1;
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
        = ((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                          >> 0xfU))) ? vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_imm
            : vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs2);
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__agu_req_alu_op1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_i_rs1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_rs1));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_i_rs1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
        = ((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_info 
                          >> 0x10U))) ? vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_pc
            : vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_i_rs1);
    if ((1U & (vlSelf->__PVT__agu_icb_cmd_wdata ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffffffeU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (1U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((2U & (vlSelf->__PVT__agu_icb_cmd_wdata ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffffffdU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (2U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((4U & (vlSelf->__PVT__agu_icb_cmd_wdata ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffffffbU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (4U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((8U & (vlSelf->__PVT__agu_icb_cmd_wdata ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffffff7U 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (8U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x10U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                  ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffffffefU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x10U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x20U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                  ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffffffdfU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x20U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x40U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                  ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffffffbfU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x40U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x80U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                  ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffffff7fU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x80U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x100U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                   ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffffeffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x100U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x200U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                   ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffffdffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x200U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x400U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                   ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffffbffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x400U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x800U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                   ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffff7ffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x800U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x1000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                    ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffffefffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x1000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x2000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                    ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffffdfffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x2000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x4000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                    ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffffbfffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x4000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x8000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                    ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffff7fffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x8000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x10000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                     ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffeffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x10000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x20000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                     ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffdffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x20000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x40000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                     ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfffbffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x40000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x80000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                     ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfff7ffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x80000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x100000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                      ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffefffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x100000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x200000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                      ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffdfffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x200000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x400000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                      ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xffbfffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x400000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x800000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                      ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xff7fffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x800000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x1000000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                       ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfeffffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x1000000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x2000000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                       ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfdffffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x2000000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x4000000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                       ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xfbffffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x4000000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x8000000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                       ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xf7ffffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x8000000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x10000000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                        ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xefffffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x10000000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x20000000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                        ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xdfffffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x20000000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((0x40000000U & (vlSelf->__PVT__agu_icb_cmd_wdata 
                        ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0xbfffffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x40000000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if (((vlSelf->__PVT__agu_icb_cmd_wdata ^ vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wdata = ((0x7fffffffU 
                                                 & vlSelf->__Vtogcov__agu_icb_cmd_wdata) 
                                                | (0x80000000U 
                                                   & vlSelf->__PVT__agu_icb_cmd_wdata));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__bjp_req_alu_op1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1))) {
        vlSymsp->__Vcoverage[1187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT____Vtogcov__alu_req_alu_op1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1));
    }
    __Vtemp_he1515629__0[1U] = (((- (IData)((2U == 
                                             (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
                                 & (((IData)((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2)))) 
                                     >> 0x1bU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2))) 
                                                           >> 0x20U)) 
                                                  << 5U))) 
                                | ((- (IData)((1U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
                                   & (((IData)((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2)))) 
                                       >> 0x1bU) | 
                                      ((IData)(((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2))) 
                                                >> 0x20U)) 
                                       << 5U))));
    __Vtemp_hb1e3f331__0[0U] = (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
                                 & (((IData)((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2)))) 
                                     << 5U) | (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_hdf482e26__0))) 
                                | (((- (IData)((2U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
                                    & (((IData)((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2)))) 
                                        << 5U) | (0x10U 
                                                  & ((IData)(
                                                             (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_i_info 
                                                              >> 4U)) 
                                                     << 4U)))) 
                                   | ((- (IData)((1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
                                      & (0x10U | ((IData)(
                                                          (((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2)))) 
                                                  << 5U)))));
    __Vtemp_hb1e3f331__0[2U] = (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
                                 & ((IData)(((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2))) 
                                             >> 0x20U)) 
                                    >> 0x1bU)) | ((
                                                   (- (IData)(
                                                              (2U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
                                                   & ((IData)(
                                                              ((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op1)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__bjp_req_alu_op2))) 
                                                               >> 0x20U)) 
                                                      >> 0x1bU)) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
                                                     & ((IData)(
                                                                ((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op1)) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_req_alu_op2))) 
                                                                 >> 0x20U)) 
                                                        >> 0x1bU))));
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
        = __Vtemp_hb1e3f331__0[0U];
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
        = (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu))) 
            & (((IData)((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1)) 
                          << 0x20U) | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2)))) 
                >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op1)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__alu_req_alu_op2))) 
                                      >> 0x20U)) << 5U))) 
           | __Vtemp_he1515629__0[1U]);
    vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
        = __Vtemp_hb1e3f331__0[2U];
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 5U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (1U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 6U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 1U)))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (2U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 7U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 2U)))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (4U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 8U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 3U)))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (8U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 9U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 4U)))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x10U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0xaU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 5U)))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x20U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0xbU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 6U)))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x40U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0xcU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 7U)))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x80U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0xdU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 8U)))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x100U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                            >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0xeU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 9U)))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x200U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                            >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0xfU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 0xaU)))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x400U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                            >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x10U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0xbU)))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x800U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                            >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x11U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0xcU)))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x1000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                             >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x12U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0xdU)))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x2000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                             >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x13U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0xeU)))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x4000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                             >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x14U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0xfU)))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x8000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                             >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x15U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x10U)))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x10000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                              >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x16U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x11U)))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x20000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                              >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x17U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x12U)))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x40000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                              >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x18U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x13U)))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x80000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                              >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x19U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x14U)))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x100000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                               >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x1aU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x15U)))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x200000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                               >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x1bU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x16U)))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x400000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                               >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x1cU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x17U)))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x800000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                               >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x1dU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x18U)))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x1000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x1eU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x19U)))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x2000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 0x1fU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                             >> 0x1aU)))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x4000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                >> 5U)));
    }
    if ((1U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
               ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                  >> 0x1bU)))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x8000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                                << 0x1bU)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                >> 1U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 0x1cU)))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x10000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                                 << 0x1bU)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                >> 2U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 0x1dU)))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x20000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                                 << 0x1bU)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                >> 3U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                          >> 0x1eU)))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x40000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                                 << 0x1bU)));
    }
    if ((IData)(((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                  >> 4U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
                            >> 0x1fU)))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op1) 
               | (0x80000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                                 << 0x1bU)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 5U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (1U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 6U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 1U)))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (2U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 7U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 2U)))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (4U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 8U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 3U)))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (8U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                        >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 9U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 4U)))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x10U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0xaU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 5U)))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x20U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0xbU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 6U)))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x40U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0xcU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 7U)))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x80U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                           >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0xdU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 8U)))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x100U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                            >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0xeU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 9U)))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x200U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                            >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0xfU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                            >> 0xaU)))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x400U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                            >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x10U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0xbU)))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x800U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                            >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x11U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0xcU)))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x1000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                             >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x12U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0xdU)))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x2000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                             >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x13U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0xeU)))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x4000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                             >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x14U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0xfU)))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x8000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                             >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x15U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x10U)))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x10000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                              >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x16U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x11U)))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x20000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                              >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x17U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x12U)))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x40000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                              >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x18U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x13U)))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x80000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                              >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x19U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x14U)))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x100000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                               >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x1aU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x15U)))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x200000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                               >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x1bU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x16U)))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x400000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                               >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x1cU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x17U)))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x800000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                               >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x1dU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x18U)))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x1000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                                >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x1eU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x19U)))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x2000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                                >> 5U)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                >> 0x1fU) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                             >> 0x1aU)))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x4000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                                >> 5U)));
    }
    if ((1U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
               ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                  >> 0x1bU)))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x8000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                << 0x1bU)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 1U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 0x1cU)))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x10000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                 << 0x1bU)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 2U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 0x1dU)))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x20000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                 << 0x1bU)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 3U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 0x1eU)))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x40000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                 << 0x1bU)));
    }
    if ((1U & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                >> 4U) ^ (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
                          >> 0x1fU)))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__mux_op2) 
               | (0x80000000U & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                 << 0x1bU)));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
        = (((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
             << 0x1bU) | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                          >> 5U)) | ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                      << 0x1bU) | (
                                                   vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                                                   >> 5U)));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
        = ((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_xor))) 
           & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
               << 0x1bU) | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                            >> 5U)));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
        = ((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_xor))) 
           & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
               << 0x1bU) | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                            >> 5U)));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
        = (((QData)((IData)(((~ (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu)) 
                             & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                                >> 4U)))) << 0x20U) 
           | (QData)((IData)(((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[2U] 
                               << 0x1bU) | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                            >> 5U)))));
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
        = (((QData)((IData)((1U & ((~ (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu)) 
                                   & (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                      >> 4U))))) << 0x20U) 
           | (QData)((IData)(((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                               << 0x1bU) | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                                            >> 5U)))));
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__orer_res) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in1) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_in2) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
        = (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in1 
           ^ vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_in2);
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1)))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
        = ((- (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_addsub))) 
           & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op1);
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2)))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__misc_adder_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
        = (0x1ffffffffULL & ((- (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_addsub))) 
                             & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu)
                                 ? (~ vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2)
                                 : vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__misc_adder_op2)));
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
               ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                   ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                    ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                     ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                      ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                       ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
                        ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res 
          ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__xorer_res) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res));
    }
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1)))) {
        vlSymsp->__Vcoverage[1523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2)))) {
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[1588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_in2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
        = (0x1ffffffffULL & (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in1 
                             + (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_in2 
                                + (QData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_cin)))));
    if ((1U & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res) 
               ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res)))) {
        vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffffeULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res)))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 1U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffffdULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 2U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffffbULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 3U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffff7ULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 4U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffffefULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 5U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffffdfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 6U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffffbfULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 7U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffff7fULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 8U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffeffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 9U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffdffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xaU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffffbffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xbU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffff7ffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xcU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffefffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xdU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffdfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xeU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffffbfffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0xfU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffff7fffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x10U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffeffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x11U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffdffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x12U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fffbffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x13U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fff7ffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x14U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffefffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x15U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffdfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x16U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ffbfffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x17U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1ff7fffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x18U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1feffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x19U)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fdffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1aU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1fbffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1bU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1f7ffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1cU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1efffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1dU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1dfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1eU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x1bfffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                        >> 0x1fU)) ^ (IData)((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0x17fffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((IData)(((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                  ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
                 >> 0x20U))) {
        vlSymsp->__Vcoverage[1621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res 
            = ((0xffffffffULL & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__adder_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt 
        = ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu) 
           & (IData)((vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res 
                      >> 0x20U)));
    if (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt) 
         ^ (IData)(vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_cmp_lt))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_cmp_lt 
            = vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt;
    }
    if ((1U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                 ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res) 
               | ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                   ? 1U : 0U));
    }
    if ((2U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                 ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffffffdU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((4U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                 ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffffffbU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((8U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                 ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffffff7U & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x10U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                    ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffffffefU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x20U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                    ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffffffdfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x40U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                    ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffffffbfU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x80U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                    ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffffff7fU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x100U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                     ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffffeffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x200U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                     ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffffdffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x400U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                     ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffffbffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x800U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                     ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffff7ffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x1000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                      ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffffefffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x2000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                      ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffffdfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x4000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                      ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffffbfffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x8000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                      ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffff7fffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x10000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                       ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffeffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x20000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                       ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffdffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x40000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                       ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfffbffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x80000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                       ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfff7ffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x100000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                        ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffefffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x200000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                        ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffdfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x400000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                        ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xffbfffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x800000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                        ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xff7fffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x1000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                         ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfeffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x2000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                         ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfdffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x4000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                         ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xfbffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x8000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                         ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xf7ffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x10000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                          ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xefffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x20000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                          ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xdfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if ((0x40000000U & (((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                          ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0xbfffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    if (((((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
            ? 1U : 0U) ^ vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res 
            = (0x7fffffffU & vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____Vtogcov__slttu_res);
    }
    vlSelf->__PVT__agu_icb_cmd_addr = (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_or))) 
                                        & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__orer_res) 
                                       | (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_xor))) 
                                           & vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__xorer_res) 
                                          | (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_add))) 
                                              & (IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__adder_res)) 
                                             | (((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_mvop2))) 
                                                 & ((vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[1U] 
                                                     << 0x1bU) 
                                                    | (vlSelf->inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT____VdfgTmp_h0c37650e__0[0U] 
                                                       >> 5U))) 
                                                | ((- (IData)((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__op_sltu))) 
                                                   & ((IData)(vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__inst_exu_alu_dpath__DOT__slttu_cmp_lt)
                                                       ? 1U
                                                       : 0U))))));
    vlSelf->__PVT__agu_icb_cmd_wmask = (0xfU & (((- (IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                                         >> 6U)))))) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->__PVT__agu_icb_cmd_addr))) 
                                                | (((- (IData)(
                                                               (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                                            >> 6U)))))) 
                                                    & ((IData)(3U) 
                                                       << 
                                                       (2U 
                                                        & vlSelf->__PVT__agu_icb_cmd_addr))) 
                                                   | (- (IData)(
                                                                (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__inst_exu__DOT__inst_exu_alu__DOT__agu_i_info 
                                                                             >> 6U)))))))));
    if ((1U & (vlSelf->__PVT__agu_icb_cmd_addr ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffffffeU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (1U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((2U & (vlSelf->__PVT__agu_icb_cmd_addr ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffffffdU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (2U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((4U & (vlSelf->__PVT__agu_icb_cmd_addr ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffffffbU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (4U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((8U & (vlSelf->__PVT__agu_icb_cmd_addr ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffffff7U 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (8U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x10U & (vlSelf->__PVT__agu_icb_cmd_addr ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffffffefU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x10U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x20U & (vlSelf->__PVT__agu_icb_cmd_addr ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffffffdfU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x20U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x40U & (vlSelf->__PVT__agu_icb_cmd_addr ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffffffbfU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x40U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x80U & (vlSelf->__PVT__agu_icb_cmd_addr ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffffff7fU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x80U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x100U & (vlSelf->__PVT__agu_icb_cmd_addr 
                   ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffffeffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x100U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x200U & (vlSelf->__PVT__agu_icb_cmd_addr 
                   ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffffdffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x200U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x400U & (vlSelf->__PVT__agu_icb_cmd_addr 
                   ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffffbffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x400U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x800U & (vlSelf->__PVT__agu_icb_cmd_addr 
                   ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffff7ffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x800U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x1000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                    ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffffefffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x1000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x2000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                    ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffffdfffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x2000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x4000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                    ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffffbfffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x4000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x8000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                    ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffff7fffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x8000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x10000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                     ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffeffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x10000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x20000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                     ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffdffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x20000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x40000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                     ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfffbffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x40000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x80000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                     ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfff7ffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x80000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x100000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                      ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffefffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x100000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x200000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                      ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffdfffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x200000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x400000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                      ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xffbfffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x400000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x800000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                      ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xff7fffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x800000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x1000000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                       ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfeffffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x1000000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x2000000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                       ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfdffffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x2000000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x4000000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                       ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xfbffffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x4000000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x8000000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                       ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xf7ffffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x8000000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x10000000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                        ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xefffffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x10000000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x20000000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                        ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xdfffffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x20000000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if ((0x40000000U & (vlSelf->__PVT__agu_icb_cmd_addr 
                        ^ vlSelf->__Vtogcov__agu_icb_cmd_addr))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0xbfffffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x40000000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    if (((vlSelf->__PVT__agu_icb_cmd_addr ^ vlSelf->__Vtogcov__agu_icb_cmd_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_addr = ((0x7fffffffU 
                                                & vlSelf->__Vtogcov__agu_icb_cmd_addr) 
                                               | (0x80000000U 
                                                  & vlSelf->__PVT__agu_icb_cmd_addr));
    }
    vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat = 
        (((- (IData)((0U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info))))) 
          | (- (IData)((2U == (7U & (IData)(vlSymsp->TOP__core__inst_exu__DOT__inst_exu_decode.__PVT__dec_info)))))) 
         & vlSelf->__PVT__agu_icb_cmd_addr);
    if ((1U & ((IData)(vlSelf->__PVT__agu_icb_cmd_wmask) 
               ^ (IData)(vlSelf->__Vtogcov__agu_icb_cmd_wmask)))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wmask = ((0xeU 
                                                 & (IData)(vlSelf->__Vtogcov__agu_icb_cmd_wmask)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__PVT__agu_icb_cmd_wmask)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__agu_icb_cmd_wmask) 
               ^ (IData)(vlSelf->__Vtogcov__agu_icb_cmd_wmask)))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wmask = ((0xdU 
                                                 & (IData)(vlSelf->__Vtogcov__agu_icb_cmd_wmask)) 
                                                | (2U 
                                                   & (IData)(vlSelf->__PVT__agu_icb_cmd_wmask)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__agu_icb_cmd_wmask) 
               ^ (IData)(vlSelf->__Vtogcov__agu_icb_cmd_wmask)))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wmask = ((0xbU 
                                                 & (IData)(vlSelf->__Vtogcov__agu_icb_cmd_wmask)) 
                                                | (4U 
                                                   & (IData)(vlSelf->__PVT__agu_icb_cmd_wmask)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__agu_icb_cmd_wmask) 
               ^ (IData)(vlSelf->__Vtogcov__agu_icb_cmd_wmask)))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__agu_icb_cmd_wmask = ((7U 
                                                 & (IData)(vlSelf->__Vtogcov__agu_icb_cmd_wmask)) 
                                                | (8U 
                                                   & (IData)(vlSelf->__PVT__agu_icb_cmd_wmask)));
    }
    if ((1U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffffffeU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (1U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((2U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffffffdU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (2U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((4U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffffffbU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (4U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((8U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
               ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffffff7U & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (8U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x10U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffffffefU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x10U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x20U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffffffdfU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x20U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x40U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffffffbfU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x40U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x80U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                  ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffffff7fU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x80U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x100U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffffeffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x100U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x200U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffffdffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x200U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x400U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffffbffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x400U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x800U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                   ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffff7ffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x800U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x1000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffffefffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x1000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x2000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffffdfffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x2000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x4000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffffbfffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x4000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x8000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                    ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffff7fffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x8000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x10000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffeffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x10000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x20000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffdffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x20000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x40000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfffbffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x40000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x80000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                     ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfff7ffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x80000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x100000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffefffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x100000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x200000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffdfffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x200000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x400000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xffbfffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x400000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x800000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                      ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xff7fffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x800000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x1000000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfeffffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x1000000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x2000000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfdffffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x2000000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x4000000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xfbffffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x4000000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x8000000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                       ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xf7ffffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x8000000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x10000000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xefffffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x10000000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x20000000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xdfffffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x20000000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if ((0x40000000U & (vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
                        ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0xbfffffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x40000000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
    if (((vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat 
          ^ vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat 
            = ((0x7fffffffU & vlSelf->inst_exu__DOT____Vtogcov__alu_wbck_o_wdat) 
               | (0x80000000U & vlSelf->__PVT__inst_exu__DOT__alu_wbck_o_wdat));
    }
}
