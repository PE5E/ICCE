#include "matrix.ih"

Matrix::Matrix(Matrix const &other)
:
    d_nRows(other.d_nRows),
    d_nCols(other.d_nCols),
    d_data(new double[size()])
{
    memcpy(d_data, other.d_data, size() * sizeof(double));
}
