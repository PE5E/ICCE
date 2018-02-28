#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <iosfwd>
#include <initializer_list>

template <typename Type>
class Matrix
{
    size_t d_nRows = 0;
    size_t d_nCols = 0;
    Type   *d_data = 0;                     // in fact R x C matrix

    public:
        typedef std::initializer_list<std::initializer_list<double>> IniList;

        Matrix() = default;
        Matrix<Type>(size_t nRows, size_t nCols);         // 1
        Matrix(Matrix const &other);                // 2
        Matrix(Matrix &&tmp);                       // 3
        Matrix(IniList inilist);                    // 4

        ~Matrix();

        Matrix &operator=(Matrix const &rhs);
        Matrix &operator=(Matrix &&tmp);

        Type *row(size_t idx);
        Type const *row(size_t idx) const;

        size_t nRows() const;
        size_t nCols() const;
        size_t size() const;            // nRows * nCols

        static Matrix identity(size_t dim);

        Matrix &tr();                   // transpose (must be square)
        Matrix transpose() const;       // any dim.

        void swap(Matrix &other);

    
    private:
        Type &el(size_t row, size_t col) const;
        void transpose(Type *dest) const;
};        

template <typename Type>
inline Type *Matrix<Type>::row(size_t row)
{
    return &el(row, 0);
}

template <typename Type>
inline Type const *Matrix<Type>::row(size_t row) const
{
    return &el(row, 0);
}

template <typename Type>
inline size_t Matrix<Type>::nCols() const
{
    return d_nCols;
}

template <typename Type>
inline size_t Matrix<Type>::nRows() const
{
    return d_nRows;
}

template <typename Type>
inline size_t Matrix<Type>::size() const
{
    return d_nRows * d_nCols;
}

template <typename Type>
inline Type &Matrix<Type>::el(size_t row, size_t col) const
{
    return d_data[row * d_nCols + col];
}

#include "matrix1.j" // constructor 1

#endif




