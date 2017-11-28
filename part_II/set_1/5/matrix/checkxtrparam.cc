#include "matrix.ih"

void Matrix::checkXtrPrm()
{
    if (xtrPrm.d_rowOffset + xtrPrm.d_rows > d_nRows)         
        xtrPrm.d_rows = d_nRows - xtrPrm.d_rowOffset;

    if (xtrPrm.d_colOffset + xtrPrm.d_cols > d_nCols)
        xtrPrm.d_cols = d_nCols - xtrPrm.d_colOffset;
}
