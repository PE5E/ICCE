#include "dna.ih"

uint32_t DNA::readSize()
{
    d_is.seekg(sizeof(char), std::ios::beg);
    uint32_t sz; // JB: Why just 32 bits?
    d_is.read(reinterpret_cast<char *>(&sz), sizeof(uint32_t));
    return sz;
}
