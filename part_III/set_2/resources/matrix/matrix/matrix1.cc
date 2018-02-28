#include "matrix.ih"

    // newly added to ensure that d_request != 0

Matrix::Matrix()
try                     // allocation of d_request may fail
{}
catch (...)
{
    destroy();          // new Request may fail, if so, the object's 
}                       // (incomplete) state is detected through the 
                        // exception
