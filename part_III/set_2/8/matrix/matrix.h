#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <iosfwd>
#include <initializer_list>

template <class Type>
class Matrix
{
    size_t d_nRows = 0;
    size_t d_nCols = 0;
    Type   *d_data = 0;                     // in fact R x C matrix

    public:
        typedef std::initializer_list<std::initializer_list<Type>> IniList;

        Matrix<Type>() = default;
        Matrix<Type>(size_t nRows, size_t nCols);         // 1
        Matrix<Type>(Matrix const &other);                // 2
        Matrix<Type>(Matrix &&tmp);                       // 3
        Matrix<Type>(IniList inilist);                    // 4

        ~Matrix<Type>();

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

template <class Type>
inline Type *Matrix<Type>::row(size_t row)
{
    return &el(row, 0);
}

template <class Type>
inline Type const *Matrix<Type>::row(size_t row) const
{
    return &el(row, 0);
}

template <class Type>
inline size_t Matrix<Type>::nCols() const
{
    return d_nCols;
}

template <class Type>
inline size_t Matrix<Type>::nRows() const
{
    return d_nRows;
}

template <class Type>
inline size_t Matrix<Type>::size() const
{
    return d_nRows * d_nCols;
}

template <class Type>
inline Type &Matrix<Type>::el(size_t row, size_t col) const
{
    return d_data[row * d_nCols + col];
}

#include "matrix1.j"            // constructor 1
#include "matrix2.j"            // constructor 2
#include "matrix3.j"            // constructor 3
#include "matrix4.j"            // constructor 4
#include "destructor.j"         // destructor

#include "operatorassign1.j"    // overloaded const assignment operator
#include "operatorassign2.j"    // overloaded assignment operator

#include "swap.j"               // swap function
#include "tr.j"                 // transpose function square
#include "transpose.j"          // transpose function any dim
#include "transpose2.j"         // private transpose function

#include "insertinto.j"         // insertion operator
#include "extractfrom.j"        // extraction operator

#include "operatorequal.j"
#include "operatorinequal.j"

// index operator niet in source files
// index operator const niet in source files


#endif




