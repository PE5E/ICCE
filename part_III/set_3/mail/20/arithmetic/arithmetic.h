#ifndef INCLUDED_ARITHMETIC_
#define INCLUDED_ARITHMETIC_


template <typename CountType>
class Arithmetic: public BinopsBase<Adder, '+'>
{
    static_assert(is_same<CountType, int>::value ||
                  is_same<CountType, double>::value,
                  "Arithmetic must be of type int or double");

    friend class BinopsBase<Arithmetic, '+'>;

    CountType d_value;

    public:
        Arithmetic &operator=(CountType rhs);
        CountType const value() const;

    private:
        void add(Arithmetic const &rhs);
};

#include "add.ff"
#include "assignmentoperator.ff"
#include "value.ff"

#endif
