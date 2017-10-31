#include <iostream> // cout
#include <sstream>  // istringstream
#include <ctime>    // asctime
#include <iomanip>

using namespace std;

int main()
{
    time_t result = time(nullptr);
//    istringstream is(asctime(localtime(&result)));
//    is.getline(now,30); 
//    char now[50];
    char *now = asctime(localtime(&result));


    cout << skipws;
    cout << now;
}

