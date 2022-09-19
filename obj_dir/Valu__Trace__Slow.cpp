// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


//======================

void Valu::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Valu::traceInit, &Valu::traceFull, &Valu::traceChg, this);
}
void Valu::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Valu* t = (Valu*)userthis;
    Valu__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Valu::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Valu* t = (Valu*)userthis;
    Valu__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Valu::traceInitThis(Valu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Valu::traceFullThis(Valu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Valu::traceInitThis__1(Valu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+1,"alu_function", false,-1, 4,0);
        vcdp->declBus(c+9,"op_a", false,-1, 31,0);
        vcdp->declBus(c+17,"op_b", false,-1, 31,0);
        vcdp->declBus(c+25,"result", false,-1, 31,0);
        vcdp->declBit(c+33,"result_eq_zero", false,-1);
        vcdp->declBus(c+1,"alu alu_function", false,-1, 4,0);
        vcdp->declBus(c+9,"alu op_a", false,-1, 31,0);
        vcdp->declBus(c+17,"alu op_b", false,-1, 31,0);
        vcdp->declBus(c+25,"alu result", false,-1, 31,0);
        vcdp->declBit(c+33,"alu result_eq_zero", false,-1);
        vcdp->declBus(c+9,"alu op_a_signed", false,-1, 31,0);
        vcdp->declBus(c+17,"alu op_b_signed", false,-1, 31,0);
    }
}

void Valu::traceFullThis__1(Valu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->alu_function),5);
        vcdp->fullBus(c+9,(vlTOPp->op_a),32);
        vcdp->fullBus(c+17,(vlTOPp->op_b),32);
        vcdp->fullBus(c+25,(vlTOPp->result),32);
        vcdp->fullBit(c+33,(vlTOPp->result_eq_zero));
    }
}
