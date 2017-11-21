#include "matrix.ih"

void Matrix::extractByRow(std::istream &is, Matrix &mat)
{
    for (size_t row = 0; row != d_nRows; ++row)
        for (size_t col = 0; col != d_nCols; ++col)
            cin >> mat[row][col];
    return;
}
