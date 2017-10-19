#include "strings.ih"                                    // 'Strings' class

void Strings::add(std::string str)                       // ntbs will be converted
{
    std::string *tmp = new std::string[++d_size];        // array 1 string bigger
    for (size_t index = 0; index != d_size - 1; ++index) // copy
        *(tmp + index) = *(d_str + index);
    tmp[d_size - 1] = str;                               // add new string
    delete[] d_str;                                      // delete old array
    d_str = tmp;                                         // point to new array
}

// -copy the currently stored strings to a new storage area
// -add the next string to the new storage area
// -destroy the information pointed at by d_str
// -update d_str and d_size so that they refer to the new storage area.
