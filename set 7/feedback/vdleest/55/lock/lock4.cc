#include "lock.ih"

Lock::~Lock()
{
    unlink(d_lockFile);
}

