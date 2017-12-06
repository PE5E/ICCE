#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <iosfwd>
#include <initializer_list>

class Matrix
{
    size_t d_nRows = 0;
    size_t d_nCols = 0;
    double *d_data = 0;                     // in fact R x C matrix

    public:
        typedef std::initializer_list<std::initializer_list<double>> IniList;

        Matrix() = default;
        Matrix(size_t nRows, size_t nCols);         // 1
        Matrix(Matrix const &other);                // 2
        Matrix(Matrix &&tmp);                       // 3
        Matrix(IniList inilist);                    // 4

        ~Matrix();

        Matrix &operator=(Matrix const &rhs);
        Matrix &operator=(Matrix &&tmp);

        double *operator[](size_t rowindex);
        double const *operator[](size_t rowindex) const;

        class Row
        {
            double *d_row = nullptr;
            size_t d_colcount = 0;
            public:
                Row(size_t rowindex, Matrix const &mat);
                double &at(size_t colindex);
                double const &at(size_t colindex) const;
            private:
        };
        
        Row at(size_t colindex);
        Row const at(size_t colindex) const;

        size_t nRows() const;
        size_t nCols() const;
        size_t size() const;            // nRows * nCols

        static Matrix identity(size_t dim);

        Matrix &tr();                   // transpose (must be square)
        Matrix transpose() const;       // any dim.

        void swap(Matrix &other);
    
    private:
        double &el(size_t row, size_t col) const;
        void transpose(double *dest) const;
};        


inline size_t Matrix::nCols() const
{
    return d_nCols;
}

inline size_t Matrix::nRows() const
{
    return d_nRows;
}

inline size_t Matrix::size() const
{
    return d_nRows * d_nCols;
}

inline double &Matrix::el(size_t row, size_t col) const
{
    return d_data[row * d_nCols + col];
}

#endif




