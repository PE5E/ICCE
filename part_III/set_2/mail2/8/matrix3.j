#include "matrix.ih"

template <class Type>
Matrix<Type>::Matrix(Matrix &&tmp)
{
    swap(tmp);
}
