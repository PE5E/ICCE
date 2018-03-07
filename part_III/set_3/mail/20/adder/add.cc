#include "adder.ih"

void Adder::add(Adder const &rhs);
{
    d_value += rhs.value();
}
