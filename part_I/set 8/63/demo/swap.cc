#include "demo.ih"

void demo::swap(demo &other)
{
    cout << '\t' << __FILE__ << ": called swap" << '\n';
    char buffer[sizeof(demo)];
    memcpy(buffer, this,   sizeof(demo));
    memcpy(this,   &other, sizeof(demo));
    memcpy(&other, buffer, sizeof(demo));
}
