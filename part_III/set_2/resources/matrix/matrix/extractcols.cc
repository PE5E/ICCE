#include "matrix.ih"

    // nothing throws here, so no safeguards required.

istream &Matrix::extractCols(istream &in)
{
    prepareData();

    for
    (
        size_t beginC = d_request->beginC,      // visit all columns
               endC   = d_request->endC,
               beginR = d_request->beginR,      // direct access to beginR.
               topIdx = beginR * d_nCols + beginC;  // index of the 1st 
                                                    //   element to extract.
            beginC != endC;                     // visit all columns.
                ++beginC, ++topIdx              // after each column, inc.
    )                                           //   topIdx to access the next
    {                                           //   element in the top row.
        double *dest = d_data + topIdx;         // address of 1st element to
                                                //   extract (per column)
        for 
        (                                       // visit all rows
            size_t row = beginR, endR = d_request->endR;
                row != endR;
                    ++row, dest += d_nCols      // after this row, the next
        )                                       //   element to extract is 
            (this->*d_extract) (in, dest);      //   d_nCols farther.
    }

    d_extract = &Matrix::extractPlain;

    return in;
}
