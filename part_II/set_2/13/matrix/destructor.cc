// delete could throw, exceptions may not leave destructor
#include "matrix.ih"

Matrix::~Matrix()
{
    try
    {
        delete[] d_data;
    }
    catch (...)
    {}
}
