// Matrix constructor can throw
#include "matrix.ih"

// static
Matrix Matrix::identity(size_t dim)
try
{
    Matrix ret(dim, dim);
    // JB: What if not square?
    for (size_t idx = 0; idx != dim; ++idx)
        ret.el(idx, idx) = 1;

    return ret;
}
catch (...)
{
    throw;
}
