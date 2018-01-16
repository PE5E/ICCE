#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <mutex>
#include <queue>
#include <string>

class Storage
{
    std::mutex              d_mutex;
    std::queue<std::string> d_queue;
    bool                    d_finished = false;
    
    public:
        Storage();

        void        push(std::string input);
        void        pop();
        std::string front();
        bool        empty();
        void        finished(bool finish); // also possible: void finished()
                                    // but this way it is possible to re-open

    private:
        bool finished();            // check if finished is set
};

inline void Storage::push(std::string input)
{
    std::lock_guard<mutex> lg(d_mutex);
    this->push(input);
    return;
}

inline void Storage::pop()
{
    std::lock_guard<mutex> lg(d_mutex);
    this->pop();
    return;
}

inline std::string Storage::front()
{
    std::lock_guard<mutex> lg(d_mutex);
    return this->front();
}

inline bool Storage::empty()
{
    std::lock_guard<mutex> lg(d_mutex);
    return d_queue.empty() && d_finished;
}

inline void Storage::finished(bool finish)
{
    d_finished = finish;
    return;
}

inline bool Storage::finished()
{
    return d_finished;
}
        
#endif
