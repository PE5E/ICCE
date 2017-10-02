#include "header.ih"

void printBig(std::ostream &ou, long long value)
{
    std::string val = std::to_string(value);
    size_t vsize = val.size();
    
    if (vsize > 3)
    {
        printBig(ou, std::stoll(val.substr(0, vsize - 3)));  // recursive all but last 3
        ou << '\'' << val.substr(vsize - 3, 3);              // last 3 
    } else
    {
        ou << val;
    }
    
}

// description
