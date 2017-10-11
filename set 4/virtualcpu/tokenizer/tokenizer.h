#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include "../enums/enums.h"

class Tokenizer
{
    int d_value = 0;

    public:
        OperandType token();    
        void reset()            const;                
        Opcode opcode()         const;              
        int value()             const;             
    private:
};
        
#endif
