#include "cpu.ih"

bool CPU::operands(Operand &lhs, Operand &rhs)
{
    bool ret = lvalue(lhs) && rvalue(rhs);

    if (ret)
    {
        if (
            lhs.type == OperandType::MEMORY 
            && 
            rhs.type == OperandType::MEMORY
        )
            return error();
    }

    return ret;
}
