#include "matrix.ih"

Matrix &Matrix::operator()(Mode mod, size_t cdx, size_t rdx)
{
    d_mode = mod;
    return *this;
}
