#include "intvalue.ih"

ostream &IntValue::insertInto(ostream &out) const
{
    return out << d_value;
}
