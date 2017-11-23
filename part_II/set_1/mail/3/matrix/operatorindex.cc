#include "matrix.ih"

double *Matrix::operator[](size_t index)
{
    return d_data + d_nCols * index;
}
