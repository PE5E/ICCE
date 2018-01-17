#include "storage.ih"

void Storage::push(std::string input)
{
    std::lock_guard<mutex> lg(d_mutex);
    d_queue.push(input);
    return;
}
