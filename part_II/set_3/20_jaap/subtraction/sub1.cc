#include "subtraction.ih"

Subtraction operator-(Subtraction &lhs, Subtraction &rhs)
{
    return *static_cast<Binops*>(&lhs) - *static_cast<Binops*>(&rhs);
}
