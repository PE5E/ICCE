#include "strings.ih"           // using namespace std; 

Strings::~Strings()
{
    delete[] d_str;             // 0 pointer allowed
}
