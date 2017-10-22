#include "cpu.ih"

bool CPU::twoOperands(Operand &lhs, int &lhsValue, int &rhsValue)
{
    Operand rhs;

    if (not operands(lhs, rhs))
        return false;

    rhsValue = dereference(rhs);
    lhsValue = dereference(lhs);

    return true;
}
