#include "matrix.h"

Matrix operator+(Matrix const &lhs, Matrix const &rhs)
{
	if (lhs.d_nRows != rhs.d_nRows ||
		lhs.d_nCols != rhs.d_nCols)
	{	
		std::cerr << "Matrix dimensions not equal" << '\n';
		return lhs;
	}
	Matrix tmp(lhs);
	for (size_t idx = 0, end = tmp.d_nCols * tmp.d_nRows;
		idx != end; ++idx)
		*(tmp.d_data + idx) += *(rhs.d_data + idx);
	return tmp;
}