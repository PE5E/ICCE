#ifndef __INCLUDED_BISTREAMBUFFER_HEADER
#define __INCLUDED_BISTREAMBUFFER_HEADER

#include <iostream>

class BiStreamBuffer: public std::streambuf
{
    std::ostream &d_os1;
    std::ostream &d_os2;

    public:
        BiStreamBuffer(std::ostream &one, std::ostream &two);

        int overflow(int c);
};

#endif
