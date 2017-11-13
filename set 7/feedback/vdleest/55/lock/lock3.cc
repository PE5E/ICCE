#include "lock.ih"

Lock::Lock(string const &path, string const &lockingdir)
:
    d_dirName(stringName("dirname", path)),
    d_baseName(stringName("basename", path)),
    d_lockDir(stringName("dirname", lockingdir))

{
    // JB: DRY, delegate!
    string temp = d_lockDir + d_baseName + ".lck"; 
    d_lockFile = temp.c_str();

    string temp2 = d_dirName + d_baseName; 
    d_openedFile = temp2.c_str();
    process();
}

