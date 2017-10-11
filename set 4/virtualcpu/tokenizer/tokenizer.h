#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include "../enums/enums.h"

class Tokenizer
{
    int d_value = 0;
    public:
        void reset()            const;                
        Opcode opcode()         const;              
        OperandType token();    
        int value()             const;             
    private:
};
        
#endif
