#include "tokenizer.ih"

Opcode Tokenizer::opcode() const
{
    string word;
    cin >> word;
    cout << "--" << '\n';
    if (word == "mov") return Opcode::MOV;
    cout << "--" << '\n'; 
    if (word == "add") return Opcode::ADD;
    cout << "--" << '\n';
    if (word == "sub") return Opcode::SUB;
    cout << "--" << '\n';
    if (word == "mul") return Opcode::MUL;
    cout << "--" << '\n';
    if (word == "div") return Opcode::DIV;
    cout << "--" << '\n';
    if (word == "neg") return Opcode::NEG;
    cout << "--" << '\n';
    if (word == "dsp") return Opcode::DSP;
    cout << "--" << '\n';
    if (word == "stop") return Opcode::STOP;
    cout << "--" << '\n';
    return Opcode::ERR;
} 
