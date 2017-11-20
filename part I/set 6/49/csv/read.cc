#include "csv.h"

size_t CSV::read(std::istream &in, size_t nLines) // nLines defaults to 0
{
    size_t lines = 0;

    if (nLines == 0)
        while (in.good())                         // read all lines
            {
                    read1(in);
                    ++lines;
            }
    else
         while (lines != nLines && in.good())     // read 'nLines' lines
            {
                    read1(in);
                    ++lines;
            }
    return lines;
}

// By default, all lines of in are read and are processed by the read1 member.
// By specifying a non-zero value for the nLines parameter the specified number of
// lines is read from in. Reading stops once in's status is not good. When nLines 
// is specified as zero, then reading continues until all CSV lines have been processed.
// The number of successfully processed lines is returned. 
