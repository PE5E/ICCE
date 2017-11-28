// bound can throw
#include "matrix.ih"

double &Matrix::Row::at(size_t colindex)
try
{
    if (colindex > d_colcount)
        throw out_of_range("Column index " 
                            + to_string(colindex)
                            + " exceeds number of columns "
                            + to_string(d_colcount));
    return d_row[colindex];
}
catch (...)
{
    throw;
}
