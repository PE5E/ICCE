#include "memory.ih"

int Memory::load(size_t adress) const
{
    return (adress < RAM::SIZE ? d_mem[adress] : 0);
}

    
