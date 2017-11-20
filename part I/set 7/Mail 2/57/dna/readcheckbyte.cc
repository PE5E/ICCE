#include "dna.ih"

bool DNA::readCheckByte()
{
    d_is.seekg(0, std::ios::beg);
    char ch = d_is.get();
    return ch == d_magicbyte;
}
