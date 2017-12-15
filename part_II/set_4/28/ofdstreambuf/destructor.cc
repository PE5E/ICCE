#include "ofdstreambuf.ih"

OFdStreambuf::~OFdStreambuf()
{
    d_mode = CLOSE_FD;
    clean();
}

