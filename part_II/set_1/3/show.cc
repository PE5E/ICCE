#include "main.ih"

ostream &show(ostream &out, Matrix const &mat)
{
    for (size_t row = 0, nRows = mat.nRows(); row != nRows; ++row)
    {
        double const *rowData = mat.row(row);
        for (size_t col = 0, nCols = mat.nCols(); col != nCols; ++col)
            out << rowData[col] << ' ';
        out << '\n';
    }

    return out;
}


