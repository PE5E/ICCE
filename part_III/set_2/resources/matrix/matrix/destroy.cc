#include "matrix.ih"

    // newly added, factorizing the required memory release actions

void Matrix::destroy()
{
    delete[] d_data;            // deletes don't throw
    delete d_request;
}
