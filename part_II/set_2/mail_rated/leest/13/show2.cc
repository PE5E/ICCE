#include "main.ih"

ostream &show2(ostream &out, Matrix const &mat)
{
    for (size_t row = 0, nRows = mat.nRows(); row != nRows; ++row)
    {
        for (size_t col = 0, nCols = mat.nCols(); col != nCols; ++col)
            out << mat.at(row).at(col) << '\t';
        out << '\n';
    }

    return out;
}


