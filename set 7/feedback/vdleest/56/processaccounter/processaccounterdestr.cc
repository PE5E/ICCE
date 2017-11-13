#include "processaccounter.ih"

ProcessAccounter::~ProcessAccounter()
{
    delete d_process; // JB: If the new in the constructor fails, this segfaults.
                      // JB: Always set your pointers to an initial 0.
}
