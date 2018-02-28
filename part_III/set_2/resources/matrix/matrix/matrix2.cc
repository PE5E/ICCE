#include "matrix.ih"

Matrix::Matrix(size_t nRows, size_t nCols)
try
:
    d_nRows(nRows),
    d_nCols(nCols)      // d_request allocated through the header spec.
{
    d_data = new double[size()]();
    d_request->set(nRows, nCols, 0, nRows, 0, nCols, BY_ROWS);
}
catch (...)
{
    destroy();          // new d_request or d_data  may fail, if so, the 
}                       // object's (incomplete) state is detected through  
                        // the exception
    
