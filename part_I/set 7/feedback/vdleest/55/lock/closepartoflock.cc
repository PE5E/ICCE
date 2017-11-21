#include "lock.ih"

void Lock::closePartOfLock(int fdLock, int fdFile)
{
    close(fdFile);
    close(fdLock);
    unlink(d_lockFile);
}
