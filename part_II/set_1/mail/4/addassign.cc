#include "matrix.h"

Matrix &Matrix::operator+=(Matrix const &other)
{
	Matrix tmp(*this);

	if (tmp.d_nRows != other.d_nRows ||
		tmp.d_nCols != other.d_nCols)
	{	
		std::cerr << "Matrix dimensions not equal" << '\n';
		return *this;
	}

	for (size_t idx = 0, end = tmp.d_nCols * tmp.d_nRows;
		idx != end; ++idx)
		*(tmp.d_data + idx) += *(other.d_data + idx);

	swap(tmp);
	return *this;
}