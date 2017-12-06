#include "subtraction.ih"

class Binops;

Subtraction &Subtraction::operator-=(Operations const &rhs)
{ 
    static_cast<Binops *>(this)->sub(rhs);

    return *this;
}
