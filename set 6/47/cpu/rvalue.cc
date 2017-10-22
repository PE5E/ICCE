#include "cpu.ih"

bool CPU::rvalue(Operand &rhs)
{
    auto token = d_tokenizer.token();

    if (token == OperandType::SYNTAX)
        return error();

    rhs.type = token;
    rhs.value = d_tokenizer.value();

    if (
        (
            token == OperandType::REGISTER 
            && 
            static_cast<size_t>(rhs.value) > LAST_REGISTER
        )
        ||
        static_cast<size_t>(rhs.value) >= RAM::SIZE
    )
        return error();

    return true;    
}
