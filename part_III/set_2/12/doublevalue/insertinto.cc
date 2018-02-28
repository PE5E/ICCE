#include "doublevalue.ih"

ostream &DoubleValue::insertInto(ostream &out) const
{
    return out << d_value;
}
