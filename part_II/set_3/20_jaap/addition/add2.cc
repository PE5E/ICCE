#include "addition.ih"

Addition operator+(Addition &&lhs, Addition const &rhs)
{
    return static_cast<Addition>(
            move(static_cast<Binops>(lhs))
            + static_cast<Binops>(rhs)
            );
}
