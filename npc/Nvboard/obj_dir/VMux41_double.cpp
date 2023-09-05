// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMux41_double.h"
#include "VMux41_double__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMux41_double::VMux41_double(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMux41_double__Syms(contextp(), _vcname__, this)}
    , X0{vlSymsp->TOP.X0}
    , X1{vlSymsp->TOP.X1}
    , X2{vlSymsp->TOP.X2}
    , X3{vlSymsp->TOP.X3}
    , Y{vlSymsp->TOP.Y}
    , F_Wire{vlSymsp->TOP.F_Wire}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMux41_double::VMux41_double(const char* _vcname__)
    : VMux41_double(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMux41_double::~VMux41_double() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMux41_double___024root___eval_debug_assertions(VMux41_double___024root* vlSelf);
#endif  // VL_DEBUG
void VMux41_double___024root___eval_static(VMux41_double___024root* vlSelf);
void VMux41_double___024root___eval_initial(VMux41_double___024root* vlSelf);
void VMux41_double___024root___eval_settle(VMux41_double___024root* vlSelf);
void VMux41_double___024root___eval(VMux41_double___024root* vlSelf);

void VMux41_double::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMux41_double::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMux41_double___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMux41_double___024root___eval_static(&(vlSymsp->TOP));
        VMux41_double___024root___eval_initial(&(vlSymsp->TOP));
        VMux41_double___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMux41_double___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMux41_double::eventsPending() { return false; }

uint64_t VMux41_double::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMux41_double::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMux41_double___024root___eval_final(VMux41_double___024root* vlSelf);

VL_ATTR_COLD void VMux41_double::final() {
    VMux41_double___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMux41_double::hierName() const { return vlSymsp->name(); }
const char* VMux41_double::modelName() const { return "VMux41_double"; }
unsigned VMux41_double::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VMux41_double::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMux41_double___024root__trace_init_top(VMux41_double___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMux41_double___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux41_double___024root*>(voidSelf);
    VMux41_double__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMux41_double___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMux41_double___024root__trace_register(VMux41_double___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMux41_double::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMux41_double::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMux41_double___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
