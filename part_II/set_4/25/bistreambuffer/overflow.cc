#include "bistreambuffer.ih"

int BiStreamBuffer::overflow(int c)
{
    d_buffer1->sputc(c);
    d_buffer2->sputc(c);
        
    return c;
}
