#include "matrix.ih"

Matrix &Matrix::operator()(size_t nrows, size_t ncols, Mode mod)
{
    xtrPrm.d_mode  = mod;
    d_nCols = ncols;
    d_nRows = nrows;
    xtrPrm.d_cols  = ncols;
    xtrPrm.d_rows  = nrows;
    return *this;
}
    
