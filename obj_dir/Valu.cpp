// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu.h"
#include "Valu__Syms.h"

//==========

VL_CTOR_IMP(Valu) {
    Valu__Syms* __restrict vlSymsp = __VlSymsp = new Valu__Syms(this, name());
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Valu::__Vconfigure(Valu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Valu::~Valu() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Valu::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu::eval\n"); );
    Valu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("alu.v", 8, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Valu::_eval_initial_loop(Valu__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("alu.v", 8, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Valu::_combo__TOP__1(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_combo__TOP__1\n"); );
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->result = ((0x10U & (IData)(vlTOPp->alu_function))
                       ? 0U : ((8U & (IData)(vlTOPp->alu_function))
                                ? ((4U & (IData)(vlTOPp->alu_function))
                                    ? 0U : ((2U & (IData)(vlTOPp->alu_function))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->alu_function))
                                                 ? 
                                                (vlTOPp->op_a 
                                                 & vlTOPp->op_b)
                                                 : 
                                                (vlTOPp->op_a 
                                                 | vlTOPp->op_b))
                                             : ((1U 
                                                 & (IData)(vlTOPp->alu_function))
                                                 ? 
                                                (vlTOPp->op_a 
                                                 ^ vlTOPp->op_b)
                                                 : 0U)))
                                : ((4U & (IData)(vlTOPp->alu_function))
                                    ? 0U : ((2U & (IData)(vlTOPp->alu_function))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->alu_function))
                                                 ? 0U
                                                 : 
                                                (vlTOPp->op_a 
                                                 - vlTOPp->op_b))
                                             : ((1U 
                                                 & (IData)(vlTOPp->alu_function))
                                                 ? 
                                                (vlTOPp->op_a 
                                                 + vlTOPp->op_b)
                                                 : 0U)))));
    vlTOPp->result_eq_zero = (0U == vlTOPp->result);
}

void Valu::_eval(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval\n"); );
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Valu::_eval_initial(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval_initial\n"); );
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::final\n"); );
    // Variables
    Valu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu::_eval_settle(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval_settle\n"); );
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Valu::_change_request(Valu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_change_request\n"); );
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Valu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((alu_function & 0xe0U))) {
        Verilated::overWidthError("alu_function");}
}
#endif  // VL_DEBUG

void Valu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu::_ctor_var_reset\n"); );
    // Body
    alu_function = VL_RAND_RESET_I(5);
    op_a = VL_RAND_RESET_I(32);
    op_b = VL_RAND_RESET_I(32);
    result = VL_RAND_RESET_I(32);
    result_eq_zero = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
