#include "matrix.ih"

    // nothing throws here, so no safeguards required.

// static
void Matrix::limits(size_t *beginR, size_t *endR, size_t maxR,
                           size_t *beginC, size_t *endC, size_t maxC)
{
    limits(beginR, endR, maxR);
    limits(beginC, endC, maxC);
}
