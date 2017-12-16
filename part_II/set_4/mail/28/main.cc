#include "ifdstream/ifdstream.hh"
#include "ofdstream/ofdstream.hh"
#include <unistd.h>
#include <iostream>
#include <istream>
#include <ostream>
#include <string>

int main()
{
	IFdStream in(STDIN_FILENO); //we are not sure when/how to enter with
    std::string tmp;            //the keyboard using file descriptors.
    in  >> tmp;
    std::cerr << tmp;
	OFdStream out(STDOUT_FILENO);
    std::string tmp2 = "testetests";
    out << tmp2;
}
