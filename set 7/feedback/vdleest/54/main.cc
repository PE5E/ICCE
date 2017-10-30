#include <iostream>
#include <iomanip>      // parametric manipulator
#include <ctime>        // asctime, localtime, time_t

std::ostream &now(std::ostream &out)
{
    std::time_t time = std::time(0);                           // posix time
    std::string timestr = std::asctime(std::localtime(&time)); // h-readable
    // JB: This doesn't remove the '\n'. It creates a brand new copy without the '\n'.
    out << timestr.substr(0, timestr.size() - 1);              // remove \n
    // JB: CTR
    return out;
}

int main()
{
    std::cout << now << '\n';
}

