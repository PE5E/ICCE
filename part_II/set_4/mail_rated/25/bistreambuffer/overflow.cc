#include "bistreambuffer.ih"

int BiStreamBuffer::overflow(int c)
{
    d_os1.put(c);
    d_os2.put(c);
    return c;
}
