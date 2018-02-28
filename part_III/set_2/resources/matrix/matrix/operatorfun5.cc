#include "matrix.ih"

    // nothing throws here, so no safeguards required.

istream &(*Matrix::operator()(int sep)) (istream &)
{
    d_request->inSep = sep;
    d_extract = &Matrix::extractSep;

    return nop;
}
