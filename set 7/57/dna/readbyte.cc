#include "dna.ih"

void DNA::readByte(size_t numchars)
{
    char ch = d_is.get();                                        // get byte
    for (size_t idx = charcap; idx != charcap - numchars; --idx) // decompose 
    {
        size_t shift = 2 * (idx - 1);                            // 0 2 4 6
        d_os.put(letterMap(ch >> shift & 3));                    // 3 (dec) = 
                                                                 // 11 (binary)
    }
}
