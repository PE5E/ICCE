// delete could throw, exceptions may not leave destructor
#include "matrix.ih"

Matrix::~Matrix()
{
    try
    {
        delete[] d_data; // JB: Delete only throws if a destructor throws, quod non for a double.
    }
    catch (...)  // BS: you catch anything and hide the failure for the user,
    {}  // even trying to swipe a malformed program under the carpet.
}
