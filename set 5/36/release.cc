#include "strings.ih"                   // 'Strings' class, <string>, <istream>
                                        // 'Rel' struct (via 'Strings')
Rel Strings::release()             
{
    Rel out;                      
    out.data = d_str;
    out.size = d_size;

    d_str = 0;                          // clear instance 
    d_size = 0;

    return out;                       
}

// release data to user, clear class instance
