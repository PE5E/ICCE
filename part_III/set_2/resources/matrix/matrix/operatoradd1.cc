#include "matrix.ih"

Matrix operator+(Matrix const &lhs, Matrix const &rhs)
{
    Matrix ret(lhs);        // may throw, then nothing is changed
    ret.add(rhs);
    return ret;
}
