#include "matrix.ih"

template <class Type>
Matrix<Type> &Matrix<Type>::operator=(Matrix<Type> &&tmp)
{
    swap(tmp);
    return *this;
}
