#include "dna.ih"

void DNA::readBin()
{
    if (!readCheckByte())
    {
        std::cerr << "input is not binary!" << '\n';
        return;
    }

    uint32_t size = readSize();

    while (size >= 4)        
    {
        readByte();
        size -= 4;
    } 
    readByte(size);            
    d_os.put('\n');            // for the sake of cat
}
