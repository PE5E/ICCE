#include "strings.ih"

std::string const &Strings::at(size_t index) const          // non-modifiable at
{
    return priv_at(index);
}
