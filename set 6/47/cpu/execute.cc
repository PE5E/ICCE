#include "cpu.ih"

void (CPU::*CPU::execute[])() =                 // order as in enums.h
{
    &CPU::errorwrap,            
    &CPU::mov,
    &CPU::add,
    &CPU::sub,
    &CPU::mul,
    &CPU::div,
    &CPU::neg,
    &CPU::dsp,
    &CPU::stp
};
