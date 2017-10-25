#include "strings.ih"                          // using namespace std; 

Strings::~Strings()
{
    for (size_t idx = 0; idx != d_size; ++idx) // call all destructors of strings
        d_str[idx].~string();           

    operator delete[](d_str);                  // delete allocated memory
}

