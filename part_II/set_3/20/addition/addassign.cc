#include "addition.ih"

Addition &Addition::operator+=(Addition const &other)
{
    return *this; // klopt niet
}
