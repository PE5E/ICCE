#include "matrix.ih"

Matrix::Matrix(std::initializer_list<std::initializer_list<double>> rows)
    :
        d_nrows(rows.size()),
        d_ncols(rows.begin()->size())
{   
    d_data = new double[d_nrows * d_ncols];         // alloc
    for (size_t rowidx = 0; rowidx != d_nrows; ++ rowidx)   // loop rows
    {
        double const *dptr = rows.begin() + rowidx; // first 

        if (dptr->size() != d_ncols)
        {
            std::cerr << "AHHH" << '\n';
            exit(1);
        } 

        for (size_t colidx = 0; colidx != d_ncols; ++colidx)    // vals
            d_data[rowidx * colidx] = dptr[colidx]; 
    }
}
