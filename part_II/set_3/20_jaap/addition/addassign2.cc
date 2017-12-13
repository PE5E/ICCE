#include "addition.ih"

Operations &&Addition::operator+=(Operations const &rhs) &&
{
	static_cast<Binops *>(this)->add(rhs);

    return move(*static_cast<Operations *>(this));
}

