#include "matrix.ih"

    // nothing throws here, so no safeguards required.

istream &Matrix::extractRows(istream &in) 
{
    prepareData();

    for                                     // visit all required rows
    (
        size_t beginR = d_request->beginR, 
               endR   = d_request->endR, 
               beginC = d_request->beginC,
               topIdx = beginR * d_nCols + beginC;

            beginR != endR;
                ++beginR, topIdx += d_nCols
    )    
    {
        double *dest = d_data + topIdx;
        for (
            size_t col = beginC, endC = d_request->endC; 
                col != endC; 
                    ++col, ++dest
        )
            (this->*d_extract) (in, dest);
    }

    d_extract = &Matrix::extractPlain;

    return in;
}






