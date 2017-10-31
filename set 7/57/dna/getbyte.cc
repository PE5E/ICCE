#include "dna.ih"

char DNA::getByte(size_t numchars)
{
    char val = 0;
    for (size_t idx = 0; idx != numchars; ++idx)
    {
        std::cerr << __FILE__ << __LINE__ << '\n';
        std::cerr << numchars - idx - 1 << '\n';
        size_t shift = 2 * (numchars - idx - 1);
        size_t toadd = charMap(d_is.get()) << shift;
        val |= toadd;
        std::cerr << "val=" << val << '\n';
    }
    return val;
}
