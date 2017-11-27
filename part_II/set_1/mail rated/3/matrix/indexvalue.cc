#include "matrix.ih"

double *Matrix::indexValue(size_t index) const
{
    return d_data + d_nCols * index;
}
