#include "strings.ih"

std::string &Strings::priv_at(size_t index) 
{
     return index > d_size ? d_emptystring : d_str[index];                
}
   
