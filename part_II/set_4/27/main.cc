#include "ofdstreambuf/ofdstreambuf.hh"
#include <iostream>
#include <istream>
#include <unistd.h>

using namespace std;

int main()
{
	OFdStreambuf fds(STDOUT_FILENO);
	ostream      os(&fds);
}

// as seen in the C++ annotations, Ch. 24