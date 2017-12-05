#ifndef INCLUDED_BINOPS_
#define INCLUDED_BINOPS_

#include "../addition/addition.h"
#include "../subtraction/subtraction.h"


class Operations;

class Binops: public Addition, public Subtraction
{
    public:
        Binops();

    private:
        Operations add(Addition firstOp, Operations const &secondOp);
        friend Addition;
        friend Subtraction;
};

     
#endif
