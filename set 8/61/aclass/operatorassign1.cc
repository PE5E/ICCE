#include "aclass.ih"

aclass &aclass::operator=(aclass const &other)
{
    aclass tmp(other);
    swap(tmp);
    return *this;
}
