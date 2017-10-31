#include "lock.ih"

Lock::Lock(string const &path, string lockDir)
:
    d_path(path),
    d_baseDir(0),
    d_lockDir(lockDir)
{
    d_baseDir = this.stringName(basename);
}

