// nothing here can throw
#include "matrix.ih"

double const &Matrix::Row::at(size_t colindex) const
{
    return d_row[colindex];
}
