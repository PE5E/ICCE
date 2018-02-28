#include "matrix.ih"

Matrix &Matrix::operator+=(Matrix const &rhs) &
{
    add(rhs);               // add may throw, but before affecting *this,
                            // so: commit or roll back
    return *this;
}
