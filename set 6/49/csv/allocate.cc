#include "csv.ih"

void CSV::allocate()
{
    bigPtr = new std::string **[d_size];                              // line array
    for(string **line = bigPtr[0]; line != bigPtr[d_size - 1]; ++line) // strings in lines
        line = new std::string *[d_nFields];
}
// allocate me some memory
