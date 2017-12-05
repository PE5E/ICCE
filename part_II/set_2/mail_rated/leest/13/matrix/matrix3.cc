// swap cant throw
#include "matrix.ih"

Matrix::Matrix(Matrix &&tmp)
{
    swap(tmp); // JB: Works, but inefficient (uses temporary copy).
}
