#include "lock.ih"

const int Lock::openPartOfLock()
{
    if (access(d_openedFile, F_OK) == 0)                    // if file exists
        return open(d_openedFile, O_RDWR, 0600);
    else
        return 0;
}

// JB: Man open
// JB: RETURN VALUE
// JB: open(),  openat(),  and  creat()  return the new file descriptor,
// JB: or -1 if an error occurred (in which case, errno is set appropriately).
// JB: So open() may well return 0, e.g. when there are no file descriptors,
// JB: and you're opening your first, e.g. when you're running as a daemon.

// JB: TME
