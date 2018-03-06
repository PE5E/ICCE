#include "adder.ih"

Adder Adder::&operator=(std::string const &rhs);
{
    d_value = rhs;
    return *this;
}
