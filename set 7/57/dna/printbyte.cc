#include "dna.ih"

void DNA::printByte()
{
    std::cerr << __FILE__ << '\n';
    std::cerr << getByte(4) << '\n';
    std::cerr << __FILE__ << '\n';
}
