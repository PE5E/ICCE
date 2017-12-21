#include "bistream/bistream.hh"
#include <iostream>

int main()
{
    BiStream strm(std::cout, std::cerr);

    strm << "HOI\n";
}
