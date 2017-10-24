#include "cpu.ih"

void (CPU::*CPU::execute[])() =                 // order as in enums.h
{                                               // seperate file, add to header
    &CPU::errorwrap,            // bool
    &CPU::mov,
    &CPU::add,
    &CPU::sub,
    &CPU::mul,
    &CPU::div,
    &CPU::neg,
    &CPU::dsp,
    &CPU::stp
};

void CPU::start()
{
    while (true)
    {
// was        (this->*execute[d_tokenizer.opcode()])();
        (this->*execute[d_tokenizer.opcode()])();
        d_tokenizer.reset();
    }
}

void CPU::stp() // seperate file, add to header
{
}

void CPU::errorwrap()
{
    error();
}
    
