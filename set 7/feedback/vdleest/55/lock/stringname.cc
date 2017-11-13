#include "lock.ih"

std::string Lock::stringName(std::string mode, std::string const &path)
{
    size_t found = path.find_last_of("/\\");       // works for unix and windows

    if (mode == "dirname" && found != string::npos)
        return path.substr(0,found) + "/";         // dirname only
    else if (mode == "basename")
        return path.substr(found+1);               // filename only

    // JB: Don't reinvent the wheel. There are functions 'basename' and 'dirname'.
    
    return "";
}
