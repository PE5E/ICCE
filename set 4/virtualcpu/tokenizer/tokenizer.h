#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include "../enums/enums.h"

class Tokenizer
{
    public:
        void reset();                
        Opcode opcode();              
        OperandType token();    
        int value;             
    private:
};
        
#endif
