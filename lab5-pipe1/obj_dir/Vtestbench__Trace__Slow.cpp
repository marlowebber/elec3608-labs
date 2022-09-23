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
        vcdp->declBit(c+673,"clock", false,-1);
        vcdp->declBit(c+681,"reset", false,-1);
        vcdp->declBus(c+689,"testbench MEM_ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBit(c+673,"testbench clock", false,-1);
        vcdp->declBit(c+681,"testbench reset", false,-1);
        vcdp->declBit(c+241,"testbench trap", false,-1);
        vcdp->declBus(c+89,"testbench imem_addr", false,-1, 31,0);
        vcdp->declBus(c+249,"testbench imem_data", false,-1, 31,0);
        vcdp->declBit(c+97,"testbench dmem_valid", false,-1);
        vcdp->declBus(c+105,"testbench dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+113,"testbench dmem_wstrb", false,-1, 3,0);
        vcdp->declBus(c+121,"testbench dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+257,"testbench dmem_rdata", false,-1, 31,0);
        vcdp->declBit(c+129,"testbench wr_in_mem_range", false,-1);
        vcdp->declBit(c+137,"testbench wr_in_output", false,-1);
        vcdp->declBus(c+265,"testbench out", false,-1, 31,0);
        vcdp->declBit(c+273,"testbench out_valid", false,-1);
        vcdp->declBus(c+281,"testbench i", false,-1, 31,0);
        vcdp->declBus(c+1,"testbench cycles", false,-1, 31,0);
        vcdp->declBus(c+697,"testbench dut RESET_ADDR", false,-1, 31,0);
        vcdp->declBus(c+705,"testbench dut NUMREGS", false,-1, 31,0);
        vcdp->declBit(c+673,"testbench dut clock", false,-1);
        vcdp->declBit(c+681,"testbench dut reset", false,-1);
        vcdp->declBit(c+241,"testbench dut trap", false,-1);
        vcdp->declBus(c+89,"testbench dut imem_addr", false,-1, 31,0);
        vcdp->declBus(c+249,"testbench dut imem_data", false,-1, 31,0);
        vcdp->declBit(c+97,"testbench dut dmem_valid", false,-1);
        vcdp->declBus(c+105,"testbench dut dmem_addr", false,-1, 31,0);
        vcdp->declBus(c+113,"testbench dut dmem_wstrb", false,-1, 3,0);
        vcdp->declBus(c+121,"testbench dut dmem_wdata", false,-1, 31,0);
        vcdp->declBus(c+257,"testbench dut dmem_rdata", false,-1, 31,0);
        vcdp->declBit(c+145,"testbench dut mem_wr_enable", false,-1);
        vcdp->declBus(c+153,"testbench dut mem_wr_addr", false,-1, 31,0);
        vcdp->declBus(c+161,"testbench dut mem_wr_data", false,-1, 31,0);
        vcdp->declBus(c+169,"testbench dut mem_wr_strb", false,-1, 3,0);
        vcdp->declBit(c+177,"testbench dut mem_rd_enable", false,-1);
        vcdp->declBus(c+185,"testbench dut mem_rd_addr", false,-1, 31,0);
        vcdp->declBus(c+193,"testbench dut mem_rd_reg", false,-1, 4,0);
        vcdp->declBus(c+201,"testbench dut mem_rd_func", false,-1, 4,0);
        vcdp->declBit(c+289,"testbench dut mem_rd_enable_q", false,-1);
        vcdp->declBus(c+297,"testbench dut mem_rd_reg_q", false,-1, 4,0);
        vcdp->declBus(c+305,"testbench dut mem_rd_func_q", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+313+i*1,"testbench dut regfile", true,(i+0), 31,0);}}
        vcdp->declBus(c+249,"testbench dut insn", false,-1, 31,0);
        vcdp->declBus(c+209,"testbench dut npc", false,-1, 31,0);
        vcdp->declBus(c+569,"testbench dut pc", false,-1, 31,0);
        vcdp->declBus(c+577,"testbench dut imem_addr_q", false,-1, 31,0);
        vcdp->declBus(c+9,"testbench dut rs1_value", false,-1, 31,0);
        vcdp->declBus(c+17,"testbench dut rs2_value", false,-1, 31,0);
        vcdp->declBus(c+585,"testbench dut insn_funct7", false,-1, 6,0);
        vcdp->declBus(c+593,"testbench dut insn_rs2", false,-1, 4,0);
        vcdp->declBus(c+601,"testbench dut insn_rs1", false,-1, 4,0);
        vcdp->declBus(c+609,"testbench dut insn_funct3", false,-1, 2,0);
        vcdp->declBus(c+617,"testbench dut insn_rd", false,-1, 4,0);
        vcdp->declBus(c+625,"testbench dut insn_opcode", false,-1, 6,0);
        vcdp->declBus(c+633,"testbench dut imm_i", false,-1, 11,0);
        vcdp->declBus(c+25,"testbench dut imm_s", false,-1, 11,0);
        vcdp->declBus(c+33,"testbench dut imm_b", false,-1, 12,0);
        vcdp->declBus(c+41,"testbench dut imm_j", false,-1, 20,0);
        vcdp->declBus(c+641,"testbench dut imm_i_sext", false,-1, 31,0);
        vcdp->declBus(c+49,"testbench dut imm_s_sext", false,-1, 31,0);
        vcdp->declBus(c+57,"testbench dut imm_b_sext", false,-1, 31,0);
        vcdp->declBus(c+65,"testbench dut imm_j_sext", false,-1, 31,0);
        vcdp->declBus(c+713,"testbench dut OPCODE_LOAD", false,-1, 6,0);
        vcdp->declBus(c+721,"testbench dut OPCODE_STORE", false,-1, 6,0);
        vcdp->declBus(c+729,"testbench dut OPCODE_MADD", false,-1, 6,0);
        vcdp->declBus(c+737,"testbench dut OPCODE_BRANCH", false,-1, 6,0);
        vcdp->declBus(c+745,"testbench dut OPCODE_LOAD_FP", false,-1, 6,0);
        vcdp->declBus(c+753,"testbench dut OPCODE_STORE_FP", false,-1, 6,0);
        vcdp->declBus(c+761,"testbench dut OPCODE_MSUB", false,-1, 6,0);
        vcdp->declBus(c+769,"testbench dut OPCODE_JALR", false,-1, 6,0);
        vcdp->declBus(c+777,"testbench dut OPCODE_CUSTOM_0", false,-1, 6,0);
        vcdp->declBus(c+785,"testbench dut OPCODE_CUSTOM_1", false,-1, 6,0);
        vcdp->declBus(c+793,"testbench dut OPCODE_NMSUB", false,-1, 6,0);
        vcdp->declBus(c+801,"testbench dut OPCODE_RESERVED_0", false,-1, 6,0);
        vcdp->declBus(c+809,"testbench dut OPCODE_MISC_MEM", false,-1, 6,0);
        vcdp->declBus(c+817,"testbench dut OPCODE_AMO", false,-1, 6,0);
        vcdp->declBus(c+825,"testbench dut OPCODE_NMADD", false,-1, 6,0);
        vcdp->declBus(c+833,"testbench dut OPCODE_JAL", false,-1, 6,0);
        vcdp->declBus(c+841,"testbench dut OPCODE_OP_IMM", false,-1, 6,0);
        vcdp->declBus(c+849,"testbench dut OPCODE_OP", false,-1, 6,0);
        vcdp->declBus(c+857,"testbench dut OPCODE_OP_FP", false,-1, 6,0);
        vcdp->declBus(c+865,"testbench dut OPCODE_SYSTEM", false,-1, 6,0);
        vcdp->declBus(c+873,"testbench dut OPCODE_AUIPC", false,-1, 6,0);
        vcdp->declBus(c+881,"testbench dut OPCODE_LUI", false,-1, 6,0);
        vcdp->declBus(c+889,"testbench dut OPCODE_RESERVED_1", false,-1, 6,0);
        vcdp->declBus(c+897,"testbench dut OPCODE_RESERVED_2", false,-1, 6,0);
        vcdp->declBus(c+905,"testbench dut OPCODE_OP_IMM_32", false,-1, 6,0);
        vcdp->declBus(c+913,"testbench dut OPCODE_OP_32", false,-1, 6,0);
        vcdp->declBus(c+921,"testbench dut OPCODE_CUSTOM_2", false,-1, 6,0);
        vcdp->declBus(c+929,"testbench dut OPCODE_CUSTOM_3", false,-1, 6,0);
        vcdp->declBit(c+217,"testbench dut next_wr", false,-1);
        vcdp->declBus(c+225,"testbench dut next_rd", false,-1, 31,0);
        vcdp->declBit(c+233,"testbench dut illinsn", false,-1);
        vcdp->declBit(c+241,"testbench dut trapped", false,-1);
        vcdp->declBit(c+649,"testbench dut trapped_q", false,-1);
        vcdp->declBit(c+73,"testbench dut stage_1_en", false,-1);
        vcdp->declBit(c+657,"testbench dut stage_1_en_q", false,-1);
        vcdp->declBit(c+937,"testbench dut stage_1_ready", false,-1);
        vcdp->declBit(c+665,"testbench dut reset_q", false,-1);
        vcdp->declBus(c+81,"testbench dut mem_rdata", false,-1, 31,0);
    }
}

void Vtestbench::traceFullThis__1(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->testbench__DOT__cycles),32);
        vcdp->fullBus(c+9,(vlTOPp->testbench__DOT__dut__DOT__rs1_value),32);
        vcdp->fullBus(c+17,(vlTOPp->testbench__DOT__dut__DOT__rs2_value),32);
        vcdp->fullBus(c+25,(vlTOPp->testbench__DOT__dut__DOT__imm_s),12);
        vcdp->fullBus(c+33,(vlTOPp->testbench__DOT__dut__DOT__imm_b),13);
        vcdp->fullBus(c+41,(vlTOPp->testbench__DOT__dut__DOT__imm_j),21);
        vcdp->fullBus(c+49,(VL_EXTENDS_II(32,12, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_s))),32);
        vcdp->fullBus(c+57,(VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b))),32);
        vcdp->fullBus(c+65,(VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j)),32);
        vcdp->fullBit(c+73,(vlTOPp->testbench__DOT__dut__DOT__stage_1_en));
        vcdp->fullBus(c+81,(vlTOPp->testbench__DOT__dut__DOT__mem_rdata),32);
        vcdp->fullBus(c+89,(vlTOPp->testbench__DOT__imem_addr),32);
        vcdp->fullBit(c+97,(vlTOPp->testbench__DOT__dmem_valid));
        vcdp->fullBus(c+105,(vlTOPp->testbench__DOT__dmem_addr),32);
        vcdp->fullBus(c+113,(vlTOPp->testbench__DOT__dmem_wstrb),4);
        vcdp->fullBus(c+121,(vlTOPp->testbench__DOT__dmem_wdata),32);
        vcdp->fullBit(c+129,((0x10000U > (0x3fffffffU 
                                          & (vlTOPp->testbench__DOT__dmem_addr 
                                             >> 2U)))));
        vcdp->fullBit(c+137,((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)));
        vcdp->fullBit(c+145,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable));
        vcdp->fullBus(c+153,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr),32);
        vcdp->fullBus(c+161,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_data),32);
        vcdp->fullBus(c+169,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb),4);
        vcdp->fullBit(c+177,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable));
        vcdp->fullBus(c+185,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr),32);
        vcdp->fullBus(c+193,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg),5);
        vcdp->fullBus(c+201,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func),5);
        vcdp->fullBus(c+209,(vlTOPp->testbench__DOT__dut__DOT__npc),32);
        vcdp->fullBit(c+217,(vlTOPp->testbench__DOT__dut__DOT__next_wr));
        vcdp->fullBus(c+225,(vlTOPp->testbench__DOT__dut__DOT__next_rd),32);
        vcdp->fullBit(c+233,(vlTOPp->testbench__DOT__dut__DOT__illinsn));
        vcdp->fullBit(c+241,(vlTOPp->testbench__DOT__dut__DOT__trapped));
        vcdp->fullBus(c+249,(vlTOPp->testbench__DOT__imem_data),32);
        vcdp->fullBus(c+257,(vlTOPp->testbench__DOT__dmem_rdata),32);
        vcdp->fullBus(c+265,(vlTOPp->testbench__DOT__out),32);
        vcdp->fullBit(c+273,(vlTOPp->testbench__DOT__out_valid));
        vcdp->fullBus(c+281,(vlTOPp->testbench__DOT__i),32);
        vcdp->fullBit(c+289,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q));
        vcdp->fullBus(c+297,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg_q),5);
        vcdp->fullBus(c+305,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q),5);
        vcdp->fullBus(c+313,(vlTOPp->testbench__DOT__dut__DOT__regfile[0]),32);
        vcdp->fullBus(c+314,(vlTOPp->testbench__DOT__dut__DOT__regfile[1]),32);
        vcdp->fullBus(c+315,(vlTOPp->testbench__DOT__dut__DOT__regfile[2]),32);
        vcdp->fullBus(c+316,(vlTOPp->testbench__DOT__dut__DOT__regfile[3]),32);
        vcdp->fullBus(c+317,(vlTOPp->testbench__DOT__dut__DOT__regfile[4]),32);
        vcdp->fullBus(c+318,(vlTOPp->testbench__DOT__dut__DOT__regfile[5]),32);
        vcdp->fullBus(c+319,(vlTOPp->testbench__DOT__dut__DOT__regfile[6]),32);
        vcdp->fullBus(c+320,(vlTOPp->testbench__DOT__dut__DOT__regfile[7]),32);
        vcdp->fullBus(c+321,(vlTOPp->testbench__DOT__dut__DOT__regfile[8]),32);
        vcdp->fullBus(c+322,(vlTOPp->testbench__DOT__dut__DOT__regfile[9]),32);
        vcdp->fullBus(c+323,(vlTOPp->testbench__DOT__dut__DOT__regfile[10]),32);
        vcdp->fullBus(c+324,(vlTOPp->testbench__DOT__dut__DOT__regfile[11]),32);
        vcdp->fullBus(c+325,(vlTOPp->testbench__DOT__dut__DOT__regfile[12]),32);
        vcdp->fullBus(c+326,(vlTOPp->testbench__DOT__dut__DOT__regfile[13]),32);
        vcdp->fullBus(c+327,(vlTOPp->testbench__DOT__dut__DOT__regfile[14]),32);
        vcdp->fullBus(c+328,(vlTOPp->testbench__DOT__dut__DOT__regfile[15]),32);
        vcdp->fullBus(c+329,(vlTOPp->testbench__DOT__dut__DOT__regfile[16]),32);
        vcdp->fullBus(c+330,(vlTOPp->testbench__DOT__dut__DOT__regfile[17]),32);
        vcdp->fullBus(c+331,(vlTOPp->testbench__DOT__dut__DOT__regfile[18]),32);
        vcdp->fullBus(c+332,(vlTOPp->testbench__DOT__dut__DOT__regfile[19]),32);
        vcdp->fullBus(c+333,(vlTOPp->testbench__DOT__dut__DOT__regfile[20]),32);
        vcdp->fullBus(c+334,(vlTOPp->testbench__DOT__dut__DOT__regfile[21]),32);
        vcdp->fullBus(c+335,(vlTOPp->testbench__DOT__dut__DOT__regfile[22]),32);
        vcdp->fullBus(c+336,(vlTOPp->testbench__DOT__dut__DOT__regfile[23]),32);
        vcdp->fullBus(c+337,(vlTOPp->testbench__DOT__dut__DOT__regfile[24]),32);
        vcdp->fullBus(c+338,(vlTOPp->testbench__DOT__dut__DOT__regfile[25]),32);
        vcdp->fullBus(c+339,(vlTOPp->testbench__DOT__dut__DOT__regfile[26]),32);
        vcdp->fullBus(c+340,(vlTOPp->testbench__DOT__dut__DOT__regfile[27]),32);
        vcdp->fullBus(c+341,(vlTOPp->testbench__DOT__dut__DOT__regfile[28]),32);
        vcdp->fullBus(c+342,(vlTOPp->testbench__DOT__dut__DOT__regfile[29]),32);
        vcdp->fullBus(c+343,(vlTOPp->testbench__DOT__dut__DOT__regfile[30]),32);
        vcdp->fullBus(c+344,(vlTOPp->testbench__DOT__dut__DOT__regfile[31]),32);
        vcdp->fullBus(c+569,(vlTOPp->testbench__DOT__dut__DOT__pc),32);
        vcdp->fullBus(c+577,(vlTOPp->testbench__DOT__dut__DOT__imem_addr_q),32);
        vcdp->fullBus(c+585,((0x7fU & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x19U))),7);
        vcdp->fullBus(c+593,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x14U))),5);
        vcdp->fullBus(c+601,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0xfU))),5);
        vcdp->fullBus(c+609,((7U & (vlTOPp->testbench__DOT__imem_data 
                                    >> 0xcU))),3);
        vcdp->fullBus(c+617,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                       >> 7U))),5);
        vcdp->fullBus(c+625,((0x7fU & vlTOPp->testbench__DOT__imem_data)),7);
        vcdp->fullBus(c+633,((0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                        >> 0x14U))),12);
        vcdp->fullBus(c+641,(VL_EXTENDS_II(32,12, (0xfffU 
                                                   & (vlTOPp->testbench__DOT__imem_data 
                                                      >> 0x14U)))),32);
        vcdp->fullBit(c+649,(vlTOPp->testbench__DOT__dut__DOT__trapped_q));
        vcdp->fullBit(c+657,(vlTOPp->testbench__DOT__dut__DOT__stage_1_en_q));
        vcdp->fullBit(c+665,(vlTOPp->testbench__DOT__dut__DOT__reset_q));
        vcdp->fullBit(c+673,(vlTOPp->clock));
        vcdp->fullBit(c+681,(vlTOPp->reset));
        vcdp->fullBus(c+689,(0x10U),32);
        vcdp->fullBus(c+697,(0U),32);
        vcdp->fullBus(c+705,(0x20U),32);
        vcdp->fullBus(c+713,(3U),7);
        vcdp->fullBus(c+721,(0x23U),7);
        vcdp->fullBus(c+729,(0x43U),7);
        vcdp->fullBus(c+737,(0x63U),7);
        vcdp->fullBus(c+745,(7U),7);
        vcdp->fullBus(c+753,(0x27U),7);
        vcdp->fullBus(c+761,(0x47U),7);
        vcdp->fullBus(c+769,(0x67U),7);
        vcdp->fullBus(c+777,(0xbU),7);
        vcdp->fullBus(c+785,(0x2bU),7);
        vcdp->fullBus(c+793,(0x4bU),7);
        vcdp->fullBus(c+801,(0x6bU),7);
        vcdp->fullBus(c+809,(0xfU),7);
        vcdp->fullBus(c+817,(0x2fU),7);
        vcdp->fullBus(c+825,(0x4fU),7);
        vcdp->fullBus(c+833,(0x6fU),7);
        vcdp->fullBus(c+841,(0x13U),7);
        vcdp->fullBus(c+849,(0x33U),7);
        vcdp->fullBus(c+857,(0x53U),7);
        vcdp->fullBus(c+865,(0x73U),7);
        vcdp->fullBus(c+873,(0x17U),7);
        vcdp->fullBus(c+881,(0x37U),7);
        vcdp->fullBus(c+889,(0x57U),7);
        vcdp->fullBus(c+897,(0x77U),7);
        vcdp->fullBus(c+905,(0x1bU),7);
        vcdp->fullBus(c+913,(0x3bU),7);
        vcdp->fullBus(c+921,(0x5bU),7);
        vcdp->fullBus(c+929,(0x7bU),7);
        vcdp->fullBit(c+937,(vlTOPp->testbench__DOT__dut__DOT__stage_1_ready));
    }
}
