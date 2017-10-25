#include "cpu.ih"

void CPU::storeRegister(int place, int value)  
{
    d_register[place] = value;
}
