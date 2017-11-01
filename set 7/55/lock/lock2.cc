#include "lock.ih"

Lock::Lock(string const &path)
:
    d_path(path),
    d_baseDir(0),
    d_lockDir(0)
{
    d_baseDir = this.stringName(basename);
    d_file.open (d_path + ".lck", ios::out)
}

