#include "matrix.ih"

    // nothing throws here, so no safeguards required.

void Matrix::extractPlain(istream &in, double *dest)
{
    in >> *dest;
}
