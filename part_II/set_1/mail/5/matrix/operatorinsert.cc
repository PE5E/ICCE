#include "matrix.ih"

ostream &operator<<(std::ostream &out, Matrix &mat)
{
    for (size_t row = 0; row != mat.d_nRows; ++row)
    {
        for (size_t col = 0; col != mat.d_nCols; ++col)
            out << mat[row][col];
        out << '\n';
    }
    return out;
}


