#include "subtraction.ih"

Operations &Subtraction::operator-=(Operations const &rhs) &
{ 
    Operations tmp(*static_cast<Operations *>(this)); 
        // something might go wrong in add so first a copy is made

    static_cast<Binops>(tmp).sub(rhs);

    *this = tmp;  // fast swap could be implemented  

    return *static_cast<Operations *>(this);
}

