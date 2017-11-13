#include "lock.ih"

Lock::Lock()
:
    d_dirName(""), // JB: SF, all of these. Object data members are 
    d_baseName(""), // JB: by default initialized with their default
    d_lockDir(""),  // JB:  constructors, which in case of std::string
    d_openedFile(""), // JB:  create the empty string.
    d_lockFile("")
{
}

