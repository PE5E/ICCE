#include "strings.ih"

std::string &Strings::at(size_t index)          // const ref to modifiable string
{
    std::string &ref = priv_at(index);
    return ref;
}
