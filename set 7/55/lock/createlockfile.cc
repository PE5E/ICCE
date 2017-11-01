#include "lock.ih"

int Lock::createLockFile()
{
    int fdLock = 0;
    if (access(d_lockFile, F_OK) == 0)                 // if file exists
        fdLock = open(d_lockFile, O_RDWR);
    else 
        fdLock = creat(d_lockFile, 0700);
    return fdLock;
}

