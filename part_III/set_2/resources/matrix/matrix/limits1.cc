#include "matrix.ih"

    // nothing throws here, so no safeguards required.

// static
void Matrix::limits(size_t *begin, size_t *end, size_t max)
{
    limit(begin, max);
    limit(end, max);

    if (*begin > max)
        *begin = max;

    if (*end > max)
        *end = max;
}
