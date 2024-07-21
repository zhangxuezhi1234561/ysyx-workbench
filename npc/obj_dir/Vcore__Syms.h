// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCORE__SYMS_H_
#define VERILATED_VCORE__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vcore.h"

// INCLUDE MODULE CLASSES
#include "Vcore___024root.h"
#include "Vcore_core.h"
#include "Vcore_ifu.h"
#include "Vcore_ifu_ifetch.h"
#include "Vcore_sirv_gnrl_dffl.h"
#include "Vcore_exu_decode.h"
#include "Vcore_sirv_gnrl_dfflr.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vcore__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcore* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcore___024root                TOP;
    Vcore_core                     TOP__core;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_sirv_gnrl_dffl           TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl;
    Vcore_exu_decode               TOP__core__inst_exu__DOT__inst_exu_decode;
    Vcore_ifu                      TOP__core__inst_ifu;
    Vcore_ifu_ifetch               TOP__core__inst_ifu__inst_ifu_ifetch;
    Vcore_sirv_gnrl_dfflr          TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr;
    Vcore_sirv_gnrl_dfflr          TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr;
    Vcore_exu_decode               TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode;
    Vcore_sirv_gnrl_dfflr          TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[2283];

    // SCOPE NAMES
    VerilatedScope __Vscope_core__inst_ifu__inst_ifu_ifetch;

    // CONSTRUCTORS
    Vcore__Syms(VerilatedContext* contextp, const char* namep, Vcore* modelp);
    ~Vcore__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
