#include "strings.ih"

Strings::Strings(int argc, char *argv[])
:
    d_size(argc),
    d_capacity(argc),
    d_arrayStr(rawPointers(d_capacity)) 
{
    fill(argv);          // fill the newly created array
}
