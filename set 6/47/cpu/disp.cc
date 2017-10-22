#include "cpu.ih"

void CPU::dsp()
{
    Operand rhs;

    if (not rvalue(rhs))
        return;

    cout << dereference(rhs) << endl;
}
