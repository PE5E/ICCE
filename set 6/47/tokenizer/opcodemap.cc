#include "tokenizer.ih"

Tokenizer::OpcodeMap Tokenizer::s_opcodeMap[]
{
    {
        Opcode::MOV,
        "mov"
    },
    {
        Opcode::ADD,
        "add"
    },
    {
        Opcode::SUB,
        "sub"
    },
    {
        Opcode::MUL,
        "mul"
    },
    {
        Opcode::DIV,
        "div"
    },
    {
        Opcode::NEG,
        "neg"
    },
    {
        Opcode::DSP,
        "dsp"
    },
    {
        Opcode::STOP,
        "stop"
    },
};

size_t Tokenizer::s_nOpcodes = 
                        sizeof(s_opcodeMap) / sizeof(Tokenizer::OpcodeMap);
