#include "matrix.ih"

double const *Matrix::operator[](size_t index) const
{
    return indexValue(index);
}
