#include "matrix.ih"

Matrix Matrix::transpose() const
{
    Matrix ret;                             // optimized implementation

    ret.d_nCols = d_nRows;                  // prepare the return Matrix
    ret.d_nRows = d_nCols;
    ret.d_data = new double[size()];

    transpose(ret.d_data);

    return ret;
}

