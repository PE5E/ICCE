#include "maxfour.ih"

MaxFour::~MaxFour()
{
    std::cerr << "\tDestroying object " << count << '\n';
    --count;
}
