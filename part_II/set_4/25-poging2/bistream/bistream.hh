#ifndef __INCLUDED_BISTREAM_HEADER
#define __INCLUDED_BISTREAM_HEADER

#include <iostream>
#include "../bistreambuffer/bistreambuffer.hh"

class BiStream: private BiStreamBuffer, public std::ostream
{
    public:
        BiStream(std::ostream &one, std::ostream &two);
};

#endif
