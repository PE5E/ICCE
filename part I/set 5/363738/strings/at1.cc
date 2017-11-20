#include "strings.ih"

std::string const &Strings::at(size_t index) const          // non-modifiable at
{
    std::string const &ref = priv_at(index);
    return ref;
}
