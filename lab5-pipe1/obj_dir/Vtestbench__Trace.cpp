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
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
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
        vcdp->chgBus(c+1,(vlTOPp->testbench__DOT__cycles),32);
        vcdp->chgBus(c+9,(vlTOPp->testbench__DOT__dut__DOT__rs1_value),32);
        vcdp->chgBus(c+17,(vlTOPp->testbench__DOT__dut__DOT__rs2_value),32);
        vcdp->chgBus(c+25,(vlTOPp->testbench__DOT__dut__DOT__imm_s),12);
        vcdp->chgBus(c+33,(vlTOPp->testbench__DOT__dut__DOT__imm_b),13);
        vcdp->chgBus(c+41,(vlTOPp->testbench__DOT__dut__DOT__imm_j),21);
        vcdp->chgBus(c+49,(VL_EXTENDS_II(32,12, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_s))),32);
        vcdp->chgBus(c+57,(VL_EXTENDS_II(32,13, (IData)(vlTOPp->testbench__DOT__dut__DOT__imm_b))),32);
        vcdp->chgBus(c+65,(VL_EXTENDS_II(32,21, vlTOPp->testbench__DOT__dut__DOT__imm_j)),32);
        vcdp->chgBit(c+73,(vlTOPp->testbench__DOT__dut__DOT__stage_1_en));
        vcdp->chgBus(c+81,(vlTOPp->testbench__DOT__dut__DOT__mem_rdata),32);
    }
}

void Vtestbench::traceChgThis__3(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+89,(vlTOPp->testbench__DOT__imem_addr),32);
        vcdp->chgBit(c+97,(vlTOPp->testbench__DOT__dmem_valid));
        vcdp->chgBus(c+105,(vlTOPp->testbench__DOT__dmem_addr),32);
        vcdp->chgBus(c+113,(vlTOPp->testbench__DOT__dmem_wstrb),4);
        vcdp->chgBus(c+121,(vlTOPp->testbench__DOT__dmem_wdata),32);
        vcdp->chgBit(c+129,((0x10000U > (0x3fffffffU 
                                         & (vlTOPp->testbench__DOT__dmem_addr 
                                            >> 2U)))));
        vcdp->chgBit(c+137,((0x2000000U == vlTOPp->testbench__DOT__dmem_addr)));
        vcdp->chgBit(c+145,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_enable));
        vcdp->chgBus(c+153,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_addr),32);
        vcdp->chgBus(c+161,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_data),32);
        vcdp->chgBus(c+169,(vlTOPp->testbench__DOT__dut__DOT__mem_wr_strb),4);
        vcdp->chgBit(c+177,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable));
        vcdp->chgBus(c+185,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_addr),32);
        vcdp->chgBus(c+193,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg),5);
        vcdp->chgBus(c+201,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func),5);
        vcdp->chgBus(c+209,(vlTOPp->testbench__DOT__dut__DOT__npc),32);
        vcdp->chgBit(c+217,(vlTOPp->testbench__DOT__dut__DOT__next_wr));
        vcdp->chgBus(c+225,(vlTOPp->testbench__DOT__dut__DOT__next_rd),32);
        vcdp->chgBit(c+233,(vlTOPp->testbench__DOT__dut__DOT__illinsn));
    }
}

void Vtestbench::traceChgThis__4(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+241,(vlTOPp->testbench__DOT__dut__DOT__trapped));
        vcdp->chgBus(c+249,(vlTOPp->testbench__DOT__imem_data),32);
        vcdp->chgBus(c+257,(vlTOPp->testbench__DOT__dmem_rdata),32);
        vcdp->chgBus(c+265,(vlTOPp->testbench__DOT__out),32);
        vcdp->chgBit(c+273,(vlTOPp->testbench__DOT__out_valid));
        vcdp->chgBus(c+281,(vlTOPp->testbench__DOT__i),32);
        vcdp->chgBit(c+289,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_enable_q));
        vcdp->chgBus(c+297,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_reg_q),5);
        vcdp->chgBus(c+305,(vlTOPp->testbench__DOT__dut__DOT__mem_rd_func_q),5);
        vcdp->chgBus(c+313,(vlTOPp->testbench__DOT__dut__DOT__regfile[0]),32);
        vcdp->chgBus(c+314,(vlTOPp->testbench__DOT__dut__DOT__regfile[1]),32);
        vcdp->chgBus(c+315,(vlTOPp->testbench__DOT__dut__DOT__regfile[2]),32);
        vcdp->chgBus(c+316,(vlTOPp->testbench__DOT__dut__DOT__regfile[3]),32);
        vcdp->chgBus(c+317,(vlTOPp->testbench__DOT__dut__DOT__regfile[4]),32);
        vcdp->chgBus(c+318,(vlTOPp->testbench__DOT__dut__DOT__regfile[5]),32);
        vcdp->chgBus(c+319,(vlTOPp->testbench__DOT__dut__DOT__regfile[6]),32);
        vcdp->chgBus(c+320,(vlTOPp->testbench__DOT__dut__DOT__regfile[7]),32);
        vcdp->chgBus(c+321,(vlTOPp->testbench__DOT__dut__DOT__regfile[8]),32);
        vcdp->chgBus(c+322,(vlTOPp->testbench__DOT__dut__DOT__regfile[9]),32);
        vcdp->chgBus(c+323,(vlTOPp->testbench__DOT__dut__DOT__regfile[10]),32);
        vcdp->chgBus(c+324,(vlTOPp->testbench__DOT__dut__DOT__regfile[11]),32);
        vcdp->chgBus(c+325,(vlTOPp->testbench__DOT__dut__DOT__regfile[12]),32);
        vcdp->chgBus(c+326,(vlTOPp->testbench__DOT__dut__DOT__regfile[13]),32);
        vcdp->chgBus(c+327,(vlTOPp->testbench__DOT__dut__DOT__regfile[14]),32);
        vcdp->chgBus(c+328,(vlTOPp->testbench__DOT__dut__DOT__regfile[15]),32);
        vcdp->chgBus(c+329,(vlTOPp->testbench__DOT__dut__DOT__regfile[16]),32);
        vcdp->chgBus(c+330,(vlTOPp->testbench__DOT__dut__DOT__regfile[17]),32);
        vcdp->chgBus(c+331,(vlTOPp->testbench__DOT__dut__DOT__regfile[18]),32);
        vcdp->chgBus(c+332,(vlTOPp->testbench__DOT__dut__DOT__regfile[19]),32);
        vcdp->chgBus(c+333,(vlTOPp->testbench__DOT__dut__DOT__regfile[20]),32);
        vcdp->chgBus(c+334,(vlTOPp->testbench__DOT__dut__DOT__regfile[21]),32);
        vcdp->chgBus(c+335,(vlTOPp->testbench__DOT__dut__DOT__regfile[22]),32);
        vcdp->chgBus(c+336,(vlTOPp->testbench__DOT__dut__DOT__regfile[23]),32);
        vcdp->chgBus(c+337,(vlTOPp->testbench__DOT__dut__DOT__regfile[24]),32);
        vcdp->chgBus(c+338,(vlTOPp->testbench__DOT__dut__DOT__regfile[25]),32);
        vcdp->chgBus(c+339,(vlTOPp->testbench__DOT__dut__DOT__regfile[26]),32);
        vcdp->chgBus(c+340,(vlTOPp->testbench__DOT__dut__DOT__regfile[27]),32);
        vcdp->chgBus(c+341,(vlTOPp->testbench__DOT__dut__DOT__regfile[28]),32);
        vcdp->chgBus(c+342,(vlTOPp->testbench__DOT__dut__DOT__regfile[29]),32);
        vcdp->chgBus(c+343,(vlTOPp->testbench__DOT__dut__DOT__regfile[30]),32);
        vcdp->chgBus(c+344,(vlTOPp->testbench__DOT__dut__DOT__regfile[31]),32);
        vcdp->chgBus(c+569,(vlTOPp->testbench__DOT__dut__DOT__pc),32);
        vcdp->chgBus(c+577,(vlTOPp->testbench__DOT__dut__DOT__imem_addr_q),32);
        vcdp->chgBus(c+585,((0x7fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0x19U))),7);
        vcdp->chgBus(c+593,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0x14U))),5);
        vcdp->chgBus(c+601,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 0xfU))),5);
        vcdp->chgBus(c+609,((7U & (vlTOPp->testbench__DOT__imem_data 
                                   >> 0xcU))),3);
        vcdp->chgBus(c+617,((0x1fU & (vlTOPp->testbench__DOT__imem_data 
                                      >> 7U))),5);
        vcdp->chgBus(c+625,((0x7fU & vlTOPp->testbench__DOT__imem_data)),7);
        vcdp->chgBus(c+633,((0xfffU & (vlTOPp->testbench__DOT__imem_data 
                                       >> 0x14U))),12);
        vcdp->chgBus(c+641,(VL_EXTENDS_II(32,12, (0xfffU 
                                                  & (vlTOPp->testbench__DOT__imem_data 
                                                     >> 0x14U)))),32);
        vcdp->chgBit(c+649,(vlTOPp->testbench__DOT__dut__DOT__trapped_q));
        vcdp->chgBit(c+657,(vlTOPp->testbench__DOT__dut__DOT__stage_1_en_q));
        vcdp->chgBit(c+665,(vlTOPp->testbench__DOT__dut__DOT__reset_q));
    }
}

void Vtestbench::traceChgThis__5(Vtestbench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtestbench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+673,(vlTOPp->clock));
        vcdp->chgBit(c+681,(vlTOPp->reset));
    }
}
