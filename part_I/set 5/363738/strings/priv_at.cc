#include "strings.ih"

std::string &Strings::priv_at(size_t index) const
{
    std::string &ref = (index > d_size) ? d_emptystring : d_str[index];                
    return ref; 
}
   
