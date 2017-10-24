#include "strings.ih"

void Strings::swap(Strings &other)
{
    string **tmp = d_arrayStr;
    d_arrayStr = other.d_arrayStr;
    other.d_arrayStr = tmp;

    size_t size = d_size;
    d_size = other.d_size;
    other.d_size = size;
}
