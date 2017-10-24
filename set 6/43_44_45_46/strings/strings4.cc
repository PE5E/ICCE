#include "strings.ih"

Strings::Strings(istream &in)
:
    d_size(0),
    d_arrayStr(new string *[d_capacity]) 
{
    string line;
    size_t loop = 1; // debug
    while (getline(in, line))
    {
        cout << "loop nr: " << loop << '\n';  // debug
        add(line);
        ++loop;
    }
}
