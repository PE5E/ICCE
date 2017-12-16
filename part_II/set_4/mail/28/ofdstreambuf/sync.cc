#include "ofdstreambuf.ih"

int OFdStreambuf::sync()
{
    std::cerr << "called " << __FILE__ << '\n';
    
    if (pptr() > pbase())                   // is there something to write?
    {
        std::cerr << "line " << __LINE__ << '\n';
        if (write(d_fd, d_buffer, pptr() - pbase()) < 0)        
            std::cerr << "Could not write to file descriptor" << '\n';

        setp(d_buffer, d_buffer + s_SIZE);  // reset pointers to ready buffer
    }
    return 0;
}
