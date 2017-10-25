#include "strings.ih"

namespace {
    string empty;
}

std::string &Strings::safeAt(size_t idx) const
{
    if (idx >= d_size)
    {
        empty.clear();
        return empty;
    }

    return d_str[idx];
}
