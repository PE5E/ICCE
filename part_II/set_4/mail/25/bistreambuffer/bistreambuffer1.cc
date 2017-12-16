#include "bistreambuffer.ih"

BiStreamBuffer::BiStreamBuffer(std::streambuf *one, std::streambuf *two)
    :
        d_buffer1(one),
        d_buffer2(two)
{
}
