#include "ofdstreambuf.ih"

int OFdStreambuf::overflow(int c)
{
    std::cerr << "called " << __FILE__ << '\n';
    sync();                 // write current buffer
    if (c != EOF)           // prepare to close file
    {
        *pptr() = static_cast<char>(c);           // eof character
        pbump(1);                                 
    }
    return c;
}
