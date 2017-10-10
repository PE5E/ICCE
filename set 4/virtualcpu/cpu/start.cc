#include "cpu.ih"

void Cpu::start()
{
    Tokenizer tokans;
    
    while (true)
    {
        Opcode returnValue = tokans.opcode();  // request opcode from tokenizer

        switch (returnValue)
        {
            case Opcode::ERR: err();
            case Opcode::MOV: mov();
            case Opcode::ADD: add();
            case Opcode::SUB: sub();
            case Opcode::MUL: mul();
            case Opcode::DIV: div();
            case Opcode::NEG: neg();
            case Opcode::DSP: dsp();
            case Opcode::STOP: return;
        }

        tokans.reset();
    }

}


