#include "ifdstreambuf.ih"

std::streamsize IFdStreambuf::xsgetn(char *dest, std::streamsize requestSize)
{
    int avail = egptr() - gptr();                         // currently buffed

    if (avail > requestSize)                              // not too much :)
        avail = requestSize;
    
    memcpy(dest, gptr(), avail);                          // copy from buffer
    gbump(avail);                                         
                                                          // read more if need 
    return avail + read(d_fd, dest + avail, requestSize - avail);   
}                                                        
