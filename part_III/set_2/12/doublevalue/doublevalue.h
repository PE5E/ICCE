#ifndef INCLUDED_DOUBLEVALUE_
#define INCLUDED_DOUBLEVALUE_

#include "../base/base.h"

class DoubleValue: public Base<DoubleValue>
{
    double d_value;

    public:
        DoubleValue(double value);

        friend std::ostream &Base<DoubleValue>::insertInto(std::ostream &out) const;

    private:
        std::ostream &insertInto(std::ostream &out) const;
};

#endif
