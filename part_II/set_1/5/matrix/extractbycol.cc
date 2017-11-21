#include "matrix.ih"

void Matrix::extractByCol(istream &in, Matrix &mat)
{
    for (size_t col = 0; col != d_nCols; ++col)
        for (size_t row = 0; row != d_nRows; ++row)
            cin >> mat[row][col];
    return;
}
