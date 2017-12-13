#include "ifdstreambuf.ih"

IFdStreambuf::~IFdStreambuf()
{
    d_mode = CLOSE_FD;
    clean();
}

