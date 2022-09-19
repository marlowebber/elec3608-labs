// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


//======================

void Valu::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Valu* t = (Valu*)userthis;
    Valu__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Valu::traceChgThis(Valu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Valu::traceChgThis__2(Valu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->alu_function),5);
        vcdp->chgBus(c+9,(vlTOPp->op_a),32);
        vcdp->chgBus(c+17,(vlTOPp->op_b),32);
        vcdp->chgBus(c+25,(vlTOPp->result),32);
        vcdp->chgBit(c+33,(vlTOPp->result_eq_zero));
    }
}
