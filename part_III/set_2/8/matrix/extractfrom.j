#include "matrix.ih"

template <class Type>
istream &Matrix<Type>::extractFrom(istream &in)
{
    if (d_request->direction == BY_ROWS)
        extractRows(in);
    else
        extractCols(in);

    d_request->direction = BY_ROWS;

    return in;
}
