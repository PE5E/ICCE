#ifndef INCLUDED_SUBTRACTION_
#define INCLUDED_SUBTRACTION_


class Subtraction
{
    public:
        Subtraction();
        Subtraction &operator-=(Subtraction const &other);

    private:

};

Subtraction operator-(Subtraction const &lhs, Subtraction const &rhs);
Subtraction operator-(Subtraction &&lhs, Subtraction const &rhs); 

#endif
