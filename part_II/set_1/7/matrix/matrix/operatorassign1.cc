#include "matrix.ih"

Matrix &Matrix::operator=(Matrix const &other)
{
    Matrix tmp(other);
    swap(tmp);
    return *this;
}
