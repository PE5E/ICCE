#include "matrix.ih"

    // nothing throws here, so no safeguards required.

Matrix::Row::Row(double *row, size_t size)
:
    d_row(row),
    d_size(size)
{}
