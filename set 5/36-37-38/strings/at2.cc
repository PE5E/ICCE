#include "strings.ih"

std::string &Strings::at(size_t index)          // const ref to modifiable string
{
    return priv_at(index);
}
