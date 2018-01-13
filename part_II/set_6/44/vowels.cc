#include "vstring/vstring.hh"
#include <string>

bool vowels(char c, Vstring::CharMap &cmap)
{
    if (std::string("aeiuoAEIOU").find(c) != std::string::npos)
    {
        ++cmap[c];
        return true;
    }
    return false;
}
