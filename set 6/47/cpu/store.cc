//#include "cpu.ih"
//
//void CPU::store(Operand const &lhs, int value)
//{
//    switch (lhs.type)
//    {
//        default: // not used, but satisfies the compiler
//        break;
//
//        case OperandType::REGISTER:
//            d_register[lhs.value] = value;
//        break;
//
//        case OperandType::MEMORY:
//            d_memory.store(lhs.value, value);
//        break;
//    }
//}
//
// code above is original from official solutions
// lhs is struct 'Operand'
// lhs.type is 'Operandtype' from enums.h  
// code below is rewrite using function pointers
// enum class OperandType
//    {
//        SYNTAX,             // syntax error while specifying an operand
//        VALUE,              // direct value
//        REGISTER,           // register index
//        MEMORY              // memory location (= index)
//    };
//
#include "cpu.ih"

void CPU::store(Operand const &lhs, int value) 
{
    (this->*storeValue[lhs.type])(lhs.value, value);   
}
void CPU::storeRegister(int place, int value)  
{
    d_register[place] = value;
}

void CPU::storeMemory(int place, int value)   
{
    d_memory.store(place, value);
}

void (CPU::*CPU::storeValue[])(int place, int value)
{
    nullptr,
    nullptr,                                        // these should never be called
    &CPU::storeRegister,
    &CPU::storeMemory
};


