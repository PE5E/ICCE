#include "matrix.ih"

Matrix::Row Matrix::at(size_t rowindex)
{
    std::cerr << __FILE__ << '\n';
    return Row(rowindex, *this);
}

