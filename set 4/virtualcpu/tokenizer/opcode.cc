#include "tokenizer.ih"

Opcode Tokenizer::opcode()
{
    string word << cin; 
    if (word == "mov") return Opcode::MOV;
    if (word == "add") return Opcode::ADD;
    if (word == "sub") return Opcode::SUB;
    if (word == "mul") return Opcode::MUL;
    if (word == "div") return Opcode::DIV;
    if (word == "neg") return Opcode::NEG;
    if (word == "dsp") return OPcode::DSP;
    if (word == "stop") return Opcode::STOP;
} 
