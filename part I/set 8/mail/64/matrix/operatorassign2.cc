#include "matrix.ih"

Matrix &Matrix::operator=(Matrix &&tmp)
{
    swap(tmp);
    return *this;
}
