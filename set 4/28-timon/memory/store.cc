#include "memory.ih"

void Memory::store(int value, size_t adress)
{
    if (adress <= RAM::SIZE)
        d_mem[adress] = value;
}
