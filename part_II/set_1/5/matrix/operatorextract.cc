#include "matrix.ih"

istream &operator>>(istream &in, Matrix &mat)
{
    switch (mat.d_mode)
    {
        default:

        case Mode::BY_ROW:
            mat.extractByRow(in, mat);
            return in;

        case Mode::BY_COL:
            mat.extractByCol(in, mat);
            return in;
    }
}
