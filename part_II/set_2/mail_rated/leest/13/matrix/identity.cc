// Matrix constructor can throw
#include "matrix.ih"

// static
Matrix Matrix::identity(size_t dim)
{
    Matrix ret(dim, dim);
    // JB: What if not square?
    // Timon: We just made it square... 
    for (size_t idx = 0; idx != dim; ++idx)
        ret.el(idx, idx) = 1;

    return ret;
}
