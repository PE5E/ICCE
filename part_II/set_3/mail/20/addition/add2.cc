#include "addition.ih"

Addition operator+(Operations &&lhs, Operations const &rhs)
{
	return move(*static_cast<Addition *>(&lhs)) += rhs;
}