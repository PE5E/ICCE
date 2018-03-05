#ifndef INCLUDED_BIN_
#define INCLUDED_BIN_

#include <bitset>
#include <cmath>

template <size_t x>
struct Bin
{
    static constexpr std::bitset<static_cast<int>(log(x) / log(2)) + 1> 
    const value = 
    {std::bitset<static_cast<int>(log(x) / log(2)) + 1>(x)};
};

#endif    // INCLUDED_BIN_

