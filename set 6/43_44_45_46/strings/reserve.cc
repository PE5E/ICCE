#include "strings.ih"


void Strings::reserve()
{
    string **newArray = static_cast<string **>(operator new(d_capacity * sizeof(*string)));

    for (size_t idx = 0; idx != d_size; ++idx)
        new (newArray + idx) string(d_arrayStr[idx]);

    destroy();      // delete old array of pointers, not the string data

    d_arrayStr = newArray;
}

