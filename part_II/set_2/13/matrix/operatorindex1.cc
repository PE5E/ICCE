#include "matrix.ih"

double const *Matrix::operator[](size_t index) const
{
    return d_data + d_nCols * index;
}
