#include "matrix.ih"

void Matrix::extractByCol(istream &in, Matrix &mat)
{
    if (d_rowOffset > d_nRows || d_colOffset > d_nCols)      // row bounds       
        return;

    if (d_rowOffset + d_rows > d_nRows)         
        d_rows = d_nRows - d_rowOffset;
    if (d_colOffset + d_cols > d_nCols)
        d_cols = d_nCols - d_colOffset;

    for (size_t col = d_colOffset; col != d_colOffset + d_cols; ++col)
        for (size_t row = d_rowOffset; row != d_rowOffset + d_rows; ++row)
            cin >> mat[row][col];
    return;
}
