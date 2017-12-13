#include "binops.ih"

Binops Binops::sub(Operations const &rhs)
{
    static_cast<Operations *>(this)->sub(rhs);

    return *this;
}
   
