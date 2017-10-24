#include "strings.ih"

void Strings::add(string const &next)
/*  original code
{
    string *tmp = enlarge();            // make room for the next string,
                                        // tmp is the new string *

    tmp[d_size] = next;                 // store next

    destroy();                          // return old memory

    d_str = tmp;                        // update d_str and d_size
    ++d_size;
}
*/


{ 
    string *strPointer = new string next; // store new string address in pointer

    if (d_size >= d_capacity)
    {
        d_capacity <<= 1;       // multiply d_capacity by 2
        reserve();              // reserve memory for strings
    }

    d_arrayString[d_size] = strPointer;   // store new pointer in array
    
} 
