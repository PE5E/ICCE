#include "strings.ih"

Strings &Strings::operator=(Strings const &rhs)
{
    Strings tmp{ rhs };
    swap(tmp);
    return *this;
}