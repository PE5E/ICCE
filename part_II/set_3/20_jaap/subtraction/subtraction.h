#ifndef INCLUDED_SUBTRACTION_
#define INCLUDED_SUBTRACTION_

class Operations;
class Binops;

class Subtraction
{
    public:
        Subtraction();
        Operations &operator-=(Operations const &rhs) &;  // subassign1.cc
        Operations &&operator-=(Operations const &rhs) &&;// subassign2.cc
    
    friend Operations operator-(Operations const &lhs, Operations const &rhs);
    friend Operations operator-(Operations &&lhs, Operations const &rhs);  
};

#endif
