#include "lock.ih"

bool Lock::valid(int lockStat)
{
    return (lockStat == 0 ? true : false);
}
