#include "cpu.ih"

void CPU::storeMemory(int place, int value)   
{
    d_memory.store(place, value);
}

