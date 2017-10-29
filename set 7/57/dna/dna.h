#ifndef INCLUDED_DNA_
#define INCLUDED_DNA_

#include "enums/writemode.h"
#include <iosfwd>             // ofstream, istream

class DNA
{
    bool            d_buffer[8];    // one byte   
    WriteMode       d_mode;
    size_t          d_numBases;     // bases in file
    std::ofstream   &d_os;          // write stream
    std::ifstream   &d_is;          // read stream

    public:
        DNA(std::ofstream &os, std::ifstream &is);

    private:
        void readLetters(size_t number);
        void writeLetters(size_t number);
        void writeByte();          
        void readByte();
        void parseLastByte(size_t bits);
};
        
#endif

// Binary format
//     00 A
//     01 C
//     10 G
//     11 T
