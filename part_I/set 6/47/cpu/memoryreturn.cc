#include "cpu.ih"

int CPU::memoryReturn(Operand const &value)
{
    return d_memory.load(value.value);
}
