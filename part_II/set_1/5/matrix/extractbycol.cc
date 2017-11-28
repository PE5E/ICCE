#include "matrix.ih"

void Matrix::extractByCol(istream &in, Matrix &mat)
{
    if (offsetOutBounds())          
        return;

    checkXtrPrm();

    for (size_t col = xtrPrm.d_colOffset;
        col != xtrPrm.d_colOffset + xtrPrm.d_cols;
        ++col)
        for (size_t row = xtrPrm.d_rowOffset;
            row != xtrPrm.d_rowOffset + xtrPrm.d_rows;
            ++row)
            in >> mat[row][col];
    return;
}
