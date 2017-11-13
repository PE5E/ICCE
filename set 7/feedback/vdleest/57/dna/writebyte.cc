#include "dna.ih"

// JB: WOT, no comments?
size_t DNA::writeByte(size_t numchars)
{
    char val = 0;
    for (size_t idx = 0; idx != numchars; ++idx)
    {
        size_t shift = 2 * (numchars - idx - 1);  // could CTRl, prefer this 
        val |=  charMap(d_is.get()) << shift;
        if (!d_is.good())                         // out of letters
        {
            d_os.put(val);
            return idx - 1;
        }
    }
    d_os.put(val);
    return numchars;
}
