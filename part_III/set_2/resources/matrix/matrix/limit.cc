#include "matrix.ih"

    // nothing throws here, so no safeguards required.

// static
void Matrix::limit(size_t *value, size_t max)
{
    if (*value > max)
        *value = max;
}
