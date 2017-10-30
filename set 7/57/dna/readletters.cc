#include "dna.ih"

size_t DNA::readLetters()
{
    // read 4 letters, put in buf however many could read
    // first version bluntly read 4 letters
    d_is.get(d_charBuffer, 4);
}


