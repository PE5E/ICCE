#ifndef INCLUDED_ADDITION_
#define INCLUDED_ADDITION_

// #include "../operations/operations.h" werkt niet!!!

class Addition
{
    public:
        Addition();

        Addition &operator+=(Addition const &other);

    private:
//        friend Operations;


};

Addition operator+(Addition const &lhs, Addition const &rhs);
Addition operator+(Addition &&lhs, Addition const &rhs); 
        
#endif
