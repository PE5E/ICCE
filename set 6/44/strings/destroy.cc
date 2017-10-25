#include "strings.ih"

void Strings::destroy()
{
    delete d_arrayStr;  // delete the array of pointers but not what they point to
}
