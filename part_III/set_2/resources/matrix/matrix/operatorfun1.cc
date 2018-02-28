#include "matrix.ih"

    // nothing throws here, so no safeguards required.

Matrix &Matrix::operator()(size_t nRows, size_t nCols, Extraction direction)
{
    d_request->set(nRows, nCols, 0, nRows, 0, nCols, direction);

    return *this;
}
