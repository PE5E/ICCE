#ifndef INCLUDED_LOCK_
#define INCLUDED_LOCK_

#include <string>

class Lock
{
    std::string    d_dirName;    // directory of file
    std::string   d_baseName;    // filename
    std::string    d_lockDir;    // location of lockfile
    const char *d_openedFile;    // name and dir of file to be opened
    const char   *d_lockFile;    // name and dir of lockfile


    public:
        Lock();
        ~Lock();
        Lock(std::string const &path);
        Lock(std::string const &path, std::string &lockingdir);

    private:
       static std::string stringName(std::string mode, std::string const &path);

        int openPartOfLock();  // can not use plain "open" because of file: open
        void closePartOfLock(int fdLock, int fdFile);
        bool valid(int lockStat);
        void process();        // function called from constructors
        int createLockFile();     
    public:
        

};
        
#endif
