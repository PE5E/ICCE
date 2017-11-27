#include "matrix.ih"

Matrix::Row Matrix::at(size_t rowindex)
{
    return Row(rowindex, *this);
}

