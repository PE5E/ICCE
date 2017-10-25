#include "strings.ih"

Strings::POD Strings::release()
{
    POD ret{d_size, d_arrayStr};       // initialize the POD for the caller

    d_size = 0;
    d_capacity = 1;                   
    d_arrayStr = nullptr;   

    return ret;
}
