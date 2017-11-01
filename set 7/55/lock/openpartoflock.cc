#include "lock.ih"

int Lock::openPartOfLock()
{
    if (access(d_openedFile, F_OK) == 0)                    // if file exists
        return open(d_openedFile, O_RDWR, 0600);
    else
        return 0;
}



