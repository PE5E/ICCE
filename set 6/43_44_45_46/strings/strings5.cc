#include "strings.ih"                          // using namespace std; 

Strings::~Strings()
{
    for (size_t idx = 0; idx != d_size; ++idx) // delete all pointers and strings they point to
        delete d_arrayStr[idx];

    delete[] d_arrayStr;                       // delete pointer to array of pointers
}
