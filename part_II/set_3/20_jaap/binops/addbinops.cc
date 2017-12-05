#include "binops.ih"

Binops Binops::add(Operations const &rhs)
{
    static_cast<Operations *>(this)->add(rhs);

    return *this;
}
   
