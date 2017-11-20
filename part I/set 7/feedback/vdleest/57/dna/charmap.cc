#include "dna.ih"

char DNA::charMap(char ch) const
{           
    switch(ch)
    {
        default:
        case 'A':
            return 0; // 00  // JB: Ok. But '0b00' is even clearer.
        case 'C':
            return 1; // 01
        case 'G':
            return 2; // 10
        case 'T':
            return 3; // 11
    }
}
