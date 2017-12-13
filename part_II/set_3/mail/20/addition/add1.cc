#include "addition.ih"

Addition operator+(Operations const &lhs, Operations const &rhs)
{
	Operations tmp(lhs); //Not sure how to prevent making a copy.
	return tmp += rhs;   //Tried using move operations, didnt work.
}
