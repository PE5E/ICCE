#include "strings.ih"                          // using namespace std; 

Strings::~Strings()
{
    for (size_t idx = 0; idx != d_size; ++idx) // delete all strings by calling 
        d_arrayStr[idx]->~string;              // their destructor 

    operator delete(d_arrayStr);               // delete pointer to array of pointers
}


/*
from annotations page 191:
void Strings::destroy()
{
for (std::string *sp = d_memory + d_size; sp-- != d_memory; )
sp->~string();
operator delete(d_memory);
}
*/
