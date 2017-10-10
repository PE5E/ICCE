#include "user.ih"

bool User::inGroup(size_t gid) const
{
    return gid == d_groupId;
}
    
