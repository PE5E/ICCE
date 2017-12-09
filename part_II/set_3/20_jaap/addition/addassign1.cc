#include "addition.ih"

Addition &Addition::operator+=(Operations const &rhs) &
{ 
    static_cast<Binops *>(this)->add(rhs);

    return *this;
}
