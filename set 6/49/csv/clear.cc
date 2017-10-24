#include "csv.ih"

void CSV::clear(size_t nFields)                                           // nFields defaults to 0
{
                                                                          // de-allocate all every line array
    for (string **line = bigPtr[0]; line != bigPtr[d_nLines - 1]; ++line)
        delete[] line;
                                                                          // de-allocate array of lines
    delete[] bigPtr;
                                                                          // reset parameters
    d_size = 1;
    d_nLines = 0;
    d_nFields = 0;
    d_fieldSep = '';
                                                                          // call (default) constructor
    CSV(nFields);
}
