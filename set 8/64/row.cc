#include "matrix.ih"

double const *row(size_t row)
{
    return d_data + d_ncols * (row - 1);
}
// pointer to first element of 'rowth' row
