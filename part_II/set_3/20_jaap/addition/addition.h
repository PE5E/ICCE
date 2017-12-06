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


Addition operator+(Addition const &lhs, Addition const &rhs);
Addition operator+(Addition &&lhs, Addition const &rhs); 
        
#endif
