#include "cpu.ih"

int (CPU::*CPU::readOperand[])(Operand const &value) =     // order as in enums.h
{
    nullptr,                                    // padding for syntax, will never be called 
    &CPU::valueReturn,                               
    &CPU::registerReturn,
    &CPU::memoryReturn
};


