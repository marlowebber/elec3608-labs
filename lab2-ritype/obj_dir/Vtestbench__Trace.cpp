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
        vcdp->chgBit(c+17,(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero));
        vcdp->chgBus(c+25,(vlTOPp->testbench__DOT__dut__DOT__alu_result),32);
        vcdp->chgBus(c+33,(vlTOPp->testbench__DOT__dut__DOT__alu_op_a),32);
        vcdp->chgBus(c+41,(vlTOPp->testbench__DOT__dut__DOT__alu_op_b),32);
        vcdp->chgBus(c+49,(vlTOPp->testbench__DOT__dut__DOT__alu_op),5);
        vcdp->chgBus(c+57,((0x7fU & (vlTOPp->testbench__DOT__imem_data 
                                     >> 0x19U))),7);
        vcdp->chgBus(c+65,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                     >> 0x14U))),5);
        vcdp->chgBus(c+73,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                     >> 0xfU))),5);
        vcdp->chgBus(c+81,((7U & (vlTOPp->testbench__DOT__imem_data 
                                  >> 0xcU))),3);
        vcdp->chgBus(c+89,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                     >> 7U))),5);
        vcdp->chgBus(c+97,((0x7fU & vlTOPp->testbench__DOT__imem_data)),7);
        vcdp->chgBus(c+105,((0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x14U))),12);
        vcdp->chgBus(c+113,(VL_EXTENDS_II(32,12, (0xfffU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x14U)))),32);
        vcdp->chgBus(c+121,(VL_EXTENDS_II(32,6, (0x1fU 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x14U)))),32);
        vcdp->chgBus(c+129,(((((1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlTOPp->testbench__DOT__imem_data 
                                                >> 0xcU)))) 
                               | (5U == ((0x3f8U & 
                                          (vlTOPp->testbench__DOT__imem_data 
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
                              : VL_EXTENDS_II(32,12, 
                                              (0xfffU 
                                               & (vlTOPp->testbench__DOT__imem_data 
                                                  >> 0x14U))))),32);
        vcdp->chgBit(c+137,(vlTOPp->testbench__DOT__dut__DOT__illegalinsn));
    }
}

void Vtestbench::traceChgThis__3(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+145,(vlTOPp->testbench__DOT__dut__DOT__trapped));
        vcdp->chgBus(c+153,(vlTOPp->testbench__DOT__dut__DOT__pc),32);
        vcdp->chgBus(c+161,(vlTOPp->testbench__DOT__return_reg),32);
        vcdp->chgBus(c+169,(vlTOPp->testbench__DOT__dut__DOT__regfile[0]),32);
        vcdp->chgBus(c+170,(vlTOPp->testbench__DOT__dut__DOT__regfile[1]),32);
        vcdp->chgBus(c+171,(vlTOPp->testbench__DOT__dut__DOT__regfile[2]),32);
        vcdp->chgBus(c+172,(vlTOPp->testbench__DOT__dut__DOT__regfile[3]),32);
        vcdp->chgBus(c+173,(vlTOPp->testbench__DOT__dut__DOT__regfile[4]),32);
        vcdp->chgBus(c+174,(vlTOPp->testbench__DOT__dut__DOT__regfile[5]),32);
        vcdp->chgBus(c+175,(vlTOPp->testbench__DOT__dut__DOT__regfile[6]),32);
        vcdp->chgBus(c+176,(vlTOPp->testbench__DOT__dut__DOT__regfile[7]),32);
        vcdp->chgBus(c+177,(vlTOPp->testbench__DOT__dut__DOT__regfile[8]),32);
        vcdp->chgBus(c+178,(vlTOPp->testbench__DOT__dut__DOT__regfile[9]),32);
        vcdp->chgBus(c+179,(vlTOPp->testbench__DOT__dut__DOT__regfile[10]),32);
        vcdp->chgBus(c+180,(vlTOPp->testbench__DOT__dut__DOT__regfile[11]),32);
        vcdp->chgBus(c+181,(vlTOPp->testbench__DOT__dut__DOT__regfile[12]),32);
        vcdp->chgBus(c+182,(vlTOPp->testbench__DOT__dut__DOT__regfile[13]),32);
        vcdp->chgBus(c+183,(vlTOPp->testbench__DOT__dut__DOT__regfile[14]),32);
        vcdp->chgBus(c+184,(vlTOPp->testbench__DOT__dut__DOT__regfile[15]),32);
        vcdp->chgBus(c+185,(vlTOPp->testbench__DOT__dut__DOT__regfile[16]),32);
        vcdp->chgBus(c+186,(vlTOPp->testbench__DOT__dut__DOT__regfile[17]),32);
        vcdp->chgBus(c+187,(vlTOPp->testbench__DOT__dut__DOT__regfile[18]),32);
        vcdp->chgBus(c+188,(vlTOPp->testbench__DOT__dut__DOT__regfile[19]),32);
        vcdp->chgBus(c+189,(vlTOPp->testbench__DOT__dut__DOT__regfile[20]),32);
        vcdp->chgBus(c+190,(vlTOPp->testbench__DOT__dut__DOT__regfile[21]),32);
        vcdp->chgBus(c+191,(vlTOPp->testbench__DOT__dut__DOT__regfile[22]),32);
        vcdp->chgBus(c+192,(vlTOPp->testbench__DOT__dut__DOT__regfile[23]),32);
        vcdp->chgBus(c+193,(vlTOPp->testbench__DOT__dut__DOT__regfile[24]),32);
        vcdp->chgBus(c+194,(vlTOPp->testbench__DOT__dut__DOT__regfile[25]),32);
        vcdp->chgBus(c+195,(vlTOPp->testbench__DOT__dut__DOT__regfile[26]),32);
        vcdp->chgBus(c+196,(vlTOPp->testbench__DOT__dut__DOT__regfile[27]),32);
        vcdp->chgBus(c+197,(vlTOPp->testbench__DOT__dut__DOT__regfile[28]),32);
        vcdp->chgBus(c+198,(vlTOPp->testbench__DOT__dut__DOT__regfile[29]),32);
        vcdp->chgBus(c+199,(vlTOPp->testbench__DOT__dut__DOT__regfile[30]),32);
        vcdp->chgBus(c+200,(vlTOPp->testbench__DOT__dut__DOT__regfile[31]),32);
    }
}

void Vtestbench::traceChgThis__4(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+425,(vlTOPp->clock));
        vcdp->chgBit(c+433,(vlTOPp->reset));
    }
}
