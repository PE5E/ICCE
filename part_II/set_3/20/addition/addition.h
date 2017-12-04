#ifndef INCLUDED_ADDITION_
#define INCLUDED_ADDITION_

class Binops;

class Addition
{
    public:
        Addition();

        Addition &operator+=(Operations const &other);

    private:
        void Binops::Operations::add(Operations const &rhs);
        void Binops::Operations::sub(Operations const &rhs);
};


Addition operator+(Addition const &lhs, Addition const &rhs);
Addition operator+(Addition &&lhs, Addition const &rhs); 
        
#endif
