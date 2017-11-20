#include "strings.ih"

Strings &Strings::operator=(Strings const &other)
{
    Strings tmp(other);
    return *this = std::move(tmp);
}
