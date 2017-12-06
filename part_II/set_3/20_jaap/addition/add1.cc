#include "addition.ih"

Addition operator+(Addition &lhs, Addition &rhs)
{
    return *static_cast<Binops*>(&lhs) + *static_cast<Binops*>(&rhs);
}
