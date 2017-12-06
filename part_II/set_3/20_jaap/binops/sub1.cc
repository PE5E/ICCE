#include "binops.ih"

Binops Binops::operator-(Binops &rhs)
{
    static_cast<Operations*>(this)->sub(*static_cast<Operations*>(&rhs));
    return *this;
}
