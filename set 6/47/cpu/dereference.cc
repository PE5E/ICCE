#include "cpu.ih"

int CPU::dereference(Operand const &value)
{
     return (this->*readOperand[value.type])(value);
}
