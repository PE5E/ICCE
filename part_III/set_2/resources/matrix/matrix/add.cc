#include "matrix.ih"

    // may throw, but rolls back, since throwing occurs before changes

void Matrix::add(Matrix const &rhs)
{
    if (d_nRows != rhs.d_nRows || d_nCols != rhs.d_nCols)
        throw runtime_error{ "Cannot add matrices of unequal dimensions" };

    for (size_t idx = 0, end = size(); idx != end; ++idx)
        d_data[idx] += rhs.d_data[idx];     // adding doubles doesn't throw
}
