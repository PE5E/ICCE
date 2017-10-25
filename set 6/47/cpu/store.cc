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


