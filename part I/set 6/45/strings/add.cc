#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
    {
        d_capacity <<= 1;          // multiply d_capacity by 2

        reserve(d_capacity);       // reserve memory for strings
    }

    d_str[d_size] = string(next);  // store new pointer in array

    ++d_size;
}
