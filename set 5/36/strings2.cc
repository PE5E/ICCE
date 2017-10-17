#include "strings.ih"                   // 'Strings', string, istream

Strings::Strings(std::istream &is)
{
    std::string str;
    while (std::getline(is, str))
        if (!is.eof())
            add(str);
}
