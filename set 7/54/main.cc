#include <iostream> // cout
#include <sstream>  // istringstream
#include <ctime>    // asctime

using namespace std;

int main()
{
    time_t result = time(nullptr);
    istringstream is(asctime(localtime(&result)));
    char now[100];
    is.getline(now, 25);    // take the 25 first chars
    cout << now;
}

