#ifndef INCLUDED_IFDSTREAM_
#define INCLUDED_IFDSTREAM_

#include <istream>
#include "../ifdstreambuf/ifdstreambuf.hh"

class IFdStream: private IFdStreambuf, public std::istream
{
	public:
		explicit IFdStream(int fd);
};


inline IFdStream::IFdStream(int fd)
:
	IFdStreambuf(fd),
	std::istream(this)
{}


#endif