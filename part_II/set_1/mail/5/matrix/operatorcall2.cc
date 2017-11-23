#include "matrix.ih"
Matrix &Matrix::operator()(Mode mod,
                           size_t rowoffset,
                           size_t rows,
                           size_t coloffset,
                           size_t cols)
{
    d_mode      = mod;
    d_rowOffset = rowoffset;
    d_rows      = rows;
    d_colOffset = coloffset;
    d_cols      = cols;
    return *this;
}
