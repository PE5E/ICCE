#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include "../enums/enums.h"
#include <string>
#include <cstddef>

class Tokenizer
{
    size_t d_line = 1;
    int d_value;
    std::string d_read;

    struct OpcodeMap
    {
        Opcode opcode;
        char const *mnemonic;
    };
    static OpcodeMap s_opcodeMap[];
    static size_t s_nOpcodes;

    public:
        Opcode opcode();        // return the next opcode
        OperandType token();    // next operand
        int value() const;      // value matching the token
        void reset();           // prepare for the next input
        size_t line() const;    // line number
    private:
        bool read();

};

inline int Tokenizer::value() const         
{
    return d_value;
}

inline size_t Tokenizer::line() const
{
    return d_line;
}

#endif
