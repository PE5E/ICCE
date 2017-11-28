// Matrix constructor could throw 
#include "matrix.ih"

Matrix &Matrix::operator=(Matrix const &other)
try
{
    Matrix tmp(other);
    swap(tmp);
    return *this;
}
catch (...)
{
    throw;
}
