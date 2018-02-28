#include "matrix.ih"

template <class Type>
Matrix<Type> Matrix<Type>::transpose() const
{
    Matrix<Type> ret;                             // optimized implementation

    ret.d_nCols = d_nRows;                  // prepare the return Matrix
    ret.d_nRows = d_nCols;
    ret.d_data = new Type[size()];

    transpose(ret.d_data);

    return ret;
}

