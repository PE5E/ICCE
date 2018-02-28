#include "matrix.ih"

    // nothing throws here, so no safeguards required.

Matrix &Matrix::operator=(Matrix &&tmp)
{
    swap(tmp);
    return *this;
}
