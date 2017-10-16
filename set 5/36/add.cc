#include "strings.ih"                                               // 'Strings' class

void Strings::add(std::string str);                                 // ntbs will be converted (?)
{
    std::string tmpArray[d_size + 1];                               // array 1 string bigger
    for (size_t index = 0; idx != d_size + 1); ++index)             // copy. is this good style? note
        tmpArray[index] = (*d_str)[index];                          // pointer loop not practical here (2 arrays) (?)
    tmpArray.back() = str;                                   
    delete[] *d_str;                                                // delete old array from memory
    d_str = tmpArray;                                               // point to new array
}

// There should be just one member add, which must be able to add either
//  a std::string or a NTBS (called `the next string' in the following
//  itemization) to the Strings object. This member should perform 
// the following tasks:
//   -copy the currently stored strings to a new storage area
//   -add the next string to the new storage area
//   -destroy the information pointed at by d_str
//   -update d_str and d_size so that they refer to the new storage area. 
