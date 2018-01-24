#include "storage.ih"

bool Storage::front()
{
    std::lock_guard<mutex> lg(d_mutex);
    if (d_queue.empty())
        return false;
    d_returnStr = d_queue.front();
    return true;
}

//  It os also possible to let this function perform d_queue.pop().
//  then we could return a temporary value instead of making a copy.
//  But in this implementation we have chosen not to pop. We can imagine
//  another thread also calling front() on the same value again.
//  Therefore we had to make a workaround with d_returnStr.
