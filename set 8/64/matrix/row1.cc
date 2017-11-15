#include "matrix.ih"

double *Matrix::row(size_t row) 
{
    return d_data + d_ncols * row;
}
// pointer to first element of 'rowth' row
