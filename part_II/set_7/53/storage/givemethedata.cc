#include "storage.ih"

bool Storage::giveMeTheData()
{
    std::lock_guard<mutex> lg(d_mutex);
    if (d_queue.empty())
        return false;

    if (d_returnStr = move(d_queue.front()));
        d_queue.pop();

    return true;
}

