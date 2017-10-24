#ifndef INCLUDED_ENUMS_
#define INCLUDED_ENUMS_

enum RAM
{
    SIZE = 20
};

                       // all opcodes recognized by the CPU. They must also be known by the
                       // tokenizer, which is why they are `promoted' to a separate header file.
enum Opcode
{
    ERR,
    MOV,
    ADD,
    SUB,
    MUL,
    DIV,
    NEG,
    DSP,
    STOP,
};

                       // the various operand types
enum OperandType
{
    SYNTAX,            // syntax error while specifying an operand
    VALUE,             // direct value
    REGISTER,          // register index
    MEMORY             // memory location (= index)
};


#endif
