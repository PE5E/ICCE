#include "matrix.ih"

void Matrix::isSquare() const
{
    if (d_ncols != d_nrows)
    {
        std::cerr << "ERROR: non-square matrix" << '\n'; 
        exit(1);
    }
}
