#include "cpu.ih"

void CPU::start()
{
    while (true)
    {
        (this->*execute[d_tokenizer.opcode()])();
        d_tokenizer.reset();
    }
}
