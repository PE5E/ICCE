#include "csv.h"

size_t CSV::read(std::istream &in, size_t nLines = 0)
{
    size_t count = 0;
    while (count != nLines + 1 && getline(in, d_lastLine) && is.good()) 
            read1(d_lastLine);
            ++count;
}

// By default, all lines of in are read and are processed by the read1 member.
// By specifying a non-zero value for the nLines parameter the specified number of
// lines is read from in. Reading stops once in's status is not good. When nLines 
// is specified as zero, then reading continues until all CSV lines have been processed.
// The number of successfully processed lines is returned. 
