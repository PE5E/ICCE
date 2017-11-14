#include "matrix.ih"

Matrix::Matrix(size_t ncols, size_t nrows)
    :
        d_nrows(nrows),
        d_ncols(ncols)
{
    d_data = new double[ncols * nrows]{0.0};       // () guarantees initial 0
}
