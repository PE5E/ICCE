#include "bistreambuffer.ih"

BiStreamBuffer::BiStreamBuffer(std::ostream &one, std::ostream &two)
    :
        d_os1(one),
        d_os2(two)
{
    // thats all folks
}
