#include "strings.ih"

void Strings::swap(Strings &other)
{
    std::swap(d_str, other.d_str);
    std::swap(d_size, other.d_size);
}
