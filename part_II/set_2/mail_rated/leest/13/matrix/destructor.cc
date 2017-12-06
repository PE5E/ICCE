// delete could throw only if a destructor throws 
// illegally, which does not happen for doubles
#include "matrix.ih"

Matrix::~Matrix()
{
    delete[] d_data;
}
