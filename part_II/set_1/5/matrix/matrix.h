#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <iosfwd>
#include <initializer_list>

enum class Mode 
    {
        BY_ROW,
        BY_COL,
    };

class Matrix
{
    size_t  d_nRows = 0;
    size_t  d_nCols = 0;
    double *d_data = 0;                     // in fact R x C matrix
    Mode    d_mode = Mode::BY_ROW;

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
        Matrix &operator()(size_t ncols,
                           size_t nrows,
                           Mode mod = Mode::BY_ROW); 
        Matrix &operator()(Mode mod = Mode::BY_ROW, 
                           size_t cdx = 0,
                           size_t rdx = 0);
        friend std::istream &operator>>(std::istream &in, Matrix &mat);

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




