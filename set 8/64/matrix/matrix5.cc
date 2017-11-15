#include "matrix.ih"

Matrix::Matrix(std::initializer_list<std::initializer_list<double>> rows)
    :
        d_nrows(rows.size()),
        d_ncols(rows.begin()->size())
{
    d_data = new double[d_nrows * d_ncols];                      // alloc

    for (size_t rowidx = 0; rowidx != d_nrows; ++ rowidx)        // loop rows
    {
        if ((&*rows.begin() + rowidx)->size() != d_ncols)        // row length
        {                                        // consider sep
            std::cerr << "AHHH" << '\n';                         
            exit(1);
        }

        double const *dptr = (&*rows.begin() + rowidx)->begin(); // begin row

        for (size_t colidx = 0; colidx != d_ncols; ++colidx)     // values
            d_data[rowidx * d_ncols + colidx] = dptr[colidx];
    }
}
