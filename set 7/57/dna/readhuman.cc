#include "dna.ih"

void DNA::readHuman()          
{                                              
    writeCheckByte();
    d_os.seekp(sizeof(uint32_t) + sizeof(char), std::ios::beg);      

    uint32_t size = 0;
    while (d_is.peek() != EOF && d_is.peek() != '\n')
        size += writeByte();

    writeSize(size);  // written to space in beginning 
}
