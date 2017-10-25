#include "strings.ih"

Strings::Strings(istream &in)
:
    d_size(0),
//    d_arrayStr = static_cast<string **>(operator new[](d_capacity * sizeof(string *)))
    d_arrayStr(new string *[d_capacity]) 

{
    string line;

    while (getline(in, line))
        add(line);
}
