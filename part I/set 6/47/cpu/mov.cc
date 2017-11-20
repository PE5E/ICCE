#include "cpu.ih"

void CPU::mov()
{
    Operand lhs;
    Operand rhs;

    if (not operands(lhs, rhs))
        return;

    store(lhs, dereference(rhs));
}
