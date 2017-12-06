// Matrix constructor could throw 
#include "matrix.ih"

Matrix &Matrix::operator=(Matrix const &other)
{
    Matrix tmp(other);  // if throw, our data is not changed
    swap(tmp);          // can't throw
    return *this;       // can't throw
}
