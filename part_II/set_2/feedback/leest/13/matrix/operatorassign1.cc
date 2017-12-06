// Matrix constructor could throw 
#include "matrix.ih"

//JB: Why is this ok? Some comment would be good.
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
