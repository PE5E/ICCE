#include "strings.ih"

Strings::POD Strings::release()
{
    POD ret{d_size};       // initialize the POD for the caller
// was: POD ret{ d_size, d_str };       // initialize the POD for the caller

    d_size = 0;                     // reinitialize our data members
//    d_str = 0;    // bestaat niet meer
//    geen idee wat release doet. wellicht nog verder aanpassen??

    return ret;
}
