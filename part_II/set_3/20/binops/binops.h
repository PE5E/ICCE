#ifndef INCLUDED_BINOPS_
#define INCLUDED_BINOPS_

#include "../addition/addition.h"
#include "../subtraction/subtraction.h"

class Binops: public Addition, public Subtraction
{
    public:
        Binops();

    private:
};
        
#endif
