#include "matrix.ih"

    // modified: instead of deleting the data, the new data are first
    //  allocated. If OK the old data are deleted, and the new situation is
    //  installed (= commit). Otherwise, the old situation is kept, and an
    //  exception is thrown (commit)

void Matrix::prepareData()
{
    size_t newSize = d_request->nRows * d_request->nCols;

    if (newSize > size())                   // more elements needed?
    {
        double *newData = new double[newSize];  // allocate more data elements
                                            // this may throw, resulting in
                                            // roll-back

        delete[] d_data;                    // once we're here we're safe
        d_data = newData;
    }

    d_nCols = d_request->nCols;
    d_nRows = d_request->nRows;
}
