#include "cpu.ih"

void CPU::neg()
{
    Operand lhs;
    if (not lvalue(lhs))
        return;

    store(lhs, -dereference(lhs));
}
