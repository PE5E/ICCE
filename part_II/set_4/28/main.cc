#include "ifdstream/ifdstream.hh"
#include "ofdstream/ofdstream.hh"
#include <unistd.h>
#include <iostream>
#include <istream>
#include <ostream>

int main()
{
	IFdStream in(STDIN_FILENO);
	OFdStream out(STDOUT_FILENO);
}