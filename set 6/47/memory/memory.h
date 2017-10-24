#ifndef INCLUDED_MEMORY_
#define INCLUDED_MEMORY_

#include "../enums/enums.h"
#include <cstddef>

class Memory
{
    int d_memory[RAM::SIZE];

    public:
        void store(size_t address, int value);
        int load(size_t address) const;
};

#endif
