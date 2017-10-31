#include "lock.ih"

LOCK::~LOCK()
{
    d_file.close (d_path + ".lck")
    remove(d_path + ".lck");
}

