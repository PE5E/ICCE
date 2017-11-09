#include "strings.ih"

namespace {
    string emptys;
}

std::string &Strings::safeAt(size_t idx) const
{
    if (idx >= d_size)
    {
        emptys.clear();
        return emptys;
    }

    return d_str[idx];
}
