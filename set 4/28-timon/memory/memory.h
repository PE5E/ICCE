#ifndef INCLUDED_MEMORY_
#define INCLUDED_MEMORY_


class Memory
{
    int d_mem [RAM::SIZE];                 // array of 20 ints

    public:
        Memory();
        load(size_t adress);               // expects adress type
        store(int value, size_t adres);      // idem

    private:
};
        
#endif
