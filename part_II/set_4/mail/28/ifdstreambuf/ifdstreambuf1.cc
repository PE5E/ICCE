#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(Mode mode)
    :
        d_buffer(new char[s_SIZE]),
        d_mode(mode)
{
    setg(d_buffer, d_buffer + s_SIZE, d_buffer + s_SIZE);   // prep buffer
}

