#include "memory/memory.h"
#include <iostream>

int main()
{
    Memory Mem1;
    Mem1.store(100,1);
    std::cout << Mem1.load(1) << '\n';
}
