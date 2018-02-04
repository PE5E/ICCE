#ifndef __SEMAPHORE_HEADER
#define __SEMAPHORE_HEADER

#include <mutex>
#include <condition_variable>

class Semaphore
{
    std::mutex              d_mutex;             // binary semaphore
    size_t                  d_nAvailable;
    std::condition_variable d_condition;

    public:
        Semaphore(size_t nAvailable);

        void    notify();
        void    notify_all();
        void    wait();

        size_t  size()  const;
};

#endif
