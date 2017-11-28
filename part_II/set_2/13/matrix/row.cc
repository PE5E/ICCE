#include "matrix.ih"

Matrix::Row::Row(size_t rowindex, Matrix const &mat)
try
    :
        d_row(mat.d_data + rowindex * mat.d_nCols),
        d_colcount(mat.d_nCols)
{
}
catch (...)
{
    throw;
}

