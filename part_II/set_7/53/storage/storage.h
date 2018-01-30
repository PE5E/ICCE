#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <mutex>
#include <queue>
#include <string>

class Storage
{
    std::mutex              d_mutex;
    std::queue<std::string> d_queue;
    std::string             d_returnStr;
    bool                    d_finished = false;
    
    public:
        void push(std::string input);

        bool giveMeTheData();       // cute name huh?
                                    // fills d_returnStr if not empty
                                    // else returns false

        bool empty();
        void finished(bool finish); // also possible: void finished()
                                    // but this way it is possible to re-open
        bool finished();            // check if finished is set
        std::string returnString(); // the result of d_queue.front()
};

inline void Storage::finished(bool finish)
{
    d_finished = finish;
}

inline bool Storage::finished()
{
    return d_finished && empty();
}

inline std::string Storage::returnString()
{
    return d_returnStr;
}
        
#endif
