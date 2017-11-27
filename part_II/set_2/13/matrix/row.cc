#include "matrix.ih"

Matrix::Row::Row(size_t rowindex, Matrix const &mat)
    :
        d_row(mat.d_data + rowindex)
{
}   
