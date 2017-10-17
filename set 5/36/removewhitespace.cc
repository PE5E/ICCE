#include "filter.ih"

void Filter::removeWhitespace()
{
    std::string whitespace = " \t\n\f\n\r";
    Rel reldat = d_String.release(); 
    while (std::string::find_first_not_of(reldat.data, whitespace) == std::string::npos) 
}
