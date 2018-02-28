#include "matrix.ih"

Matrix Matrix::operator+=(Matrix const &rhs) &&
{
    add(rhs);               // throwing is irrelevant: temporary
    return move(*this);
}
