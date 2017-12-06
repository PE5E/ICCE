// out_of_range or Row constructor can throw
#include "matrix.ih"

Matrix::Row Matrix::at(size_t rowindex)
{
    {
        if (rowindex > d_nRows)
            throw out_of_range("Row index " 
                                + to_string(rowindex)
                                + " exceeds number of rows "
                                + to_string(d_nRows));
        return Row(rowindex, *this);         // could throw
    }
}

