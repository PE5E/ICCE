#include "strings.ih"

Strings::Strings(Strings const &other)
:
    d_size(other.d_size),
    d_capacity(other.d_capacity)

{
    d_str = rawPointers(d_capacity);
    for (size_t idx = 0; idx != d_size; ++idx)
    {
        d_str[idx] = new string;
        *d_str[idx] = *other.d_str[idx];
    }
}
