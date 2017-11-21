#include "matrix.ih"

Matrix::Matrix(IniList iniList)
:
    d_nRows(iniList.size()),
    d_nCols(iniList.begin()->size()),
    d_data(new double[size()])
{
    auto ptr = d_data;
    for (auto &list: iniList)
    {
        if (list.size() != d_nCols)
        {
            cerr << "Matrix(IniList): varying number of elements in rows\n";

            exit(1);        // BAD STYLE, but see the exercise's text
        }

        memcpy(ptr, &*list.begin() , list.size() * sizeof(double));
        ptr += list.size();
    }
}
