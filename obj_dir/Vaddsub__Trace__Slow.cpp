// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddsub__Syms.h"


//======================

void Vaddsub::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vaddsub::traceInit, &Vaddsub::traceFull, &Vaddsub::traceChg, this);
}
void Vaddsub::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vaddsub* t = (Vaddsub*)userthis;
    Vaddsub__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vaddsub::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vaddsub* t = (Vaddsub*)userthis;
    Vaddsub__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vaddsub::traceInitThis(Vaddsub__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vaddsub::traceFullThis(Vaddsub__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vaddsub::traceInitThis__1(Vaddsub__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+1,"alu_function", false,-1, 4,0);
        vcdp->declBus(c+9,"op_a", false,-1, 31,0);
        vcdp->declBus(c+17,"op_b", false,-1, 31,0);
        vcdp->declBus(c+25,"result", false,-1, 31,0);
        vcdp->declBus(c+1,"addsub alu_function", false,-1, 4,0);
        vcdp->declBus(c+9,"addsub op_a", false,-1, 31,0);
        vcdp->declBus(c+17,"addsub op_b", false,-1, 31,0);
        vcdp->declBus(c+25,"addsub result", false,-1, 31,0);
    }
}

void Vaddsub::traceFullThis__1(Vaddsub__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vaddsub* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->alu_function),5);
        vcdp->fullBus(c+9,(vlTOPp->op_a),32);
        vcdp->fullBus(c+17,(vlTOPp->op_b),32);
        vcdp->fullBus(c+25,(vlTOPp->result),32);
    }
}
