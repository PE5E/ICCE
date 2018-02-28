#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <iosfwd>
#include <initializer_list>

struct Matrix
{
    friend std::istream &operator>>(std::istream &in,  Matrix &mat);
    friend std::ostream &operator<<(std::ostream &out, Matrix const &mat);

    typedef std::initializer_list<std::initializer_list<double>> IniList;

    enum Extraction
    {
        BY_ROWS,
        BY_COLS
    };

    class Row;                          // used for the 2nd index

    private:
        struct Request
        {
            char const *valueSep = " ";
            char const *lineSep = "\n";
            char inSep = ' ';

            size_t nRows;               // new #rows
            size_t nCols;               // new #cols
            size_t beginR;              // first row to extract
            size_t endR;                // beyond the last row to extract
            size_t beginC;              // first col to extract
            size_t endC;                // beyond the last col to extract

            Extraction direction;

            void set(size_t rows, size_t cols, 
                     size_t fromR, size_t countR,
                     size_t fromC, size_t countC,
                     Extraction dir);
        };

        size_t d_nRows = 0;
        size_t d_nCols = 0;

        Request *d_request = new Request;   // NEW: may fail, see the 
                                            //      constructors

        double *d_data = 0;             // in fact R x C matrix

        void (Matrix::*d_extract) (std::istream &in, double *dest) =
                                                        &Matrix::extractPlain;

    public:
        Matrix();                                   // 1    NEW
        Matrix(size_t nRows, size_t nCols);         // 2
        Matrix(Matrix const &other);                // 3
        Matrix(Matrix &&tmp);                       // 4
        Matrix(IniList inilist);                    // 5

        ~Matrix();

        Matrix &operator=(Matrix const &rhs);
        Matrix &operator=(Matrix &&tmp);

        size_t nRows() const;
        size_t nCols() const;
        size_t size() const;            // nRows * nCols

        static Matrix identity(size_t dim);

        Matrix &tr();                   // transpose (must be square)
        Matrix transpose() const;       // any dim.

        void swap(Matrix &other);

            // removed the members 
            // (as they were only used as stand-ins for operator[]):
            //      double *row(size_t idx);
            //      double const *row(size_t idx) const;
            //
        double *operator[](size_t idx);             // no checks required
        double const *operator[](size_t idx) const; // 2nd index implied

        Row at(size_t idx);                         // 2nd index at Row
        Row const at(size_t idx) const;

        Matrix &operator+=(Matrix const &rhs) &;
        Matrix  operator+=(Matrix const &rhs) &&;

            // function call operators setting d_request's fields
        Matrix &operator()(size_t nRows, size_t nCols,              // 1
                           Extraction type = BY_ROWS);
        Matrix &operator()(Extraction type, size_t from = 0,        // 2
                           size_t count = ~0UL);
        Matrix &operator()(Extraction type,                         // 3
                           size_t fromR, size_t countR,
                           size_t fromC, size_t countC);
                                                                    
        std::ostream &(                                             // 4
            *operator()(char const *valueSep, char const *lineSep = "\n")
                      ) (std::ostream &out);

        std::istream &(*operator()(int sep)) (std::istream &out);  // 5

    private:
        void destroy();                 // NEW

        friend Matrix operator+(Matrix const &lhs, Matrix const &rhs); // 1
        friend Matrix operator+(Matrix &&lhs, Matrix const &rhs);      // 2
        void add(Matrix const &rhs);

        std::ostream &insertInto(std::ostream &out) const;
        std::istream &extractFrom(std::istream &in);

        friend bool operator==(Matrix const &lhs, Matrix const &rhs);

        std::istream &extractCols(std::istream &in);
        std::istream &extractRows(std::istream &in);

        void prepareData();                     // resize d_data if needed

        double &el(size_t row, size_t col) const;
        Row row(size_t rowIdx) const;

        static void limit(size_t *value, size_t max);
        static void limits(size_t *begin, size_t *end, size_t max);     // 1
        static void limits(size_t *beginR, size_t *endR, size_t maxR,   // 2
                           size_t *beginC, size_t *endC, size_t maxC); 

        void extractSep(std::istream &in, double *dest);
        void extractPlain(std::istream &in, double *dest);

        static std::ostream &nop(std::ostream &);
        static std::istream &nop(std::istream &);

        
};        

#include "row.hf"
#include "proxy.hf"


// if any of the function below thow an exception, it's passed to its caller
 
inline std::ostream &operator<<(std::ostream &out, Matrix const &mat)
{
    return mat.insertInto(out);
}

inline std::istream &operator>>(std::istream &in,  Matrix &mat)
{
    return mat.extractFrom(in);
}

inline bool operator!=(Matrix const &lhs, Matrix const &rhs)
{
    return not (lhs == rhs);
}

inline double *Matrix::operator[](size_t idx)
{
    return &el(idx, 0);
}

inline double const *Matrix::operator[](size_t idx) const
{
    return &el(idx, 0);
}

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








