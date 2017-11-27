#include "matrix.ih"

double &Matrix::Row::at(size_t colindex)
{
    std::cerr << __FILE__ << '\n';
    return d_row[colindex];
}
