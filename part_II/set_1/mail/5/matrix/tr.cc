#include "matrix.ih"

Matrix &Matrix::tr()
{
    if (d_nRows != d_nCols)
    {
        cerr << "Matrix::tr requires square matrix\n";

        exit(1);        // BAD STYLE, but see the exercise's text
    }

    double *dest = new double[size()];
    transpose(dest);

    delete[] d_data;
    d_data = dest;

    return *this;
}
