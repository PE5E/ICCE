#ifndef INCLUDED_CPU_
#define INCLUDED_CPU_

#include "cpu.ih"
#include "../enums.h"

class Cpu
{
    int d_NREGISTERS[5] = {0, 0, 0, 0, 0};
    Memory d_memory;
    


    public:
        Cpu(Memory const &memory1);
        void start();

        struct Operand
        {
            OperandType typeOfOperand;
            int returnValue;
        };


    private:
        bool err();
        void mov();
        void add();
        void sub();
        void mul();
        void div();
        void neg();
        void dsp();

};
        
#endif

