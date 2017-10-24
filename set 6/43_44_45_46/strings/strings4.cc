#include "strings.ih"

Strings::Strings(istream &in)
:
    d_size(0),
    d_arrayStr(operator new string *[d_capacity])
{
    string line;
    while (getline(in, line))
        add(line);
}
