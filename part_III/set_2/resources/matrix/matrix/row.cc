#include "matrix.ih"

// private backdoor, returning a Row if rowIdx is within bounds, or throws 
//  in which case nothing is changed.

Matrix::Row Matrix::row(size_t rowIdx) const
{
    if (rowIdx >= d_nRows)
        throw runtime_error{ "Row index (" + to_string(rowIdx) + 
                                ") exceeded. nRows = " + to_string(d_nRows) };

    return Row{ &el(rowIdx, 0), d_nCols };
}

