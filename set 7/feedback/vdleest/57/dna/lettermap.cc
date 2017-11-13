#include "dna.ih"

char DNA::letterMap(char ch) const
{
    std::string list = "ACGT"; // JB: WIM?
    return list[ch];
}
            
