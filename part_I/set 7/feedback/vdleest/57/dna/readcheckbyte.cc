#include "dna.ih"

bool DNA::readCheckByte()
{
    d_is.seekg(0, std::ios::beg);
    char ch = d_is.get();
    return ch == d_magicbyte;
    // JB: This sort of magic is good :-) But a single byte is a bit shortish.
}
