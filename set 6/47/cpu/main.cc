#include "main.ih"

int main()
{
    Memory memory;

    CPU cpu(memory);

    cpu.start();
}
