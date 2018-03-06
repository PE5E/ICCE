#include "matrix.ih"

template <class Type1, class Type2>
Matrix<Type1> operator+(Matrix<Type1> &&lhs, Matrix<Type2> const &rhs)
{
    Matrix ret(move(lhs));      
    ret.add(rhs);               // may throw, but that only affects ret
    return ret;                 
}
