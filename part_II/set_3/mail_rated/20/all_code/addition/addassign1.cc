#include "addition.ih"

Operations &Addition::operator+=(Operations const &rhs) &
{ 
    Operations tmp(*static_cast<Operations *>(this)); 
        // something might go wrong in add so first a copy is made

        // the "this¨ object may not be cast. Therefore we cast the pointer

    static_cast<Binops>(tmp).add(rhs);

    *this = tmp;  // fast swap could be implemented  

    return *static_cast<Operations *>(this);
}

