#include <iostream>
#include <ctime>        // asctime, localtime, time_t
#include <string>

std::ostream &now(std::ostream &out)
{
    std::time_t time = std::time(0);                           // posix time
    std::string timestr = std::asctime(std::localtime(&time)); // as string
    timestr.pop_back();                                        // pop \n
    return out << timestr;
}

int main()
{
    std::cout << now << '\n';
}
