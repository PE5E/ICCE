#include "matrix.ih"

bool Matrix::operator!=(Matrix const &other) const
{
    return !(*this == other);
}