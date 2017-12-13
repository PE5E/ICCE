#include "subtraction.ih"

Operations operator-(Operations &&lhs, Operations const &rhs)
{
	return move(lhs) -= rhs;
}

