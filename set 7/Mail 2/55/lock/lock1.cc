#include "lock.ih"

Lock::Lock()
:
    d_dirName(""),
    d_baseName(""),
    d_lockDir(""),
    d_openedFile(""),
    d_lockFile("")
{
}

