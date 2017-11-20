#include "cpu.ih"

void (CPU::*CPU::storeValue[])(int place, int value)
{
    nullptr,
    nullptr,                                        // these should never be called
    &CPU::storeRegister,
    &CPU::storeMemory
};
