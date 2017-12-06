#include "binops.ih"

Binops operator+(Binops &&lhs, Binops const &rhs)
{
    return static_cast<Binops>(
            move(static_cast<Operations>(lhs))
            + static_cast<Operations>(rhs)
            );
}
