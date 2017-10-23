#include "cpu.ih"

void CPU::store(Operand const &lhs, int value)
{
    switch (lhs.type)
    {
        default: // not used, but satisfies the compiler
        break;

        case OperandType::REGISTER:
            d_register[lhs.value] = value;
        break;

        case OperandType::MEMORY:
            d_memory.store(lhs.value, value);
        break;
    }
}

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
void CPU::store(Operand const &lhs, int value) // should this be moved 1 lvl up? I think not.
{
    storeValue[lhs.type](lhs.value, value);    // store
}

void (*storeValue[])(int place, int value)
{
    nullptr,
    nullptr,
    &storeRegister,
    &storeMemory
}

void CPU::storeRegister(int place, int value)  // sep file, add  to header
{
    d_register[place] = value;
}

void CPU::storeMemory(int place, int value)    // sep file, add to header
{
    d_memory.store(place, value);
}
