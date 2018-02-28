#include "matrix.ih"

template <class Type>
Matrix<Type> &Matrix<Type>::operator=(Matrix<Type> const &other)
{
    Matrix<Type> tmp(other);
    swap(tmp);
    return *this;
}
