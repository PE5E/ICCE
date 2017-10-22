#ifndef INCLUDED_CPU_
#define INCLUDED_CPU_

#include "../tokenizer/tokenizer.h"

class Memory;

class CPU
{
    enum
    {
        NREGISTERS = 5,                                               // a..e at indices 0..4, respectively
        LAST_REGISTER = NREGISTERS - 1
    };

    struct Operand
    {
        OperandType type;
        int value;
    };

    Memory &d_memory;
    Tokenizer d_tokenizer;

    int d_register[NREGISTERS];

    public:
        CPU(Memory &memory);
        void start();

    private:
        bool error();                                                 // show 'syntax error', and prepare for the
                                                                      // next input line
                                                                      // return a value or a register's or
                                                                      // memory location's value
        int dereference(Operand const &value);

        bool rvalue(Operand &lhs);                                    // retrieve an rvalue operand
        bool lvalue(Operand &lhs);                                    // retrieve an lvalue operand

                                                                      // determine 2 operands, lhs must be an lvalue
        bool operands(Operand &lhs, Operand &rhs);

        bool twoOperands(Operand &lhs, int &lhsValue, int &rhsValue);

                                                                      // store a value in register or memory
        void store(Operand const &lhs, int value);
        void mov();                                                   // assign a value
        void add();                                                   // add values
        void sub();                                                   // subtract values
        void mul();                                                   // multiply values
        void div();                                                   // divide values (remainder: last reg.)
                                                                      // div a b computes a /= b, last reg: %
        void neg();                                                   // negate a value
        void dsp();                                                   // display a value
};

#endif
