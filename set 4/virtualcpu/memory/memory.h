#ifndef INCLUDED_MEMORY_H
#define INCLUDED_MEMORY_H

#include <cstddef>
#include "../enums/enums.h"              // Includes enums

class Memory
{
    int d_mem [RAM::SIZE];                 // array of 20 ints

    public:
        Memory();
        int load(size_t adress)                      const;
        void store(int value, size_t adres);          

    private:
};
        
#endif
