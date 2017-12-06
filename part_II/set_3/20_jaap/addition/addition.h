#ifndef INCLUDED_ADDITION_
#define INCLUDED_ADDITION_

class Operations;
class Binops;

class Addition
{
    public:
        Addition();
        Addition &operator+=(Operations const &rhs);
    private:
};


Addition operator+(Addition &lhs, Addition &rhs);
        
#endif
