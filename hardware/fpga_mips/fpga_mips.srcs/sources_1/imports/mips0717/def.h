`define DATA_W 32 
`define SEL_W 6
`define REG 32
`define REG_W 5
`define OPCODE_W 6
`define SHAMT_W 5
`define LANE_W 4
`define IMM_W 16
`define JIMM_W 26
//`define DEPTH 65536
`define DEPTH 4096


`define ALU_THB `SEL_W'b000001
`define ALU_ADD `SEL_W'b100000
`define ALU_SUB `SEL_W'b100010
`define ALU_AND `SEL_W'b100100
`define ALU_OR `SEL_W'b100101
`define ALU_XOR `SEL_W'b100110
`define ALU_NOR `SEL_W'b100111
`define ALU_ADDU `SEL_W'b100001 //ADDU

`define ENABLE 1'b1
`define DISABLE 1'b0
`define ENABLE_N 1'b0
`define DISABLE_N 1'b1

`define OP_REG `OPCODE_W'b000000
`define OP_BEQ `OPCODE_W'b000100
`define OP_BNE `OPCODE_W'b000101
`define OP_LB `OPCODE_W'b100000
`define OP_LW `OPCODE_W'b100011
`define OP_SB `OPCODE_W'b101000
`define OP_SW `OPCODE_W'b101011
`define OP_LUI `OPCODE_W'b001111
`define OP_ADDI `OPCODE_W'b001000
`define OP_ADDIU `OPCODE_W'b001001 // ADDIU
`define OP_ORI `OPCODE_W'b001101
`define OP_J `OPCODE_W'b000010
`define OP_JAL `OPCODE_W'b000011
`define OP_SLTI `OPCODE_W'b001010
`define OP_SLTIU `OPCODE_W'b001011
`define OP_BLTZ `OPCODE_W'b000001 // BLTZ
`define OP_REGIMM `OPCODE_W'b000001 // BGEZ or BLTZ
`define OP_BLEZ `OPCODE_W'b000110 // BLEZ

`define OP_BLTZ `REG_W'b00000
`define OP_BGEZ `REG_W'b00001

`define FUNC_JR `OPCODE_W'b001000
`define FUNC_JALR `OPCODE_W'b001001
`define FUNC_SLT `OPCODE_W'b101010
`define FUNC_SLTU `OPCODE_W'b101001 //SLTU
`define FUNC_MOVZ `OPCODE_W'b010000 //MOVZ
`define FUNC_SLL `OPCODE_W'b000000 //SLL



