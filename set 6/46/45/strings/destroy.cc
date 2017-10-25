#include "strings.ih"

void Strings::destroy()
{
    operator delete[](d_str);   // frees the allocated memory but doesn't
                                // delete the strings
}
