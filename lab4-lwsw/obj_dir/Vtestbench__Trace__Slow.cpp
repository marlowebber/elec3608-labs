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
        vcdp->declBit(c+585,"clock", false,-1);
        vcdp->declBit(c+593,"reset", false,-1);
        vcdp->declBus(c+601,"testbench MEM_ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBit(c+585,"testbench clock", false,-1);
        vcdp->declBit(c+593,"testbench reset", false,-1);
        vcdp->declBit(c+249,"testbench trap", false,-1);
        vcdp->declBus(c+257,"testbench imem_addr", false,-1, 31,0);
        vcdp->declBus(c+1,"testbench imem_data", false,-1, 31,0);
        vcdp->declBus(c+265,"testbench x10", false,-1, 31,0);
        vcdp->declBus(c+609,"testbench out", false,-1, 31,0);
        vcdp->declBit(c+617,"testbench out_valid", false,-1);
        vcdp->declBus(c+9,"testbench cycles", false,-1, 31,0);
        vcdp->declBit(c+585,"testbench dut clock", false,-1);
        vcdp->declBit(c+593,"testbench dut reset", false,-1);
        vcdp->declBit(c+249,"testbench dut trap", false,-1);
        vcdp->declBus(c+265,"testbench dut x10", false,-1, 31,0);
        vcdp->declBus(c+257,"testbench dut imem_addr", false,-1, 31,0);
        vcdp->declBus(c+1,"testbench dut imem_data", false,-1, 31,0);
        vcdp->declBit(c+625,"testbench dut dmem_wr_enable", false,-1);
        vcdp->declBus(c+177,"testbench dut dmem_wr_addr", false,-1, 31,0);
        vcdp->declBus(c+185,"testbench dut dmem_wr_data", false,-1, 31,0);
        vcdp->declBus(c+193,"testbench dut dmem_rd_addr", false,-1, 31,0);
        vcdp->declBus(c+201,"testbench dut dmem_rd_data", false,-1, 31,0);
        vcdp->declBus(c+273,"testbench dut d_rd", false,-1, 4,0);
        vcdp->declBus(c+281,"testbench dut d_x0", false,-1, 31,0);
        vcdp->declBus(c+289,"testbench dut d_x1", false,-1, 31,0);
        vcdp->declBus(c+297,"testbench dut d_x2", false,-1, 31,0);
        vcdp->declBus(c+305,"testbench dut d_x3", false,-1, 31,0);
        vcdp->declBus(c+313,"testbench dut d_x4", false,-1, 31,0);
        vcdp->declBus(c+321,"testbench dut d_opcode", false,-1, 6,0);
        vcdp->declBit(c+161,"testbench dut illegalinsn", false,-1);
        vcdp->declBit(c+249,"testbench dut trapped", false,-1);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+329+i*1,"testbench dut regfile", true,(i+0), 31,0);}}
        vcdp->declBus(c+257,"testbench dut pc", false,-1, 31,0);
        vcdp->declBus(c+1,"testbench dut insn", false,-1, 31,0);
        vcdp->declBus(c+17,"testbench dut insn_funct7", false,-1, 6,0);
        vcdp->declBus(c+25,"testbench dut insn_rs2", false,-1, 4,0);
        vcdp->declBus(c+33,"testbench dut insn_rs1", false,-1, 4,0);
        vcdp->declBus(c+41,"testbench dut insn_funct3", false,-1, 2,0);
        vcdp->declBus(c+49,"testbench dut insn_rd", false,-1, 4,0);
        vcdp->declBus(c+57,"testbench dut insn_opcode", false,-1, 6,0);
        vcdp->declBus(c+65,"testbench dut imm_ci", false,-1, 31,0);
        vcdp->declBus(c+73,"testbench dut imm_i", false,-1, 11,0);
        vcdp->declBus(c+81,"testbench dut imm_i_sext", false,-1, 31,0);
        vcdp->declBus(c+89,"testbench dut imm_shift", false,-1, 31,0);
        vcdp->declBus(c+97,"testbench dut imm_val", false,-1, 31,0);
        vcdp->declBus(c+105,"testbench dut imm_s_sext", false,-1, 31,0);
        vcdp->declBus(c+113,"testbench dut imm_b", false,-1, 12,0);
        vcdp->declBus(c+121,"testbench dut imm_j", false,-1, 20,0);
        vcdp->declBus(c+129,"testbench dut imm_b_sext", false,-1, 31,0);
        vcdp->declBus(c+137,"testbench dut imm_j_sext", false,-1, 31,0);
        vcdp->declBit(c+209,"testbench dut alu_eq_zero", false,-1);
        vcdp->declBus(c+217,"testbench dut alu_result", false,-1, 31,0);
        vcdp->declBit(c+633,"testbench dut alu_eq", false,-1);
        vcdp->declBus(c+145,"testbench dut alu_op_a", false,-1, 31,0);
        vcdp->declBus(c+153,"testbench dut alu_op_b", false,-1, 31,0);
        vcdp->declBus(c+169,"testbench dut alu_op", false,-1, 4,0);
        vcdp->declBus(c+145,"testbench dut alu_op_a_signed", false,-1, 31,0);
        vcdp->declBus(c+153,"testbench dut alu_op_b_signed", false,-1, 31,0);
        vcdp->declBit(c+225,"testbench dut regwrite", false,-1);
        vcdp->declBus(c+233,"testbench dut npc", false,-1, 31,0);
        vcdp->declBus(c+241,"testbench dut rfilewdata", false,-1, 31,0);
        vcdp->declBus(c+169,"testbench dut alu_1 alu_function", false,-1, 4,0);
        vcdp->declBus(c+145,"testbench dut alu_1 op_a", false,-1, 31,0);
        vcdp->declBus(c+153,"testbench dut alu_1 op_b", false,-1, 31,0);
        vcdp->declBus(c+217,"testbench dut alu_1 result", false,-1, 31,0);
        vcdp->declBit(c+209,"testbench dut alu_1 result_eq_zero", false,-1);
        vcdp->declBus(c+145,"testbench dut alu_1 op_a_signed", false,-1, 31,0);
        vcdp->declBus(c+153,"testbench dut alu_1 op_b_signed", false,-1, 31,0);
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
        vcdp->fullBus(c+17,((0x7fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0x19U))),7);
        vcdp->fullBus(c+25,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0x14U))),5);
        vcdp->fullBus(c+33,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0xfU))),5);
        vcdp->fullBus(c+41,((7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))),3);
        vcdp->fullBus(c+49,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 7U))),5);
        vcdp->fullBus(c+57,((0x7fU & vlTOPp->testbench__DOT__imem_data)),7);
        vcdp->fullBus(c+65,(((0x60U & (vlTOPp->testbench__DOT__imem_data 
                                       >> 7U)) | (0x1fU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 2U)))),32);
        vcdp->fullBus(c+73,((0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x14U))),12);
        vcdp->fullBus(c+81,(vlTOPp->testbench__DOT__dut__DOT__imm_i_sext),32);
        vcdp->fullBus(c+89,(VL_EXTENDS_II(32,6, (0x1fU 
                                                 & (vlTOPp->testbench__DOT__imem_data 
                                                    >> 0x14U)))),32);
        vcdp->fullBus(c+97,(((((1U == ((0x3f8U & (vlTOPp->testbench__DOT__imem_data 
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
                              : vlTOPp->testbench__DOT__dut__DOT__imm_i_sext)),32);
        vcdp->fullBus(c+105,(vlTOPp->testbench__DOT__dut__DOT__imm_s_sext),32);
        vcdp->fullBus(c+113,(vlTOPp->testbench__DOT__dut__DOT__imm_b),13);
        vcdp->fullBus(c+121,(vlTOPp->testbench__DOT__dut__DOT__imm_j),21);
        vcdp->fullBus(c+129,(VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b))),32);
        vcdp->fullBus(c+137,(VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j)),32);
        vcdp->fullBus(c+145,(vlTOPp->testbench__DOT__dut__DOT__alu_op_a),32);
        vcdp->fullBus(c+153,(vlTOPp->testbench__DOT__dut__DOT__alu_op_b),32);
        vcdp->fullBit(c+161,(vlTOPp->testbench__DOT__dut__DOT__illegalinsn));
        vcdp->fullBus(c+169,(vlTOPp->testbench__DOT__dut__DOT__alu_op),5);
        vcdp->fullBus(c+177,(vlTOPp->testbench__DOT__dut__DOT__dmem_wr_addr),32);
        vcdp->fullBus(c+185,(vlTOPp->testbench__DOT__dut__DOT__dmem_wr_data),32);
        vcdp->fullBus(c+193,(vlTOPp->testbench__DOT__dut__DOT__dmem_rd_addr),32);
        vcdp->fullBus(c+201,(vlTOPp->testbench__DOT__dut__DOT__dmem_rd_data),32);
        vcdp->fullBit(c+209,(vlTOPp->testbench__DOT__dut__DOT__alu_eq_zero));
        vcdp->fullBus(c+217,(vlTOPp->testbench__DOT__dut__DOT__alu_result),32);
        vcdp->fullBit(c+225,(vlTOPp->testbench__DOT__dut__DOT__regwrite));
        vcdp->fullBus(c+233,(vlTOPp->testbench__DOT__dut__DOT__npc),32);
        vcdp->fullBus(c+241,(vlTOPp->testbench__DOT__dut__DOT__rfilewdata),32);
        vcdp->fullBit(c+249,(vlTOPp->testbench__DOT__dut__DOT__trapped));
        vcdp->fullBus(c+257,(vlTOPp->testbench__DOT__dut__DOT__pc),32);
        vcdp->fullBus(c+265,(vlTOPp->testbench__DOT__x10),32);
        vcdp->fullBus(c+273,(vlTOPp->testbench__DOT__dut__DOT__d_rd),5);
        vcdp->fullBus(c+281,(vlTOPp->testbench__DOT__dut__DOT__d_x0),32);
        vcdp->fullBus(c+289,(vlTOPp->testbench__DOT__dut__DOT__d_x1),32);
        vcdp->fullBus(c+297,(vlTOPp->testbench__DOT__dut__DOT__d_x2),32);
        vcdp->fullBus(c+305,(vlTOPp->testbench__DOT__dut__DOT__d_x3),32);
        vcdp->fullBus(c+313,(vlTOPp->testbench__DOT__dut__DOT__d_x4),32);
        vcdp->fullBus(c+321,(vlTOPp->testbench__DOT__dut__DOT__d_opcode),7);
        vcdp->fullBus(c+329,(vlTOPp->testbench__DOT__dut__DOT__regfile[0]),32);
        vcdp->fullBus(c+330,(vlTOPp->testbench__DOT__dut__DOT__regfile[1]),32);
        vcdp->fullBus(c+331,(vlTOPp->testbench__DOT__dut__DOT__regfile[2]),32);
        vcdp->fullBus(c+332,(vlTOPp->testbench__DOT__dut__DOT__regfile[3]),32);
        vcdp->fullBus(c+333,(vlTOPp->testbench__DOT__dut__DOT__regfile[4]),32);
        vcdp->fullBus(c+334,(vlTOPp->testbench__DOT__dut__DOT__regfile[5]),32);
        vcdp->fullBus(c+335,(vlTOPp->testbench__DOT__dut__DOT__regfile[6]),32);
        vcdp->fullBus(c+336,(vlTOPp->testbench__DOT__dut__DOT__regfile[7]),32);
        vcdp->fullBus(c+337,(vlTOPp->testbench__DOT__dut__DOT__regfile[8]),32);
        vcdp->fullBus(c+338,(vlTOPp->testbench__DOT__dut__DOT__regfile[9]),32);
        vcdp->fullBus(c+339,(vlTOPp->testbench__DOT__dut__DOT__regfile[10]),32);
        vcdp->fullBus(c+340,(vlTOPp->testbench__DOT__dut__DOT__regfile[11]),32);
        vcdp->fullBus(c+341,(vlTOPp->testbench__DOT__dut__DOT__regfile[12]),32);
        vcdp->fullBus(c+342,(vlTOPp->testbench__DOT__dut__DOT__regfile[13]),32);
        vcdp->fullBus(c+343,(vlTOPp->testbench__DOT__dut__DOT__regfile[14]),32);
        vcdp->fullBus(c+344,(vlTOPp->testbench__DOT__dut__DOT__regfile[15]),32);
        vcdp->fullBus(c+345,(vlTOPp->testbench__DOT__dut__DOT__regfile[16]),32);
        vcdp->fullBus(c+346,(vlTOPp->testbench__DOT__dut__DOT__regfile[17]),32);
        vcdp->fullBus(c+347,(vlTOPp->testbench__DOT__dut__DOT__regfile[18]),32);
        vcdp->fullBus(c+348,(vlTOPp->testbench__DOT__dut__DOT__regfile[19]),32);
        vcdp->fullBus(c+349,(vlTOPp->testbench__DOT__dut__DOT__regfile[20]),32);
        vcdp->fullBus(c+350,(vlTOPp->testbench__DOT__dut__DOT__regfile[21]),32);
        vcdp->fullBus(c+351,(vlTOPp->testbench__DOT__dut__DOT__regfile[22]),32);
        vcdp->fullBus(c+352,(vlTOPp->testbench__DOT__dut__DOT__regfile[23]),32);
        vcdp->fullBus(c+353,(vlTOPp->testbench__DOT__dut__DOT__regfile[24]),32);
        vcdp->fullBus(c+354,(vlTOPp->testbench__DOT__dut__DOT__regfile[25]),32);
        vcdp->fullBus(c+355,(vlTOPp->testbench__DOT__dut__DOT__regfile[26]),32);
        vcdp->fullBus(c+356,(vlTOPp->testbench__DOT__dut__DOT__regfile[27]),32);
        vcdp->fullBus(c+357,(vlTOPp->testbench__DOT__dut__DOT__regfile[28]),32);
        vcdp->fullBus(c+358,(vlTOPp->testbench__DOT__dut__DOT__regfile[29]),32);
        vcdp->fullBus(c+359,(vlTOPp->testbench__DOT__dut__DOT__regfile[30]),32);
        vcdp->fullBus(c+360,(vlTOPp->testbench__DOT__dut__DOT__regfile[31]),32);
        vcdp->fullBit(c+585,(vlTOPp->clock));
        vcdp->fullBit(c+593,(vlTOPp->reset));
        vcdp->fullBus(c+601,(0x10U),32);
        vcdp->fullBus(c+609,(0U),32);
        vcdp->fullBit(c+617,(0U));
        vcdp->fullBit(c+625,(vlTOPp->testbench__DOT__dut__DOT__dmem_wr_enable));
        vcdp->fullBit(c+633,(vlTOPp->testbench__DOT__dut__DOT__alu_eq));
    }
}
