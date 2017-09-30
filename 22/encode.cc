#include "header.ih"

// url-encode stream
void encode(std::istream &is, std::ostream &os)
{
    char ch;
    while (is.get(ch))
        if (isAlpha(ch) or isOther(ch))                 // skip 
            os << ch;
        else            
            os << '%' << decToHex((size_t) ch);         // encode
                                                
}
