#include "strings.ih"

Strings::Strings(char *environLike[])
:
    d_size(count(environLike)),
    d_capacity(d_size),
    d_arrayStr(rawPointers(d_capacity)) 

{
    fill(environLike);       // fill the newly created array 
}
