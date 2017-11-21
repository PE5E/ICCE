#include "csv.h"

void CSV::doubleSize()
{
    d_size = d_size << 1;
    allocate();
}
