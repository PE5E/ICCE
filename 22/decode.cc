#include "header.ih"
// decode url-encoded stream

void decode(std::istream &is, std::ostream &os)
{
    char ch;
    while (is.get(ch))                         
    {
        if (ch == '%')
        {
            if (is.get(ch))                   // not sure abt double if
            {
                std::string str; 
                str.push_back(ch);            // why these str methods
                if (is.get(ch))
                    str.append(1, ch);
                os << (char) hexToDec(str);                     
            }
        }
        else
        os << ch;                             // skip  
    } 
    return;
}
