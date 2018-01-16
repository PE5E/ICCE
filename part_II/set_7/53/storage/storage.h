#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_


class Storage
{
    queue d_queue;
    bool  d_finished = false;
    
    public:
        Storage();

        void push();
        void pop();
        void front();
        bool empty();
        void finished(bool finish); // also possible: void finished()
                                    // but this way it is possible to re-open

    private:
        bool finished();
};

inline void finished(bool finish)
{
    d_finished = finish;
    return;
}
        
#endif
