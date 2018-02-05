using namespace std;
#include <thread>
#include <string>
#include <iostream>
#include <chrono>
#include <future>

string threadFun()
{
    cerr << "entry\n";

    this_thread::sleep_for(chrono::seconds(5));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(5));
    cerr << "second cerr\n";

    return "end the program";
}

int main()
{
    // start thread
    packaged_task<string()> task(threadFun);
    future<std::string> fut = task.get_future();
    thread thr(move(task));
    size_t count = 0;

    while (true)
    {
        this_thread::sleep_for(chrono::seconds(1));
        cerr << "inspecting: " 
             << ++count 
             << '\n';
        if (fut.wait_for(std::chrono::seconds(0)) == future_status::ready)
        {
            cerr << "done" << '\n';
            thr.detach();
            return 0;
        }
    }
}
