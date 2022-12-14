// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


//======================

void Vtestbench::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtestbench* t = (Vtestbench*)userthis;
    Vtestbench__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtestbench::traceChgThis(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtestbench::traceChgThis__2(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->testbench__DOT__imem_data),32);
        vcdp->chgBus(c+9,(vlTOPp->testbench__DOT__cycles),32);
        vcdp->chgBit(c+17,(vlTOPp->testbench__DOT__dut__DOT__illegalinsn));
        vcdp->chgBus(c+25,((0x7fU & (vlTOPp->testbench__DOT__imem_data 
                                     >> 0x19U))),7);
        vcdp->chgBus(c+33,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                     >> 0x14U))),5);
        vcdp->chgBus(c+41,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                     >> 0xfU))),5);
        vcdp->chgBus(c+49,((7U & (vlTOPp->testbench__DOT__imem_data 
                                  >> 0xcU))),3);
        vcdp->chgBus(c+57,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                     >> 7U))),5);
        vcdp->chgBus(c+65,((0x7fU & vlTOPp->testbench__DOT__imem_data)),7);
        vcdp->chgBus(c+73,((0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0x14U))),12);
        vcdp->chgBus(c+81,(vlTOPp->testbench__DOT__dut__DOT__imm_i_sext),32);
        vcdp->chgBus(c+89,(VL_EXTENDS_II(32,6, (0x1fU 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x14U)))),32);
        vcdp->chgBus(c+97,(((((1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0x16U)) 
                                      | (7U & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU)))) 
                              | (5U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0xcU))))) 
                             | (0x105U == ((0x3f8U 
                                            & (vlTOPp->testbench__DOT__imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlTOPp->testbench__DOT__imem_data 
                                               >> 0xcU)))))
                             ? VL_EXTENDS_II(32,6, 
                                             (0x1fU 
                                              & (vlTOPp->testbench__DOT__imem_data 
                                                 >> 0x14U)))
                             : vlTOPp->testbench__DOT__dut__DOT__imm_i_sext)),32);
        vcdp->chgBus(c+105,(vlTOPp->testbench__DOT__dut__DOT__imm_b),13);
        vcdp->chgBus(c+113,(vlTOPp->testbench__DOT__dut__DOT__imm_j),21);
        vcdp->chgBus(c+121,(VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b))),32);
        vcdp->chgBus(c+129,(VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j)),32);
        vcdp->chgBit(c+137,(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero));
        vcdp->chgBus(c+145,(vlTOPp->testbench__DOT__dut__DOT__alu_result),32);
        vcdp->chgBus(c+153,(vlTOPp->testbench__DOT__dut__DOT__alu_op_a),32);
        vcdp->chgBus(c+161,(vlTOPp->testbench__DOT__dut__DOT__alu_op_b),32);
        vcdp->chgBus(c+169,(vlTOPp->testbench__DOT__dut__DOT__alu_op),5);
        vcdp->chgBit(c+177,(vlTOPp->testbench__DOT__dut__DOT__regwrite));
        vcdp->chgBus(c+185,(vlTOPp->testbench__DOT__dut__DOT__npc),32);
        vcdp->chgBus(c+193,(vlTOPp->testbench__DOT__dut__DOT__rfilewdata),32);
    }
}

void Vtestbench::traceChgThis__3(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+201,(vlTOPp->testbench__DOT__dut__DOT__trapped));
        vcdp->chgBus(c+209,(vlTOPp->testbench__DOT__dut__DOT__pc),32);
        vcdp->chgBus(c+217,(vlTOPp->testbench__DOT__x10),32);
        vcdp->chgBus(c+225,(vlTOPp->testbench__DOT__dut__DOT__d_rd),5);
        vcdp->chgBus(c+233,(vlTOPp->testbench__DOT__dut__DOT__d_x0),32);
        vcdp->chgBus(c+241,(vlTOPp->testbench__DOT__dut__DOT__d_x1),32);
        vcdp->chgBus(c+249,(vlTOPp->testbench__DOT__dut__DOT__d_x2),32);
        vcdp->chgBus(c+257,(vlTOPp->testbench__DOT__dut__DOT__d_x3),32);
        vcdp->chgBus(c+265,(vlTOPp->testbench__DOT__dut__DOT__d_x4),32);
        vcdp->chgBus(c+273,(vlTOPp->testbench__DOT__dut__DOT__d_opcode),7);
        vcdp->chgBus(c+281,(vlTOPp->testbench__DOT__dut__DOT__regfile[0]),32);
        vcdp->chgBus(c+282,(vlTOPp->testbench__DOT__dut__DOT__regfile[1]),32);
        vcdp->chgBus(c+283,(vlTOPp->testbench__DOT__dut__DOT__regfile[2]),32);
        vcdp->chgBus(c+284,(vlTOPp->testbench__DOT__dut__DOT__regfile[3]),32);
        vcdp->chgBus(c+285,(vlTOPp->testbench__DOT__dut__DOT__regfile[4]),32);
        vcdp->chgBus(c+286,(vlTOPp->testbench__DOT__dut__DOT__regfile[5]),32);
        vcdp->chgBus(c+287,(vlTOPp->testbench__DOT__dut__DOT__regfile[6]),32);
        vcdp->chgBus(c+288,(vlTOPp->testbench__DOT__dut__DOT__regfile[7]),32);
        vcdp->chgBus(c+289,(vlTOPp->testbench__DOT__dut__DOT__regfile[8]),32);
        vcdp->chgBus(c+290,(vlTOPp->testbench__DOT__dut__DOT__regfile[9]),32);
        vcdp->chgBus(c+291,(vlTOPp->testbench__DOT__dut__DOT__regfile[10]),32);
        vcdp->chgBus(c+292,(vlTOPp->testbench__DOT__dut__DOT__regfile[11]),32);
        vcdp->chgBus(c+293,(vlTOPp->testbench__DOT__dut__DOT__regfile[12]),32);
        vcdp->chgBus(c+294,(vlTOPp->testbench__DOT__dut__DOT__regfile[13]),32);
        vcdp->chgBus(c+295,(vlTOPp->testbench__DOT__dut__DOT__regfile[14]),32);
        vcdp->chgBus(c+296,(vlTOPp->testbench__DOT__dut__DOT__regfile[15]),32);
        vcdp->chgBus(c+297,(vlTOPp->testbench__DOT__dut__DOT__regfile[16]),32);
        vcdp->chgBus(c+298,(vlTOPp->testbench__DOT__dut__DOT__regfile[17]),32);
        vcdp->chgBus(c+299,(vlTOPp->testbench__DOT__dut__DOT__regfile[18]),32);
        vcdp->chgBus(c+300,(vlTOPp->testbench__DOT__dut__DOT__regfile[19]),32);
        vcdp->chgBus(c+301,(vlTOPp->testbench__DOT__dut__DOT__regfile[20]),32);
        vcdp->chgBus(c+302,(vlTOPp->testbench__DOT__dut__DOT__regfile[21]),32);
        vcdp->chgBus(c+303,(vlTOPp->testbench__DOT__dut__DOT__regfile[22]),32);
        vcdp->chgBus(c+304,(vlTOPp->testbench__DOT__dut__DOT__regfile[23]),32);
        vcdp->chgBus(c+305,(vlTOPp->testbench__DOT__dut__DOT__regfile[24]),32);
        vcdp->chgBus(c+306,(vlTOPp->testbench__DOT__dut__DOT__regfile[25]),32);
        vcdp->chgBus(c+307,(vlTOPp->testbench__DOT__dut__DOT__regfile[26]),32);
        vcdp->chgBus(c+308,(vlTOPp->testbench__DOT__dut__DOT__regfile[27]),32);
        vcdp->chgBus(c+309,(vlTOPp->testbench__DOT__dut__DOT__regfile[28]),32);
        vcdp->chgBus(c+310,(vlTOPp->testbench__DOT__dut__DOT__regfile[29]),32);
        vcdp->chgBus(c+311,(vlTOPp->testbench__DOT__dut__DOT__regfile[30]),32);
        vcdp->chgBus(c+312,(vlTOPp->testbench__DOT__dut__DOT__regfile[31]),32);
    }
}

void Vtestbench::traceChgThis__4(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+537,(vlTOPp->clock));
        vcdp->chgBit(c+545,(vlTOPp->reset));
    }
}
