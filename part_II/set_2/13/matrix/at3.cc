#include "matrix.ih"

Matrix::Row const Matrix::at(size_t rowindex) const
{
    return Row(rowindex, *this);
}
