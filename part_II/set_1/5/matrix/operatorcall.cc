#include "matrix.ih"

Matrix &Matrix::operator()(size_t nrows, size_t ncols, Mode mod)
{
    d_nCols = ncols;
    d_nRows = nrows;
    d_mode = mod;
    return *this;
}
    
