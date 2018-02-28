#include "matrix.ih"

template <class Type1, class Type2>
Matrix<Type1> operator+(Matrix<Type1> const &lhs, Matrix<Type2> const &rhs)
{
    Matrix ret(lhs);        // may throw, then nothing is changed
    ret.add(rhs);
    return ret;
}
