#include "subtraction.ih"

Subtraction operator-(Operations const &lhs, Operations const &rhs)
{
	Operations tmp(lhs); //Not sure how to prevent making a copy.
	return tmp -= rhs;   
}
