#include "matrix.ih"

    // nothing throws here, so no safeguards required.

void Matrix::extractSep(istream &in, double *dest)
{
    in >> *dest >> d_request->inSep;
}

