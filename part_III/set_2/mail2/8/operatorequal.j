#include "matrix.ih"

template <class Type, class Type2>
bool operator==(Matrix<Type> const &lhs, Matrix<Type2> const &rhs)
{
    if (lhs.d_nRows != rhs.d_nRows || lhs.d_nCols != rhs.d_nCols)
        return false;

    for (size_t idx = 0, end = lhs.size(); idx != end; ++idx)
    {
        if (lhs.d_data[idx] != rhs.d_data[idx])
            return false;
    }

    return true;
}
