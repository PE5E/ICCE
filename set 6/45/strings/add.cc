#include "strings.ih"

void Strings::add(string const &next)

{ 
    string *strPointer = new string(next); // store new string address in pointer

    if (d_size >= d_capacity)
    {
        d_capacity <<= 1;       // multiply d_capacity by 2

        reserve();              // reserve memory for strings
    }

    d_arrayStr[d_size] = strPointer;   // store new pointer in array
    ++d_size;
}
   

