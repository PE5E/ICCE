#ifndef INCLUDED_BIN_
#define INCLUDED_BIN_

template <size_t x>
struct Bin
{
    //recursive call to calculate binary number
    //first part calculates higher digits
    //last part calculates last digit through bitshifts
    enum {value = (Bin<(x >> 1)>::value * 10) + (x - (x >> 1 << 1))};
};

template <>
struct Bin<0>
{
    enum {value = 0};
};

#endif    // INCLUDED_BIN_