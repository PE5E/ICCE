#include "dna.ih"

void DNA::writeSize(uint32_t size)
{
    d_os.seekp(0, std::ios::beg);
    d_os.write(reinterpret_cast<char *>(&size), sizeof(uint32_t));
}

