#include "subtraction.ih"

Subtraction operator-(Operations &&lhs, Operations const &rhs)
{
	return move(*static_cast<Subtraction *>(&lhs)) -= rhs;
}