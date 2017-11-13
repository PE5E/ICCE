#include "matrix.ih"

Matrix::Matrix(Matrix &&tmp)
//:
{
    //swap(tmp);
    // When using swap, ensure that tmp's destructor detects that
    // it may immediately return, e.g., by setting one of tmp's
    // data members to 0
}
