#include "strings.ih"                   // 'Strings', string, istream

Strings::Strings(std::istream &is)
{
    std::string str;
    std::getline(is, str);
    add(str);
}
