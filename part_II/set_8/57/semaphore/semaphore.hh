#ifndef __SEMAPHORE_HEADER
#define __SEMAPHORE_HEADER

#include <cstddef>                  // size_t
class Semaphore
{
    bool *d_locks;

    public:
        Semaphore(size_t nAvailable);

        void    notify();
        void    notify_all();
        void    wait();

        size_t  size()  const;
};

#endif
