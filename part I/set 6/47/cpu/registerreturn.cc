#include "cpu.ih"

int CPU::registerReturn(Operand const &value)
{
    return d_register[value.value];
}
