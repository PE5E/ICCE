#include "binops.ih"

Binops operator+(Binops const &lhs, Binops const &rhs)
{
    return static_cast<Binops>(
            static_cast<Operations>(lhs) + static_cast<Operations>(rhs)
            );
