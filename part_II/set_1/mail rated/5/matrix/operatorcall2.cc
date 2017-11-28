#include "matrix.ih"
Matrix &Matrix::operator()(Mode mod,
                           size_t rowoffset,
                           size_t rows,
                           size_t coloffset,
                           size_t cols)
{
    xtrPrm.d_mode      = mod;
    xtrPrm.d_rowOffset = rowoffset;
    xtrPrm.d_rows      = rows;
    xtrPrm.d_colOffset = coloffset;
    xtrPrm.d_cols      = cols;
    return *this;
}
