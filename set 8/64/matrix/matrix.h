#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <cstddef>

class Matrix
{
    double *d_data;
    size_t  d_nrows;
    size_t  d_ncols; 

    public:
                                            // constructors
        Matrix();                           // matrix1.cc
        Matrix(Matrix const &other);        // matrix2.cc
        Matrix(Matrix &&tmp);               // matrix3.cc

        Matrix(size_t ncols, size_t nrows); // matrix4.cc

        ~Matrix();
        Matrix &operator=(Matrix const &other);
        Matrix &operator=(Matrix &&tmp);
        void swap(Matrix &other);

                                            // return members
        size_t const nRows()            const;
        size_t const rCols()            const;

        double const *row(size_t row)   const;

    private:
};
        
inline size_t const Matrix::nRows()
{
    return d_nrows;
}

inline size_t const Matrix::nCols()
{
    return d_ncols;
}

#endif
