#include "dna.ih"

void DNA::writeCheckByte()
{
    d_os.put(d_magicbyte);
}
