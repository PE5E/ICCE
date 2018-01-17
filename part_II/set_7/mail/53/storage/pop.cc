#include "storage.ih"

void Storage::pop()
{
    std::lock_guard<mutex> lg(d_mutex);
    d_queue.pop();
    return;
}
