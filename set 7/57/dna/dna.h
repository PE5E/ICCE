#ifndef INCLUDED_DNA_
#define INCLUDED_DNA_

#include "enums/writemode.h"
#include <iosfwd>             // ofstream, istream
#include <cstdint> // unit16_t

class DNA
{
    static const size_t charcap = 4;    // number of letters that can be stored
                                        // in 4 bits = 1 char
    WriteMode       d_mode;

    std::ofstream   &d_os;          // write stream
    std::ifstream   &d_is;          // read stream

    public:
        DNA(std::ofstream &os, std::ifstream &is);

        size_t writeByte(size_t numchars = 4);      // get 4 letters from stream
                                                  // write single byte to bin
        char charMap(char ch);
        char letterMap(char ch);
        void readByte(size_t numchars = 4);      // get byte from bin
        void readBin();                         // read a binary file
                                                 // write 4 letters to stream

        void readHuman();
        void writeSize(uint32_t size);
        uint32_t readSize();
    private:
};
        
#endif

// Binary format
//     00 A
//     01 C
//     10 G
//     11 T
