#include "matrix.ih"

// see below for an explanation

void Matrix::transpose(double *destBeg) const
{
    double *src = d_data;

                                // visit all rows. elements[0] of each
                                // row define the subsequent elements of 
                                // the first column, hence ++destBeg for
                                // subsequent row-indices:
    for (size_t row = 0; row != d_nRows; ++row, ++destBeg) 
    {
        double *dest = destBeg; // subsequent elements of the columns appear
                                // nRows elements farther in the transposed 
                                // matrix. Hence dest += d_nRows in the 
                                // for-stmnt:
        for (size_t col = 0; col != d_nCols; ++col, dest += d_nRows, ++src)
            *dest = *src;
    }
}

// Here is a trivial (intuitive) implementation: the destination's [row][col]
// element is the original matrix's [col][row] element. The destination's
// element is found by computing its [col][row] element:
//
//    Matrix ret(d_nCols, d_nRows);
//
//    double const *data = d_data;
//
//    for (size_t row = 0; row != d_nRows; ++row)
//    {
//        for (size_t col = 0; col != d_nCols; ++col)
//            ret.el(col, row) = *data++;
//    }
//
// The disadvantage of this approach is that computing el(col, row) requires
// repeated multiplications and additions.
//
// The above implementation avoids this by realizing that since element
// [row][col]'s index equals row * nCols + col, the transposed element is
// found by reversing row and col values:
//
//              newIdx = col * nRows + row
//
// This expression can be used in two for-loops, sequencing over all
// subsequent elements of the source matrix:
//
//  for (row = 0; row != nRows, ++row)
//        for (col = 0; col != nCols, ++col)
//            newIdx = col * nRows + row
//
// By initializing newIdx in the ouder for-loop, and adding nRows in the
// inner for-loop the multiplication is avoided:
//
//  for (row = 0, newIdx = 0; row != nRows, ++row, ++newIdx)
//        for (col = 0; col != nCols, ++col, newIdx += nRows)
//            newIdx now directly available
//
// In the implementation pointers instead of indices are used.


