#include "filter.ih"            // 'Filter' class
#include <iostream>             // std::cout

void Filter::display() const
{   
    std::string whitespace = " \t\f\v\n\r";
    std::string *begin = d_String.data();
    std::string *end = d_String.data() + d_String.size();

    for (std::string *current = begin; current != end; ++current)       // String.data() points to a contiguous array
    {
       std::cout << *current << '\n';
    }  
}
