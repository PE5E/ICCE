#include "addition.ih"

Addition operator+(Addition const &lhs, Addition const &rhs)
{
    return static_cast<Addition>(
            static_cast<Binops>(lhs) + static_cast<Binops>(rhs)
            );
}
