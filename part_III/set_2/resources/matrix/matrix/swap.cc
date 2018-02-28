#include "matrix.ih"

    // nothing throws here, so no safeguards required.

void Matrix::swap(Matrix &other)
{
    char buffer[sizeof(Matrix)];
    memcpy(buffer, this,   sizeof(Matrix));
    memcpy(this,   &other, sizeof(Matrix));
    memcpy(&other, buffer, sizeof(Matrix));
}
