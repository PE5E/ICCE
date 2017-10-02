#include "header.ih"

void printBigDirect(std::ostream &ou, long long value)
{
    std::string val = std::to_string(value);
    size_t len = val.length();
    
    std::string sepval;                        
    for (size_t idx = len + 1; idx != 0; --idx)                             // reverse over digits of val
    {
        if ((len - idx) % 3 == 0 && idx < len)                     // seperator every 3 digits
        {
            std::cout << "idx:" << idx << '\n' << "len:" << len << '\n';
            sepval.insert(0, 1,  '\'');
        }
        sepval.insert(0, 1, val[idx - 1]);                                     // digit
    }
    ou << sepval << '\n';
    return;
}

// description
