#include "matrix.ih"

Matrix::~Matrix()
{
    delete d_data;
}
