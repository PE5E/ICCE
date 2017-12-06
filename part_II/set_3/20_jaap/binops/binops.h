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
        Binops add(Operations const &rhs);
        Binops sub(Operations const &rhs);
        friend Addition;
        friend Subtraction;
};

Binops operator+(Binops const &lhs, Binops const &rhs);
Binops operator+(Binops &&lhs, Binops const &rhs);
     
#endif
