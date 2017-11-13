#include "lock.ih"

Lock::Lock(string const &path)
    :                        // JB: "dirname" is magic.
    d_dirName(stringName("dirname", path)),
    d_baseName(stringName("basename", path)),
    d_lockDir(d_dirName)

{
    string temp = d_lockDir + d_baseName + ".lck"; 
    d_lockFile = temp.c_str();

    string temp2 = d_dirName + d_baseName; 
    d_openedFile = temp2.c_str();
    process();
}

