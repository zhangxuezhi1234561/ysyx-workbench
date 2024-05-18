// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcore__Syms.h"
#include "Vcore_exu_decode.h"

void Vcore_exu_decode___ctor_var_reset(Vcore_exu_decode* vlSelf);

Vcore_exu_decode::Vcore_exu_decode(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_exu_decode___ctor_var_reset(this);
}

void Vcore_exu_decode___configure_coverage(Vcore_exu_decode* vlSelf, bool first);

void Vcore_exu_decode::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vcore_exu_decode___configure_coverage(this, first);
}

Vcore_exu_decode::~Vcore_exu_decode() {
}

// Coverage
void Vcore_exu_decode::__vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    assert(sizeof(uint32_t) == sizeof(std::atomic<uint32_t>));
    uint32_t* count32p = reinterpret_cast<uint32_t*>(countp);
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
