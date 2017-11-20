#include "matrix.ih"

Matrix Matrix::transpose() const
{
    Matrix trans = *this;
    return trans.tr();
}

