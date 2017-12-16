#include "ofdstreambuf.ih"

OFdStreambuf::~OFdStreambuf()
{
    std::cerr << "called " << __FILE__ << '\n';
    d_mode = CLOSE_FD;
    clean();
}

