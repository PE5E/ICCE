#include "matrix.ih"

istream &operator>>(istream &in, Matrix &mat)
{
    if (!mat.d_rows)                                    // unused arguments
        mat.d_rows = mat.d_nRows;
    if (!mat.d_cols)
        mat.d_cols = mat.d_nCols;

    switch (mat.d_mode)
    {
        default:                                       // for compiler

        case Mode::BY_ROW:
            mat.extractByRow(in, mat);
            return in;

        case Mode::BY_COL:
            mat.extractByCol(in, mat);
            return in;
    }
}
