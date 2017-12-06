#include "matrix.ih"

Matrix::Matrix(size_t nRows, size_t nCols)
:
    d_nRows(nRows),
    d_nCols(nCols),
    d_data(new double[size()]())
{
}
// new is smart, we don't have to do anything
