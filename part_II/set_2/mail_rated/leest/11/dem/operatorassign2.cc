#include "dem.ih"

Dem &Dem::operator=(Dem &&tmp)
{
    swap(tmp);
    return *this;
}
