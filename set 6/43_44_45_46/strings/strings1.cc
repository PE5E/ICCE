#include "strings.ih"

Strings::Strings()
:
    d_size(0),
    d_arrayStr(new string *[d_capacity])  
{}
