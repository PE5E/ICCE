#include "matrix.ih"

double const &Matrix::Row::at(size_t colindex) const
{
//    std::cerr << __FILE__ << '\n';
    return d_row[colindex];
}
