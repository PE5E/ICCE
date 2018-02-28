#include "matrix.ih"

Matrix::Matrix(Matrix const &other)
try
:
    d_nRows(other.d_nRows),
    d_nCols(other.d_nCols),
    d_request(new Request{ *other.d_request })
{
    d_data = new double[size()];
    memcpy(d_data, other.d_data, size() * sizeof(double));
}
catch (...)
{
    destroy();          // new d_request or d_data  may fail, if so, the 
}                       // object's (incomplete) state is detected through  
                        // the exception

