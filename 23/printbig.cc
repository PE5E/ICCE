#include "header.ih"

void printBig(std::ostream &ou, long long value)
{
    std::string val = std::to_string(value);
    size_t vsize = val.size();
    
    if (vsize >= 3)
    {
        std::string lastDigits = val.substr(vsize - 3, 3);          // save last 3 digits
        val = val.substr(0, vsize - 3);                             // drop last 3 digits
        printBig(ou, std::stoll(val));                              // recursive call
        ou << '\'' << lastDigits; 
    } else
    {
        ou << val << '\n';
    }

}

// description
