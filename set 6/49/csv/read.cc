#include "csv.h"

size_t CSV::read(std::istream &in, size_t nLines = 0)
{
    size_t count = 0;
    while (count != nLines + 1 && getline(in, d_lastLine) && is.good()) 
            read1(d_lastLine);
            ++count;
}
