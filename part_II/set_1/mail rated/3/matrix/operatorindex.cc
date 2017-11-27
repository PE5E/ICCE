#include "matrix.ih"

double *Matrix::operator[](size_t index)
{
    return indexValue(index);
}
