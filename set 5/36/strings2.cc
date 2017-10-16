#include "strings.ih"                   // 'Strings', string, istream

Strings::Strings(std::istream &is)
{
   std::string str;
   if (std::getline(is, str))
   {
//        cout << "Calling add from istream constructor" << '\n';
//        cout << str << '\n';
        add(str);
    }
}
