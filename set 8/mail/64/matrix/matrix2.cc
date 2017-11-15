#include "matrix.ih"

Matrix::Matrix(Matrix const &other)
    :
        d_nrows(other.nRows()),
        d_ncols(other.nCols())
{
    d_data = new double[d_nrows * d_ncols];         // aloc
    for (size_t rowidx = 0; rowidx != d_nrows; ++rowidx)
        for (size_t colidx = 0; colidx != d_ncols; ++colidx)
            d_data[rowidx * d_ncols + colidx] = other.row(rowidx)[colidx];
}
