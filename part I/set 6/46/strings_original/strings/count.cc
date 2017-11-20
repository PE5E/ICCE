#include "strings.ih"

// static
size_t Strings::count(char *environLike[])
{
    size_t nElements = 0;

    while (*environLike++ != 0)     // visit all defined elements
        ++nElements;                // inc. counter if one's found

    return nElements;
}
