#include "matrix.ih"

template <class Type>
Matrix<Type>::~Matrix()
{
    delete[] d_data;
}
