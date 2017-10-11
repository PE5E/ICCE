#ifndef INCLUDED_MEMORY_H
#define INCLUDED_MEMORY_H

#include <cstddef>
#include "../enums/enums.h"              

class Memory
{
    int d_mem[RAM::SIZE];                 // array of 20 ints

    public:
        Memory();
        void store(int value, size_t adress);          
        int load(size_t adress) const;
    private:
};
        
#endif
