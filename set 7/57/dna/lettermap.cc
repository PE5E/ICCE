#include "dna.ih"

char DNA::letterMap(char ch)
{
    switch(ch)
    {
        default:
        case 0:         // 00
            return 'A';
        case 1:         // 01
            return 'C';
        case 2:         // 10
            return 'G';
        case 3:         // 11
            return 'T';
    }
}
            
