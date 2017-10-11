#include "tokenizer.ih"

Opcode Tokenizer::opcode() const
{
    string word;
    cin >> word;
    if (word.empty()) return Opcode::ERR;
    if (word == "mov") return Opcode::MOV;
    if (word == "add") return Opcode::ADD;
    if (word == "sub") return Opcode::SUB;
    if (word == "mul") return Opcode::MUL;
    if (word == "div") return Opcode::DIV;
    if (word == "neg") return Opcode::NEG;
    if (word == "dsp") return Opcode::DSP;
    if (word == "stop") return Opcode::STOP;
    return Opcode::ERR;
} 
