#include "lock.ih"

static string const LOCK::stringName(string mode)
{
    if (mode == "dirname")
        return this.d_path;
    else if (mode == "basename")
        return this.d_baseDir;
    else
        return "error";
}
