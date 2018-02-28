#ifndef INCLUDED_INTVALUE_
#define INCLUDED_INTVALUE_

#include "../base/base.h"

class IntValue: public Base<IntValue>
{
    int d_value;

    public:
        IntValue(int value);

        friend std::ostream &Base<IntValue>::insertInto(std::ostream &out) const;

    private:
        std::ostream &insertInto(std::ostream &out) const;
};

#endif
