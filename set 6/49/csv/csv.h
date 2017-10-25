#ifndef CSV_HEADER_H
#define CSV_HEADER_H

#include <string>                                           // std::string
#include <istream>                                          // std::istream

class CSV
{
    size_t d_size;                                      // number of lines allocated
    size_t d_nLines;                                    // number of lines read
    size_t d_nFields;                                   // number of values per line
    char d_fieldSep;                                  // field seperator (default comma)
    std::string d_lastLine;

    std::string ***bigPtr;                                  // pointer to array of line pointers (see also big comment below)

    public:
        CSV(size_t field, char fieldSep = ',');

        std::string const *const *const *data() const;      // return pointer to data
        std::string const &lastline()           const;      // ref last extraction

        size_t nFields()                        const;      // values per line, set in first read
        size_t size()                           const;      // number of currently stored lines

        size_t read(std::istream &in, size_t nLines = 0);   // read lines using read1, return number read

        std::string ***release();                           // return pointer to data, move responsibility for data
                                                            // to called. Resets bigPtr but does not erase stored lines.
        void clear(size_t nFields = 0);                     // erase everything
    private:
        bool read1(std::istream &in);                       // read 1 line, parse for CSV's, set nFields
        void allocate();
};

inline size_t CSV::nFields() const
{
    return d_nFields;
}

inline size_t CSV::size() const
{
    return d_size;
}
#endif // CSV_HEADER_H

// Line pointers point to array of pointers
// to std::string. i.e. :
// bigPtr -> [Lptr0 Lptr1 ... LptrN]
// where Lptri -> [strPtri1 strPtri2 ... strPtriM] for i = 1,...,N
// where strPtrik -> std::string                   for k = 1,...,M/
// see also the figure in the report.

// - memcpy copies raw bytes

