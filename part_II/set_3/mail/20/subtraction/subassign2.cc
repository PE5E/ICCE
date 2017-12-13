#include "subtraction.ih"

Subtraction &&Subtraction::operator-=(Operations const &rhs) &&
{
	static_cast<Binops *>(this)->sub(rhs);

    return move(*this);
}