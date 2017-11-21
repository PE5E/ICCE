#include "cpu.ih"

void CPU::sub()
{
    Operand lhs;
    int lhsValue;
    int rhsValue;

    if (not twoOperands(lhs, lhsValue, rhsValue))
        return;

    store(lhs, lhsValue - rhsValue);
}
