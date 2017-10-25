#include "csv.ih"

CSV::CSV(size_t field, char fieldSep)
    :
        d_size(1),                   // to allocate: 1 line
        d_nLines(0),                  // 0 lines read so far
        d_nFields(field),             // to allocate: 'field' fields
        d_fieldSep(fieldSep),          // set field seperator, default ','
        d_lastLine()
{
    allocate();                       
}
