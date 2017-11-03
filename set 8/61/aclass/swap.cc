#include "aclass.ih"

void aclass::swap(aclass &other)
{
    char buffer[sizeof(aclass)];
    memcpy(buffer, this,   sizeof(aclass));
    memcpy(this,   &other, sizeof(aclass));
    memcpy(&other, buffer, sizeof(aclass));
}
