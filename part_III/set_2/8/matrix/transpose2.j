#include "matrix.ih"

template <class Type>
void Matrix<Type>::transpose(Type *destBeg) const
{
    Type *src = d_data;

                                // visit all rows. elements[0] of each
                                // row define the subsequent elements of 
                                // the first column, hence ++destBeg for
                                // subsequent row-indices:
    for (size_t row = 0; row != d_nRows; ++row, ++destBeg) 
    {
        Type *dest = destBeg; // subsequent elements of the columns appear
                                // nRows elements farther in the transposed 
                                // matrix. Hence dest += d_nRows in the 
                                // for-stmnt:
        for (size_t col = 0; col != d_nCols; ++col, dest += d_nRows, ++src)
            *dest = *src;
    }
}

