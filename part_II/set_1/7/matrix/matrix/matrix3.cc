#include "matrix.ih"

Matrix::Matrix(Matrix &&tmp)
{
    swap(tmp);
}
