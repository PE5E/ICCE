#include "ifdstreambuf.ih"

void IFdStreambuf::open(int fd, Mode mode)
{
    d_mode = mode;
    clean();
    d_fd = fd;
}
