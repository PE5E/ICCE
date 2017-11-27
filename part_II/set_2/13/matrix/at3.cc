#include "matrix.ih"

Matrix::Row const Matrix::at(size_t rowindex) const
{
    std::cerr << __FILE__ << '\n';
    return Row(rowindex, *this);
}
