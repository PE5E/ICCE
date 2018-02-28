#include "matrix.ih"

    // nothing throws here, so no safeguards required.

ostream &
  (*Matrix::operator()(char const *valueSep, char const *lineSep)) (ostream &)
{
    d_request->valueSep = valueSep;
    d_request->lineSep = lineSep;

    return nop;
}
