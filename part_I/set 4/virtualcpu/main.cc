#include "cpu/cpu.h"
#include "memory/memory.h"

using namespace std;

int main()
{ 
    Memory mem;         // defines memory
    Cpu cpuNr1(mem);    // defines a cpu object
    
    cpuNr1.start();     // starts the software cpu
}
