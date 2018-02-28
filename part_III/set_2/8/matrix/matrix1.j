// #include "matrix.ih"

template <class Type>
Matrix<Type>::Matrix(size_t nRows, size_t nCols)
:
    d_nRows(nRows),
    d_nCols(nCols),
    d_data(new Type[size()]())
{}
