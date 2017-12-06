#ifndef INCLUDED_SUBTRACTION_
#define INCLUDED_SUBTRACTION_

class Operations;
class Binops;

class Subtraction
{
    public:
        Subtraction();
        Subtraction &operator-=(Operations const &other);
    private:
};

Subtraction operator-(Subtraction &lhs, Subtraction &rhs);

#endif
