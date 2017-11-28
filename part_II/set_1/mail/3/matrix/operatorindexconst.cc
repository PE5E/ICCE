#include "matrix.ih"

double const *Matrix::operator[] const(size_t index)
{
    return const d_data + d_nCols * index;
}
