#include "addition.ih"

Operations operator+(Operations const &lhs, Operations const &rhs)
{
    Operations tmp(lhs);
    return move(tmp) += rhs; // move is used to prevent making a copy
}
