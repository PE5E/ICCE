#include "strings.ih"

void Strings::swap(Strings &other)
{
    char buffer[sizeof(Strings)];
    memcpy(buffer, &other, sizeof(Strings));
    memcpy(&other, this, sizeof(Strings));
    memcpy(this, buffer, sizeof(Strings));
}
