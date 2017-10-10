#ifndef INCLUDED_MEMORY_
#define INCLUDED_MEMORY_

// #include "../commonheader.ih"              // Includes enums
// this should be in memory.ih. corrected it for you ;)


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
