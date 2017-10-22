#include "cpu.ih"

bool CPU::lvalue(Operand &lhs)
{
    if (not rvalue(lhs))
        return false;

    return lhs.type == OperandType::VALUE ? error() : true;
}
