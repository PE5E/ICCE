#include "matrix.ih"

Matrix operator+(Matrix &&lhs, Matrix const &rhs)
{
    Matrix ret(move(lhs));      
    ret.add(rhs);               // may throw, but that only affects ret
    return ret;                 
}
