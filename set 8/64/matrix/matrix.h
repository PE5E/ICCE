#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <cstddef>
#include <initializer_list>

class Matrix
{
    double *d_data = nullptr;
    size_t  d_nrows = 0;
    size_t  d_ncols = 0; 

    public:
        Matrix() = default;                 
        Matrix(Matrix const &other);        
        Matrix(size_t ncols, size_t nrows); 
        Matrix(std::initializer_list<std::initializer_list<double>> inlist);
        ~Matrix();              
        Matrix &operator=(Matrix const &other);
        Matrix &operator=(Matrix &&tmp);
        void swap(Matrix &other);

        size_t const nRows()            const;
        size_t const nCols()            const;

        double const *row(size_t row)   const;
        double *row(size_t row);

        static Matrix identity(size_t dim); 

        Matrix &tr();           
        Matrix transpose()              const;
    private:
        void isSquare()                 const;
};
        
inline size_t const Matrix::nRows() const
{
    return d_nrows;
}

inline size_t const Matrix::nCols() const
{
    return d_ncols;
}

#endif
