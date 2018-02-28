#include "matrix.ih"

    // nothing throws here, so no safeguards required.

ostream &Matrix::insertInto(ostream &out) const
{
    for (size_t row = 0; row != d_nRows; ++row)
    {
        double const *rowPtr = (*this)[row];

        for (size_t col = 0; col != d_nCols; ++col)
            out << 
                rowPtr[col] << d_request->valueSep;

        out << d_request->lineSep;
    }

    d_request->valueSep = " ";
    d_request->lineSep = "\n";

    return out;
}
