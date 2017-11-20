#include "csv.ih"

void CSV::allocate()
{
    bigPtr = new std::string **[1];                              // line array
}
// allocate me some memory
