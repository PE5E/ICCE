#include "dem.ih"

void Dem::swap(Dem &other)
{
    char buffer[sizeof(Dem)];
    memcpy(buffer, this,   sizeof(Dem));
    memcpy(this,   &other, sizeof(Dem));
    memcpy(&other, buffer, sizeof(Dem));
}
