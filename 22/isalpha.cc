#include "header.ih"
// test if ch is alphanumerical 
bool isAlpha(char ch)
{
    if (ch >= '0' && ch <= '9')
        return true;
    if (ch >= 'A' && ch <= 'Z')
        return true;
    if (ch >= 'a' && ch <= 'z')
        return true;
    return false;
}
