#ifndef INCLUDED_BIN_
#define INCLUDED_BIN_

#include <bitset>
#include <string>
#include <limits>

template <size_t x>
struct Bin
{
    static constexpr std::bitset<std::numeric_limits<unsigned long      long>::digits> const value =
    {std::bitset<std::numeric_limits<unsigned long long>::digits>(x)};
};

#endif    // INCLUDED_BIN_

