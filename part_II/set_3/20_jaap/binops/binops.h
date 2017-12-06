#ifndef INCLUDED_BINOPS_
#define INCLUDED_BINOPS_

#include "../addition/addition.h"
#include "../subtraction/subtraction.h"


class Operations; // THIS IS NOT THE OPERATIONS HEADER FILE

class Binops: public Addition, public Subtraction
{
    public:
        Binops();
        Binops operator+(Binops &rhs);
        Binops operator-(Binops &rhs);

    private:
        Binops add(Operations const &rhs);
        Binops sub(Operations const &rhs);
        friend Addition;                    // twijfels
        friend Subtraction;
};

     
#endif
