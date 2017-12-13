#include "subtraction.ih"

Operations &&Subtraction::operator-=(Operations const &rhs) &&
{
	static_cast<Binops *>(this)->sub(rhs);

    return move(*static_cast<Operations *>(this));
}


