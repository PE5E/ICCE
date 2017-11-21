#include "memory.ih"

int Memory::load(size_t address) const
{
    return address < RAM::SIZE ? d_memory[address] : 0;
}
