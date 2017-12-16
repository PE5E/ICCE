#include "bistream.ih"

BiStream::BiStream(std::ostream &one, std::ostream &two)
:
    d_buffer(one.rdbuf(), two.rdbuf())         // construct
{
    std::ostream::rdbuf(&d_buffer);            // associate 
}
