#include "matrix.ih"

    // nothing throws here, so no safeguards required.

Matrix &Matrix::operator()(Extraction direction, size_t from, size_t count)
{
    if (direction == BY_ROWS)
        d_request->set(d_nRows, d_nCols, from, count, 0, d_nCols, direction);
    else
        d_request->set(d_nRows, d_nCols, 0, d_nRows, from, count, direction);
    
    return *this;
}
