#include "dna.ih"

void DNA::readBin()
{
    uint32_t size = readSize();
    while (size >= 4)        
    {
        readByte();
        size -= 4;
    } 
    readByte(size);            
    d_os.put('\n');            // for the sake of cat
}
