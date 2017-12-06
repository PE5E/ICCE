// new, transpose and delete can all throw
#include "matrix.ih"

Matrix &Matrix::tr()
{
    if (d_nRows != d_nCols)
        throw logic_error("Can only transpose square matrix");

    double *dest = new double[size()];
    transpose(dest);

    delete[] d_data;
    d_data = dest;

    return *this;
}
