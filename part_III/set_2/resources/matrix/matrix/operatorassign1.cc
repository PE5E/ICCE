#include "matrix.ih"

Matrix &Matrix::operator=(Matrix const &other)
{
    Matrix tmp(other);          // standard, exception safe implementation
    swap(tmp);
    return *this;
}
