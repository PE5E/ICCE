#include "matrix.ih"

    // nothing throws here, so no safeguards required.

Matrix &Matrix::operator()(Extraction direction, 
                    size_t fromR, size_t countR, size_t fromC, size_t countC)
{
    d_request->set(d_nRows, d_nCols, fromR, countR, fromC, countC, direction);
    
    return *this;
}
