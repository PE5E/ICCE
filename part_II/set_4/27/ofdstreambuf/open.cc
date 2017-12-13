#include "ofdstreambuf.ih"

void OFdStreambuf::open(int fd, Mode mode)
{
    d_mode = mode;
    clean();
    d_fd = fd;
}
