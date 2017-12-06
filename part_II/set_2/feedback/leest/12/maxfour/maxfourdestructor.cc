#include "maxfour.ih"

MaxFour::~MaxFour()
{
    std::cerr << "\tDestroying object " << s_count << '\n';
    --s_count;
}
