#include "lock.ih"

void Lock::process()
{
    if (access(d_lockFile, F_OK) == 0)          // if lockfile already exists
    {
        cout << "File is locked";
        return;
    }
    else
    { 
        int fdLock = createLockFile();
        int fdFile = openPartOfLock();          // open file to work on
        if (fdFile == 0)                        // if file doesnt exist
        {
            closePartOfLock(fdFile, fdLock);
            cout << "file " << d_openedFile << " does not exist\n";
            return;
        }

        int lockStat = flock(fdFile, LOCK_EX);  // set file lock
        if (!valid(lockStat))                   // if file is not locked
            return;

        cout << '?';        
        string text;
        cin >> text;

        const char *buffer = text.c_str();
        write(fdFile, buffer, 1024);

        closePartOfLock(fdFile, fdLock);
    }

}
