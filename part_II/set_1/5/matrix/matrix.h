#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <iosfwd>
#include <initializer_list>

enum class Mode             // should this be here?
    {
        BY_ROW,
        BY_COL,
    };

class Matrix
{
    size_t  d_nRows      = 0;
    size_t  d_nCols      = 0;
    double *d_data       = 0;                   // flattened matrix 

    Mode    d_mode       = Mode::BY_ROW;        // extract/insert
    size_t  d_rowOffset  = 0;               
    size_t  d_colOffset  = 0;
    size_t  d_cols       = 0;
    size_t  d_rows       = 0; 

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
        double *operator[](size_t index);

        Matrix &operator()(size_t ncols = 0,                
                           size_t nrows = 0,                
                           Mode mod = Mode::BY_ROW); 

        Matrix &operator()(Mode mod,
                           size_t rowoffset = 0,
                           size_t rows = 0,
                           size_t coloffset = 0,
                           size_t cols = 0);

        friend std::istream &operator>>(std::istream &in, Matrix &mat);
        friend std::ostream &operator<<(std::ostream &out, Matrix &mat);

        size_t nRows() const;
        size_t nCols() const;
        size_t size()  const;            // nRows * nCols

        static Matrix identity(size_t dim);

        Matrix &tr();                   // transpose (must be square)
        Matrix transpose() const;       // ANY DIM.

        void swap(Matrix &other);

    
    private:
        double &el(size_t row, size_t col) const;
        void transpose(double *dest) const;

        void extractByRow(std::istream &in, Matrix &mat);
        void extractByCol(std::istream &in, Matrix &mat);
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




