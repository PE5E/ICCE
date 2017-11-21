#ifndef INCLUDED_DNA_
#define INCLUDED_DNA_

#include <iosfwd>             // ofstream, istream
#include <cstdint> // unit16_t

class DNA
{
    static const size_t d_charcap = 4;  // number of letters that can be stored
                                        // in 8 bits = 4, see also below
    static const char d_magicbyte = 255;

    std::ofstream   &d_os;          
    std::ifstream   &d_is;         

    public:
        DNA(std::ofstream &os, std::ifstream &is);
        void readBin();                         // read a binary file
        void readHuman();                       // read a human file
    private:
        size_t writeByte(size_t numchars = 4);    // get 4 letters from stream
                                                  // write single byte to bin
        void readByte(size_t numchars = 4);      // get byte from bin
                                                 // write 4 letters to stream
        char charMap(char ch)   const;
        char letterMap(char ch) const;

        void writeSize(uint32_t size);
        uint32_t readSize();

        void writeCheckByte();
        bool readCheckByte();
};
        
#endif

// Binary format
// mapping:
//     00 A
//     01 C
//     10 G
//     11 T
//     example: ACGT = 00011011
//     4 letters per byte.
// file:
//      checkByte // 11111111 byte to ident bin file
//      filesize // uint32_t giving number of letters stored
//      <actual info bytes>
