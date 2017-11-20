#include "strings.ih"

string** Strings::rawPointers(size_t nrPointers)
{
    string **newArray = new string*[nrPointers];    // create new pointer
    for (size_t idx = 0; idx != nrPointers; ++idx)  // initialize array with pointers to initialized strings
        newArray[idx] = new string;

    return newArray;
}
