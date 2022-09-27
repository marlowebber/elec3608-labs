// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddsub.h for the primary calling header

#include "Vaddsub.h"
#include "Vaddsub__Syms.h"

//==========

VL_CTOR_IMP(Vaddsub) {
    Vaddsub__Syms* __restrict vlSymsp = __VlSymsp = new Vaddsub__Syms(this, name());
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vaddsub::__Vconfigure(Vaddsub__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vaddsub::~Vaddsub() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vaddsub::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaddsub::eval\n"); );
    Vaddsub__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("addsub.v", 8, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vaddsub::_eval_initial_loop(Vaddsub__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("addsub.v", 8, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vaddsub::_combo__TOP__1(Vaddsub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub::_combo__TOP__1\n"); );
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->result = ((1U == (IData)(vlTOPp->alu_function))
                       ? (vlTOPp->op_a + vlTOPp->op_b)
                       : ((2U == (IData)(vlTOPp->alu_function))
                           ? (vlTOPp->op_a - vlTOPp->op_b)
                           : 0U));
}

void Vaddsub::_eval(Vaddsub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub::_eval\n"); );
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vaddsub::_eval_initial(Vaddsub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub::_eval_initial\n"); );
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaddsub::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub::final\n"); );
    // Variables
    Vaddsub__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaddsub::_eval_settle(Vaddsub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub::_eval_settle\n"); );
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vaddsub::_change_request(Vaddsub__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub::_change_request\n"); );
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vaddsub::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((alu_function & 0xe0U))) {
        Verilated::overWidthError("alu_function");}
}
#endif  // VL_DEBUG

void Vaddsub::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub::_ctor_var_reset\n"); );
    // Body
    alu_function = VL_RAND_RESET_I(5);
    op_a = VL_RAND_RESET_I(32);
    op_b = VL_RAND_RESET_I(32);
    result = VL_RAND_RESET_I(32);
    __Vm_traceActivity = 0;
}
