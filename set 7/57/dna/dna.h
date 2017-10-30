#ifndef INCLUDED_DNA_
#define INCLUDED_DNA_

#include "enums/writemode.h"
#include <iosfwd>             // ofstream, istream

class DNA
{
    bool            d_buffer[8];
    char            d_charBuffer[4];
    size_t          d_bufSize;      // # currently stored in buffer
    size_t          d_numBases;     // # in binary file

    WriteMode       d_mode;

    std::ofstream   &d_os;          // write stream
    std::ifstream   &d_is;          // read stream

    public:
        DNA(std::ofstream &os, std::ifstream &is);

    private:
        size_t readLetters();                     // read 4 letters to buffer
        void writeLetters(size_t number);                 // write 4 letters from buffer
        void writeByte();                       // write buffer to byte
        void readByte();                        // read byte to buffer
};
        
#endif

// Binary format
//     00 A
//     01 C
//     10 G
//     11 T
