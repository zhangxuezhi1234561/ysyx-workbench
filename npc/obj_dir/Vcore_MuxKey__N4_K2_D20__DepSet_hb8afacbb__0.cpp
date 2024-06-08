// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore_MuxKey__N4_K2_D20.h"
#include "Vcore__Syms.h"

VL_INLINE_OPT void Vcore_MuxKey__N4_K2_D20___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_inst__0(Vcore_MuxKey__N4_K2_D20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_MuxKey__N4_K2_D20___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op1_inst__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U] 
          ^ vlSelf->__Vtogcov__lut[0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
          ^ vlSelf->__Vtogcov__lut[1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                       ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                       ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                       ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                       ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                        ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                        ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                        ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
          ^ vlSelf->__Vtogcov__lut[2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U]));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
               ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
               ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
               ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
               ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                  ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                  ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                  ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                  ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                   ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                   ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                   ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                   ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                    ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                    ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                    ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                    ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                     ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                     ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                     ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                     ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                      ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                      ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                      ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                      ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                       ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                       ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                       ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                       ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                        ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                        ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                        ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
          ^ vlSelf->__Vtogcov__lut[3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U]));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
               ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xfeU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
               ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xfdU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
               ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xfbU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
               ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xf7U & vlSelf->__Vtogcov__lut[4U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
                  ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xefU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
                  ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xdfU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
                  ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xbfU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
                  ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0x7fU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U]));
    }
    vlSelf->__PVT__i0__DOT__key_list[0U] = (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U]);
    vlSelf->__PVT__i0__DOT__key_list[1U] = (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                                                  >> 2U));
    vlSelf->__PVT__i0__DOT__key_list[2U] = (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                                                  >> 4U));
    vlSelf->__PVT__i0__DOT__key_list[3U] = (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
                                                  >> 6U));
    vlSelf->__PVT__i0__DOT__pair_list[0U] = (0x3ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U]))));
    vlSelf->__PVT__i0__DOT__pair_list[1U] = (0x3ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U])) 
                                                 << 0x1eU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U])) 
                                                   >> 2U)));
    vlSelf->__PVT__i0__DOT__pair_list[2U] = (0x3ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U])) 
                                                   >> 4U)));
    vlSelf->__PVT__i0__DOT__pair_list[3U] = (0x3ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U])) 
                                                   >> 6U)));
    vlSelf->__PVT__i0__DOT__data_list[0U] = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[0U];
    vlSelf->__PVT__i0__DOT__data_list[1U] = ((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                                              << 0x1eU) 
                                             | (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[1U] 
                                                >> 2U));
    vlSelf->__PVT__i0__DOT__data_list[2U] = ((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[2U] 
                                                >> 4U));
    vlSelf->__PVT__i0__DOT__data_list[3U] = ((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[4U] 
                                              << 0x1aU) 
                                             | (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op1_inst____pinNumber3[3U] 
                                                >> 6U));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                   == vlSelf->__PVT__i0__DOT__key_list
                                   [0U]);
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [1U]));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [2U]));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [3U]));
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        vlSymsp->__Vcoverage[1987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((2U & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        vlSymsp->__Vcoverage[1988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((1U & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        vlSymsp->__Vcoverage[1989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((2U & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        vlSymsp->__Vcoverage[1990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((1U & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [2U]))) {
        vlSymsp->__Vcoverage[1991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[2U] = 
            ((2U & vlSelf->i0__DOT____Vtogcov__key_list
              [2U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [2U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [2U]))) {
        vlSymsp->__Vcoverage[1992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[2U] = 
            ((1U & vlSelf->i0__DOT____Vtogcov__key_list
              [2U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [2U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [3U]))) {
        vlSymsp->__Vcoverage[1993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[3U] = 
            ((2U & vlSelf->i0__DOT____Vtogcov__key_list
              [3U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [3U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [3U]))) {
        vlSymsp->__Vcoverage[1994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[3U] = 
            ((1U & vlSelf->i0__DOT____Vtogcov__key_list
              [3U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [3U]));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3feffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3f7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3efffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3dfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3bfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x37fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x2ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x1ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [1U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [1U])))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [1U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 1U))))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 2U))))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 3U))))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 4U))))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 5U))))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 6U))))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 7U))))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 8U))))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 9U))))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xaU))))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xbU))))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xcU))))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xdU))))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xeU))))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xfU))))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x10U))))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x11U))))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x12U))))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x13U))))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x14U))))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x15U))))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x16U))))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x17U))))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x18U))))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3feffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x19U))))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3f7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3efffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3dfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3bfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x37fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x20U))))) {
        vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x2ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x21U))))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x1ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [2U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [2U])))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [2U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 1U))))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 2U))))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 3U))))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 4U))))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 5U))))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 6U))))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 7U))))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 8U))))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 9U))))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xaU))))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xbU))))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xcU))))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xdU))))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xeU))))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xfU))))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x10U))))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x11U))))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x12U))))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x13U))))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x14U))))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x15U))))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x16U))))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x17U))))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x18U))))) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3feffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x19U))))) {
        vlSymsp->__Vcoverage[1944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3f7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3efffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3dfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3bfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x37fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x20U))))) {
        vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x2ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x21U))))) {
        vlSymsp->__Vcoverage[1952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x1ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [3U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [3U])))) {
        vlSymsp->__Vcoverage[1953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [3U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 1U))))) {
        vlSymsp->__Vcoverage[1954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 2U))))) {
        vlSymsp->__Vcoverage[1955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 3U))))) {
        vlSymsp->__Vcoverage[1956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 4U))))) {
        vlSymsp->__Vcoverage[1957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 5U))))) {
        vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 6U))))) {
        vlSymsp->__Vcoverage[1959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 7U))))) {
        vlSymsp->__Vcoverage[1960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 8U))))) {
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 9U))))) {
        vlSymsp->__Vcoverage[1962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xaU))))) {
        vlSymsp->__Vcoverage[1963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xbU))))) {
        vlSymsp->__Vcoverage[1964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xcU))))) {
        vlSymsp->__Vcoverage[1965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xdU))))) {
        vlSymsp->__Vcoverage[1966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xeU))))) {
        vlSymsp->__Vcoverage[1967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xfU))))) {
        vlSymsp->__Vcoverage[1968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x10U))))) {
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x11U))))) {
        vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x12U))))) {
        vlSymsp->__Vcoverage[1971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x13U))))) {
        vlSymsp->__Vcoverage[1972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x14U))))) {
        vlSymsp->__Vcoverage[1973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x15U))))) {
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x16U))))) {
        vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x17U))))) {
        vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x18U))))) {
        vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3feffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x19U))))) {
        vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3f7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3efffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3dfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3bfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x37fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x20U))))) {
        vlSymsp->__Vcoverage[1985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x2ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x21U))))) {
        vlSymsp->__Vcoverage[1986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x1ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[1995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[1996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[1997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[1998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[1999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[2000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[2001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[2002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[2003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[2004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__data_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x1000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__data_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x2000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__data_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[2009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x4000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__data_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[2010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x8000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__data_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[2011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__data_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[2012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__data_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__data_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[2014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__data_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[2015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x100000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__data_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[2016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x200000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__data_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[2017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x400000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__data_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[2018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x800000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[2019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[2020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[2022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [0U]))) {
        vlSymsp->__Vcoverage[2023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [0U]))) {
        vlSymsp->__Vcoverage[2024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [0U]))) {
        vlSymsp->__Vcoverage[2025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if (((vlSelf->__PVT__i0__DOT__data_list[0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[2027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__data_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [1U]))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x1000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__data_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [1U]))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x2000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__data_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [1U]))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x4000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__data_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [1U]))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x8000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__data_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [1U]))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x10000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__data_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [1U]))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x20000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__data_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [1U]))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x40000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__data_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [1U]))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x80000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__data_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [1U]))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x100000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__data_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [1U]))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x200000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__data_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [1U]))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x400000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__data_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [1U]))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x800000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [1U]))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [1U]))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [1U]))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [1U]))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [1U]))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [1U]))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [1U]))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if (((vlSelf->__PVT__i0__DOT__data_list[1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [2U]))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [2U]))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [2U]))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [2U]))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [2U]))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [2U]))) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [2U]))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [2U]))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__data_list
                    [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [2U]))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x1000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__data_list
                    [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [2U]))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x2000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__data_list
                    [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [2U]))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x4000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__data_list
                    [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [2U]))) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x8000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__data_list
                     [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [2U]))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x10000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__data_list
                     [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [2U]))) {
        vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x20000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__data_list
                     [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [2U]))) {
        vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x40000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__data_list
                     [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [2U]))) {
        vlSymsp->__Vcoverage[2078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x80000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__data_list
                      [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [2U]))) {
        vlSymsp->__Vcoverage[2079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x100000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__data_list
                      [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [2U]))) {
        vlSymsp->__Vcoverage[2080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x200000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__data_list
                      [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [2U]))) {
        vlSymsp->__Vcoverage[2081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x400000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__data_list
                      [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [2U]))) {
        vlSymsp->__Vcoverage[2082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x800000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [2U]))) {
        vlSymsp->__Vcoverage[2083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [2U]))) {
        vlSymsp->__Vcoverage[2084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [2U]))) {
        vlSymsp->__Vcoverage[2085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [2U]))) {
        vlSymsp->__Vcoverage[2086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [2U]))) {
        vlSymsp->__Vcoverage[2087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [2U]))) {
        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [2U]))) {
        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if (((vlSelf->__PVT__i0__DOT__data_list[2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [3U]))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [3U]))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [3U]))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [3U]))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [3U]))) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [3U]))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [3U]))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [3U]))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__data_list
                    [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [3U]))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x1000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__data_list
                    [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [3U]))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x2000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__data_list
                    [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [3U]))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x4000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__data_list
                    [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [3U]))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x8000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__data_list
                     [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [3U]))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x10000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__data_list
                     [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [3U]))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x20000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__data_list
                     [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [3U]))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x40000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__data_list
                     [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [3U]))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x80000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__data_list
                      [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [3U]))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x100000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__data_list
                      [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [3U]))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x200000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__data_list
                      [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [3U]))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x400000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__data_list
                      [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [3U]))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x800000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [3U]))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [3U]))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [3U]))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [3U]))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [3U]))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [3U]))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [3U]))) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if (((vlSelf->__PVT__i0__DOT__data_list[3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    vlSelf->__PVT__i0__DOT__lut_out = ((- (IData)(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                   == 
                                                   vlSelf->__PVT__i0__DOT__key_list
                                                   [0U]))) 
                                       & vlSelf->__PVT__i0__DOT__data_list
                                       [0U]);
    vlSelf->__PVT__i0__DOT__lut_out = (vlSelf->__PVT__i0__DOT__lut_out 
                                       | ((- (IData)(
                                                     ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [1U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [1U]));
    vlSelf->__PVT__i0__DOT__lut_out = (vlSelf->__PVT__i0__DOT__lut_out 
                                       | ((- (IData)(
                                                     ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [2U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [2U]));
    vlSelf->__PVT__i0__DOT__lut_out = (vlSelf->__PVT__i0__DOT__lut_out 
                                       | ((- (IData)(
                                                     ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [3U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [3U]));
    vlSelf->__PVT__out = vlSelf->__PVT__i0__DOT__lut_out;
    if (((IData)(vlSelf->__PVT__i0__DOT__hit) ^ (IData)(vlSelf->i0__DOT____Vtogcov__hit))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__hit = vlSelf->__PVT__i0__DOT__hit;
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffffeU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (1U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffffdU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (2U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffffbU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (4U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffff7U 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (8U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffffefU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x10U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffffdfU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x20U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffffbfU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x40U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffff7fU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x80U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffeffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x100U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffdffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x200U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffbffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x400U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffff7ffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x800U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffefffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x1000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffdfffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x2000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffbfffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x4000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffff7fffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x8000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffeffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x10000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffdffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x20000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffbffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x40000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfff7ffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x80000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffefffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x100000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffdfffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x200000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffbfffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x400000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xff7fffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x800000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfeffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x1000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfdffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x2000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfbffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x4000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xf7ffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x8000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                        ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xefffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x10000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                        ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xdfffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x20000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                        ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xbfffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x40000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if (((vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0x7fffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x80000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
}

VL_INLINE_OPT void Vcore_MuxKey__N4_K2_D20___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_inst__0(Vcore_MuxKey__N4_K2_D20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_MuxKey__N4_K2_D20___ico_sequent__TOP__core__inst_ifu__inst_ifu_ifetch__pc_op2_inst__0\n"); );
    // Body
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U] 
          ^ vlSelf->__Vtogcov__lut[0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[0U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
          ^ vlSelf->__Vtogcov__lut[1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[1U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                       ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                       ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                       ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                       ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                        ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                        ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                        ^ vlSelf->__Vtogcov__lut[2U]))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
          ^ vlSelf->__Vtogcov__lut[2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[2U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U]));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
               ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
               ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
               ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
               ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                  ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                  ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                  ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                  ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x100U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                   ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x100U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x200U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                   ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x200U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x400U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                   ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x400U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x800U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                   ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x800U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x1000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                    ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x2000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                    ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x4000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                    ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x8000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                    ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x10000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                     ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x20000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                     ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x40000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                     ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x80000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                     ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x100000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                      ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x200000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                      ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x400000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                      ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x800000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                      ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x1000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                       ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x2000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                       ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x4000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                       ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x8000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                       ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x10000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                        ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x20000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                        ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((0x40000000U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                        ^ vlSelf->__Vtogcov__lut[3U]))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if (((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
          ^ vlSelf->__Vtogcov__lut[3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[3U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[3U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U]));
    }
    if ((1U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
               ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xfeU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (1U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U]));
    }
    if ((2U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
               ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xfdU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (2U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U]));
    }
    if ((4U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
               ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xfbU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (4U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U]));
    }
    if ((8U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
               ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xf7U & vlSelf->__Vtogcov__lut[4U]) 
                                      | (8U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U]));
    }
    if ((0x10U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
                  ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xefU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (0x10U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U]));
    }
    if ((0x20U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
                  ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xdfU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (0x20U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U]));
    }
    if ((0x40U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
                  ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0xbfU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (0x40U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U]));
    }
    if ((0x80U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
                  ^ vlSelf->__Vtogcov__lut[4U]))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lut[4U] = ((0x7fU & vlSelf->__Vtogcov__lut[4U]) 
                                      | (0x80U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U]));
    }
    vlSelf->__PVT__i0__DOT__key_list[0U] = (3U & vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U]);
    vlSelf->__PVT__i0__DOT__key_list[1U] = (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                                                  >> 2U));
    vlSelf->__PVT__i0__DOT__key_list[2U] = (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                                                  >> 4U));
    vlSelf->__PVT__i0__DOT__key_list[3U] = (3U & (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
                                                  >> 6U));
    vlSelf->__PVT__i0__DOT__pair_list[0U] = (0x3ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U]))));
    vlSelf->__PVT__i0__DOT__pair_list[1U] = (0x3ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U])) 
                                                 << 0x1eU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U])) 
                                                   >> 2U)));
    vlSelf->__PVT__i0__DOT__pair_list[2U] = (0x3ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U])) 
                                                   >> 4U)));
    vlSelf->__PVT__i0__DOT__pair_list[3U] = (0x3ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U])) 
                                                   >> 6U)));
    vlSelf->__PVT__i0__DOT__data_list[0U] = vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[0U];
    vlSelf->__PVT__i0__DOT__data_list[1U] = ((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                                              << 0x1eU) 
                                             | (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[1U] 
                                                >> 2U));
    vlSelf->__PVT__i0__DOT__data_list[2U] = ((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[2U] 
                                                >> 4U));
    vlSelf->__PVT__i0__DOT__data_list[3U] = ((vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[4U] 
                                              << 0x1aU) 
                                             | (vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__Vcellinp__pc_op2_inst____pinNumber3[3U] 
                                                >> 6U));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                   == vlSelf->__PVT__i0__DOT__key_list
                                   [0U]);
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [1U]));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [2U]));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [3U]));
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        vlSymsp->__Vcoverage[1987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((2U & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        vlSymsp->__Vcoverage[1988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((1U & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        vlSymsp->__Vcoverage[1989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((2U & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        vlSymsp->__Vcoverage[1990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((1U & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [2U]))) {
        vlSymsp->__Vcoverage[1991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[2U] = 
            ((2U & vlSelf->i0__DOT____Vtogcov__key_list
              [2U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [2U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [2U]))) {
        vlSymsp->__Vcoverage[1992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[2U] = 
            ((1U & vlSelf->i0__DOT____Vtogcov__key_list
              [2U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [2U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [3U]))) {
        vlSymsp->__Vcoverage[1993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[3U] = 
            ((2U & vlSelf->i0__DOT____Vtogcov__key_list
              [3U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [3U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [3U]))) {
        vlSymsp->__Vcoverage[1994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__key_list[3U] = 
            ((1U & vlSelf->i0__DOT____Vtogcov__key_list
              [3U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [3U]));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3ff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3feffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3fbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3f7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3efffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3dfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x3bfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x37fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x2ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x1ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [1U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [1U])))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [1U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 1U))))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 2U))))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 3U))))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 4U))))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 5U))))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 6U))))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 7U))))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 8U))))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 9U))))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xaU))))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xbU))))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xcU))))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xdU))))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xeU))))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xfU))))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x10U))))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x11U))))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x12U))))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x13U))))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x14U))))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x15U))))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x16U))))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x17U))))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3ff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x18U))))) {
        vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3feffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x19U))))) {
        vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3fbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3f7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3efffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3dfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x3bfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x37fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x20U))))) {
        vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x2ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x21U))))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x1ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [2U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [2U])))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [2U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 1U))))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 2U))))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 3U))))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 4U))))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 5U))))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 6U))))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 7U))))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 8U))))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [2U] 
                                                >> 9U))))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xaU))))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xbU))))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xcU))))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xdU))))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xeU))))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [2U] 
                                                  >> 0xfU))))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x10U))))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x11U))))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x12U))))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x13U))))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x14U))))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x15U))))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x16U))))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x17U))))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3ff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x18U))))) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3feffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x19U))))) {
        vlSymsp->__Vcoverage[1944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3fbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3f7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3efffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3dfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x3bfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x37fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x20U))))) {
        vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x2ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [2U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [2U] 
                                                   >> 0x21U))))) {
        vlSymsp->__Vcoverage[1952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[2U] = 
            ((0x1ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [2U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [2U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [3U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [3U])))) {
        vlSymsp->__Vcoverage[1953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [3U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 1U))))) {
        vlSymsp->__Vcoverage[1954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 2U))))) {
        vlSymsp->__Vcoverage[1955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 3U))))) {
        vlSymsp->__Vcoverage[1956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 4U))))) {
        vlSymsp->__Vcoverage[1957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 5U))))) {
        vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 6U))))) {
        vlSymsp->__Vcoverage[1959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 7U))))) {
        vlSymsp->__Vcoverage[1960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 8U))))) {
        vlSymsp->__Vcoverage[1961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [3U] 
                                                >> 9U))))) {
        vlSymsp->__Vcoverage[1962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xaU))))) {
        vlSymsp->__Vcoverage[1963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xbU))))) {
        vlSymsp->__Vcoverage[1964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xcU))))) {
        vlSymsp->__Vcoverage[1965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xdU))))) {
        vlSymsp->__Vcoverage[1966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xeU))))) {
        vlSymsp->__Vcoverage[1967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [3U] 
                                                  >> 0xfU))))) {
        vlSymsp->__Vcoverage[1968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x10U))))) {
        vlSymsp->__Vcoverage[1969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x11U))))) {
        vlSymsp->__Vcoverage[1970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x12U))))) {
        vlSymsp->__Vcoverage[1971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x13U))))) {
        vlSymsp->__Vcoverage[1972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x14U))))) {
        vlSymsp->__Vcoverage[1973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x15U))))) {
        vlSymsp->__Vcoverage[1974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x16U))))) {
        vlSymsp->__Vcoverage[1975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x17U))))) {
        vlSymsp->__Vcoverage[1976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3ff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x18U))))) {
        vlSymsp->__Vcoverage[1977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3feffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x19U))))) {
        vlSymsp->__Vcoverage[1978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3fbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3f7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3efffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3dfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x3bfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x37fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x20U))))) {
        vlSymsp->__Vcoverage[1985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x2ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [3U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [3U] 
                                                   >> 0x21U))))) {
        vlSymsp->__Vcoverage[1986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__pair_list[3U] = 
            ((0x1ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [3U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [3U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[1995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[1996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[1997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        vlSymsp->__Vcoverage[1998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[1999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[2000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[2001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        vlSymsp->__Vcoverage[2002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[2003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[2004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__data_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x1000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__data_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x2000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__data_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[2009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x4000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__data_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [0U]))) {
        vlSymsp->__Vcoverage[2010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x8000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__data_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[2011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__data_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[2012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__data_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__data_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [0U]))) {
        vlSymsp->__Vcoverage[2014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__data_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[2015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x100000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__data_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[2016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x200000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__data_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[2017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x400000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__data_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [0U]))) {
        vlSymsp->__Vcoverage[2018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x800000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[2019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[2020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [0U]))) {
        vlSymsp->__Vcoverage[2022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [0U]))) {
        vlSymsp->__Vcoverage[2023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [0U]))) {
        vlSymsp->__Vcoverage[2024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [0U]))) {
        vlSymsp->__Vcoverage[2025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if (((vlSelf->__PVT__i0__DOT__data_list[0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
          [0U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[2027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__data_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [1U]))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x1000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__data_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [1U]))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x2000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__data_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [1U]))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x4000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__data_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [1U]))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x8000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__data_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [1U]))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x10000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__data_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [1U]))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x20000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__data_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [1U]))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x40000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__data_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [1U]))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x80000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__data_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [1U]))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x100000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__data_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [1U]))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x200000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__data_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [1U]))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x400000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__data_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [1U]))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x800000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [1U]))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [1U]))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [1U]))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [1U]))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [1U]))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [1U]))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [1U]))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if (((vlSelf->__PVT__i0__DOT__data_list[1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
          [1U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[2U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [2U]))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [2U]))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [2U]))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [2U]))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [2U]))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [2U]))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [2U]))) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [2U]))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [2U]))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__data_list
                    [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [2U]))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x1000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__data_list
                    [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [2U]))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x2000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__data_list
                    [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [2U]))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x4000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__data_list
                    [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [2U]))) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x8000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__data_list
                     [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [2U]))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x10000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__data_list
                     [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [2U]))) {
        vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x20000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__data_list
                     [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [2U]))) {
        vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x40000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__data_list
                     [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [2U]))) {
        vlSymsp->__Vcoverage[2078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x80000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__data_list
                      [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [2U]))) {
        vlSymsp->__Vcoverage[2079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x100000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__data_list
                      [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [2U]))) {
        vlSymsp->__Vcoverage[2080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x200000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__data_list
                      [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [2U]))) {
        vlSymsp->__Vcoverage[2081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x400000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__data_list
                      [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [2U]))) {
        vlSymsp->__Vcoverage[2082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x800000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [2U]))) {
        vlSymsp->__Vcoverage[2083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [2U]))) {
        vlSymsp->__Vcoverage[2084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [2U]))) {
        vlSymsp->__Vcoverage[2085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [2U]))) {
        vlSymsp->__Vcoverage[2086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [2U]))) {
        vlSymsp->__Vcoverage[2087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [2U]))) {
        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [2U]))) {
        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if (((vlSelf->__PVT__i0__DOT__data_list[2U] ^ vlSelf->i0__DOT____Vtogcov__data_list
          [2U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[2U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [2U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__data_list
                       [2U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[3U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [3U]))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [3U]))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [3U]))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [3U]))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [3U]))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [3U]))) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [3U]))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [3U]))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [3U]))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__data_list
                    [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [3U]))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x1000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__data_list
                    [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [3U]))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x2000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__data_list
                    [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [3U]))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x4000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__data_list
                    [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                    [3U]))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x8000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__data_list
                     [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [3U]))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x10000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__data_list
                     [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [3U]))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x20000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__data_list
                     [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [3U]))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x40000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__data_list
                     [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                     [3U]))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x80000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__data_list
                      [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [3U]))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x100000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__data_list
                      [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [3U]))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x200000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__data_list
                      [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [3U]))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x400000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__data_list
                      [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                      [3U]))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x800000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [3U]))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [3U]))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [3U]))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__data_list
                       [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                       [3U]))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [3U]))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [3U]))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__data_list
                        [3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                        [3U]))) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    if (((vlSelf->__PVT__i0__DOT__data_list[3U] ^ vlSelf->i0__DOT____Vtogcov__data_list
          [3U]) >> 0x1fU)) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__data_list[3U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__data_list
              [3U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__data_list
                       [3U]));
    }
    vlSelf->__PVT__i0__DOT__lut_out = ((- (IData)(((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                   == 
                                                   vlSelf->__PVT__i0__DOT__key_list
                                                   [0U]))) 
                                       & vlSelf->__PVT__i0__DOT__data_list
                                       [0U]);
    vlSelf->__PVT__i0__DOT__lut_out = (vlSelf->__PVT__i0__DOT__lut_out 
                                       | ((- (IData)(
                                                     ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [1U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [1U]));
    vlSelf->__PVT__i0__DOT__lut_out = (vlSelf->__PVT__i0__DOT__lut_out 
                                       | ((- (IData)(
                                                     ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [2U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [2U]));
    vlSelf->__PVT__i0__DOT__lut_out = (vlSelf->__PVT__i0__DOT__lut_out 
                                       | ((- (IData)(
                                                     ((IData)(vlSymsp->TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__chose_pc) 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [3U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [3U]));
    vlSelf->__PVT__out = vlSelf->__PVT__i0__DOT__lut_out;
    if (((IData)(vlSelf->__PVT__i0__DOT__hit) ^ (IData)(vlSelf->i0__DOT____Vtogcov__hit))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__hit = vlSelf->__PVT__i0__DOT__hit;
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffffeU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (1U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffffdU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (2U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffffbU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (4U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffff7U 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (8U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffffefU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x10U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffffdfU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x20U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffffbfU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x40U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffff7fU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x80U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffeffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x100U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffdffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x200U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffffbffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x400U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__lut_out 
                   ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffff7ffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x800U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffefffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x1000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffdfffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x2000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffffbfffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x4000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__lut_out 
                    ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffff7fffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x8000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffeffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x10000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffdffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x20000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfffbffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x40000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__lut_out 
                     ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfff7ffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x80000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffefffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x100000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffdfffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x200000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffbfffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x400000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__lut_out 
                      ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xff7fffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x800000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfeffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x1000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfdffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x2000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfbffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x4000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                       ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xf7ffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x8000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                        ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xefffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x10000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                        ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xdfffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x20000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__lut_out 
                        ^ vlSelf->i0__DOT____Vtogcov__lut_out))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xbfffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x40000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
    if (((vlSelf->__PVT__i0__DOT__lut_out ^ vlSelf->i0__DOT____Vtogcov__lut_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0x7fffffffU 
                                                & vlSelf->i0__DOT____Vtogcov__lut_out) 
                                               | (0x80000000U 
                                                  & vlSelf->__PVT__i0__DOT__lut_out));
    }
}
