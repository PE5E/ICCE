#include "cpu.ih"

int CPU::dereference(Operand const &value)
{
    switch (value.type)
    {
        default:
        // FALLING THROUGH (not used, but satisfies the compiler)
        case OperandType::VALUE:
        return value.value;

        case OperandType::REGISTER:
        return d_register[value.value];

        case OperandType::MEMORY:
        return d_memory.load(value.value);
    }
}


// above is official solution
// below is rewritten using function pointers. 
// todo:
//  move to files
//  add to header

int CPU::dereference(Operand const &value)
{
    return readOperand[value.type](Operand const &value);
}

int (*CPU::readOperand[])(Operand const &value) // order as in enums.h
{
    nullptr,                                    // padding for syntax, will never be called ; should it be removed? WC? 
    &valueReturn,                               // could make it like store.cc
    &registerReturn,
    &memoryReturn
}


int CPU::valueReturn(Operand const &value)
{
    return value.value;
}

int CPU::registerReturn(Operand const &value)
{
    return d_register[value.value];
}

int CPU::memoryReturn(Operand const &value)
{
    return d_memory.load(value.value);
}


