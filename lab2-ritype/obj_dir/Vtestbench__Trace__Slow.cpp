// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


//======================

void Vtestbench::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vtestbench::traceInit, &Vtestbench::traceFull, &Vtestbench::traceChg, this);
}
void Vtestbench::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtestbench* t = (Vtestbench*)userthis;
    Vtestbench__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtestbench::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtestbench* t = (Vtestbench*)userthis;
    Vtestbench__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vtestbench::traceInitThis(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtestbench::traceFullThis(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtestbench::traceInitThis__1(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+417,"clock", false,-1);
        vcdp->declBit(c+425,"reset", false,-1);
        vcdp->declBus(c+433,"testbench MEM_ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBit(c+417,"testbench clock", false,-1);
        vcdp->declBit(c+425,"testbench reset", false,-1);
        vcdp->declBit(c+137,"testbench trap", false,-1);
        vcdp->declBus(c+145,"testbench imem_addr", false,-1, 31,0);
        vcdp->declBus(c+1,"testbench imem_data", false,-1, 31,0);
        vcdp->declBus(c+153,"testbench return_reg", false,-1, 31,0);
        vcdp->declBus(c+441,"testbench out", false,-1, 31,0);
        vcdp->declBit(c+449,"testbench out_valid", false,-1);
        vcdp->declBus(c+9,"testbench cycles", false,-1, 31,0);
        vcdp->declBit(c+417,"testbench dut clock", false,-1);
        vcdp->declBit(c+425,"testbench dut reset", false,-1);
        vcdp->declBit(c+137,"testbench dut trap", false,-1);
        vcdp->declBus(c+153,"testbench dut return_reg", false,-1, 31,0);
        vcdp->declBus(c+145,"testbench dut imem_addr", false,-1, 31,0);
        vcdp->declBus(c+1,"testbench dut imem_data", false,-1, 31,0);
        vcdp->declBit(c+17,"testbench dut alu_eq_zero", false,-1);
        vcdp->declBus(c+25,"testbench dut alu_result", false,-1, 31,0);
        vcdp->declBit(c+457,"testbench dut alu_eq", false,-1);
        vcdp->declBus(c+33,"testbench dut alu_op_a", false,-1, 31,0);
        vcdp->declBus(c+41,"testbench dut alu_op_b", false,-1, 31,0);
        vcdp->declBus(c+49,"testbench dut alu_op", false,-1, 4,0);
        vcdp->declBus(c+57,"testbench dut insn_funct7", false,-1, 6,0);
        vcdp->declBus(c+65,"testbench dut insn_rs2", false,-1, 4,0);
        vcdp->declBus(c+73,"testbench dut insn_rs1", false,-1, 4,0);
        vcdp->declBus(c+81,"testbench dut insn_funct3", false,-1, 2,0);
        vcdp->declBus(c+89,"testbench dut insn_rd", false,-1, 4,0);
        vcdp->declBus(c+97,"testbench dut insn_opcode", false,-1, 6,0);
        vcdp->declBus(c+105,"testbench dut imm_i", false,-1, 11,0);
        vcdp->declBus(c+113,"testbench dut imm_i_sext", false,-1, 31,0);
        vcdp->declBus(c+121,"testbench dut imm_shift", false,-1, 31,0);
        vcdp->declBus(c+129,"testbench dut imm_val", false,-1, 31,0);
        vcdp->declBit(c+449,"testbench dut illegalinsn", false,-1);
        vcdp->declBit(c+137,"testbench dut trapped", false,-1);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+161+i*1,"testbench dut regfile", true,(i+0), 31,0);}}
        vcdp->declBus(c+145,"testbench dut pc", false,-1, 31,0);
        vcdp->declBus(c+1,"testbench dut insn", false,-1, 31,0);
        vcdp->declBus(c+49,"testbench dut alu_1 alu_function", false,-1, 4,0);
        vcdp->declBus(c+33,"testbench dut alu_1 op_a", false,-1, 31,0);
        vcdp->declBus(c+41,"testbench dut alu_1 op_b", false,-1, 31,0);
        vcdp->declBus(c+25,"testbench dut alu_1 result", false,-1, 31,0);
        vcdp->declBit(c+17,"testbench dut alu_1 result_eq_zero", false,-1);
        vcdp->declBus(c+33,"testbench dut alu_1 op_a_signed", false,-1, 31,0);
        vcdp->declBus(c+41,"testbench dut alu_1 op_b_signed", false,-1, 31,0);
    }
}

void Vtestbench::traceFullThis__1(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->testbench__DOT__imem_data),32);
        vcdp->fullBus(c+9,(vlTOPp->testbench__DOT__cycles),32);
        vcdp->fullBit(c+17,(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero));
        vcdp->fullBus(c+25,(vlTOPp->testbench__DOT__dut__DOT__alu_result),32);
        vcdp->fullBus(c+33,(vlTOPp->testbench__DOT__dut__DOT__alu_op_a),32);
        vcdp->fullBus(c+41,(vlTOPp->testbench__DOT__dut__DOT__alu_op_b),32);
        vcdp->fullBus(c+49,(vlTOPp->testbench__DOT__dut__DOT__alu_op),5);
        vcdp->fullBus(c+57,((0x7fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0x19U))),7);
        vcdp->fullBus(c+65,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0x14U))),5);
        vcdp->fullBus(c+73,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0xfU))),5);
        vcdp->fullBus(c+81,((7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))),3);
        vcdp->fullBus(c+89,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 7U))),5);
        vcdp->fullBus(c+97,((0x7fU & vlTOPp->testbench__DOT__imem_data)),7);
        vcdp->fullBus(c+105,((0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0x14U))),12);
        vcdp->fullBus(c+113,(VL_EXTENDS_II(32,12, (0xfffU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x14U)))),32);
        vcdp->fullBus(c+121,(VL_EXTENDS_II(32,6, (0x1fU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x14U)))),32);
        vcdp->fullBus(c+129,(((((1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
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
                                             | (7U 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0xcU)))))
                               ? VL_EXTENDS_II(32,6, 
                                               (0x1fU 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x14U)))
                               : VL_EXTENDS_II(32,12, 
                                               (0xfffU 
                                                & (vlTOPp->testbench__DOT__imem_data 
                                                   >> 0x14U))))),32);
        vcdp->fullBit(c+137,(vlTOPp->testbench__DOT__dut__DOT__trapped));
        vcdp->fullBus(c+145,(vlTOPp->testbench__DOT__dut__DOT__pc),32);
        vcdp->fullBus(c+153,(vlTOPp->testbench__DOT__return_reg),32);
        vcdp->fullBus(c+161,(vlTOPp->testbench__DOT__dut__DOT__regfile[0]),32);
        vcdp->fullBus(c+162,(vlTOPp->testbench__DOT__dut__DOT__regfile[1]),32);
        vcdp->fullBus(c+163,(vlTOPp->testbench__DOT__dut__DOT__regfile[2]),32);
        vcdp->fullBus(c+164,(vlTOPp->testbench__DOT__dut__DOT__regfile[3]),32);
        vcdp->fullBus(c+165,(vlTOPp->testbench__DOT__dut__DOT__regfile[4]),32);
        vcdp->fullBus(c+166,(vlTOPp->testbench__DOT__dut__DOT__regfile[5]),32);
        vcdp->fullBus(c+167,(vlTOPp->testbench__DOT__dut__DOT__regfile[6]),32);
        vcdp->fullBus(c+168,(vlTOPp->testbench__DOT__dut__DOT__regfile[7]),32);
        vcdp->fullBus(c+169,(vlTOPp->testbench__DOT__dut__DOT__regfile[8]),32);
        vcdp->fullBus(c+170,(vlTOPp->testbench__DOT__dut__DOT__regfile[9]),32);
        vcdp->fullBus(c+171,(vlTOPp->testbench__DOT__dut__DOT__regfile[10]),32);
        vcdp->fullBus(c+172,(vlTOPp->testbench__DOT__dut__DOT__regfile[11]),32);
        vcdp->fullBus(c+173,(vlTOPp->testbench__DOT__dut__DOT__regfile[12]),32);
        vcdp->fullBus(c+174,(vlTOPp->testbench__DOT__dut__DOT__regfile[13]),32);
        vcdp->fullBus(c+175,(vlTOPp->testbench__DOT__dut__DOT__regfile[14]),32);
        vcdp->fullBus(c+176,(vlTOPp->testbench__DOT__dut__DOT__regfile[15]),32);
        vcdp->fullBus(c+177,(vlTOPp->testbench__DOT__dut__DOT__regfile[16]),32);
        vcdp->fullBus(c+178,(vlTOPp->testbench__DOT__dut__DOT__regfile[17]),32);
        vcdp->fullBus(c+179,(vlTOPp->testbench__DOT__dut__DOT__regfile[18]),32);
        vcdp->fullBus(c+180,(vlTOPp->testbench__DOT__dut__DOT__regfile[19]),32);
        vcdp->fullBus(c+181,(vlTOPp->testbench__DOT__dut__DOT__regfile[20]),32);
        vcdp->fullBus(c+182,(vlTOPp->testbench__DOT__dut__DOT__regfile[21]),32);
        vcdp->fullBus(c+183,(vlTOPp->testbench__DOT__dut__DOT__regfile[22]),32);
        vcdp->fullBus(c+184,(vlTOPp->testbench__DOT__dut__DOT__regfile[23]),32);
        vcdp->fullBus(c+185,(vlTOPp->testbench__DOT__dut__DOT__regfile[24]),32);
        vcdp->fullBus(c+186,(vlTOPp->testbench__DOT__dut__DOT__regfile[25]),32);
        vcdp->fullBus(c+187,(vlTOPp->testbench__DOT__dut__DOT__regfile[26]),32);
        vcdp->fullBus(c+188,(vlTOPp->testbench__DOT__dut__DOT__regfile[27]),32);
        vcdp->fullBus(c+189,(vlTOPp->testbench__DOT__dut__DOT__regfile[28]),32);
        vcdp->fullBus(c+190,(vlTOPp->testbench__DOT__dut__DOT__regfile[29]),32);
        vcdp->fullBus(c+191,(vlTOPp->testbench__DOT__dut__DOT__regfile[30]),32);
        vcdp->fullBus(c+192,(vlTOPp->testbench__DOT__dut__DOT__regfile[31]),32);
        vcdp->fullBit(c+417,(vlTOPp->clock));
        vcdp->fullBit(c+425,(vlTOPp->reset));
        vcdp->fullBus(c+433,(0x10U),32);
        vcdp->fullBus(c+441,(0U),32);
        vcdp->fullBit(c+449,(0U));
        vcdp->fullBit(c+457,(vlTOPp->testbench__DOT__dut__DOT__alu_eq));
    }
}
