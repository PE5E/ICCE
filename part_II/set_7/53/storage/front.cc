#include "storage.ih"

std::string Storage::front()
{
    std::lock_guard<mutex> lg(d_mutex);
    return this->front();
}
