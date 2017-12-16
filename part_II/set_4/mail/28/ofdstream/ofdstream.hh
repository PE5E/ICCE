#ifndef INCLUDED_OFDSTREAM_
#define INCLUDED_OFDSTREAM_

#include <ostream>
#include "../ofdstreambuf/ofdstreambuf.hh"

class OFdStream: private OFdStreambuf, public std::ostream
{
	public:
		explicit OFdStream(int fd);
};


inline OFdStream::OFdStream(int fd)
:
	OFdStreambuf(fd),
	std::ostream(this)
{}


#endif