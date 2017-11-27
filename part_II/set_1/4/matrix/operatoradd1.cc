#include "matrix.h"

Matrix operator+(Matrix const &lhs, Matrix const &rhs)
{
	Matrix tmp(lhs); // A copy is made so lhs can be const
	return tmp += rhs;
}