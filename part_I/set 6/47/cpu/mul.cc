#include "cpu.ih"

void CPU::mul()
{
    Operand lhs;
    int lhsValue;
    int rhsValue;

    if (not twoOperands(lhs, lhsValue, rhsValue))
        return;

    store(lhs, lhsValue * rhsValue);
}
