#include "matrix.ih"

template <class Type, class Type2>
bool operator!=(Matrix<Type> const &lhs, Matrix<Type2> const &rhs)
{
    return !lhs==rhs;
}
