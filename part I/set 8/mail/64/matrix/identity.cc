#include "matrix.ih"

Matrix Matrix::identity(size_t dim)
{
    Matrix mat(dim, dim);
    for (size_t idx = 0; idx != dim; ++idx)
        mat.row(idx)[idx]  = 1;  
    return mat;
}
