#include "memory/memory.h"

int main()
{
    Memory Mem1;
    Mem1.store(100,1);
    cout << Mem1.load(1) << '\n';
}
