#ifndef INCLUDED_DOUBLEVALUE_
#define INCLUDED_DOUBLEVALUE_

#include "../base/base.h"

class DoubleValue: public Base<DoubleValue>
{
    double d_value;

    public:
        DoubleValue(double value);

        // friend std::ostream &operator<< <>(std::ostream &out,
        //                                Base<DoubleValue> const &base);

    private:
        std::ostream &insertInto(std::ostream &out) const;
};

// template std::ostream &operator<< <DoubleValue>(std::ostream &out,
//                                            Base<DoubleValue> const &base);

#endif
