#include "addition.ih"

class Binops;

Addition &Addition::operator+=(Operations const &rhs)
{ 
    static_cast<Binops *>(this)->add(rhs);

    return *this;
}
