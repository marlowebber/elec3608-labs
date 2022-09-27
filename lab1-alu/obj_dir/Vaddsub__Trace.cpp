// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddsub__Syms.h"


//======================

void Vaddsub::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vaddsub* t = (Vaddsub*)userthis;
    Vaddsub__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vaddsub::traceChgThis(Vaddsub__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vaddsub::traceChgThis__2(Vaddsub__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->alu_function),5);
        vcdp->chgBus(c+9,(vlTOPp->op_a),32);
        vcdp->chgBus(c+17,(vlTOPp->op_b),32);
        vcdp->chgBus(c+25,(vlTOPp->result),32);
    }
}
