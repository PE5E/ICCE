#include "matrix.ih"

    // nothing throws here, so no safeguards required.

istream &Matrix::extractFrom(istream &in)
{
    if (d_request->direction == BY_ROWS)
        extractRows(in);
    else
        extractCols(in);

    d_request->direction = BY_ROWS;

    return in;
}
