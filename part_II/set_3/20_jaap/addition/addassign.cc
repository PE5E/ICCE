#include "addition.ih"

class Binops;               // dit is niet nodig

Addition &Addition::operator+=(Operations const &rhs)
{ 
    static_cast<Binops *>(this)->add(rhs);

    return *this;
}
