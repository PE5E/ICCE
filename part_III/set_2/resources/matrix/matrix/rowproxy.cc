#include "matrix.ih"

    // throws if the index is out of bounds: then nothing is changed, so
    //  roll-back

Matrix::Row::Proxy Matrix::Row::proxy(size_t colIdx) const
{
    if (colIdx >= d_size)
        throw runtime_error{ "Col index (" + to_string(colIdx) + 
                                ") exceeded. nCols = " + to_string(d_size) };

    return Proxy{ d_row[colIdx] };
}
