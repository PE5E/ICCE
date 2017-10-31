#ifndef INCLUDED_DNA_
#define INCLUDED_DNA_

#include "enums/writemode.h"
#include <iosfwd>             // ofstream, istream

class DNA
{
    size_t          d_numBases;     // # in binary file

    WriteMode       d_mode;

    std::ofstream   &d_os;          // write stream
    std::ifstream   &d_is;          // read stream

    public:
        DNA(std::ofstream &os, std::ifstream &is);
        ~DNA();
        
        char getByte(size_t numchars = 4);      // get 4 letters from stream
        char charMap(char ch);
        void printByte();

    private:
};
        
#endif

// Binary format
//     00 A
//     01 C
//     10 G
//     11 T
