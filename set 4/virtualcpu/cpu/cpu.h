#ifndef INCLUDED_CPU_
#define INCLUDED_CPU_

#include "cpu.ih"

class Cpu
{
    int d_NREGISTERS[5] = {0, 0, 0, 0, 0};
    


    public:
        Cpu();
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

