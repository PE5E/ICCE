#include "strings.ih"


void Strings::reserve()
{
    string **newArray;
    newArray = new string *[d_capacity];                    // allocate array of pointers

    for (size_t idx = d_size; idx != d_capacity; ++idx)     // allocate new pointers
        newArray[idx] = new string;

    for (size_t idx = 0; idx != d_size - d_capacity; ++idx) // copy old pointers
        newArray[idx] = d_arrayStr[idx];

    destroy();                                              // delete old array of pointers, not the string data

    d_arrayStr = newArray;
}

