#ifndef INCLUDED_ADDITION_
#define INCLUDED_ADDITION_

class Operations;
class Binops;

class Addition
{
    public:
        Addition();
        Addition &operator+=(Operations const &rhs) &;  // addassign1.cc
        Addition &&operator+=(Operations const &rhs) &&;// addassign2.cc

    friend Addition operator+(Operations const &lhs, Operations const &rhs); // add1.cc
    friend Addition operator+(Operations &&lhs, Operations const &rhs);      // add2.cc
};
        
#endif
