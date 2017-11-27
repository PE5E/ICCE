#include "matrix.ih"

double &Matrix::Row::at(size_t colindex)
{
    return d_row[colindex];
}
