#include "ifdstreambuf.ih"

void IFdStreambuf::clean()
{
    if (d_mode == CLOSE_FD)
        ::close(d_fd);            // sys close

    delete[] d_buffer;          // destroy data
    d_buffer = nullptr;
}
