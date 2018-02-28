#include "matrix.ih"

Matrix::Matrix(Matrix &&tmp)
:
    d_request(0)                // prevent the header's initialization
{                               // therefore: nothing throws.
    swap(tmp);
}
