#ifndef __INCLUDED_BISTREAM_H
#define __INCLUDED_BISTREAM_H

#include <iostream>
#include "../bistreambuffer/bistreambuffer.h"

class BiStream: public std::ostream
{
    BiStreamBuffer d_buffer;

    public:

        BiStream(std::ostream &one, std::ostream &two);
};

#endif
