//#include "cpu.ih"
//
//int CPU::dereference(Operand const &value)
//{
//    switch (value.type)
//    {
//        default:
//        // FALLING THROUGH (not used, but satisfies the compiler)
//        case OperandType::VALUE:
//        return value.value;
//
//        case OperandType::REGISTER:
//        return d_register[value.value];
//
//        case OperandType::MEMORY:
//        return d_memory.load(value.value);
//    }
//}
//
//
// above is official solution
// below is rewritten using function pointers. 
// todo:
//  move to files
//  add to header

#include "cpu.ih"
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

int (CPU::*CPU::readOperand[])(Operand const &value) =     // order as in enums.h
{
    nullptr,                                    // padding for syntax, will never be called 
    &CPU::valueReturn,                               
    &CPU::registerReturn,
    &CPU::memoryReturn
};

int CPU::dereference(Operand const &value)
{
     return (this->*readOperand[value.type])(value);
}


