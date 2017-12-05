#include "dem.ih"

Dem &Dem::operator=(Dem const &other)
{
    Dem tmp(other);
    swap(tmp);
    return *this;
}
