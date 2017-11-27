#include "matrix.h"

Matrix &Matrix::operator+=(Matrix const &other)
{
	if (this->d_nRows != other.d_nRows ||
        this->d_nCols != other.d_nCols)
    {
    	std::cerr << "Matrix dimensions not equal" << '\n';
		return *this;
    }

	for (size_t idx = 0, end = this->size();
		idx != end; ++idx)
		this->d_data[idx] += other.d_data[idx];

	return *this;
}