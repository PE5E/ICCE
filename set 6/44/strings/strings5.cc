#include "strings.ih"                          // using namespace std; 

Strings::~Strings()
{
    for (size_t idx = 0; idx != d_size; ++idx) // delete all strings by calling 
        delete d_arrayStr[idx];                // their destructor and free their memory

    delete(d_arrayStr);                        // delete pointer to array of pointers
}



