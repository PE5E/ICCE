#include "matrix.ih"

template <class Type>
void Matrix<Type>::swap(Matrix<Type> &other)
{
    char buffer[sizeof(Matrix)];
    memcpy(buffer, this,   sizeof(Matrix<Type>));
    memcpy(this,   &other, sizeof(Matrix<Type>));
    memcpy(&other, buffer, sizeof(Matrix<Type>));
}
