#ifndef INCLUDED_LOCK_
#define INCLUDED_LOCK_


class Lock
{
    std:string    d_path;     // without trailing '/'
    std:string d_baseDir;     // with trailing '/'
    std:string d_lockDir;
    fstream       d_file;


    public:
        Lock();
        ~Lock();
        Lock(std:string const &path);
        Lock(std:string const &path, std:string lockDir);

    private:

    public:
        static std:string const stringName(std:string mode);

};
        
#endif
