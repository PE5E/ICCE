#ifndef __INCLUDED_BISTREAMBUFFER_H
#define __INCLUDED_BISTREAMBUFFER_H

#include <iostream>

class BiStreamBuffer: public std::streambuf

{
    std::streambuf *d_buffer1;
    std::streambuf *d_buffer2;

    public:

        BiStreamBuffer(std::streambuf *one, std::streambuf *two);

        int overflow(int c) override;

};

#endif
