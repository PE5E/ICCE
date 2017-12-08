#include "addition.ih"

Addition operator+(Operations const &lhs, Operations const &rhs)
{
	Operations tmp(lhs); //Not sure how to prevent making a copy.
	return tmp += rhs;   //Tried move(lhs) += rhs, didn't work (obviously)
}

// Addition operator+(Addition &lhs, Addition &rhs)
// {
//     return *static_cast<Binops*>(&lhs) + *static_cast<Binops*>(&rhs);
// }
