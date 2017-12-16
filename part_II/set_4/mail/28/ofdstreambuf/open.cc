#include "ofdstreambuf.ih"

void OFdStreambuf::open(int fd, Mode mode)
{
    d_mode = mode;
    clean();
    d_buffer = new char[s_SIZE];
    d_fd = fd;
    setg(d_buffer, d_buffer + s_SIZE, d_buffer + s_SIZE);
}
