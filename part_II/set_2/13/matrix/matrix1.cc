#include "matrix.ih"

Matrix::Matrix(size_t nRows, size_t nCols)
try
:
    d_nRows(nRows),
    d_nCols(nCols),
    d_data(new double[size()]())
{}
catch (...)
{
    // new is a smart guy, so do nothing 
    throw;
}
