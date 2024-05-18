// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcore__Syms.h"
#include "Vcore.h"
#include "Vcore___024root.h"
#include "Vcore_core.h"
#include "Vcore_ifu.h"
#include "Vcore_ifu_ifetch.h"
#include "Vcore_sirv_gnrl_dfflr.h"
#include "Vcore_sirv_gnrl_dffl.h"
#include "Vcore_exu_decode.h"

// FUNCTIONS
Vcore__Syms::~Vcore__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vcore__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vcore__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vcore__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vcore__Syms::Vcore__Syms(VerilatedContext* contextp, const char* namep, Vcore* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__core{this, Verilated::catName(namep, "core")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[10].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[11].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[12].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[13].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[14].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[15].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[16].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[17].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[18].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[19].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[1].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[20].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[21].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[22].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[23].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[24].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[25].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[26].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[27].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[28].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[29].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[2].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[30].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[31].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[3].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[4].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[5].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[6].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[7].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[8].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl{this, Verilated::catName(namep, "core.inst_exu.inst_RegisterFile.regfile[9].rfno0.rf_dffl")}
    , TOP__core__inst_exu__DOT__inst_exu_decode{this, Verilated::catName(namep, "core.inst_exu.inst_exu_decode")}
    , TOP__core__inst_ifu{this, Verilated::catName(namep, "core.inst_ifu")}
    , TOP__core__inst_ifu__inst_ifu_ifetch{this, Verilated::catName(namep, "core.inst_ifu.inst_ifu_ifetch")}
    , TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr{this, Verilated::catName(namep, "core.inst_ifu.inst_ifu_ifetch.ifu_ir_dfflr")}
    , TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr{this, Verilated::catName(namep, "core.inst_ifu.inst_ifu_ifetch.ifu_pc_dfflr")}
    , TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode{this, Verilated::catName(namep, "core.inst_ifu.inst_ifu_ifetch.inst_ifu_minidec.inst_exu_decode")}
    , TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr{this, Verilated::catName(namep, "core.inst_ifu.inst_ifu_ifetch.pc_dfflr")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.core = &TOP__core;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl = &TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl;
    TOP__core.__PVT__inst_exu__DOT__inst_exu_decode = &TOP__core__inst_exu__DOT__inst_exu_decode;
    TOP__core.inst_ifu = &TOP__core__inst_ifu;
    TOP__core__inst_ifu.inst_ifu_ifetch = &TOP__core__inst_ifu__inst_ifu_ifetch;
    TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_ir_dfflr = &TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr;
    TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__ifu_pc_dfflr = &TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr;
    TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__inst_ifu_minidec__DOT__inst_exu_decode = &TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode;
    TOP__core__inst_ifu__inst_ifu_ifetch.__PVT__pc_dfflr = &TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__core.__Vconfigure(true);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__10__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(true);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__11__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__12__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__13__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__14__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__15__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__16__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__17__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__18__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__19__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__1__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__20__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__21__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__22__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__23__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__24__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__25__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__26__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__27__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__28__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__29__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__2__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__30__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__31__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__3__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__4__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__5__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__6__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__7__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__8__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_RegisterFile__DOT__regfile__BRA__9__KET____DOT__rfno0__DOT__rf_dffl.__Vconfigure(false);
    TOP__core__inst_exu__DOT__inst_exu_decode.__Vconfigure(true);
    TOP__core__inst_ifu.__Vconfigure(true);
    TOP__core__inst_ifu__inst_ifu_ifetch.__Vconfigure(true);
    TOP__core__inst_ifu__inst_ifu_ifetch__ifu_ir_dfflr.__Vconfigure(true);
    TOP__core__inst_ifu__inst_ifu_ifetch__ifu_pc_dfflr.__Vconfigure(false);
    TOP__core__inst_ifu__inst_ifu_ifetch__inst_ifu_minidec__DOT__inst_exu_decode.__Vconfigure(false);
    TOP__core__inst_ifu__inst_ifu_ifetch__pc_dfflr.__Vconfigure(false);
    // Setup scopes
    __Vscope_core__inst_ifu__inst_ifu_ifetch.configure(this, name(), "core.inst_ifu.inst_ifu_ifetch", "inst_ifu_ifetch", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_core__inst_ifu__inst_ifu_ifetch.varInsert(__Vfinal,"reset_flag_r", &(TOP__core__inst_ifu__inst_ifu_ifetch.reset_flag_r), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
