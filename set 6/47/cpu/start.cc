#include "cpu.ih"

void CPU::start()
{
    while (true)
    {
        switch (d_tokenizer.opcode())
        {
            case Opcode::ERR:
                error();
            break;         

            case Opcode::MOV:
                mov();
            break;

            case Opcode::ADD:
                add();
            break;

            case Opcode::SUB:
                sub();
            break;

            case Opcode::MUL:
                mul();
            break;

            case Opcode::DIV:
                div();
            break;

            case Opcode::NEG:
                neg();
            break;

            case Opcode::DSP:
                dsp();
            break;

            case Opcode::STOP:
            return;
        } // switch

        d_tokenizer.reset();        // prepare for the next line

    } // while
}


// code above is official solution
// d_tokenizer.opcode() is opcode from enums.h
//  enum class Opcode
//    {
//        ERR,
//        MOV,
//        ADD,
//        SUB,
//        MUL,
//        DIV,
//        NEG,
//        DSP,
//        STOP,
//    };
// below is rewrite using function pointers
void CPU::Start()
{
    while (true)
        execute[d_tokenizer.opcode()];
        d_tokenizer.reset();
}

void (*CPU::execute[])() // order as in enums.h
{                        // seperate file, add to header
    &error,
    &mov,
    &add,
    &sub,
    &mul,
    &div,
    &neg,
    &dsp,
    &stp
}

void CPU::stp()          // seperate file, add to header
{
    break;
}
