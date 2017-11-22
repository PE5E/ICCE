#include "matrix.ih"

bool Matrix::operator==(const Matrix& other)
{
    if (this->d_nRows != other.d_nRows ||
        this->d_nCols != other.d_nCols)
        return false;

    for (size_t idx =0; idx != d_nRows * d_nCols; ++idx)
        if (this->d_data[idx] != other.d_data[idx])   // check each element
            return false;

    return true;
}

// Matrix: size_t d_nRows, size_t d_nCols, double *d_data

