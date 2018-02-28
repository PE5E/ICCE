#include "matrix.ih"

Matrix::Matrix(IniList iniList)
try
:
    d_nRows(iniList.size()),
    d_nCols(iniList.begin()->size())
{
    d_data = new double[size()];

    d_request->set(d_nRows, d_nCols, 0, d_nRows, 0, d_nCols, BY_ROWS);

    auto ptr = d_data;
    for (auto &list: iniList)
    {
        if (list.size() != d_nCols)
            throw invalid_argument{ 
                    "Matrix(IniList): varying number of elements in rows" };

        memcpy(ptr, &*list.begin() , list.size() * sizeof(double));
        ptr += list.size();
    }
}
catch (...)
{
    destroy();          // new d_request or d_data  may fail, or the 
}                       // invalid_argument exception is thrown. If so, the
                        // object's (incomplete) state is detected through
                        // the exception


