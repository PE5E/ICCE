#include "storage.ih"

bool Storage::empty()
{
    std::lock_guard<mutex> lg(d_mutex);
    return d_queue.empty() && d_finished;
}
