// #include "matrix.ih"

template <typename Type>
Matrix::Matrix<Type>(size_t nRows, size_t nCols)
:
    d_nRows(nRows),
    d_nCols(nCols),
    d_data(new Type[size()]())
{}
