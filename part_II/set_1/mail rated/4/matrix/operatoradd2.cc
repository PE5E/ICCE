#include "matrix.h"

Matrix operator+(Matrix &lhs, Matrix const &rhs)
{
	return lhs += rhs;
}