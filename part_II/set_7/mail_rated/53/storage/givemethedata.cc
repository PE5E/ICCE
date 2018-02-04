#include "storage.ih"

bool Storage::giveMeTheData()
{
    std::lock_guard<mutex> lg(d_mutex);
    if (d_queue.empty())
        return false;
    
    try
    {
        d_returnStr = move(d_queue.front());
    }

    catch (...)
    {
        return false;
    }    

    d_queue.pop();
    return true;
}

