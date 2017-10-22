#include "cpu.ih"

bool CPU::error()
{
    cout << "syntax error at line " << d_tokenizer.line() << '\n';
    return false;
}
