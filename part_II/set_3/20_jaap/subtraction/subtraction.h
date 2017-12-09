#ifndef INCLUDED_SUBTRACTION_
#define INCLUDED_SUBTRACTION_

class Operations;
class Binops;

class Subtraction
{
    public:
        Subtraction();
        Subtraction &operator-=(Operations const &rhs) &;  // subassign1.cc
        Subtraction &&operator-=(Operations const &rhs) &&;// subassign2.cc
    
    friend Subtraction operator-(Operations const &lhs, Operations const &rhs); // sub1.cc
    friend Subtraction operator-(Operations &&lhs, Operations const &rhs);      // sub2.cc
};

#endif
