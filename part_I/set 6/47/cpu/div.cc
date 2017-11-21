#include "cpu.ih"

void CPU::div()
{
    Operand lhs;
    int lhsValue;
    int rhsValue;

    if (not twoOperands(lhs, lhsValue, rhsValue))
        return;

    if (
        (
            lhs.type == OperandType::REGISTER       // lhs cannot be
            &&                                      // the last register
            lhs.value == LAST_REGISTER
        )
        ||
        rhsValue == 0                               //  rhs cannot be 0
    )
    {
        error();
        return;
    }

    store(lhs, lhsValue / rhsValue);
    lhs = Operand{OperandType::REGISTER, LAST_REGISTER};
    store(lhs, lhsValue % rhsValue);
}
