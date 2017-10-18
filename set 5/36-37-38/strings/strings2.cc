#include "strings.ih"                   // 'Strings', string, istream

Strings::Strings(std::istream &is)
{
    std::string str;
    while (std::getline(is, str) && !is.eof())
        add(str);
}
