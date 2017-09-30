#include "header.ih"
void decode(std::istream &is, std::ostream &os)
{
    char ch;
    while (is.get(ch)) 
    {
        if (ch == '%')
        {                                               // compiler suggest {
            if (is.get(ch))
            {
                std::string str; 
                str.push_back(ch);                      // why these string methods
                if (is.get(ch))
                    str.append(1, ch);
                os << (char) hexToDec(str);                     
            }
                                                        
        }
        else
            os << ch;                                   // skip  
    }  
}
