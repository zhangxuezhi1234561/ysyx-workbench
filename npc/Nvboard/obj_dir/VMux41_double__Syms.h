// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX41_DOUBLE__SYMS_H_
#define VERILATED_VMUX41_DOUBLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMux41_double.h"

// INCLUDE MODULE CLASSES
#include "VMux41_double___024root.h"

// SYMS CLASS (contains all model state)
class VMux41_double__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMux41_double* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMux41_double___024root        TOP;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[19];

    // CONSTRUCTORS
    VMux41_double__Syms(VerilatedContext* contextp, const char* namep, VMux41_double* modelp);
    ~VMux41_double__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
