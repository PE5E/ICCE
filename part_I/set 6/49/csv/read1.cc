#include "csv.h"

bool CSV::read1(std::istream &in)
{
    CSVextractor csvFile(in);              // CSVextractor takes 1 line from stream 'in'

    if (d_nFields == 0)                    // field count
        d_nFields = csvFile.nFields();

    if (d_size - d_nLines  == 0)           // increase capacity
        doubleSize();

    return csvFile.parse(bigPtr);        
}

// One line is read from in and is parsed for its CSVs. If parsing fails, false is returned.
// After successfully calling read1 for the first time all subsequent lines read by read1 must
// have the same number of comma separated values as encountered when calling read1 for the first time.. 
