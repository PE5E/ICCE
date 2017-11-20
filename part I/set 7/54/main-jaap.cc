#include <iostream> // cout
#include <sstream>  // istringstream
#include <ctime>    // asctime

using namespace std;

int main()
{
    time_t result = time(nullptr);
    istringstream now;
    now >> skipws;
    now(asctime(localtime(&result)));
//    char now[50];
//    is.getline(now, 25);    // take the 25 first chars
//    is >> setw(10);
//    is >> now;
    cout << now;
}

