#include "dna.ih"

void DNA::readHuman()          
{
    d_os.seekp(sizeof(uint32_t), std::ios::beg);      // leave 16 bits for size 
    uint32_t size = 0;
    while (d_is.peek() != EOF && d_is.peek() != '\n')
        size += writeByte();
    writeSize(size);  
}
