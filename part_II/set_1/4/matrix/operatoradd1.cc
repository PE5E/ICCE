#include "matrix.h"

Matrix operator+(Matrix const &lhs, Matrix const &rhs)
{	
	Matrix tmp(lhs);
	return tmp += rhs;
}