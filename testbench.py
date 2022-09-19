import pyverilator
from ctypes import c_int32, c_uint32

ALU_ADD = 1
ALU_SUB = 2
ALU_SLL = 3
ALU_SRL = 4
ALU_SRA = 5
ALU_SLT = 7
ALU_SLTU = 8
ALU_XOR = 9
ALU_OR = 10
ALU_AND = 11
ALUSYM = {
    ALU_ADD: "+",
    ALU_SUB: "-",
    ALU_XOR: "^",
    ALU_OR: "|",
    ALU_AND: "&",
    ALU_SLL: "SLL",
    ALU_SRL: "SRL",
    ALU_SRA: "SRA",
    ALU_SLT: "SLT",
    ALU_SLTU: "SLTU",
}


def uint32(v):
    return c_uint32(v).value


def int32(v):
    return c_int32(v).value


# This is the function we are trying to emulate in our system verilog
def alu(alu_function, a, b):
    if alu_function == ALU_ADD:
        r = a + b
    elif alu_function == ALU_SUB:
        r = a - b
    elif alu_function == ALU_XOR:
        r = a ^ b
    elif alu_function == ALU_OR:
        r = a | b
    elif alu_function == ALU_AND:
        r = a & b

    elif alu_function == ALU_SLL:
        ua = uint32(a)
        ub = uint32(b)
        r = a << b
    elif alu_function == ALU_SRL:
        ua = uint32(a)
        ub = uint32(b)
        r = a >> b

    elif alu_function == ALU_SRA:
        r = a >> b
    elif alu_function == ALU_SLT:

        ia = int32(a)
        ib = int32(b)
        r = 1 if ia < ib else 0

    elif alu_function == ALU_SLTU:
        ua = uint32(a)
        ub = uint32(b)
        r = 1 if ua < ub else 0

    else:
        r = 0
    r = uint32(r)
    zero = 1 if (r == 0) else 0
    return (r, zero)


def test_alu(tb, alu_function, a, b):
    tb.io.alu_function = alu_function
    tb.io.op_a = a
    tb.io.op_b = b

    (cresult, ceq) = alu(alu_function, a, b)  # computer result
    vresult = uint32(tb.io.result)  # verilog result
    veq = uint32(tb.io.result_eq_zero)
    ok = cresult == vresult and ceq == veq
    print(
        "{:08x} {} {:08x}\tresult={:08x},{} (cresult={:08x},{}) {}".format(
            a, ALUSYM[alu_function], b, vresult, veq, cresult, ceq, ok
        )
    )
    return ok


tb = pyverilator.PyVerilator.build("alu.v")
ok = test_alu(tb, ALU_ADD, 1, 2)
ok = test_alu(tb, ALU_ADD, 0xFFFFFFFF, 2)
ok = test_alu(tb, ALU_ADD, 0x7FFFFFFF, 0xFF)
ok = test_alu(tb, ALU_SUB, 0xDEADBEEF, 0xDEADBEEF)
ok = test_alu(tb, ALU_SUB, 0xDEADBEEF, 2)
ok = test_alu(tb, ALU_SUB, 0xE1E10, 0xDEADBEEF)
ok = test_alu(tb, ALU_ADD, 0xFFFFFFFF, 1)


ok = test_alu(tb, ALU_XOR, 0, 0)
ok = test_alu(tb, ALU_XOR, 0, 1)
ok = test_alu(tb, ALU_XOR, 1, 1)


ok = test_alu(tb, ALU_OR, 0, 0)
ok = test_alu(tb, ALU_OR, 0, 1)
ok = test_alu(tb, ALU_OR, 1, 1)


ok = test_alu(tb, ALU_AND, 0, 0)
ok = test_alu(tb, ALU_AND, 0, 1)
ok = test_alu(tb, ALU_AND, 1, 1)


ok = test_alu(tb, ALU_SLL, 0, 1)
ok = test_alu(tb, ALU_SLL, 0b010, 1)
ok = test_alu(tb, ALU_SLL, 0xFFFFFFFF, 1)


ok = test_alu(tb, ALU_SRL, 0, 1)
ok = test_alu(tb, ALU_SRL, 1, 1)
ok = test_alu(tb, ALU_SRL, 0xFFFFFFFF, 1)


ok = test_alu(tb, ALU_SRL, 0xFFFFFFFF, 2)  # 0xFFFFFFFF SRL 2 = 0x3FFFFFFF
ok = test_alu(tb, ALU_SRA, 0xFFFFFFFF, 2)  # 0xFFFFFFFF SRA 2 = 0xFFFFFFFF

ok = test_alu(tb, ALU_SLT, 0, 1)
ok = test_alu(tb, ALU_SLT, 1, 1)
ok = test_alu(tb, ALU_SLT, -1, 1)

ok = test_alu(tb, ALU_SLTU, 0, 1)
ok = test_alu(tb, ALU_SLTU, 1, 1)
ok = test_alu(tb, ALU_SLTU, -1, 1)


# 0xFFFFFFFF SLT 1 = 1
# 0xFFFFFFFF SLTU 1 = 0
ok = test_alu(tb, ALU_SLT, 0xFFFFFFFF, 1)
ok = test_alu(tb, ALU_SLTU, 0xFFFFFFFF, 1)
