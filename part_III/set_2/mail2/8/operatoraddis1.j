#include "matrix.ih"

template <class Type, class Type2>
Matrix<Type> &Matrix<Type>::operator+=(Matrix<Type2> const &rhs) &
{
    add(rhs);               // add may throw, but before affecting *this,
                            // so: commit or roll back
    return *this;
}
