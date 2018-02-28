#include "matrix.ih"

    // nothing throws here, so no safeguards required.

void Matrix::Request::set(size_t rows, size_t cols, 
                                 size_t fromR, size_t countR, 
                                 size_t fromC, size_t countC, 
                                 Extraction dir)
{
    nRows = rows;
    nCols = cols;
    beginR = fromR;
    endR = fromR + countR;
    beginC = fromC;
    endC = fromC + countC;

    direction = dir;

    limits(&beginR, &endR, nRows, &beginC, &endC, nCols);
}




