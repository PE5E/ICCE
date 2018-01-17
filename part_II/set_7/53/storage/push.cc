#include "storage.ih"

void Storage::push(std::string input)
{
    cerr << "push begin \n";
    std::lock_guard<mutex> lg(d_mutex);
    cerr << "push middle\n";
    this->push(input);
    cerr << "push end\n";
    return;
}
