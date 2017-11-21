#include "dna.ih"

char DNA::letterMap(char ch) const
{
    std::string list = "ACGT";
    return list[ch];
}
            
