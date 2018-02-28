#include "matrix.ih"

template <class Type>
Matrix<Type> &Matrix<Type>::tr()
{
    if (d_nRows != d_nCols)
    {
        cerr << "Matrix::tr requires square matrix\n";

        exit(1);        // BAD STYLE, but see the exercise's text
    }

    Type *dest = new Type[size()];
    transpose(dest);

    delete[] d_data;
    d_data = dest;

    return *this;
}
