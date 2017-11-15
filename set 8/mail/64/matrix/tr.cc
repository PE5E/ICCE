#include "matrix.ih"

Matrix &Matrix::tr()
{
   isSquare(); 
             
    for (size_t rowidx = 0; rowidx != d_nrows; ++rowidx)
        for (size_t colidx = 0; colidx != rowidx; ++colidx)
            std::swap(row(rowidx)[colidx], row(colidx)[rowidx]);

    return *this;
}
