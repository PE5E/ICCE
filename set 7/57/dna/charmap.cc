#include "dna.ih"

char DNA::charMap(char ch)
{           
    std::cerr << __FILE__ << __LINE__ << '\n';
    std::cerr << ch << '\n';
    switch(ch)
    {
        default:
        case 'A':
            std::cerr << "case A" << '\n';
            return 0; // 00
            break;
        case 'C':
            std::cerr << "case C" << '\n';
            return 1; // 01
            break;
        case 'G':
            std::cerr << "case G" << '\n';
            return 2; // 10
            break;
        case 'T':
            std::cerr << "case T" << '\n';
            return 3; // 11
            break;
    }
}
